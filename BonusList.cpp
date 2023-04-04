#include <fstream>
#include <iostream>
#include <time.h>
#include "BonusList.h"
using namespace std;

//Bonus List Default Constructor
BonusList::BonusList()
{
   vecBonus = new vector<Bonus*>;
   bonus1Qty = 0;
   bonus2Qty = 0;
}

//Bonus List Default Destructor
BonusList::~BonusList()
{
   vecBonus->clear();
   vecBonus = nullptr;
}

//Add objects to the Bonus List
void BonusList::pushBack(Bonus* inObject)
{
   vecBonus->push_back((Bonus*)(inObject));
}

//Move objects in the Bonus List
void BonusList::moveList()
{
   for (int i = vecBonus->size() - 1; i >= 0; i--)
   {
      (*vecBonus)[i]->Move();
   }
}

//Show objects in the Bonus List
void BonusList::showList(Graphics^ g)
{
   for (int i = vecBonus->size() - 1; i >= 0; i--)
   {
      (*vecBonus)[i]->showBonus(g);
   }
}

// Check to see if the Player object has collided with any of the vecBonus objects
int BonusList::collideWithPlayer(Player* obj, int inHealth, TextBox^ inSpeedQty)
{
   healthValue = inHealth;
   // Get the values from Player obj to check for collision
   int objX = obj->getXLoc();
   int objY = obj->getYLoc();
   double objWidth = obj->getImageWidth();
   double objHeight = obj->getImageHeight();

   // Check each object in the vector of bonus objects
   for (int i = vecBonus->size() - 1; i >= 0; i--)
   {
      int bonusX = (*vecBonus)[i]->getX();
      int bonusY = (*vecBonus)[i]->getY();
      int bonusWidth = (*vecBonus)[i]->getWidth();
      int bonusHeight = (*vecBonus)[i]->getHeight();
      int bonusType = (*vecBonus)[i]->getType();

      // Update the count if the Player object has collided with bonus objects, then delete the bonus object
      if ((bonusX + bonusWidth) >= objX && (objX + objWidth) >= bonusX && (bonusY + bonusHeight) >= objY 
         && (objY + objHeight) >= bonusY)
      {
         if (bonusType != PREDATOR_TYPE)
         {
            (*vecBonus)[i]->setCollectedVerdict(true);
            if (bonusType == 1)
            {
               bonus1Qty = bonus1Qty + 1;
               inSpeedQty->Text = bonus1Qty.ToString();
            }
            else
               bonus2Qty++;
         }
         // Decrease health if the collsion is with a predator
         else
         {
            if (healthValue - PREDATOR_DAMAGE > 0)
               healthValue -= PREDATOR_DAMAGE;
            else
               healthValue = 0;
         }
      }
   }

   // Deletes the objects from the vector that have been collected. 
   for (int i = vecBonus->size() - 1; i >= 0; i--)
   {
      // If the trash or powerup has collided with the turtle then verdict = true 
      if ((*vecBonus)[i]->getCollectedVerdict() == true)
      {
         // Delete the object from the vector
         vecBonus->erase(vecBonus->begin() + i);
      }
   }
   // Return the health value from the collision to the calling function
   return healthValue;
}

// Decrease the the quantity for bonus 1 and update the incoming textbox
void BonusList::bonus1QtyDecrease(TextBox^ inSpeedQty)
{
   bonus1Qty = bonus1Qty - 1;
   inSpeedQty->Text = bonus1Qty.ToString();
}