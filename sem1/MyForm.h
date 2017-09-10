
#include "ActionsHandlers.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

/// <summary>
/// —водка дл€ MyForm
/// </summary>
public ref class MyForm : public System::Windows::Forms::Form
{

private:
	ActionsHandlers^ actionshandlers;
public:
	MyForm(void)
	{
		InitializeComponent();
		//
		//TODO: добавьте код конструктора
		//
		actionshandlers = gcnew ActionsHandlers(pictureBox);
	}


private: System::Windows::Forms::GroupBox^  objectsGroupBox;
private: System::Windows::Forms::RadioButton^  ellipseRadioButton;
private: System::Windows::Forms::RadioButton^  circleRadioButton;
private: System::Windows::Forms::RadioButton^  lineRadioButton;
private: System::Windows::Forms::GroupBox^  layoutGroupBox;
private: System::Windows::Forms::CheckBox^  graphicsCheckBox;
private: System::Windows::Forms::CheckBox^  userCheckBox;
private: System::Windows::Forms::GroupBox^  pictureGroupBox;
private: System::Windows::Forms::Button^  clearButton;

protected:
	/// <summary>
	/// ќсвободить все используемые ресурсы.
	/// </summary>
	~MyForm()
	{
		if (components)
		{
			delete components;
		}
	}
	
private:
	System::Windows::Forms::PictureBox^  pictureBox;
	

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
		this->pictureBox = (gcnew System::Windows::Forms::PictureBox());
		this->clearButton = (gcnew System::Windows::Forms::Button());
		this->objectsGroupBox = (gcnew System::Windows::Forms::GroupBox());
		this->ellipseRadioButton = (gcnew System::Windows::Forms::RadioButton());
		this->circleRadioButton = (gcnew System::Windows::Forms::RadioButton());
		this->lineRadioButton = (gcnew System::Windows::Forms::RadioButton());
		this->layoutGroupBox = (gcnew System::Windows::Forms::GroupBox());
		this->userCheckBox = (gcnew System::Windows::Forms::CheckBox());
		this->graphicsCheckBox = (gcnew System::Windows::Forms::CheckBox());
		this->pictureGroupBox = (gcnew System::Windows::Forms::GroupBox());
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox))->BeginInit();
		this->objectsGroupBox->SuspendLayout();
		this->layoutGroupBox->SuspendLayout();
		this->pictureGroupBox->SuspendLayout();
		this->SuspendLayout();
		// 
		// pictureBox
		// 
		this->pictureBox->BackColor = System::Drawing::SystemColors::ControlLightLight;
		this->pictureBox->Location = System::Drawing::Point(6, 19);
		this->pictureBox->Name = L"pictureBox";
		this->pictureBox->Size = System::Drawing::Size(745, 361);
		this->pictureBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
		this->pictureBox->TabIndex = 0;
		this->pictureBox->TabStop = false;
		this->pictureBox->Click += gcnew System::EventHandler(this, &MyForm::pictureBox_Click);
		// 
		// clearButton
		// 
		this->clearButton->Location = System::Drawing::Point(12, 368);
		this->clearButton->Name = L"clearButton";
		this->clearButton->Size = System::Drawing::Size(76, 30);
		this->clearButton->TabIndex = 3;
		this->clearButton->Text = L"Clear";
		this->clearButton->UseVisualStyleBackColor = true;
		// 
		// objectsGroupBox
		// 
		this->objectsGroupBox->Controls->Add(this->ellipseRadioButton);
		this->objectsGroupBox->Controls->Add(this->circleRadioButton);
		this->objectsGroupBox->Controls->Add(this->lineRadioButton);
		this->objectsGroupBox->Location = System::Drawing::Point(12, 12);
		this->objectsGroupBox->Name = L"objectsGroupBox";
		this->objectsGroupBox->Size = System::Drawing::Size(97, 89);
		this->objectsGroupBox->TabIndex = 4;
		this->objectsGroupBox->TabStop = false;
		this->objectsGroupBox->Text = L"Object";
		// 
		// ellipseRadioButton
		// 
		this->ellipseRadioButton->AutoSize = true;
		this->ellipseRadioButton->Location = System::Drawing::Point(10, 65);
		this->ellipseRadioButton->Name = L"ellipseRadioButton";
		this->ellipseRadioButton->Size = System::Drawing::Size(55, 17);
		this->ellipseRadioButton->TabIndex = 2;
		this->ellipseRadioButton->Text = L"Ellipse";
		this->ellipseRadioButton->UseVisualStyleBackColor = true;
		// 
		// circleRadioButton
		// 
		this->circleRadioButton->AutoSize = true;
		this->circleRadioButton->Location = System::Drawing::Point(10, 42);
		this->circleRadioButton->Name = L"circleRadioButton";
		this->circleRadioButton->Size = System::Drawing::Size(51, 17);
		this->circleRadioButton->TabIndex = 1;
		this->circleRadioButton->Text = L"Circle";
		this->circleRadioButton->UseVisualStyleBackColor = true;
		// 
		// lineRadioButton
		// 
		this->lineRadioButton->AutoSize = true;
		this->lineRadioButton->Checked = true;
		this->lineRadioButton->Location = System::Drawing::Point(10, 19);
		this->lineRadioButton->Name = L"lineRadioButton";
		this->lineRadioButton->Size = System::Drawing::Size(45, 17);
		this->lineRadioButton->TabIndex = 0;
		this->lineRadioButton->TabStop = true;
		this->lineRadioButton->Text = L"Line";
		this->lineRadioButton->UseVisualStyleBackColor = true;
		// 
		// layoutGroupBox
		// 
		this->layoutGroupBox->Controls->Add(this->graphicsCheckBox);
		this->layoutGroupBox->Controls->Add(this->userCheckBox);
		this->layoutGroupBox->Location = System::Drawing::Point(12, 107);
		this->layoutGroupBox->Name = L"layoutGroupBox";
		this->layoutGroupBox->Size = System::Drawing::Size(97, 78);
		this->layoutGroupBox->TabIndex = 5;
		this->layoutGroupBox->TabStop = false;
		this->layoutGroupBox->Text = L"Layout";
		// 
		// userCheckBox
		// 
		this->userCheckBox->AutoSize = true;
		this->userCheckBox->Checked = true;
		this->userCheckBox->CheckState = System::Windows::Forms::CheckState::Checked;
		this->userCheckBox->Location = System::Drawing::Point(7, 20);
		this->userCheckBox->Name = L"userCheckBox";
		this->userCheckBox->Size = System::Drawing::Size(48, 17);
		this->userCheckBox->TabIndex = 0;
		this->userCheckBox->Text = L"User";
		this->userCheckBox->UseVisualStyleBackColor = true;
		// 
		// graphicsCheckBox
		// 
		this->graphicsCheckBox->AutoSize = true;
		this->graphicsCheckBox->Location = System::Drawing::Point(7, 43);
		this->graphicsCheckBox->Name = L"graphicsCheckBox";
		this->graphicsCheckBox->Size = System::Drawing::Size(68, 17);
		this->graphicsCheckBox->TabIndex = 1;
		this->graphicsCheckBox->Text = L"Graphics";
		this->graphicsCheckBox->UseVisualStyleBackColor = true;
		// 
		// pictureGroupBox
		// 
		this->pictureGroupBox->Controls->Add(this->pictureBox);
		this->pictureGroupBox->Location = System::Drawing::Point(115, 12);
		this->pictureGroupBox->Name = L"pictureGroupBox";
		this->pictureGroupBox->Size = System::Drawing::Size(757, 386);
		this->pictureGroupBox->TabIndex = 6;
		this->pictureGroupBox->TabStop = false;
		this->pictureGroupBox->Text = L"Picture";
		// 
		// MyForm
		// 
		this->ClientSize = System::Drawing::Size(884, 410);
		this->Controls->Add(this->pictureGroupBox);
		this->Controls->Add(this->layoutGroupBox);
		this->Controls->Add(this->objectsGroupBox);
		this->Controls->Add(this->clearButton);
		this->Location = System::Drawing::Point(52, 42);
		this->Name = L"MyForm";
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox))->EndInit();
		this->objectsGroupBox->ResumeLayout(false);
		this->objectsGroupBox->PerformLayout();
		this->layoutGroupBox->ResumeLayout(false);
		this->layoutGroupBox->PerformLayout();
		this->pictureGroupBox->ResumeLayout(false);
		this->ResumeLayout(false);

	}
