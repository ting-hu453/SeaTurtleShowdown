#include "Bonus.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

// Default Destructor
Bonus::~Bonus()
{

}

// Show bonus objects unscaled
void Bonus::showBonus(Graphics^ g)
{
   g->DrawImageUnscaled(image, x, y);
}