#include <iostream>
#include "Fraction.h"


int main()
{
	std::cout << "Enter the numerator of fraction 1: " << std::endl;
	int numeratorFractionFirst{ -1 };
	std::cin >> numeratorFractionFirst;

	std::cout << "Enter the denominator of fraction 1: " << std::endl;
	int denominatorFractionFirst{ -1 };
	std::cin >> denominatorFractionFirst;

	std::cout << "Enter the numerator of fraction 2: " << std::endl;
	int numeratorFractionSecond{ -1 };
	std::cin >> numeratorFractionSecond;

	std::cout << "Enter the denominator of fraction 2: " << std::endl;
	int denominatorFractionSecond{ -1 };
	std::cin >> denominatorFractionSecond;

	operationsWithFractions::Fraction f1(numeratorFractionFirst, denominatorFractionFirst);
	operationsWithFractions::Fraction f2(numeratorFractionSecond, denominatorFractionSecond);

	std::cout << f1 << " + " << f2 << "= " << (f1 + f2) << std::endl;
	std::cout << f1 << " - " << f2 << "= " << (f1 - f2) << std::endl;
	std::cout << f1 << " * " << f2 << "= " << (f1 * f2) << std::endl;
	std::cout << f1 << " / " << f2 << "= " << (f1 / f2) << std::endl;
	std::cout << "++" << f1;
	std::cout << " * " << f2 << "= " << (++f1 * f2) << std::endl;
	std::cout << "Fraction value 1 = " << f1 << std::endl;
	std::cout << f1 << "-- ";
	std::cout << "* " << f2 << " = " << (f1-- * f2) << std::endl;
	std::cout << "Fraction value 1 = " << f1 << std::endl;

	return 0;
}
