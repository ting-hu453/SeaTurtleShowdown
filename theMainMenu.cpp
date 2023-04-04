#include "theMainMenu.h"
#include <cstdlib>

using namespace System;
using namespace System::Windows::Forms;
[STAThread]
int main(cli::array<String^>^ args)
{
   Application::EnableVisualStyles();
   Application::SetCompatibleTextRenderingDefault(false);

   SeaTurtleShowdown::theMainMenu form;
   Application::Run(%form);
}