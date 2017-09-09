#pragma once

#include <cmath>
#include <utility>

using namespace System;
using namespace std;

ref class BrezenkhemAlgorithm
{
protected:
	//cli::array<Tuple<float, float>^>^ points; 
	System::Collections::Generic::List<Tuple<float, float>^>^ points;

public:
	BrezenkhemAlgorithm();
	~BrezenkhemAlgorithm();
	void PushPoint(float x, float y);
	void BrezenkhemLine(float x0, float y0, float x1, float y1);
	void BrezenkhemCircle(float x0, float y0, float radius);
};

