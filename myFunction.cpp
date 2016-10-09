// myFunction.cpp//
// myFunction.cpp
#include <iostream>
#include <string>
#include <ctime>
#include <iomanip>
#include "myFunction.h"

using namespace std;

// Class's Implementation //

Player::Player(string name, string team, int height, int weight, int age) // constructor (ctor)
{
	mName = name;
	mTeam = team;
	mHeight = height;
	mWeight = weight;
	mAge = age;
	double numberOfHits = 0.0;
	mNumberOfHits = numberOfHits;
	double numberOfTimesAtBat = 0.0;
	mNumberOfTimesAtBat = numberOfTimesAtBat;

}

void Player::GetProfile()
{
	cout << endl << setw(25) << " PlAYER STATS " << endl;
	cout << endl;
	cout << "- The player's name is" << mName << "." << endl << endl;
	cout << "- The player's team name is" << mTeam << "." << endl << endl;
	cout << "- The player's age is " << mAge << " years old." << endl << endl;
	cout << "- The player's weight is " << mWeight << " lbs." << endl << endl;
	
}
void Player::AddBattingData(double numberOfTimesAtBat)
{
	double battingaverage = 0.0;
	mNumberOfTimesAtBat = numberOfTimesAtBat;

	
	for ( int i = 0; i < mNumberOfTimesAtBat; i++ )
	{
		cout << " Enter '1' for hit or '2' for miss: " << endl;
		int swing;
		cin >> swing;
		
		
		if ( swing == 1 )
		{
			cout << " Hit! " << endl;
			mNumberOfHits += swing;
		}
		
		else 
		{
			cout << "Miss! " << endl;
			
		}
		
		
	battingaverage = (mNumberOfHits/mNumberOfTimesAtBat);
	cout << " The batting average for Chuck Norris is " << battingaverage << "." << endl;
		
	}
			
	 
}