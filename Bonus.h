#pragma once
#include <cstddef>
#include <vcclr.h>

using namespace System;
using namespace System::Drawing;
using namespace System::Windows::Forms;

//------------------------------------------------------------------------------
// Abstract Bonus Class
//------------------------------------------------------------------------------
class Bonus
{
public:
   //------------------------------------------------------------------------------
   // Parameterized Constructor
   //------------------------------------------------------------------------------
   Bonus(int startX, int startY, Panel^ drawingPanel)
   {
      x = startX;
      y = startY;
      gameScreen = drawingPanel;
      image = nullptr;
      verdict = false;
   }
   //------------------------------------------------------------------------------
   // Destructor
   //------------------------------------------------------------------------------
   virtual ~Bonus();
   //------------------------------------------------------------------------------
   // Show the bonus objects
   //------------------------------------------------------------------------------
   virtual void showBonus(Graphics^ g);
   //------------------------------------------------------------------------------
   // Get and Set functions for the Turtle Class
   //------------------------------------------------------------------------------
   virtual int getX() { return x; }
   virtual int getY() { return y; }
   virtual int getWidth() { return image->Width; }
   virtual int getHeight() { return image->Height; }
   virtual int getType() { return type; }
   virtual bool getCollectedVerdict() { return verdict; }
   virtual void setCollectedVerdict(bool inVerdict) { verdict = inVerdict; }
   //------------------------------------------------------------------------------
   // Pure virtual move function
   //------------------------------------------------------------------------------
   virtual void Move() = 0;

protected:
   //------------------------------------------------------------------------------
   // Local variables for the Bonus Class 
   //------------------------------------------------------------------------------
   int x, y, type;
   bool verdict;
   gcroot<Drawing::Bitmap^> image;
   gcroot<Panel^> gameScreen;
};
