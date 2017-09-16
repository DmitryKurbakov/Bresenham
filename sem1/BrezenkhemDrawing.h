
//	This class is a Drawing layer.
//	it includes methods for drawing geometric object in pictture box
//	using Algoritm layer and also draw their using the Graphics class

#pragma once

#include "BrezenkhemAlgorithm.h"

using namespace System::Drawing;

ref class BrezenkhemDrawing :
	public BrezenkhemAlgorithm
{
private:

	//Method of setting pixels on the picture using Algorithm layer
	void Draw();

	//Reference to the PictureBox from MyForm
	System::Windows::Forms::PictureBox^  pictureBox;

public:
	BrezenkhemDrawing(System::Windows::Forms::PictureBox^ pictureBox);
	~BrezenkhemDrawing();
	System::Windows::Forms::PictureBox^ getPictureBox();

	//Draw line in PictureBox using two methods: Brezenkhem algorithm and Graphics.DrawLine(...)
	void DrawLine(int x0, int y0, int x1, int y1);
	void DrawLine(Point^ point0, Point^ point1);

	//Draw line in PictureBox using two methods: Brezenkhem algorithm and Graphics.DrawEllipse(...)
	void DrawCircle(int x0, int y0, int radius);
	void DrawCircle(Point^ center, int radius);

	//Draw line in PictureBox using two methods: Brezenkhem algorithm and Graphics.DrawEllipse(...)
	void DrawEllipse(int x0, int y0, int width, int height);
	void DrawEllipse(Point^ center, int width, int height);
};