#include "ActionsHandlers.h"


ActionsHandlers::ActionsHandlers(PictureBox^ pictureBox)
{
	brezDrawing = gcnew BrezenkhemDrawing(pictureBox);

	this->point0 = gcnew Point(-1, -1);
	this->point1 = gcnew Point(-1, -1);
	this->radius = -1;
	this->width = -1; 
	this->height = -1;

	this->pictureBox = pictureBox;

	Bitmap^ bitmap = gcnew Bitmap(this->pictureBox->Width, this->pictureBox->Height);
	this->pictureBox->Image = bitmap;
}


ActionsHandlers::~ActionsHandlers()
{
}


void ActionsHandlers::LinePictureBoxOnClickHandler(Point point)
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

void ActionsHandlers::CirclePictureBoxOnClickHandler(Point point)
{
	if (point0->X == -1 && point0->Y == -1)
	{
		point0->X = point.X;
		point0->Y = point.Y;
	}

	else
	{
		radius = sqrt((point.X - point0->X) * (point.X - point0->X) + (point.Y - point0->Y) * (point.Y - point0->Y));
	}

	if (point0->X != -1 && point0->Y != -1 && radius != -1)
	{
		brezDrawing->DrawCircle(point0, radius);

		point0->X = -1;
		point0->Y = -1;
		radius = -1;
	}
}

void ActionsHandlers::EllipsePictureBoxOnClickHandler(Point point)
{
	if (point0->X == -1 && point0->Y == -1)
	{
		point0->X = point.X;
		point0->Y = point.Y;
	}

	else
	{
		if (width == -1)
		{
			width = sqrt((point.X - point0->X) * (point.X - point0->X) + (point.Y - point0->Y) * (point.Y - point0->Y));
		}
		else
		{
			height = sqrt((point.X - point0->X) * (point.X - point0->X) + (point.Y - point0->Y) * (point.Y - point0->Y));
		}
	}

	if (point0->X != -1 && point0->Y != -1 && width != -1 && height != -1)
	{
		brezDrawing->DrawEllipse(point0, width, height);

		point0->X = -1;
		point0->Y = -1;
		width = -1;
		height = -1;
	}
}
