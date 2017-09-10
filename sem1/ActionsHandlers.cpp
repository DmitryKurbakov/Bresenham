#include "ActionsHandlers.h"


ActionsHandlers::ActionsHandlers(PictureBox^ pictureBox)
{
	brezDrawing = gcnew BrezenkhemDrawing(pictureBox);

	this->point0 = gcnew Point(-1, -1);
	this->point1 = gcnew Point(-1, -1);
	this->radius = -1;

	this->pictureBox = pictureBox;

	Bitmap^ bitmap = gcnew Bitmap(this->pictureBox->Width, this->pictureBox->Height);
	this->pictureBox->Image = bitmap;
}


ActionsHandlers::~ActionsHandlers()
{
}


void ActionsHandlers::PictureBoxOnClickHandler(Point point)
{
	if (point0->X == -1 && point0->Y == -1)
	{
		point0->X = point.X;
		point0->Y = point.Y;
	}

	else
	{
		point1->X = point.X;
		point1->Y = point.Y;
	}

	if (point0->X != -1 && point0->Y != -1 && point1->X != -1 && point1->Y != -1)
	{
		brezDrawing->DrawLine(point0, point1);
		point0->X = -1;
		point0->Y = -1;
		point1->X = -1;
		point1->Y = -1;
	}
}