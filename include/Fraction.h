#ifndef INCLUDE_FRACTION_H_
#define INCLUDE_FRACTION_H_

#include <cmath>
#include <iostream>
#include <numeric>
#include <string>

class Fraction {
private:
	int numerator, denominator;
	void normalize();

public:
	explicit Fraction(int num = 0, int den = 1);
	Fraction(const Fraction&);
	std::string getValue();
	int getNumerator();
	int getDenominator();
	Fraction operator+(const Fraction&);
	Fraction operator-(const Fraction&);
	Fraction operator*(const Fraction&);
	Fraction operator/(const Fraction&);
	Fraction operator=(const Fraction&);
};

#endif