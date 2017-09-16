#include "BrezenkhemDrawing.h"

BrezenkhemDrawing::BrezenkhemDrawing(System::Windows::Forms::PictureBox^ pictureBox)
{
	this->pictureBox = pictureBox;
}


BrezenkhemDrawing::~BrezenkhemDrawing()
{
	delete temp_bitmap;
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

	//Draw line using the Graphics method with red pen
	Bitmap^ bitmap = gcnew Bitmap(pictureBox->Image);
	Graphics^ graphics = Graphics::FromImage(bitmap);

	Pen^ redPen = gcnew Pen(Color::Red);
	graphics->DrawLine(redPen, point0->X, point0->Y, point1->X, point1->Y);

	delete pictureBox->Image;
	pictureBox->Image = bitmap;

	//Draw line using the Brezenkhem method with black pen
	BrezenkhemLine(point0->X, point0->Y, point1->X, point1->Y);
	Draw();

	delete bitmap;
	delete graphics;
	delete redPen;
}

void BrezenkhemDrawing::DrawCircle(int x0, int y0, int radius)
{
	BrezenkhemCircle(x0, y0, radius);
	Draw();
}

void BrezenkhemDrawing::DrawCircle(Point^ center, int radius)
{
	//Draw cirle using the Graphics method with red pen
	Bitmap^ bitmap = gcnew Bitmap(pictureBox->Image);
	Graphics^ graphics = Graphics::FromImage(bitmap);

	Pen^ redPen = gcnew Pen(Color::Red);
	graphics->DrawEllipse(redPen, center->X - radius, center->Y - radius, radius * 2, radius * 2);

	delete pictureBox->Image;
	pictureBox->Image = bitmap;

	//Draw cirle using the Brezenkhem method with black pen
	BrezenkhemCircle(center->X, center->Y, radius);
	Draw();

	delete bitmap;
	delete graphics;
	delete redPen;
}

void BrezenkhemDrawing::DrawEllipse(int x0, int y0, int width, int height)
{
	BrezenkhemEllipse(x0, y0, width, height);
	Draw();
}

void BrezenkhemDrawing::DrawEllipse(Point^ center, int width, int height)
{

	//Draw cirle using the Graphics method with red pen
	Bitmap^ bitmap = gcnew Bitmap(pictureBox->Image);
	Graphics^ graphics = Graphics::FromImage(bitmap);

	Pen^ redPen = gcnew Pen(Color::Red);
	graphics->DrawEllipse(redPen, center->X - width, center->Y - height, width * 2, height * 2);

	delete pictureBox->Image;
	pictureBox->Image = bitmap;

	//Draw cirle using the Graphics method with black pen
	BrezenkhemEllipse(center->X, center->Y, width, height);
	Draw();

	delete bitmap;
	delete graphics;
	delete redPen;
}


void BrezenkhemDrawing::Draw()
{
	temp_bitmap = gcnew Bitmap(pictureBox->Image);

	for (size_t i = 0; i < points->Count; i++)
	{
		if (points[i]->Item1 < temp_bitmap->Width && points[i]->Item1 > 0 &&
			points[i]->Item2 < temp_bitmap->Height && points[i]->Item2 > 0)
		{
			temp_bitmap->SetPixel(points[i]->Item1, points[i]->Item2, Color::Black);
		}		
	}

	delete pictureBox->Image;
	pictureBox->Image = temp_bitmap;

	points->Clear();

	
}

