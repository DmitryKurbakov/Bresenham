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

void BrezenkhemDrawing::DrawLine(int x0, int y0, int x1, int y1)
{
	BrezenkhemLine(x0, y0, x1, y1);
	Draw();
}

void BrezenkhemDrawing::DrawLine(Point^ point0, Point^ point1)
{

	Bitmap^ bitmap = gcnew Bitmap(pictureBox->Image);
	Graphics^ graphics = Graphics::FromImage(bitmap);

	Pen^ redPen = gcnew Pen(Color::Red);
	graphics->DrawLine(redPen, point0->X, point0->Y, point1->X, point1->Y);

	pictureBox->Image = bitmap;

	BrezenkhemLine(point0->X, point0->Y, point1->X, point1->Y);
	Draw();
}

void BrezenkhemDrawing::DrawCircle(int x0, int y0, int radius)
{
	BrezenkhemCircle(x0, y0, radius);
	Draw();
}

void BrezenkhemDrawing::DrawCircle(Point^ center, int radius)
{
	Bitmap^ bitmap = gcnew Bitmap(pictureBox->Image);
	Graphics^ graphics = Graphics::FromImage(bitmap);

	Pen^ redPen = gcnew Pen(Color::Red);
	graphics->DrawEllipse(redPen, center->X - radius, center->Y - radius, radius * 2, radius * 2);
	pictureBox->Image = bitmap;

	BrezenkhemCircle(center->X, center->Y, radius);
	Draw();
}

void BrezenkhemDrawing::DrawEllipse(int x0, int y0, int width, int height)
{
	BrezenkhemEllipse(x0, y0, width, height);
	Draw();
}

void BrezenkhemDrawing::DrawEllipse(Point^ center, int width, int height)
{

	Bitmap^ bitmap = gcnew Bitmap(pictureBox->Image);
	Graphics^ graphics = Graphics::FromImage(bitmap);

	Pen^ redPen = gcnew Pen(Color::Red);
	graphics->DrawEllipse(redPen, center->X - width, center->Y - height, width * 2, height * 2);
	pictureBox->Image = bitmap;

	BrezenkhemEllipse(center->X, center->Y, width, height);
	Draw();
}


void BrezenkhemDrawing::Draw()
{
	Bitmap^ bitmap = gcnew Bitmap(pictureBox->Image);

	for (size_t i = 0; i < points->Count; i++)
	{
		if (points[i]->Item1 < bitmap->Width && points[i]->Item1 > 0 &&
			points[i]->Item2 < bitmap->Height && points[i]->Item2 > 0)
		{
			bitmap->SetPixel(points[i]->Item1, points[i]->Item2, Color::Black);
		}		
	}

	pictureBox->Image = bitmap;

}

