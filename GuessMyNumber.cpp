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
	int _userInput = 0;

	cout << "Ive chosen a secret number. \n Guess" << endl;

	do 
	{
		// Only accepts numeric values
		if (!(cin >> _userInput))
		{
			cout << "Try to type numeric values" << endl;
		}
		// For numeric values
		else
		{
			// Input high
			if (_userInput > _randomNumber)
			{
				cout << "Your guess is high. \nTry again." << endl;
			}
			// Input low
			if (_userInput < _randomNumber)
			{
				cout << "Your guess is low. \nTry again." << endl;
			}
		}
	} while (_userInput != _randomNumber);

	// The Number is Guessed
	cout << "CORRECT!! \nThe number Ive thought is " << _randomNumber << endl;
}
