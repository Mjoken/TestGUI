#pragma once
#include "Logic.h"
#include <string>
namespace TestGUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ GUIWinForms
	/// </summary>
	public ref class GUIWinForms : public System::Windows::Forms::Form
	{
	public:
		GUIWinForms(void)
		{
			InitializeComponent();
			//
			Logic* logic = new Logic();
			this->logic = logic;
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~GUIWinForms()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ calculateButton;
	protected:
			Logic* logic;






	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::TextBox^ accurancyTextBox;
	private: System::Windows::Forms::Label^ lableAccurancy;



	private: System::Windows::Forms::Label^ labelMatrixSize;


	private: System::Windows::Forms::DataGridView^ dataGridMatrix;
	private: System::Windows::Forms::Label^ labelErorrsTitle;
	private: System::Windows::Forms::Label^ ErrorMessege;
	private: System::Windows::Forms::DataGridView^ dataGridOutput;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::NumericUpDown^ sizeTextBox;










	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->calculateButton = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->sizeTextBox = (gcnew System::Windows::Forms::NumericUpDown());
			this->accurancyTextBox = (gcnew System::Windows::Forms::TextBox());
			this->lableAccurancy = (gcnew System::Windows::Forms::Label());
			this->labelMatrixSize = (gcnew System::Windows::Forms::Label());
			this->dataGridMatrix = (gcnew System::Windows::Forms::DataGridView());
			this->labelErorrsTitle = (gcnew System::Windows::Forms::Label());
			this->ErrorMessege = (gcnew System::Windows::Forms::Label());
			this->dataGridOutput = (gcnew System::Windows::Forms::DataGridView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->sizeTextBox))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridMatrix))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridOutput))->BeginInit();
			this->SuspendLayout();
			// 
			// calculateButton
			// 
			this->calculateButton->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->calculateButton->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->calculateButton->Location = System::Drawing::Point(10, 88);
			this->calculateButton->Name = L"calculateButton";
			this->calculateButton->Size = System::Drawing::Size(202, 50);
			this->calculateButton->TabIndex = 0;
			this->calculateButton->Text = L"Calculate";
			this->calculateButton->UseVisualStyleBackColor = false;
			this->calculateButton->Click += gcnew System::EventHandler(this, &GUIWinForms::calculateButton_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::SystemColors::Info;
			this->groupBox1->Controls->Add(this->sizeTextBox);
			this->groupBox1->Controls->Add(this->accurancyTextBox);
			this->groupBox1->Controls->Add(this->calculateButton);
			this->groupBox1->Controls->Add(this->lableAccurancy);
			this->groupBox1->Controls->Add(this->labelMatrixSize);
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(223, 153);
			this->groupBox1->TabIndex = 3;
			this->groupBox1->TabStop = false;
			// 
			// sizeTextBox
			// 
			this->sizeTextBox->Cursor = System::Windows::Forms::Cursors::Default;
			this->sizeTextBox->Location = System::Drawing::Point(102, 22);
			this->sizeTextBox->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 600, 0, 0, 0 });
			this->sizeTextBox->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->sizeTextBox->Name = L"sizeTextBox";
			this->sizeTextBox->Size = System::Drawing::Size(110, 20);
			this->sizeTextBox->TabIndex = 11;
			this->sizeTextBox->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->sizeTextBox->ValueChanged += gcnew System::EventHandler(this, &GUIWinForms::textBox1_TextChanged);
			// 
			// accurancyTextBox
			// 
			this->accurancyTextBox->Location = System::Drawing::Point(102, 62);
			this->accurancyTextBox->Name = L"accurancyTextBox";
			this->accurancyTextBox->Size = System::Drawing::Size(110, 20);
			this->accurancyTextBox->TabIndex = 4;
			this->accurancyTextBox->TextChanged += gcnew System::EventHandler(this, &GUIWinForms::accurancyTextBox_TextChanged);
			// 
			// lableAccurancy
			// 
			this->lableAccurancy->AutoSize = true;
			this->lableAccurancy->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lableAccurancy->Location = System::Drawing::Point(6, 57);
			this->lableAccurancy->Name = L"lableAccurancy";
			this->lableAccurancy->Size = System::Drawing::Size(92, 23);
			this->lableAccurancy->TabIndex = 3;
			this->lableAccurancy->Text = L"Accurancy";
			// 
			// labelMatrixSize
			// 
			this->labelMatrixSize->AutoSize = true;
			this->labelMatrixSize->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelMatrixSize->Location = System::Drawing::Point(6, 19);
			this->labelMatrixSize->Name = L"labelMatrixSize";
			this->labelMatrixSize->Size = System::Drawing::Size(90, 23);
			this->labelMatrixSize->TabIndex = 2;
			this->labelMatrixSize->Text = L"Matrix size";
			// 
			// dataGridMatrix
			// 
			this->dataGridMatrix->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridMatrix->GridColor = System::Drawing::SystemColors::ButtonHighlight;
			this->dataGridMatrix->Location = System::Drawing::Point(245, 43);
			this->dataGridMatrix->Name = L"dataGridMatrix";
			this->dataGridMatrix->Size = System::Drawing::Size(450, 450);
			this->dataGridMatrix->TabIndex = 5;
			// 
			// labelErorrsTitle
			// 
			this->labelErorrsTitle->AutoSize = true;
			this->labelErorrsTitle->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelErorrsTitle->Location = System::Drawing::Point(12, 180);
			this->labelErorrsTitle->Name = L"labelErorrsTitle";
			this->labelErorrsTitle->Size = System::Drawing::Size(62, 23);
			this->labelErorrsTitle->TabIndex = 6;
			this->labelErorrsTitle->Text = L"Errors:";
			// 
			// ErrorMessege
			// 
			this->ErrorMessege->AutoSize = true;
			this->ErrorMessege->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ErrorMessege->Location = System::Drawing::Point(8, 229);
			this->ErrorMessege->Name = L"ErrorMessege";
			this->ErrorMessege->Size = System::Drawing::Size(55, 23);
			this->ErrorMessege->TabIndex = 7;
			this->ErrorMessege->Text = L"---------";
			// 
			// dataGridOutput
			// 
			this->dataGridOutput->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridOutput->GridColor = System::Drawing::SystemColors::ButtonHighlight;
			this->dataGridOutput->Location = System::Drawing::Point(701, 43);
			this->dataGridOutput->Name = L"dataGridOutput";
			this->dataGridOutput->Size = System::Drawing::Size(450, 450);
			this->dataGridOutput->TabIndex = 8;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(241, 17);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(121, 23);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Input massive:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(697, 17);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(134, 23);
			this->label2->TabIndex = 10;
			this->label2->Text = L"Output massive:";
			// 
			// GUIWinForms
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::WhiteSmoke;
			this->ClientSize = System::Drawing::Size(1264, 681);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridOutput);
			this->Controls->Add(this->ErrorMessege);
			this->Controls->Add(this->labelErorrsTitle);
			this->Controls->Add(this->dataGridMatrix);
			this->Controls->Add(this->groupBox1);
			this->Name = L"GUIWinForms";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Lab6CPPIxanov";
			this->Load += gcnew System::EventHandler(this, &GUIWinForms::GUIWinForms_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->sizeTextBox))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridMatrix))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridOutput))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: void TableOut(int& size, System::Windows::Forms::DataGridView^ grid) {
		try {
			grid->RowCount = size;
			grid->ColumnCount = size;
			for (int i = 0; i < size; i++)
				for (int j = 0; j < size; j++)
					grid->Rows[i]->Cells[j]->Value = logic->getElem(i, j);
		}
		catch (const char* error_message)
		{
			ErrorMessege->Text = System::Convert::ToString(error_message);
		}
	}
	private: System::Void GUIWinForms_Load(System::Object^ sender, System::EventArgs^ e) {

	}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (sizeTextBox->Value > 0) {
		auto size = System::Convert::ToInt32(sizeTextBox->Value);
		logic->setSize(size);
		logic->CreateMatrix();
		TableOut(size, dataGridMatrix);
	}
	}

private: System::Void accurancyTextBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	logic->setAccurancy(System::Convert::ToDouble(sizeTextBox->Value));
}
private: System::Void calculateButton_Click(System::Object^ sender, System::EventArgs^ e) {
	logic->ResultCalculation();
	int size = logic->getSize();
	TableOut(size, dataGridOutput);
}
};
}
