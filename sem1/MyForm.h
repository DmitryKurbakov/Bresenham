
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
		this->lineRadioButton = (gcnew System::Windows::Forms::RadioButton());
		this->circleRadioButton = (gcnew System::Windows::Forms::RadioButton());
		this->ellipseRadioButton = (gcnew System::Windows::Forms::RadioButton());
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox))->BeginInit();
		this->objectsGroupBox->SuspendLayout();
		this->SuspendLayout();
		// 
		// pictureBox
		// 
		this->pictureBox->BackColor = System::Drawing::SystemColors::ControlLightLight;
		this->pictureBox->Location = System::Drawing::Point(12, 12);
		this->pictureBox->Name = L"pictureBox";
		this->pictureBox->Size = System::Drawing::Size(863, 328);
		this->pictureBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
		this->pictureBox->TabIndex = 0;
		this->pictureBox->TabStop = false;
		this->pictureBox->Click += gcnew System::EventHandler(this, &MyForm::pictureBox_Click);
		// 
		// clearButton
		// 
		this->clearButton->Location = System::Drawing::Point(207, 370);
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
		this->objectsGroupBox->Location = System::Drawing::Point(12, 346);
		this->objectsGroupBox->Name = L"objectsGroupBox";
		this->objectsGroupBox->Size = System::Drawing::Size(189, 54);
		this->objectsGroupBox->TabIndex = 4;
		this->objectsGroupBox->TabStop = false;
		this->objectsGroupBox->Text = L"Choose object";
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
		// circleRadioButton
		// 
		this->circleRadioButton->AutoSize = true;
		this->circleRadioButton->Location = System::Drawing::Point(61, 19);
		this->circleRadioButton->Name = L"circleRadioButton";
		this->circleRadioButton->Size = System::Drawing::Size(51, 17);
		this->circleRadioButton->TabIndex = 1;
		this->circleRadioButton->Text = L"Circle";
		this->circleRadioButton->UseVisualStyleBackColor = true;
		// 
		// ellipseRadioButton
		// 
		this->ellipseRadioButton->AutoSize = true;
		this->ellipseRadioButton->Location = System::Drawing::Point(118, 19);
		this->ellipseRadioButton->Name = L"ellipseRadioButton";
		this->ellipseRadioButton->Size = System::Drawing::Size(55, 17);
		this->ellipseRadioButton->TabIndex = 2;
		this->ellipseRadioButton->Text = L"Ellipse";
		this->ellipseRadioButton->UseVisualStyleBackColor = true;
		// 
		// MyForm
		// 
		this->ClientSize = System::Drawing::Size(884, 410);
		this->Controls->Add(this->objectsGroupBox);
		this->Controls->Add(this->clearButton);
		this->Controls->Add(this->pictureBox);
		this->Location = System::Drawing::Point(52, 42);
		this->Name = L"MyForm";
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox))->EndInit();
		this->objectsGroupBox->ResumeLayout(false);
		this->objectsGroupBox->PerformLayout();
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

