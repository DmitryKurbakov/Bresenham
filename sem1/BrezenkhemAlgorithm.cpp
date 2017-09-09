#include "BrezenkhemAlgorithm.h"

BrezenkhemAlgorithm::BrezenkhemAlgorithm()
{
	points = gcnew System::Collections::Generic::List<Tuple<float, float>^>();
}


BrezenkhemAlgorithm::~BrezenkhemAlgorithm()
{
}

template <typename T> int sgn(T val)
{
	return (T(0) < val) - (val < T(0));
}

void BrezenkhemAlgorithm::BrezenkhemLine(float x0, float y0, float x1, float y1)
{
	bool flag = true;

	int i = 0, s0 = sgn(x1 - x0), s1 = sgn(y1 - y0);

	float
		x = x0, y = y0,
		delta_x = abs(x1 - x0), delta_y = abs(y1 - y0),
		e_mod = 0;

	if (delta_y > delta_x)
	{
		swap(delta_x, delta_y);
	}
	else
	{
		flag = false;
	}

	e_mod = 2 * delta_y - delta_x;

	for (int i = 0; i <= delta_x; i++)
	{
		Tuple<float, float>^ temp_tuple = gcnew Tuple<float, float>(x, y);
		points->Add(temp_tuple);

		while (e_mod >= 0)
		{
			if (flag)
			{
				x += s0;
			}
			else
			{
				y += s1;
			}

			e_mod -= 2 * delta_x;
		}

		if (flag)
		{
			y += s1;
		}
		else
		{
			x += s0;
		}

		e_mod += 2 * delta_y;
	}
}

void BrezenkhemAlgorithm::BrezenkhemCircle(float x0, float y0, float radius)
{

	float x = 0, y = radius, gap = 0, delta = (2 - 2 * radius);
	while (y >= 0)
	{
		PushPoint(x0 + x, y0 + y);
		PushPoint(x0 + x, y0 - y);
		PushPoint(x0 - x, y0 - y);
		PushPoint(x0 - x, y0 + y);

		gap = 2 * (delta + y) - 1;
		if (delta < 0 && gap <= 0)
		{
			x++;
			delta += 2 * x + 1;
			continue;
		}
		if (delta > 0 && gap > 0)
		{
			y--;
			delta -= 2 * y + 1;
			continue;
		}
		x++;
		delta += 2 * (x - y);
		y--;
	}
}

void BrezenkhemAlgorithm::PushPoint(float x, float y)
{
	Tuple<float, float>^ temp_tuple = gcnew Tuple<float, float>(x, y);
	points->Add(temp_tuple);
}