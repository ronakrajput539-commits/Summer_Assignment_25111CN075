//Write a program to Create quiz application.
#include <iostream>
using namespace std;

int main() {
    int score = 0;
    char answer;

    cout << "===== QUIZ APPLICATION =====\n\n";

    
    cout << "1. What is the capital of France?\n";
    cout << "a) Berlin\nb) Madrid\nc) Paris\nd) Rome\n";
    cout << "Your answer: ";
    cin >> answer;

    if (answer == 'c' || answer == 'C')
        score++;

   
    cout << "\n2. Which language is used for C++ programming?\n";
    cout << "a) HTML\nb) C++\nc) SQL\nd) CSS\n";
    cout << "Your answer: ";
    cin >> answer;

    if (answer == 'b' || answer == 'B')
        score++;

    
    cout << "\n3. How many days are there in a week?\n";
    cout << "a) 5\nb) 6\nc) 7\nd) 8\n";
    cout << "Your answer: ";
    cin >> answer;

    if (answer == 'c' || answer == 'C')
        score++;

    
    cout << "\n===== RESULT =====\n";
    cout << "Your Score: " << score << "/3\n";

    if (score == 3)
        cout << "Excellent!\n";
    else if (score == 2)
        cout << "Good Job!\n";
    else
        cout << "Keep Practicing!\n";

    return 0;
}