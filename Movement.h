#ifndef MOVEMENT_H
#define MOVEMENT_H
using namespace std;
class Movement
{
public:
	Movement();
	~Movement();
	void moveXYZ(int distance);
	int showPosition() const;
	Movement(
			int initial_currnetx1, int initial_currnetx2,
			int initial_currnety1, int initial_currnety2,
			int initial_currnetz1, int initial_currnetz2);


	int array1[8][7]= {{0}};
	int array2[8][7] = {{0}};
private:
	int currentx1 ;
	int currentx2 ;
	int currenty1 ;
	int currenty2 ;
	int currentz1 ;
	int currentz2 ;
	 int x; 
	int y;
	int z;
};

#endif // MOVEMENT_H
