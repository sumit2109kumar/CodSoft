#include<bits/stdc++.h>
using namespace std;

int main(){
   
    int randomNumber;
    int guess;
    int chances = 0;
    srand(time(0)); 
    randomNumber = rand() % 100 + 1; 
    cout << "\t\t\tWelcome to Guess the Number Game\n\n";

    do
    {
        cout << "Enter your guess between 1 and 100: ";
        cin >> guess;
        chances++;

        if (guess > randomNumber){
            cout << "The "<<guess<<" is Too high!\n\n";
        }
        else if (guess < randomNumber){
            cout << "The "<<guess<<" is Too low!\n\n";
        }
        else{
            cout << "You got the right guess "<<guess <<"in "<< chances << " tries!\n";
        }
    } 
        while (guess != randomNumber);

	return 0;
}
