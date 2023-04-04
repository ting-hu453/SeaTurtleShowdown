#pragma once
#define CRTDBG_MAP_ALLOC
#include <stdlib.h>
#include <crtdbg.h>

namespace SeaTurtleShowdown 
{
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for TurtleSettings
	/// </summary>
	public ref class TurtleSettings : public System::Windows::Forms::Form
	{
	public:
      //-----------------------------------------------------------------------
      // Default Constructor
      //-----------------------------------------------------------------------
		TurtleSettings(void)
		{
			InitializeComponent();

         //Set size to an initial value
         size = 1;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
      //-----------------------------------------------------------------------
      // Default Destructor
      //-----------------------------------------------------------------------
		~TurtleSettings()
		{
			if (components)
			{
				delete components;
			}
		}
   //------------------------------------------------------------------------------------------------------------------
   // Declaring local public variables
   //------------------------------------------------------------------------------------------------------------------
   public: double size;
   public: int selection;

   //------------------------------------------------------------------------------------------------------------------
   // Public functions to access local variables from outside of form
   //------------------------------------------------------------------------------------------------------------------
   public: double getSize() { return size; }
   public: int getSelection() { return selection; }

   private: System::Windows::Forms::Label^  label1;
   private: System::Windows::Forms::RadioButton^  greenTurtleButton;
   private: System::Windows::Forms::RadioButton^  purpleTurtleButton;
   private: System::Windows::Forms::TrackBar^  turtleSizeSelect;
   protected:
   protected:
   protected:
   public:
   public:
   protected:
   protected:
   private: System::Windows::Forms::Label^  settingsLabel;
   private: System::Windows::Forms::Button^  settingsOkButton;
   protected:
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
         System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(TurtleSettings::typeid));
         this->settingsLabel = (gcnew System::Windows::Forms::Label());
         this->settingsOkButton = (gcnew System::Windows::Forms::Button());
         this->label1 = (gcnew System::Windows::Forms::Label());
         this->greenTurtleButton = (gcnew System::Windows::Forms::RadioButton());
         this->purpleTurtleButton = (gcnew System::Windows::Forms::RadioButton());
         this->turtleSizeSelect = (gcnew System::Windows::Forms::TrackBar());
         (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->turtleSizeSelect))->BeginInit();
         this->SuspendLayout();
         // 
         // settingsLabel
         // 
         this->settingsLabel->AutoSize = true;
         this->settingsLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
         this->settingsLabel->Location = System::Drawing::Point(261, 33);
         this->settingsLabel->Name = L"settingsLabel";
         this->settingsLabel->Size = System::Drawing::Size(117, 25);
         this->settingsLabel->TabIndex = 1;
         this->settingsLabel->Text = L"Turtle Size";
         // 
         // settingsOkButton
         // 
         this->settingsOkButton->BackColor = System::Drawing::SystemColors::Control;
         this->settingsOkButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
         this->settingsOkButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular,
            System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
         this->settingsOkButton->Location = System::Drawing::Point(181, 176);
         this->settingsOkButton->Name = L"settingsOkButton";
         this->settingsOkButton->Size = System::Drawing::Size(71, 41);
         this->settingsOkButton->TabIndex = 2;
         this->settingsOkButton->Text = L"OK";
         this->settingsOkButton->UseVisualStyleBackColor = false;
         this->settingsOkButton->Click += gcnew System::EventHandler(this, &TurtleSettings::settingsOkButton_Click);
         // 
         // label1
         // 
         this->label1->AutoSize = true;
         this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
         this->label1->Location = System::Drawing::Point(31, 33);
         this->label1->Name = L"label1";
         this->label1->Size = System::Drawing::Size(126, 25);
         this->label1->TabIndex = 5;
         this->label1->Text = L"Turtle Color";
         // 
         // greenTurtleButton
         // 
         this->greenTurtleButton->Appearance = System::Windows::Forms::Appearance::Button;
         this->greenTurtleButton->AutoSize = true;
         this->greenTurtleButton->BackColor = System::Drawing::Color::Teal;
         this->greenTurtleButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
         this->greenTurtleButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
         this->greenTurtleButton->Location = System::Drawing::Point(30, 73);
         this->greenTurtleButton->Name = L"greenTurtleButton";
         this->greenTurtleButton->Size = System::Drawing::Size(125, 30);
         this->greenTurtleButton->TabIndex = 7;
         this->greenTurtleButton->TabStop = true;
         this->greenTurtleButton->Text = L"Green Turtle";
         this->greenTurtleButton->UseVisualStyleBackColor = false;
         this->greenTurtleButton->CheckedChanged += gcnew System::EventHandler(this, &TurtleSettings::greenTurtleButton_CheckedChanged);
         // 
         // purpleTurtleButton
         // 
         this->purpleTurtleButton->Appearance = System::Windows::Forms::Appearance::Button;
         this->purpleTurtleButton->AutoSize = true;
         this->purpleTurtleButton->BackColor = System::Drawing::Color::Orchid;
         this->purpleTurtleButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
         this->purpleTurtleButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
         this->purpleTurtleButton->Location = System::Drawing::Point(29, 115);
         this->purpleTurtleButton->Name = L"purpleTurtleButton";
         this->purpleTurtleButton->Size = System::Drawing::Size(128, 30);
         this->purpleTurtleButton->TabIndex = 7;
         this->purpleTurtleButton->TabStop = true;
         this->purpleTurtleButton->Text = L"Purple Turtle";
         this->purpleTurtleButton->UseVisualStyleBackColor = false;
         this->purpleTurtleButton->CheckedChanged += gcnew System::EventHandler(this, &TurtleSettings::purpleTurtleButton_CheckedChanged);
         // 
         // turtleSizeSelect
         // 
         this->turtleSizeSelect->BackColor = System::Drawing::SystemColors::Control;
         this->turtleSizeSelect->Location = System::Drawing::Point(266, 82);
         this->turtleSizeSelect->Minimum = 1;
         this->turtleSizeSelect->Name = L"turtleSizeSelect";
         this->turtleSizeSelect->Size = System::Drawing::Size(112, 56);
         this->turtleSizeSelect->TabIndex = 8;
         this->turtleSizeSelect->TickStyle = System::Windows::Forms::TickStyle::Both;
         this->turtleSizeSelect->Value = 1;
         // 
         // TurtleSettings
         // 
         this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
         this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
         this->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
         this->ClientSize = System::Drawing::Size(422, 260);
         this->Controls->Add(this->turtleSizeSelect);
         this->Controls->Add(this->purpleTurtleButton);
         this->Controls->Add(this->greenTurtleButton);
         this->Controls->Add(this->label1);
         this->Controls->Add(this->settingsOkButton);
         this->Controls->Add(this->settingsLabel);
         this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
         this->MaximizeBox = false;
         this->MinimizeBox = false;
         this->Name = L"TurtleSettings";
         this->Text = L"Turtle Settings";
         this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &TurtleSettings::TurtleSettings_FormClosed);
         (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->turtleSizeSelect))->EndInit();
         this->ResumeLayout(false);
         this->PerformLayout();

      }
