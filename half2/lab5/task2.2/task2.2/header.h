#pragma once
class triangle {
public:
	double a = -1, b = -1, h = -1, c = -1;
	int alpha = -1, beta = -1, gamma=-1;

	double midlane(double a);
	double C();
	double S(double newa, double newh);
	double S();
	double P();
	triangle();
};

