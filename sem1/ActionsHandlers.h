#pragma once

#include "BrezenkhemDrawing.h"

using namespace System::Windows::Forms;

ref class ActionsHandlers
{

private:
	BrezenkhemDrawing^ brezDrawing;
	PictureBox^ pictureBox;
	Point^ point0;
	Point^ point1;
	int radius;
	int width, height;

public:

	ActionsHandlers(PictureBox^ pictureBox);
	~ActionsHandlers();

	void LinePictureBoxOnClickHandler(Point^ point);
	void CirclePictureBoxOnClickHandler(Point^ point);
	void EllipsePictureBoxOnClickHandler(Point^ point);

	
};