#pragma endregion
   //------------------------------------------------------------------------------------------------------------------
   // Ok button Event Handler
   //------------------------------------------------------------------------------------------------------------------
   private: System::Void settingsOkButton_Click(System::Object^  sender, System::EventArgs^  e) 
   {
      //Update size from the calling form
      int sizeInput = Convert::ToInt32(turtleSizeSelect->Value);
      double offset = 0.1;
      size = (offset * sizeInput) + 1;

      //Close the TurtleSettings form
      Close();
   }
   //------------------------------------------------------------------------------------------------------------------
   // Green Turtle Button Event Handler
   //------------------------------------------------------------------------------------------------------------------
   private: System::Void greenTurtleButton_CheckedChanged(System::Object^  sender, System::EventArgs^  e) 
   {
      selection = 0;
   }
   //------------------------------------------------------------------------------------------------------------------
   // Purple Button Event Handler
   //------------------------------------------------------------------------------------------------------------------
   private: System::Void purpleTurtleButton_CheckedChanged(System::Object^  sender, System::EventArgs^  e) 
   {
      selection = 1;
   }
   //------------------------------------------------------------------------------------------------------------------
   // Form Closed Event Handler
   //------------------------------------------------------------------------------------------------------------------
   private: System::Void TurtleSettings_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e) 
   {
      //Close the TurtleSettings form
      if (sender != nullptr)
      {
         delete sender;
         _CrtDumpMemoryLeaks();
         this->Close();
      }
   }
};
}
