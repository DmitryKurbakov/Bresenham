#include "BrezenkhemDrawing.h"

BrezenkhemDrawing::BrezenkhemDrawing(System::Windows::Forms::PictureBox^ pictureBox)
{
	this->pictureBox = pictureBox;
}




BrezenkhemDrawing::~BrezenkhemDrawing()
{
}


System::Windows::Forms::PictureBox ^ BrezenkhemDrawing::getPictureBox()
{
	return this->pictureBox;
}

void BrezenkhemDrawing::DrawLine(float x0, float y0, float x1, float y1)
{
	BrezenkhemLine(x0, y0, x1, y1);
	Draw();
}

void BrezenkhemDrawing::DrawCircle(float x0, float y0, float radius)
{
	BrezenkhemCircle(x0, y0, radius);
	Draw();
}


void BrezenkhemDrawing::Draw()
{
	this->bitmap = gcnew Bitmap(this->pictureBox->Width, this->pictureBox->Height);

	for (size_t i = 0; i < points->Count; i++)
	{
		bitmap->SetPixel(points[i]->Item1, points[i]->Item2, Color::Black);
	}

	pictureBox->Image = bitmap;

}