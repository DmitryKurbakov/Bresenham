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
	delete bitmap;
}


ActionsHandlers::~ActionsHandlers()
{
}


void ActionsHandlers::PictureBoxOnClickHandler(Point point)
{
	if (point0->X != -1 && point0->Y != -1 && point1->X != -1 && point1->Y != -1)
	{
		//brezDrawing->BrezenkhemLine();
	}

}