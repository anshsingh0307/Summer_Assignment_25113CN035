// Write a program to Create quiz application. 

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int answer;
    int score = 0;

    cout << "********* Welcome to the Quiz ********* \n";

    cout << "1. What is the capital of India?\n";
    cout << "1. Mumbai\n2. Delhi\n3. Kolkata\n4. Chennai\n";
    cout << "Enter your answer: ";
    cin >> answer;
    if (answer == 2)
        score++;

    cout << "2. How many days are there in a week?\n";
    cout << "1. 5\n2. 6\n3. 7\n4. 8\n";
    cout << "Enter your answer: ";
    cin >> answer;
    if (answer == 3)
        score++;

    cout << "3. Which language is mainly used for C++ programming?\n";
    cout << "1. HTML\n2. C++\n3. CSS\n4. SQL\n";
    cout << "Enter your answer: ";
    cin >> answer;
    if (answer == 2)
        score++;

    cout << "4. What is 10 + 15?\n";
    cout << "1. 20\n2. 25\n3. 30\n4. 15\n";
    cout << "Enter your answer: ";
    cin >> answer;
    if (answer == 2)
        score++;

    cout << "5. Which planet is known as the Red Planet?\n";
    cout << "1. Earth\n2. Venus\n3. Mars\n4. Jupiter\n";
    cout << "Enter your answer: ";
    cin >> answer;
    if (answer == 3)
        score++;

    cout << "************* Quiz Finished **********\n";
    cout << "Your Score: " << score << " out of 5\n";

    if (score == 5)
        cout << "Excellent!" << endl;
    else if (score >= 3)
        cout << "Good Job!" << endl;
    else
        cout << "Keep Practicing!" << endl;

    return 0;
}