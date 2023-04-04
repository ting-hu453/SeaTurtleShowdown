#pragma once

namespace SeaTurtleShowdown {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for HelpForm
	/// </summary>
	public ref class HelpForm : public System::Windows::Forms::Form
	{
	public:
		HelpForm(void)
		{
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~HelpForm()
		{
			if (components)
			{
				delete components;
			}
		}
   private: System::Windows::Forms::RichTextBox^  richTextBox1;
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
         System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(HelpForm::typeid));
         this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
         this->SuspendLayout();
         // 
         // richTextBox1
         // 
         this->richTextBox1->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
         this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.15F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
         this->richTextBox1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
         this->richTextBox1->Location = System::Drawing::Point(12, 6);
         this->richTextBox1->Name = L"richTextBox1";
         this->richTextBox1->ReadOnly = true;
         this->richTextBox1->Size = System::Drawing::Size(453, 347);
         this->richTextBox1->TabIndex = 0;
         this->richTextBox1->Text = resources->GetString(L"richTextBox1.Text");
         // 
         // HelpForm
         // 
         this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
         this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
         this->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
         this->ClientSize = System::Drawing::Size(477, 365);
         this->Controls->Add(this->richTextBox1);
         this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
         this->MaximizeBox = false;
         this->MaximumSize = System::Drawing::Size(495, 412);
         this->MinimizeBox = false;
         this->MinimumSize = System::Drawing::Size(495, 412);
         this->Name = L"HelpForm";
         this->Text = L"Help Form";
         this->ResumeLayout(false);

      }
#pragma endregion
	};
}
