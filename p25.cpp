//
//Timothy Hood
//
//3/4/2020
//
//Project 2
//
//Problem 5
// 
//This program simulates the random flipping of two coins.
//At the start of the program it will prompt the user for the 
//amount of times to flip the coin. It will then display each flip, 
//and afterwards it will display the precentages of heads and tails 
//for each coin.It will also then display the percentage of times that 
//

#include <iostream>
#include <string>
#include <ctime>
#include <time.h>
#include <cstdlib>
//#include <conio.h>
using namespace std;
int coinToss(void) 
{

	int randomNumber;

	randomNumber = 1 + rand() % 2;
	
	return randomNumber;
}
int flip();

int main()
{

	int numOfFlips = 0;
	int randomNumber = 0;
	string headTail = "";


	cout << " How Many times would you like to flip the Coins? " << endl;
	cin >> numOfFlips;
	
	srand((time(0)));

	for(int i =1; i <=numOfFlips; i++)
	{
		randomNumber = coinToss();
		if (randomNumber == 1)
			headTail = "head";
		else
			headTail = "tails";
		cout << headTail << endl;
	}

	int coin, counter, tails = 0, heads = 0;
	for (counter = 1; counter <= 100; counter++)
	{
		coin = flip();
		if (coin == 0)
		{
			cout << " T ";
			tails = tails + 1;
		}
			else if(coin == 1)
			{
			cout << " H ";
			heads = heads + 1;
			}

		}
		cout << endl;
		cout << " Tails was tossed " << tails << " times. " << endl;
		cout << " Heads was tossed " << heads << " times. " << endl;
		//_getch();
	}
	int flip()
	{
		return rand() % 2;
		//_getch();
	}