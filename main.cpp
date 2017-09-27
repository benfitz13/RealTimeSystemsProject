#include <stdio.h>
#include <iostream>
#include "Movement.h"
#include <algorithm>
#include <fstream>
using namespace std;



int main()
{
	Movement test;
	
	//show starting position for X,Y, and Z
	//test.showPosition();
	
	//Moves the X, Y and Z variables a ceratian number of places
	//The Parameter is how many places you want to move the variables
	test.moveXYZ(3);
	
	//displays the current location of X, Y, and Z
	 //test.showPosition();
	
	 
	return 0;
}
