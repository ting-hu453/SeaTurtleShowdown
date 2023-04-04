#pragma once
#include "Bonus.h"

//--------------------------------------------------------------------------
// PowerUp class derived from the abstract Bonus class
//--------------------------------------------------------------------------
class PowerUp : public Bonus
{
public:
   //-----------------------------------------------------------------------
   // Parameterized constructor - passes values to Bonus class.
   //-----------------------------------------------------------------------
   PowerUp(int startX, int startY, Panel^ drawingPanel);
   //-----------------------------------------------------------------------
   // Default destructor.
   //-----------------------------------------------------------------------
   ~PowerUp();
   //-----------------------------------------------------------------------
   // Move function overwritten from abstract Bonus class.
   // Moves powerup vertically.
   //-----------------------------------------------------------------------
   void Move();

private:
   //-----------------------------------------------------------------------
   // Private constants
   //-----------------------------------------------------------------------
   const int POWERUP_TYPE = 1;
   const int POWERUP_MOVE_RATE = 10;
};

//--------------------------------------------------------------------------
// Trash class derived from the abstract Bonus class
//--------------------------------------------------------------------------
class Trash : public Bonus
{
public:
   //-----------------------------------------------------------------------
   // Parameterized constructor - passes values to Bonus class.
   //-----------------------------------------------------------------------
   Trash(int startX, int startY, Panel^ drawingPanel);
   //-----------------------------------------------------------------------
   // Default destructor.
   //-----------------------------------------------------------------------
   ~Trash();
   //-----------------------------------------------------------------------
   // Move function overwritten from abstract Bonus class.
   // Keeps trash stationary.
   //-----------------------------------------------------------------------
   void Move();

private:
   //-----------------------------------------------------------------------
   // Private constants
   //-----------------------------------------------------------------------
   const int TRASH_TYPE = 2;
};

//--------------------------------------------------------------------------
// Predator class derived from the abstract Bonus class
//--------------------------------------------------------------------------
class Predator : public Bonus
{
public:
   //-----------------------------------------------------------------------
   // Parameterized constructor - passes values to Bonus class.
   //-----------------------------------------------------------------------
   Predator(int inX, int inY, int inDirection, Panel^ drawingPanel);
   //-----------------------------------------------------------------------
   // Default destructor.
   //-----------------------------------------------------------------------
   ~Predator();
   //-----------------------------------------------------------------------
   // Move function overwritten from abstract Bonus class.
   // Moves predator until it reaches the boundaries (edge of screen), then
   // switches direction of motion.
   //-----------------------------------------------------------------------
   void Move();

private:
   //-----------------------------------------------------------------------
   // Private constants
   //-----------------------------------------------------------------------
   const int PRED_MOVE_RATE = 20;
   const int PREDATOR_TYPE = 66;
   const int IMAGE_OFFSET_TOP = 50;
   const int IMAGE_OFFSET_BOTTOM = 15;

   //-----------------------------------------------------------------------
   // Private variables
   //-----------------------------------------------------------------------
   int direction;
};