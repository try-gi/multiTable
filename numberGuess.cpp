#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    int randno;
    float guess;
    int trial = 0;
    srand(time(0)); 
    randno = rand() % 11; 
 
    do
    {
        cout << "Enter your guess between 0 and 10: ";
        cin >> guess;
        trial++;
		if (guess<0 || guess>10)
		cout<<"Please enter number in range 1 upto 10 \n\n";
		
		else if (guess > randno){
            cout << "The number you guessed is high! Guess smaller number. \n\n";
        }
        else if (guess < randno){
            cout << "The number you guessed is low! Guess bigger number. \n\n";
        }
        else{
            cout << "Congratulaions! You guessed the correct number after "<<trial<< " trials";
        }
    } 
        while (guess != randno);

	return 0;
}
