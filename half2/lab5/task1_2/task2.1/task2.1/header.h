#pragma once
class trapezoid {
public:
	double a=-1, b = -1, h = -1, c = -1, d = -1;
	int alpha = -1, beta = -1;

	double midlane();
	double C();
	double D();
	double S();
	double S(double h, double m);
	double P();
	trapezoid();
	trapezoid(double a1, double b1, double h, int corner);
};

