#pragma once

namespace WordCount {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for gui
	/// </summary>
	public ref class gui : public System::Windows::Forms::Form
	{
	public:
		gui(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~gui()
		{
			if (components)
			{
				delete components;
			}
		}
    private: System::Windows::Forms::Label^  label1;
    protected:
    private: System::Windows::Forms::RichTextBox^  richTextBox1;
    private: System::Windows::Forms::Panel^  panel1;
    private: System::Windows::Forms::Label^  vowel_count_output_lbl;
    private: System::Windows::Forms::Label^  vowel_count_lbl;
    private: System::Windows::Forms::Label^  word_count_output_lbl;
    private: System::Windows::Forms::Label^  word_count_lbl;
    private: System::Windows::Forms::Label^  letter_count_output_lbl;
    private: System::Windows::Forms::Label^  letter_count_lbl;

    private: int letter_count = 0;

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
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
            this->panel1 = (gcnew System::Windows::Forms::Panel());
            this->letter_count_lbl = (gcnew System::Windows::Forms::Label());
            this->letter_count_output_lbl = (gcnew System::Windows::Forms::Label());
            this->word_count_lbl = (gcnew System::Windows::Forms::Label());
            this->word_count_output_lbl = (gcnew System::Windows::Forms::Label());
            this->vowel_count_lbl = (gcnew System::Windows::Forms::Label());
            this->vowel_count_output_lbl = (gcnew System::Windows::Forms::Label());
            this->panel1->SuspendLayout();
            this->SuspendLayout();
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif",10.25F));
            this->label1->Location = System::Drawing::Point(12,52);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(157,17);
            this->label1->TabIndex = 1;
            this->label1->Text = L"Paste or write text here.";
            // 
            // richTextBox1
            // 
            this->richTextBox1->Location = System::Drawing::Point(15,72);
            this->richTextBox1->Name = L"richTextBox1";
            this->richTextBox1->Size = System::Drawing::Size(292,177);
            this->richTextBox1->TabIndex = 2;
            this->richTextBox1->Text = L"";
            this->richTextBox1->TextChanged += gcnew System::EventHandler(this,&gui::onTextBoxTextChanged);
            // 
            // panel1
            // 
            this->panel1->Controls->Add(this->vowel_count_output_lbl);
            this->panel1->Controls->Add(this->vowel_count_lbl);
            this->panel1->Controls->Add(this->word_count_output_lbl);
            this->panel1->Controls->Add(this->word_count_lbl);
            this->panel1->Controls->Add(this->letter_count_output_lbl);
            this->panel1->Controls->Add(this->letter_count_lbl);
            this->panel1->Location = System::Drawing::Point(314,72);
            this->panel1->Name = L"panel1";
            this->panel1->Size = System::Drawing::Size(200,177);
            this->panel1->TabIndex = 3;
            this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this,&gui::panel1_Paint);
            // 
            // letter_count_lbl
            // 
            this->letter_count_lbl->AutoSize = true;
            this->letter_count_lbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif",12.25F));
            this->letter_count_lbl->Location = System::Drawing::Point(6,21);
            this->letter_count_lbl->Name = L"letter_count_lbl";
            this->letter_count_lbl->Size = System::Drawing::Size(107,20);
            this->letter_count_lbl->TabIndex = 0;
            this->letter_count_lbl->Text = L"Letter Count:";
            // 
            // letter_count_output_lbl
            // 
            this->letter_count_output_lbl->AutoSize = true;
            this->letter_count_output_lbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif",12.25F));
            this->letter_count_output_lbl->Location = System::Drawing::Point(119,21);
            this->letter_count_output_lbl->Name = L"letter_count_output_lbl";
            this->letter_count_output_lbl->Size = System::Drawing::Size(18,20);
            this->letter_count_output_lbl->TabIndex = 1;
            this->letter_count_output_lbl->Text = L"0";
            // 
            // word_count_lbl
            // 
            this->word_count_lbl->AutoSize = true;
            this->word_count_lbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif",12.25F));
            this->word_count_lbl->Location = System::Drawing::Point(6,54);
            this->word_count_lbl->Name = L"word_count_lbl";
            this->word_count_lbl->Size = System::Drawing::Size(103,20);
            this->word_count_lbl->TabIndex = 2;
            this->word_count_lbl->Text = L"Word Count:";
            // 
            // word_count_output_lbl
            // 
            this->word_count_output_lbl->AutoSize = true;
            this->word_count_output_lbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif",12.25F));
            this->word_count_output_lbl->Location = System::Drawing::Point(119,54);
            this->word_count_output_lbl->Name = L"word_count_output_lbl";
            this->word_count_output_lbl->Size = System::Drawing::Size(18,20);
            this->word_count_output_lbl->TabIndex = 3;
            this->word_count_output_lbl->Text = L"0";
            // 
            // vowel_count_lbl
            // 
            this->vowel_count_lbl->AutoSize = true;
            this->vowel_count_lbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif",12.25F));
            this->vowel_count_lbl->Location = System::Drawing::Point(6,91);
            this->vowel_count_lbl->Name = L"vowel_count_lbl";
            this->vowel_count_lbl->Size = System::Drawing::Size(108,20);
            this->vowel_count_lbl->TabIndex = 4;
            this->vowel_count_lbl->Text = L"Vowel Count:";
            // 
            // vowel_count_output_lbl
            // 
            this->vowel_count_output_lbl->AutoSize = true;
            this->vowel_count_output_lbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif",12.25F));
            this->vowel_count_output_lbl->Location = System::Drawing::Point(119,91);
            this->vowel_count_output_lbl->Name = L"vowel_count_output_lbl";
            this->vowel_count_output_lbl->Size = System::Drawing::Size(18,20);
            this->vowel_count_output_lbl->TabIndex = 5;
            this->vowel_count_output_lbl->Text = L"0";
            // 
            // gui
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6,13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(516,261);
            this->Controls->Add(this->panel1);
            this->Controls->Add(this->richTextBox1);
            this->Controls->Add(this->label1);
            this->Name = L"gui";
            this->Text = L"gui";
            this->Load += gcnew System::EventHandler(this,&gui::gui_Load);
            this->panel1->ResumeLayout(false);
            this->panel1->PerformLayout();
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion
    private: System::Void gui_Load(System::Object^  sender,System::EventArgs^  e) {
    }
    private: System::Void panel1_Paint(System::Object^  sender,System::Windows::Forms::PaintEventArgs^  e) {
    }

private: System::String^ getLetterCount() {
    this->letter_count++;
    return this->letter_count.ToString();
}

private: System::Void onTextBoxTextChanged(System::Object^  sender,System::EventArgs^  e) {
    this->letter_count_output_lbl->Text = "";   
    this->letter_count_output_lbl->Text = getLetterCount();
}
};
}
