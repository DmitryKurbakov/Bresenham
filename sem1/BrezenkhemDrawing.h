#pragma once

#include "BrezenkhemAlgorithm.h"

using namespace System::Drawing;

ref class BrezenkhemDrawing :
	public BrezenkhemAlgorithm
{
private:
	
	void Draw();

	System::Windows::Forms::PictureBox^  pictureBox;

public:
	BrezenkhemDrawing(System::Windows::Forms::PictureBox^ pictureBox);
	~BrezenkhemDrawing();
	System::Windows::Forms::PictureBox^ getPictureBox();

	void DrawLine(int x0, int y0, int x1, int y1);
	void DrawLine(Point^ point0, Point^ point1);

	void DrawCircle(int x0, int y0, int radius);
	void DrawCircle(Point^ center, int radius);

	void DrawEllipse(int x0, int y0, int width, int height);
	void DrawEllipse(Point^ center, int width, int height);
};