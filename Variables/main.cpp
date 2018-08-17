#include <iostream>
/*
Using Arithmetic Operators on Integer Variables
1. Using the same project as before, instantiate two new integer variables with distinct names
2. Instantiate a third integer variable whose value is equal to the sum of the previous two
variables
3. Print and observe the value of the third variable in the terminal
4. Repeat steps 2-3 with fractional values assigned to the first two variables
*/
int main()
{
	//start step 1. 
	int number = 0;
	int anotherNumber = 0;
	//end step 1.

	//start step 2.
	int thirdNumber = number + anotherNumber;
	//end step 2.

	//start step 3.
	std::cout << thirdNumber;
	//end step 3.

	//start step 4.
	number = 1 / 2;
	anotherNumber = 1 / 2;
	int fourthNumber = anotherNumber + thirdNumber;
	std::cout << thirdNumber;
	//end step 4.


	//Problem A.

	int numberA = 5;

	numberA = 9;
	numberA = 11;
	numberA = 14;

	std::cout << "14) " << numberA << std::endl;

	//Problem B.

	int numberB = 10;
	numberB = 9;

	int thingB = 55;
	thingB = 22;

	std::cout << "9)" << numberB << std::endl;

	//Problem C.

	int numberC = 3;
	numberC = 7;
	numberC = 1;

	int somethingC = 23;
	somethingC = 21;

	std::cout << "21) " << numberC << std::endl;

	//Problem D.

	int numberD = 1;
	int somethingD = 3;

	numberD = somethingD;
	std::cout << "3) " << somethingD << std::endl;

	//Problem E.

	int x = 13;

	x = x / 2;

	std::cout << "6)" << x << std::endl;

	//Problem F.

	float y = 13;

	y = y / 2;

	std::cout << "6.5)" << y << std::endl;



	//Celsius to Fahrenheit

	float degCelsius = 78.0f;
	float degFahenheit = (degCelsius * 1.8) + 32;

	std::cout << "Celsius to Fahrenheit)" << std::endl;
	std::cout << degCelsius * degFahenheit + 32 << std::endl;
	std::cout << "Celsius:    " << degCelsius << std::endl;
	std::cout << "Fahrenheit: " << degFahenheit << std::endl;

	//Area of a Rectangle

	float rectWidth = 5.0f;
	float rectHeight = 4.0f;
	float rectArea = 20.0f;
	
	std::cout << "Area of a Rectangle)" << std::endl;
	std::cout << "H: " << rectHeight << " , W: " << rectWidth << std::endl;
	std::cout << "Area: " << rectArea << std::endl;

	//Average of Five

	float a, b, c, d, e;
	float avg; ;
	avg = a = b = c = d = e = 0.0f;

	std::cout << "Average of Five)" << std::endl;
	std::cout << 1 << "," << 4 << "," << 5 << "," << 9 << "," << 20 << std::endl;
	std::cout << "avg: " << avg << std::endl;

	//Number Swap

	int x = 13;
	int y = 24;

	std::cout << "Number Swap)" << std::endl;
	std::cout << "x is" << 13 << std::endl;
	std::cout << "y is" << 24 << std::endl;


	system("pause");
	return 0;
}