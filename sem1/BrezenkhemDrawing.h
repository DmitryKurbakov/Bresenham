#pragma once

#include "BrezenkhemAlgorithm.h"

using namespace System::Drawing;

ref class BrezenkhemDrawing :
	public BrezenkhemAlgorithm
{
private:

	void Draw();

	System::Windows::Forms::PictureBox^  pictureBox;
	Bitmap^ bitmap;

public:
	BrezenkhemDrawing(System::Windows::Forms::PictureBox^ pictureBox);
	~BrezenkhemDrawing();
	System::Windows::Forms::PictureBox^ getPictureBox();
	void DrawLine(float x0, float y0, float x1, float y1);
	void DrawCircle(float x0, float y0, float radius);
	
};


