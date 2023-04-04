#include "Turtle.h"

// Parameterized Constructor
Turtle::Turtle(double inSize, int turtleSelection, int inFinish, Panel^ drawingPanel)
{
   xLoc = ORIGINAL_X_LOC;
   yLoc = ORIGINAL_Y_LOC;
   speed = ORIGINAL_SPD;
   size = inSize;
   finishLine = inFinish;
   free = false;
   if (turtleSelection == 0)
      image = gcnew Drawing::Bitmap("Turtle0.bmp");
   else
      image = gcnew Drawing::Bitmap("Turtle1.bmp");
   gameScreen = drawingPanel;
}

// Destructor
Turtle::~Turtle()
{
   delete image;
   image = nullptr;
}

// Make the turtle visible
void Turtle::showTurtle(Graphics^ g)
{
   // Make the image transparent
   image->MakeTransparent();
   
   // Scale and draw the image
   Point ulCorner = Point(xLoc, yLoc);
   Point urCorner = Point(xLoc + (image->Width * size), yLoc);
   Point llCorner = Point(xLoc, yLoc + (image->Height * size));
   cli::array<Point>^ destPara = { ulCorner, urCorner, llCorner };

   g->DrawImage(image, destPara);
}

// Move the turtle
void Turtle::moveTurtle(int nDirection)
{
   switch (nDirection)
   {        
   case 0:         // turtle left           
      if (yLoc - speed > 0)
         yLoc -= speed;
      break;
   case 1:         // turtle right                   
      if ((yLoc + speed + (image->Width * size)) < gameScreen->Height)
         yLoc += speed;
      break;
   case 2:         // turtle backward
      if (xLoc - speed > 0)
         xLoc -= speed;
      break;
   case 3:         // turtle forward
      if (xLoc + speed < finishLine)
         xLoc += speed;
      else
         free = true;
      break;
   default:
      break;
   }
}

// Increase the speed of the turtle up to the max speed
void Turtle::increaseSpeed(gcroot<Label^> inLabel)
{
   if (speed + INCR_SPD_RATE < MAX_SPEED)
      speed += INCR_SPD_RATE;
   else
      inLabel->Visible = true;
}