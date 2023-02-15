// Class Exercises  
// Kevin Cabrera

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

void GuessMyNumber();

int main()
{
	int _exercise;
	cout << "Enter the desire number option to go to the corresponding exercise" << endl;
	cout << "\n" << endl;
	cout << "1. Guess My Number" << endl;
	cin >> _exercise;

	switch (_exercise)
	{
	case 1:
		GuessMyNumber();
		break;
	}

}

void GuessMyNumber()
{
	system("CLS");
	cout << "Guess My Number!!" << endl;
	cout << "Instructions:" << endl;
	cout << "Try to guess the number Im thinking by typing your number. \nIll tell you if you are hot, cold or if you hit the spot" << endl;
	cout << "Good Luck!!" << endl;

	//Initializes random function
	srand(time(NULL));

	// Initializes the randomNumber variable with a number between 1-100 
	int _randomNumber = rand() % 100 + 1;
	// cout << _randomNumber;
	int _userInput = 0;

	cout << "Ive chosen a secret number." << endl;
	cout << "Guess:\n" << endl;

	do
	{
	beginning:

		// Only accepts numeric values
		if (!(cin >> _userInput))
		{
			cout << "Type numeric values. \nTry again." << endl;
			break;
			goto beginning;
		}

		// For numeric values
		else
		{
			// Input high
			if (_userInput > _randomNumber)
			{
				cout << "Your guess is high." << endl;
				if (abs(_userInput - _randomNumber) < 5)
				{
					cout << "You are so hot. \nTry Again." << endl;
					cout << "\n" << endl;
				}

				if (abs(_userInput - _randomNumber) > 5)
				{
					cout << "You are colder than a stone. \nTry Again." << endl;
					cout << "\n" << endl;
				}
			}
			// Input low
			if (_userInput < _randomNumber)
			{
				cout << "Your guess is low." << endl;
				if (abs(_userInput - _randomNumber) < 5)
				{
					cout << "You are so hot. \nTry Again." << endl;
					cout << "\n" << endl;
				}
				if (abs(_userInput - _randomNumber) > 5)
				{
					cout << "You are colder than a stone. \nTry Again." << endl;
					cout << "\n" << endl;
				}
			}
		}
	} while (_userInput != _randomNumber);

	// The Number is Guessed
	cout << "\nYOU HIT THE SPOT!! \nThe number Ive thought is " << _randomNumber << endl;
}
