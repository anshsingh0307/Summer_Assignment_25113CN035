// Write a program to Create number guessing game.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    srand(time(0));

    int number = rand() % 100 + 1;
    int guess;
    int count = 0;

    cout << "Number Guessing Game\n";
    cout << "Guess a number between 1 and 100\n";

    while (true)
    {
        cout << "Enter your guess: ";
        cin >> guess;

        count++;

        if (guess == number)
        {
            cout << "Correct! You guessed the number.\n";
            cout << "Total attempts: " << count << endl;
            break;
        }
        else if (guess < number)
        {
            cout << "Too low! Try again.\n";
        }
        else
        {
            cout << "Too high! Try again.\n";
        }
    }

    return 0;
}