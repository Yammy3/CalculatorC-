#pragma once
namespace My07072023 {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: float first_number;
	private: char userAct = ' ';
	private: bool is_equal = false;
	private: System::Windows::Forms::Button^ button_exit;
	private: System::Windows::Forms::Label^ ResultLabel;
	private: System::Windows::Forms::Button^ buttonAC;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button_change;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button_percent;
	private: System::Windows::Forms::Button^ button_subtract;
	private: System::Windows::Forms::Button^ button_multiply;
	private: System::Windows::Forms::Button^ button_divide;
	private: System::Windows::Forms::Button^ button_add;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button_summarize;
	private: System::Windows::Forms::Button^ buttonpoint;
	private: System::Windows::Forms::Button^ button0;
	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;
#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button_exit = (gcnew System::Windows::Forms::Button());
			this->ResultLabel = (gcnew System::Windows::Forms::Label());
			this->buttonAC = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button_change = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button_percent = (gcnew System::Windows::Forms::Button());
			this->button_subtract = (gcnew System::Windows::Forms::Button());
			this->button_multiply = (gcnew System::Windows::Forms::Button());
			this->button_divide = (gcnew System::Windows::Forms::Button());
			this->button_add = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button_summarize = (gcnew System::Windows::Forms::Button());
			this->buttonpoint = (gcnew System::Windows::Forms::Button());
			this->button0 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button_exit
			// 
			this->button_exit->BackColor = System::Drawing::Color::Tomato;
			this->button_exit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_exit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_exit->ForeColor = System::Drawing::SystemColors::Desktop;
			this->button_exit->Location = System::Drawing::Point(12, 11);
			this->button_exit->Name = L"button_exit";
			this->button_exit->Size = System::Drawing::Size(27, 26);
			this->button_exit->TabIndex = 0;
			this->button_exit->Text = L"x";
			this->button_exit->UseVisualStyleBackColor = false;
			this->button_exit->Click += gcnew System::EventHandler(this, &MyForm::button_exit_Click);
			// 
			// ResultLabel
			// 
			this->ResultLabel->BackColor = System::Drawing::Color::Gray;
			this->ResultLabel->Font = (gcnew System::Drawing::Font(L"SimSun", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ResultLabel->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->ResultLabel->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->ResultLabel->Location = System::Drawing::Point(12, 11);
			this->ResultLabel->Name = L"ResultLabel";
			this->ResultLabel->Size = System::Drawing::Size(282, 52);
			this->ResultLabel->TabIndex = 1;
			this->ResultLabel->Text = L"0";
			this->ResultLabel->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// buttonAC
			// 
			this->buttonAC->BackColor = System::Drawing::Color::DarkOrange;
			this->buttonAC->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonAC->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonAC->ForeColor = System::Drawing::SystemColors::ControlText;
			this->buttonAC->Location = System::Drawing::Point(12, 77);
			this->buttonAC->Name = L"buttonAC";
			this->buttonAC->Size = System::Drawing::Size(66, 45);
			this->buttonAC->TabIndex = 2;
			this->buttonAC->Text = L"AC";
			this->buttonAC->UseVisualStyleBackColor = false;
			this->buttonAC->Click += gcnew System::EventHandler(this, &MyForm::buttonAC_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button7->Location = System::Drawing::Point(12, 128);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(66, 45);
			this->button7->TabIndex = 3;
			this->button7->Text = L"7";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::buttomNumber_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button4->Location = System::Drawing::Point(12, 179);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(66, 45);
			this->button4->TabIndex = 4;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::buttomNumber_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button5->Location = System::Drawing::Point(84, 179);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(66, 45);
			this->button5->TabIndex = 7;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::buttomNumber_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button8->Location = System::Drawing::Point(84, 128);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(66, 45);
			this->button8->TabIndex = 6;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::buttomNumber_Click);
			// 
			// button_change
			// 
			this->button_change->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button_change->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_change->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_change->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button_change->Location = System::Drawing::Point(84, 77);
			this->button_change->Name = L"button_change";
			this->button_change->Size = System::Drawing::Size(66, 45);
			this->button_change->TabIndex = 5;
			this->button_change->Text = L"+/-";
			this->button_change->UseVisualStyleBackColor = false;
			this->button_change->Click += gcnew System::EventHandler(this, &MyForm::button_change_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button6->Location = System::Drawing::Point(156, 179);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(66, 45);
			this->button6->TabIndex = 10;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::buttomNumber_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button9->Location = System::Drawing::Point(156, 128);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(66, 45);
			this->button9->TabIndex = 9;
			this->button9->Text = L"9";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::buttomNumber_Click);
			// 
			// button_percent
			// 
			this->button_percent->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button_percent->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_percent->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_percent->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button_percent->Location = System::Drawing::Point(156, 77);
			this->button_percent->Name = L"button_percent";
			this->button_percent->Size = System::Drawing::Size(66, 45);
			this->button_percent->TabIndex = 8;
			this->button_percent->Text = L"%";
			this->button_percent->UseVisualStyleBackColor = false;
			this->button_percent->Click += gcnew System::EventHandler(this, &MyForm::button_percent_Click);
			// 
			// button_subtract
			// 
			this->button_subtract->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button_subtract->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_subtract->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_subtract->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button_subtract->Location = System::Drawing::Point(228, 179);
			this->button_subtract->Name = L"button_subtract";
			this->button_subtract->Size = System::Drawing::Size(66, 45);
			this->button_subtract->TabIndex = 13;
			this->button_subtract->Text = L"-";
			this->button_subtract->UseVisualStyleBackColor = false;
			this->button_subtract->Click += gcnew System::EventHandler(this, &MyForm::button_subtract_Click);
			// 
			// button_multiply
			// 
			this->button_multiply->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button_multiply->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_multiply->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_multiply->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button_multiply->Location = System::Drawing::Point(228, 128);
			this->button_multiply->Name = L"button_multiply";
			this->button_multiply->Size = System::Drawing::Size(66, 45);
			this->button_multiply->TabIndex = 12;
			this->button_multiply->Text = L"*";
			this->button_multiply->UseVisualStyleBackColor = false;
			this->button_multiply->Click += gcnew System::EventHandler(this, &MyForm::button_multiply_Click);
			// 
			// button_divide
			// 
			this->button_divide->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button_divide->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_divide->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_divide->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button_divide->Location = System::Drawing::Point(228, 77);
			this->button_divide->Name = L"button_divide";
			this->button_divide->Size = System::Drawing::Size(66, 45);
			this->button_divide->TabIndex = 11;
			this->button_divide->Text = L"/";
			this->button_divide->UseVisualStyleBackColor = false;
			this->button_divide->Click += gcnew System::EventHandler(this, &MyForm::button_divide_Click);
			// 
			// button_add
			// 
			this->button_add->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button_add->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_add->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_add->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button_add->Location = System::Drawing::Point(228, 230);
			this->button_add->Name = L"button_add";
			this->button_add->Size = System::Drawing::Size(66, 45);
			this->button_add->TabIndex = 17;
			this->button_add->Text = L"+";
			this->button_add->UseVisualStyleBackColor = false;
			this->button_add->Click += gcnew System::EventHandler(this, &MyForm::button_add_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button3->Location = System::Drawing::Point(156, 230);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(66, 45);
			this->button3->TabIndex = 16;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::buttomNumber_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button2->Location = System::Drawing::Point(84, 230);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(66, 45);
			this->button2->TabIndex = 15;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::buttomNumber_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button1->Location = System::Drawing::Point(12, 230);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(66, 45);
			this->button1->TabIndex = 14;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::buttomNumber_Click);
			// 
			// button_summarize
			// 
			this->button_summarize->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button_summarize->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_summarize->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 10.8F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button_summarize->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button_summarize->Location = System::Drawing::Point(228, 281);
			this->button_summarize->Name = L"button_summarize";
			this->button_summarize->Size = System::Drawing::Size(66, 45);
			this->button_summarize->TabIndex = 21;
			this->button_summarize->Text = L"=";
			this->button_summarize->UseVisualStyleBackColor = false;
			this->button_summarize->Click += gcnew System::EventHandler(this, &MyForm::button_summarize_Click);
			// 
			// buttonpoint
			// 
			this->buttonpoint->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->buttonpoint->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonpoint->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonpoint->ForeColor = System::Drawing::SystemColors::ControlText;
			this->buttonpoint->Location = System::Drawing::Point(156, 281);
			this->buttonpoint->Name = L"buttonpoint";
			this->buttonpoint->Size = System::Drawing::Size(66, 45);
			this->buttonpoint->TabIndex = 20;
			this->buttonpoint->Text = L".";
			this->buttonpoint->UseVisualStyleBackColor = false;
			this->buttonpoint->Click += gcnew System::EventHandler(this, &MyForm::buttonpoint_Click);
			// 
			// button0
			// 
			this->button0->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button0->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button0->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button0->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button0->Location = System::Drawing::Point(12, 281);
			this->button0->Name = L"button0";
			this->button0->Size = System::Drawing::Size(138, 45);
			this->button0->TabIndex = 18;
			this->button0->Text = L"0";
			this->button0->UseVisualStyleBackColor = false;
			this->button0->Click += gcnew System::EventHandler(this, &MyForm::buttomNumber_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DimGray;
			this->ClientSize = System::Drawing::Size(306, 337);
			this->Controls->Add(this->button_summarize);
			this->Controls->Add(this->buttonpoint);
			this->Controls->Add(this->button0);
			this->Controls->Add(this->button_add);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button_subtract);
			this->Controls->Add(this->button_multiply);
			this->Controls->Add(this->button_divide);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button_percent);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button_change);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->buttonAC);
			this->Controls->Add(this->button_exit);
			this->Controls->Add(this->ResultLabel);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Program1";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button_exit_Click(System::Object^ sender, System::EventArgs^ e){
		this->Close();
	}
	private: System::Void buttomNumber_Click(System::Object^ sender, System::EventArgs^ e){
		Button^ button = safe_cast<Button^>(sender);

		if (this->ResultLabel->Text == "0" || is_equal)
		{
			this->ResultLabel->Text = button->Text;
			is_equal == false;
		}
		else
			this->ResultLabel->Text = this->ResultLabel->Text + button->Text;
	}
	private: System::Void button_add_Click(System::Object^ sender, System::EventArgs^ e) {
		mathAct('+');
	}
	private: System::Void button_subtract_Click(System::Object^ sender, System::EventArgs^ e) {
		mathAct('-');
	}
	private: System::Void button_multiply_Click(System::Object^ sender, System::EventArgs^ e){
		mathAct('*');
	}
	private: System::Void button_divide_Click(System::Object^ sender, System::EventArgs^ e) {
		mathAct('/');
	}
	private: System::Void mathAct(char act){
		this->first_number = System::Convert::ToDouble(this->ResultLabel->Text);
		this->userAct = act;
		this->ResultLabel->Text = "0";
	}
	private: System::Void button_summarize_Click(System::Object^ sender, System::EventArgs^ e) {
		if (userAct == ' ')
			return;
		this->ResultLabel->ForeColor = Color::WhiteSmoke;
		float second_number = System::Convert::ToDouble(this->ResultLabel->Text);
		float result;
		switch (this->userAct)
		{
		case '+':result = this->first_number + second_number; break;
		case '-':result = this->first_number - second_number; break;
		case '*':result = this->first_number * second_number; break;
		case '%':result = this->first_number * second_number / 100; break;
		case '/':
			if (second_number == 0)
			{
				result = 0;
				this->ResultLabel->ForeColor = Color::Yellow;
				MessageBox::Show(this, "You can't divide by 0", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			else
				result = this->first_number / second_number;
			break;
		}
		this->is_equal = true;
		this->ResultLabel->Text = System::Convert::ToString(result);
	}
private: System::Void buttonAC_Click(System::Object^ sender, System::EventArgs^ e) {
	this->ResultLabel->Text = "0";
	this->ResultLabel->ForeColor = Color::WhiteSmoke;
	this->first_number = 0;
	this->userAct = ' ';
	this->is_equal = false;
}
private: System::Void button_change_Click(System::Object^ sender, System::EventArgs^ e) {
	float x = System::Convert::ToDouble(this->ResultLabel->Text);
	x *= -1;
	this->ResultLabel->Text = System::Convert::ToString(x);
}
private: System::Void button_percent_Click(System::Object^ sender, System::EventArgs^ e) {
	mathAct('%');
}
private: System::Void buttonpoint_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ text = this->ResultLabel->Text;
	if (!text->Contains(","))
		this->ResultLabel->Text = text + ",";
}
};
}