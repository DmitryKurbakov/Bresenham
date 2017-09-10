
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
public:
	MyForm(void)
	{
		InitializeComponent();
		//
		//TODO: добавьте код конструктора
		//
	}
private: System::Windows::Forms::Button^  circleButton;
private: System::Windows::Forms::Button^  lineButton;
	
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
private: System::Windows::Forms::PictureBox^  pictureBox;
		 ActionsHandlers^ actionshandlers;
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
		this->circleButton = (gcnew System::Windows::Forms::Button());
		this->lineButton = (gcnew System::Windows::Forms::Button());
		this->clearButton = (gcnew System::Windows::Forms::Button());
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox))->BeginInit();
		this->SuspendLayout();
		// 
		// pictureBox
		// 
		this->pictureBox->Location = System::Drawing::Point(12, 12);
		this->pictureBox->Name = L"pictureBox";
		this->pictureBox->Size = System::Drawing::Size(969, 452);
		this->pictureBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
		this->pictureBox->TabIndex = 0;
		this->pictureBox->TabStop = false;
		this->pictureBox->Click += gcnew System::EventHandler(this, &MyForm::pictureBox_Click);
		//this->pictureBox->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::OnPaint);
		// 
		// circleButton
		// 
		this->circleButton->Location = System::Drawing::Point(80, 470);
		this->circleButton->Name = L"circleButton";
		this->circleButton->Size = System::Drawing::Size(75, 30);
		this->circleButton->TabIndex = 2;
		this->circleButton->Text = L"Circle";
		this->circleButton->UseVisualStyleBackColor = true;
		// 
		// lineButton
		// 
		this->lineButton->AutoSize = true;
		this->lineButton->Location = System::Drawing::Point(12, 470);
		this->lineButton->Name = L"lineButton";
		this->lineButton->Size = System::Drawing::Size(62, 30);
		this->lineButton->TabIndex = 1;
		this->lineButton->Text = L"Line";
		this->lineButton->UseVisualStyleBackColor = true;
		// 
		// clearButton
		// 
		this->clearButton->Location = System::Drawing::Point(161, 470);
		this->clearButton->Name = L"clearButton";
		this->clearButton->Size = System::Drawing::Size(76, 30);
		this->clearButton->TabIndex = 3;
		this->clearButton->Text = L"Clear";
		this->clearButton->UseVisualStyleBackColor = true;
		// 
		// MyForm
		// 
		this->ClientSize = System::Drawing::Size(993, 559);
		this->Controls->Add(this->clearButton);
		this->Controls->Add(this->lineButton);
		this->Controls->Add(this->circleButton);
		this->Controls->Add(this->pictureBox);
		this->Location = System::Drawing::Point(52, 42);
		this->Name = L"MyForm";
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox))->EndInit();
		this->ResumeLayout(false);
		this->PerformLayout();
		//
		//
		//
		actionshandlers = gcnew ActionsHandlers(pictureBox);

	}
#pragma endregion

private: System::Void pictureBox_Click(System::Object^  sender, System::EventArgs^  e) {
	
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

