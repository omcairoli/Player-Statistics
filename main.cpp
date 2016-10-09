// main.cpp//
// Program: Create player ratings //
#include <iostream>
#include <string>
#include <ctime>
#include <iomanip>
#include "myFunction.h"

using namespace std;

int main() 
{	
		
	Player myPlayer( " Chuck Norris", " 'The Annihilators'", 6, 200, 35); 
	myPlayer.GetProfile();
	
	cout << " Enter the number of at-bats: " << endl;
	double numberOfTimesAtBat;
	cin >> numberOfTimesAtBat;
	
	
		myPlayer.AddBattingData(numberOfTimesAtBat);
		
	
		return 0;
}
