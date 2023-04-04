#include "BonusObjects.h"

/***********************************************************   POWERUP   ***********************************************************************/
//Powerup parameterized constructor - passes values to bonus class
PowerUp::PowerUp(int startX, int startY, Panel ^ drawingPanel)
   :Bonus(startX, startY, drawingPanel)
{
   image = gcnew Drawing::Bitmap("Speed.bmp");
   image->MakeTransparent();
   type = POWERUP_TYPE;
}

//PowerUp default destructor
PowerUp::~PowerUp()
{
   delete image;
   image = nullptr;
}

//Move powerup vertically
void PowerUp::Move()
{
   this->y = y + POWERUP_MOVE_RATE;
}

/***********************************************************   TRASH   ***********************************************************************/
//Trash parameterized constructor - passes values to bonus class
Trash::Trash(int startX, int startY, Panel^ drawingPanel) : Bonus(startX, startY, drawingPanel)
{
   image = gcnew Drawing::Bitmap("Trash.bmp");
   image->MakeTransparent();
   type = TRASH_TYPE;
}

//Trash default destructor
Trash::~Trash()
{
   delete image;
   image = nullptr;
}

//Keep trash stationary
void Trash::Move()
{
   this->x = this->x;
   this->y = this->y;
}

/**********************************************************   PREDATOR   *********************************************************************/
//Predator parameterized constructor - passes values to bonus class
Predator::Predator(int startX, int startY, int inDirection, Panel^ drawingPanel)
   : Bonus(startX, startY, drawingPanel)
{
   direction = inDirection;
   image = gcnew Drawing::Bitmap("Crab.bmp");
   image->MakeTransparent();
   type = PREDATOR_TYPE;
}

//Predator default destructor
Predator::~Predator()
{
   delete image;
   image = nullptr;
}

//Move predator and switch direction if it touches edge of screen
void Predator::Move()
{
   y += PRED_MOVE_RATE * direction;

   //Take into account blank edge of image by considering image offset
   if ((y + image->Height + IMAGE_OFFSET_BOTTOM) > gameScreen->Height || y - (image->Height - IMAGE_OFFSET_TOP) < 0)
      direction = (direction * (-1));
}