//Movement.cpp
#include "Movement.h"
#include <iostream>
#include <fstream>
using namespace std;
Movement::Movement()
{
	currentx1 = 0;
	currentx2 = 0;
	currenty1 = 0;
	currenty2 = 2;
	currentz1 = 3;
	currentz2 = 6;
	x = 0;
	y = 0;
	z = 0;
}

Movement::Movement(int initial_currnetx1, int initial_currnetx2,
			int initial_currnety1, int initial_currnety2,
			int initial_currnetz1, int initial_currnetz2)
{
	
	currentx1 =initial_currnetx1;
	currentx2 = initial_currnetx2;
	currenty1 = initial_currnety1;
	currenty2 = initial_currnety2;
	currenty1 = initial_currnetz1;
	currenty2 = initial_currnetz2;
	
}

//Moves the X Y, and Z 'distance' distance 
//and displays each move 
void Movement::moveXYZ(int distance)
{

	int counter = 0;
	while (counter < distance)
	{
		currentx1 ++;
		currentx2 ++;
		currenty1 ++;
		currentz2 ++;
		if (currentx1 ==8)
			currentx1 = 0;
		if (currentx2 == 7)
			currentx2 = 0;
		if (currenty1 == 8)
			currenty1 = 0;
		if (currentz2 ==7)
			currentz2 = 0;
		x = moveArray[currentx1][currentx2];
		y = moveArray[currenty1][currenty2];
		z = moveArray[currentz1][currentz2];

		cout << "X moved to ["<<currentx1<<"]["<<currentx2<<"]\n";
		cout << "Y moved to ["<<currenty1<<"]["<<currenty2<<"]\n";
		cout << "Z moved to ["<<currentz1<<"]["<<currentz2<<"]\n";

		counter ++;
		
	}

}


//shows the current location of X, Y, and Z in the console as well as in a text file
int Movement::showPosition() const
{
	ofstream myfile;
  myfile.open ("example.txt");
  myfile << "X current location is ["<<currentx1<<"]["<<currentx2<<"]\n";
  myfile << "\nY current location is ["<<currenty1<<"]["<<currenty2<<"]\n";
  myfile << "\nZ current location is ["<<currentz1<<"]["<<currentz2<<"]\n";
  myfile.close();
	cout <<"\nX current location is ["<<currentx1<<"]["<<currentx2<<"]\n";
	cout <<"\nY current location is ["<<currenty1<<"]["<<currenty2<<"]\n";
	cout <<"\nZ current location is ["<<currentz1<<"]["<<currentz2<<"]\n";
	return currentx1;
	//return y;
	//return z;
}
Movement::~Movement()
{
}


