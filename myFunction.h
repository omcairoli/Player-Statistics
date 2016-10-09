// myFunction.h //
// class declaration //

#include <iostream>
#include <string>

using namespace std;

class Player // Class Definition //
{
	public:
		Player(string name, string team, int height, int weight, int age); // constructor (ctor)
		
	private: // implements "data hiding" //
		string mTeam; //// m is a reminder that it is a class member variable ////
		string mName;
		int mHeight;
		int mWeight;
		int mAge; 
		double mbattingaverage;
		double mNumberOfHits;
		double mNumberOfTimesAtBat;
		
	public:
		void GetProfile();
		void AddBattingData(double numberOfTimesAtBat);

};