#include "Movement.h"
#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;
Movement::Movement()
{
	currentx1 = 0;
	currentx2 = 0;
	currenty1 = 0;
	currenty2 = 2;
	currentz1 = 3;
	currentz2 = 6;
	x = 1;
	y = 2;
	z = 3;
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

	int counter = 1;
	while (counter < distance || counter == distance)
	{
	
		if (currentx1 ==8)
			currentx1 = 0;
		if (currentx2 == 7)
			currentx2 = 0;
		if (currenty1 == 8)
			currenty1 = 0;
		if (currentz2 ==7)
			currentz2 = 0;
			
			if ((counter % 2) == 0 )
			{
				array2[currentx1][currentx2] = x;
				array2[currenty1][currenty2] = y;
				array2[currentz1][currentz2] = z;

				cout << "X position in array two is ["<<currentx1<<"]["<<currentx2<<"] at time " << counter<<"\n";
				cout << "Y position in array two is ["<<currenty1<<"]["<<currenty2<<"] at time " << counter<<"\n";
				cout << "Z position in array two is ["<<currentz1<<"]["<<currentz2<<"] at time " << counter<<"\n";
				
			
			memset(array1, 0, sizeof(array1));
				for(int i=0; i<8; i++)    //This loops on the rows.
				{
					for(int j=0; j<7; j++) //This loops on the columns
					{
						cout << array2[i][j]  << "  ";
					}
					cout << endl;
				}
			}
			else
			{
				array1[currentx1][currentx2] = x;
				array1[currenty1][currenty2] = y;
				array1[currentz1][currentz2]= z;
				
				cout << "X position in array one is ["<<currentx1<<"]["<<currentx2<<"] at time " << counter<<"\n";
				cout << "Y position in array one is ["<<currenty1<<"]["<<currenty2<<"] at time " << counter<<"\n";
				cout << "Z position in array one is ["<<currentz1<<"]["<<currentz2<<"] at time " << counter<<"\n";
				memset(array2, 0, sizeof(array1));
				for(int i=0; i<8; i++)    //This loops on the rows.
				{
					for(int j=0; j<7; j++) //This loops on the columns
					{
						cout << array1[i][j]  << "  ";
					}
					cout << endl;
				}
			}
		currentx1 ++;
		currentx2 ++;
		currenty1 ++;
		currentz2 ++;
		counter ++;
			
	}
}


//shows the current location of X, Y, and Z in the console as well as in a text file
int Movement::showPosition() const
{
	ofstream myfile;
  myfile.open ("test.txt");
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


