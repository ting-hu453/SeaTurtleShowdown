#pragma once

// Overide the panel class for double-buffering
public ref class MyPanel : public System::Windows::Forms::Panel 
{
public:
   void SetStyle(System::Windows::Forms::ControlStyles flag, System::Boolean value)
   {
      System::Windows::Forms::Control::SetStyle(flag, value);
   }
};