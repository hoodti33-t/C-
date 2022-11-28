//
//Timothy Hood
//
//Project 1
//
//Problem 1
//
//2-19-20
//
//a program that prompts the user to input a real number representing the
//temperature in degrees Fahrenheit that then computes the equivalent
//temperature in Celsius, and outputs the result.


#include <iostream>
#include <String>
using namespace std;


int main()
{
	int fahrenheit1;
	int celsius;
	

	bool loopAgain = true;
	while (loopAgain)
	{

		cout << " Please enter the tempature in degrees Fahrenheit: " << endl;
		cin >> fahrenheit1;
		celsius = (fahrenheit1 - 32) * 5 / 9;
		cout << fahrenheit1 << " degrees Fahrenheit is " << celsius << " degrees Celsius. " << endl;
		cout << " would you like to countinue (Y/y)" << endl;
		string answer;
		cin >> answer;
		if ((answer.compare(" Y ") == 0) || (answer.compare("n") == 0))
		{
			loopAgain = true;
		}
		else
		{
			cout << "Program has exited" << endl;

		}
	}

	system("pause");
	return 0;

}