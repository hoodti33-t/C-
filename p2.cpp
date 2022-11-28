//
//Timothy Hood
//
//Project 1
//
//Problem 2
//
//02-19-20
//
//this program  prompts the user for a positive integer. After the user enters the
//integer the program will compute the factorial of the number.

#include <iostream>
#include <String>
using namespace std;

int main()
{
	bool loopAgain = true;
	while (loopAgain)
	{


		int i, num1, factorial = 1;

		cout << " Enter a positive integer number: " << endl;
		cin >> num1;

		for (i = 1; i <= num1; ++i)
		{
			factorial *= i;
		}

		cout << num1 << " factorial is " << factorial << endl;
		cout << " Do you want to continue?(Y/y) " << endl;
		string answer;
		cin >> answer;
		if ((answer.compare("n") == 0) || (answer.compare("N") == 0))
		{
			loopAgain = false;
		}
	}

	system("pause");
	return 0;
}