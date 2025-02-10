#pragma once
#include <iostream>

namespace operationsWithFractions
{
	class Fraction
	{
	private:
		int numerator_;
		int denominator_;

	public:
		Fraction(int numerator, int denominator);

		bool operator==(Fraction data);

		bool operator!=(Fraction data);

		bool operator<(Fraction data);

		bool operator>(Fraction data);

		bool operator<=(Fraction data);

		bool operator>=(Fraction data);

		void getFraction();

		int greatestCommonDivisor(Fraction data);

		int greatestCommonDivisor(int a, int b);

		Fraction operator+(Fraction data);

		friend std::ostream& operator<<(std::ostream& cout, const Fraction& fraction);

		Fraction operator-(Fraction data);

		Fraction operator*(Fraction data);

		Fraction operator/(Fraction data);

		Fraction& operator++();

		Fraction& operator--();

		Fraction operator--(int);
	};


} // end namespace operationsWithFractions