#pragma endregion

private: System::Void pictureBox_Click(System::Object^  sender, System::EventArgs^  e) {
	Point cursor_point = pictureBox->PointToClient(System::Windows::Forms::Cursor::Position);
	
	if (lineRadioButton->Checked)
	{
		actionshandlers->LinePictureBoxOnClickHandler(cursor_point);
	}
	if (circleRadioButton->Checked)
	{
		actionshandlers->CirclePictureBoxOnClickHandler(cursor_point);
	}
	if (ellipseRadioButton->Checked)
	{
		actionshandlers->EllipsePictureBoxOnClickHandler(cursor_point);
	}
}
};

//void MyForm::OnPaint(System::Object ^sender, System::Windows::Forms::PaintEventArgs ^e)
//{
//	/*bd = gcnew BrezenkhemDrawing(this->pictureBox);
//	bd->DrawEllipse(20, 30, 20, 30);
//	delete bd;*/
//	//// Create pen.
//	//Bitmap^ bitmap = gcnew Bitmap(this->pictureBox->Width, this->pictureBox->Height);
//
//	//Graphics^ g = Graphics::FromImage(bitmap);
//	//g->DrawEllipse(Pens::Red, 20, 20, 20, 20);
//
//	//this->pictureBox->Image = bitmap;
//	//// Draw ellipse to screen.
//}

