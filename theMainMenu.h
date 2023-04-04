#pragma once
#include "TurtleSettings.h"
#include "GamePlay.h"

namespace SeaTurtleShowdown 
{
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for theMainMenu
	/// </summary>
	public ref class theMainMenu : public System::Windows::Forms::Form
	{
	public:
      //-----------------------------------------------------------------------
      // Default Constructor
      //-----------------------------------------------------------------------
		theMainMenu(void)
		{
			InitializeComponent();
         turtleSize = DEFAULT_TURTLE_SIZE;
         turtleSelect = DEFAULT_TURTLE_SELECT;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
      //-----------------------------------------------------------------------
      // Default Destructor
      //-----------------------------------------------------------------------
		~theMainMenu()
		{
			if (components)
			{
				delete components;
			}
		}
   //--------------------------------------------------------------------------
   //Declaring local public variables and constants
   //--------------------------------------------------------------------------
   public: 
      // Constants for default turtle settings
      const double DEFAULT_TURTLE_SIZE = 1.0;
      const int DEFAULT_TURTLE_SELECT = 0;
      // Variables for optional turtle settings
      double turtleSize;
      int turtleSelect;
      

   private: System::Windows::Forms::Button^  newGame;
   protected:
   private: System::Windows::Forms::Button^  turtleSettings;
   private: System::Windows::Forms::Label^  label1;
   private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
         System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(theMainMenu::typeid));
         this->newGame = (gcnew System::Windows::Forms::Button());
         this->turtleSettings = (gcnew System::Windows::Forms::Button());
         this->label1 = (gcnew System::Windows::Forms::Label());
         this->SuspendLayout();
         // 
         // newGame
         // 
         this->newGame->BackColor = System::Drawing::SystemColors::Control;
         this->newGame->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
         this->newGame->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
         this->newGame->Location = System::Drawing::Point(68, 97);
         this->newGame->Name = L"newGame";
         this->newGame->Size = System::Drawing::Size(121, 71);
         this->newGame->TabIndex = 0;
         this->newGame->Text = L"New Game";
         this->newGame->UseVisualStyleBackColor = false;
         this->newGame->Click += gcnew System::EventHandler(this, &theMainMenu::newGame_Click);
         // 
         // turtleSettings
         // 
         this->turtleSettings->BackColor = System::Drawing::SystemColors::Control;
         this->turtleSettings->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
         this->turtleSettings->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
         this->turtleSettings->Location = System::Drawing::Point(263, 97);
         this->turtleSettings->Name = L"turtleSettings";
         this->turtleSettings->Size = System::Drawing::Size(121, 71);
         this->turtleSettings->TabIndex = 1;
         this->turtleSettings->Text = L"Turtle Settings";
         this->turtleSettings->UseVisualStyleBackColor = false;
         this->turtleSettings->Click += gcnew System::EventHandler(this, &theMainMenu::turtleSettings_Click);
         // 
         // label1
         // 
         this->label1->AutoSize = true;
         this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
         this->label1->Location = System::Drawing::Point(33, 40);
         this->label1->Name = L"label1";
         this->label1->Size = System::Drawing::Size(351, 25);
         this->label1->TabIndex = 2;
         this->label1->Text = L"Welcome to Sea Turtle Showdown!";
         // 
         // theMainMenu
         // 
         this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
         this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
         this->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
         this->ClientSize = System::Drawing::Size(473, 240);
         this->Controls->Add(this->label1);
         this->Controls->Add(this->turtleSettings);
         this->Controls->Add(this->newGame);
         this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
         this->MaximizeBox = false;
         this->MaximumSize = System::Drawing::Size(491, 287);
         this->MinimizeBox = false;
         this->MinimumSize = System::Drawing::Size(491, 287);
         this->Name = L"theMainMenu";
         this->Text = L"Main Menu";
         this->ResumeLayout(false);
         this->PerformLayout();

      }
#pragma endregion
   //------------------------------------------------------------------------------------------------------------------
   // New Game Button Event Handler
   //------------------------------------------------------------------------------------------------------------------
   private: System::Void newGame_Click(System::Object^  sender, System::EventArgs^  e) 
   {
      //Show the gamePlay form
      GamePlay^ g = gcnew GamePlay(turtleSize, turtleSelect);
      g->ShowDialog();

      //Clean memory
      delete g;
   }
   //------------------------------------------------------------------------------------------------------------------
   // Turtle Settings Button Event Handler
   //------------------------------------------------------------------------------------------------------------------
   private: System::Void turtleSettings_Click(System::Object^  sender, System::EventArgs^  e) 
   {
      //Show the TurtleSettings form
      TurtleSettings^ t = gcnew TurtleSettings();
      t->ShowDialog();

      //Get the values for the turtle options entered by user
      turtleSize = t->getSize();
      turtleSelect = t->getSelection();

      //Clean memory
      delete t;
   }
};
}
