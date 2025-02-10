#include "Fraction.h"


namespace operationsWithFractions
{
	Fraction::Fraction(int numerator, int denominator)
	{
		numerator_ = numerator;
		denominator_ = denominator;
	};

	bool Fraction::operator==(Fraction data) {
		int firsDAta = numerator_ * data.denominator_;
		int secondData = data.numerator_ * denominator_;
		return (firsDAta) == (secondData) ? true : false;
	};

	bool Fraction::operator!=(Fraction data) {
		return !(*this == data);
	};

	bool Fraction::operator<(Fraction data) {
		int firsDAta = numerator_ * data.denominator_;
		int secondData = data.numerator_ * denominator_;

		return firsDAta < secondData ? true : false;
	};

	bool Fraction::operator>(Fraction data) {

		int firsDAta = numerator_ * data.denominator_;
		int secondData = data.numerator_ * denominator_;

		return firsDAta > secondData ? true : false;
	};

	bool Fraction::operator<=(Fraction data) {
		int firsDAta = numerator_ * data.denominator_;
		int secondData = data.numerator_ * denominator_;

		return firsDAta <= secondData ? true : false;
	};

	bool Fraction::operator>=(Fraction data) {
		int firsDAta = numerator_ * data.denominator_;
		int secondData = data.numerator_ * denominator_;

		return firsDAta >= secondData ? true : false;
	};

	void Fraction::getFraction() {
		std::cout << numerator_ << "/" << denominator_ << " ";
	};

	int Fraction::greatestCommonDivisor(Fraction data) {
		int copyDenominator_ = denominator_;
		int copyDataDenominator = data.denominator_;
		while ((copyDenominator_ != 0) && (copyDataDenominator != 0)) {
			if (copyDenominator_ > copyDataDenominator) {
				copyDenominator_ = copyDenominator_ % copyDataDenominator;
			}
			else {
				copyDataDenominator = copyDataDenominator % copyDenominator_;
			}
		}
		return (copyDenominator_ + copyDataDenominator);
	};

	int Fraction::greatestCommonDivisor(int a, int b) {
		while ((a != 0) && (b != 0)) {
			if (a > b) {
				a = a % b;
			}
			else {
				b = b % a;
			}
		}
		return (a + b);
	};


	Fraction Fraction::operator+(Fraction data) {
		int GCD = greatestCommonDivisor(data);
		int numerator = (numerator_ * data.denominator_ + data.numerator_ * denominator_) / GCD;
		int denominator = denominator_ * data.denominator_ / GCD;

		GCD = greatestCommonDivisor(numerator, denominator);
		numerator = numerator / GCD;
		denominator = denominator / GCD;

		if (denominator < 0) {
			denominator *= -1;
			numerator *= -1;
		}
		return Fraction(numerator, denominator);
	}

	std::ostream& operator<<(std::ostream& cout, const Fraction& fraction) {
		if (fraction.numerator_ != fraction.denominator_) {
			return cout << fraction.numerator_ << "/" << fraction.denominator_;
		}
		else {
			return cout << fraction.numerator_;
		}
	};

	Fraction Fraction::operator-(Fraction data) {
		int GCD = greatestCommonDivisor(data);
		int numerator = (numerator_ * data.denominator_ - data.numerator_ * denominator_) / GCD;
		int denominator = denominator_ * data.denominator_ / GCD;

		GCD = greatestCommonDivisor(numerator, denominator);
		numerator = numerator / GCD;
		denominator = denominator / GCD;

		if (denominator < 0) {
			denominator *= -1;
			numerator *= -1;
		}
		return Fraction(numerator, denominator);
	};

	Fraction Fraction::operator*(Fraction data) {
		int numerator = (numerator_ * data.numerator_);
		int denominator = denominator_ * data.denominator_;
		int GCD = greatestCommonDivisor(numerator, denominator);
		numerator = numerator / GCD;
		denominator = denominator / GCD;

		if (denominator < 0) {
			denominator *= -1;
			numerator *= -1;
		}
		return Fraction(numerator, denominator);
	};

	Fraction Fraction::operator/(Fraction data) {
		int numerator = (numerator_ * data.denominator_);
		int denominator = denominator_ * data.numerator_;
		int GCD = greatestCommonDivisor(numerator, denominator);
		numerator = numerator / GCD;
		denominator = denominator / GCD;

		if (denominator < 0) {
			denominator *= -1;
			numerator *= -1;
		}
		return Fraction(numerator, denominator);
	};

	Fraction& Fraction::operator++() {
		numerator_ += denominator_;

		if (denominator_ < 0) {
			denominator_ *= -1;
			numerator_ *= -1;
		}
		return *this;
	};

	Fraction& Fraction::operator--() {
		numerator_ -= denominator_;

		if (denominator_ < 0) {
			denominator_ *= -1;
			numerator_ *= -1;
		}
		return *this;
	}

	Fraction Fraction::operator--(int) {
		Fraction temp = *this;
		--(*this);
		return temp;
	};


} // end namespace operationsWithFractions