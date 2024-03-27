#include <iostream>
#include <ctime>
using namespace std;

bool RandNumber(int guess)
{
    int numb = rand() % 5;
    if(numb == guess)
        return true;
    return false;
}

int main()
{
    srand(time(NULL));
    int points = 100; // Point's count
    int bet;
    int guess;
    while(points > 0)
    {
        cout << "Ur points: " << points << endl;
        cout << "Type ur bet: ";
        cin >> bet;
        cout << "Guess the number: ";
        cin >> guess;
        if(RandNumber(guess))
        {
            cout << "Congrats! There ur " << bet << " points!" << endl;
            points += bet;
        }else{
            points -= bet;
            cout << "Wrong number. Ur score are " << points << " points" << endl;
        }
    }

    cout << "Sorry, ur lose :(";
}