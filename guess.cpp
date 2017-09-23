#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
//#include <stdlib>
int main()
{
	srand(time(NULL));	
	int randomNumber ;
	randomNumber = rand() % 10+1;
	cout << "Guess the computer's number: ";
	int number = 0;
	cin >> number ; 
	if(number == randomNumber)
	{
		cout <<"You, guessed correctly! You win!" << endl;
	}
	else 
	{
		cout <<"You were off by " << abs (randomNumber-number) << " . Sorry, you lose." << endl;
	}
 
	return 0 ;

}
