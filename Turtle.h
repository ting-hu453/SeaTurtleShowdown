#pragma once
#include <vcclr.h>

using namespace System;
using namespace System::Drawing;
using namespace System::Windows::Forms;

//------------------------------------------------------------------------------
// Turtle Class
//------------------------------------------------------------------------------
class Turtle
{
public:
   //------------------------------------------------------------------------------
   // Parameterized Constructor
   //------------------------------------------------------------------------------
   Turtle(double inSize, int turtleSelection, int inFinish, Panel^ drawingPanel);
   //------------------------------------------------------------------------------
   // Destructor
   //------------------------------------------------------------------------------
   ~Turtle();
   //------------------------------------------------------------------------------
   // Makes the turtle visible
   //------------------------------------------------------------------------------
   void showTurtle(Graphics^ g);
   //------------------------------------------------------------------------------
   // Moves the turtle
   //------------------------------------------------------------------------------
   void moveTurtle(int nDirection);
   //------------------------------------------------------------------------------
   // Increases the speed of the turtle
   //------------------------------------------------------------------------------
   void increaseSpeed(gcroot<Label^> inLabel);
   //------------------------------------------------------------------------------
   // Constants for the Turtle Class
   //------------------------------------------------------------------------------
   const int ORIGINAL_X_LOC = 0;
   const int ORIGINAL_Y_LOC = 250;
   const int ORIGINAL_SPD = 10;
   const int INCR_SPD_RATE = 5;
   const int MAX_SPEED = 40;
   //------------------------------------------------------------------------------
   // Get and Set functions for the Turtle Class
   //------------------------------------------------------------------------------
   int getXLoc() { return xLoc; }
   void setXLoc(int inXLoc) { xLoc = inXLoc; }
   int getYLoc() { return yLoc; }
   void setYLoc(int inYLoc) { yLoc = inYLoc; }
   int getSpeed() { return speed; }
   void setSpeed(int inSpeed) { speed = inSpeed; }
   double getSize() { return size; }
   void setSize(float inSize) { size = inSize; }
   bool isFree() { return free; }
   void setFree(bool inFree) { free = inFree; }
   int getImageHeight() { return (image->Height * size); }
   int getImageWidth() { return (image->Width * size); }

private:
   //------------------------------------------------------------------------------
   // Local variables for the Turtle Class 
   //------------------------------------------------------------------------------
   int xLoc;
   int yLoc;
   int speed;
   double size;
   int finishLine;
   bool free;
   gcroot<Drawing::Bitmap^> image;
   gcroot<Panel^> gameScreen;
};