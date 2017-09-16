#pragma once

#include <cmath>
#include <utility>

using namespace System;
using namespace std;

ref class BrezenkhemAlgorithm
{
protected:
	//cli::array<Tuple<float, float>^>^ points; 
	System::Collections::Generic::List<Tuple<int, int>^>^ points;

public:
	BrezenkhemAlgorithm();
	~BrezenkhemAlgorithm();
	void PushPoint(int x, int y);
	void PutPointsToEllipseSet(int x, int y, int x0, int y0);
	void BrezenkhemLine(int x0, int y0, int x1, int y1);
	void BrezenkhemCircle(int x0, int y0, int radius);
	void BrezenkhemEllipse(int x0, int y0, int x_radius, int y_radius);
};

