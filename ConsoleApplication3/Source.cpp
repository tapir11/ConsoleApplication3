#include <iostream>
#include <conio.h>
#include <time.h>

char map[5][13]={
{'X','X','X','X','X','X','X','X','X','X','X','X','X'},
{'X',' ',' ','X',' ',' ','X','X',' ',' ','X','X','X'},
{'X',' ',' ',' ',' ',' ','X','X',' ',' ','X','X','X'},
{'X','X','X',' ',' ',' ',' ',' ',' ',' ',' ',' ','X'},
{'X','X','X','X','X','X','X','X','X','X','X','X','X'}
	
};

const char gracz='@';
const char ene='!';
const char kasa='$';
const char koniec='e';

struct position
{
	int x;
	int y;

};

position graczpos;
position graczposold;
position kasapos;
position enepos;
position enneposold;
position koniecpos;










void main()
{
	graczpos.x=1;
	graczpos.y=1;
	enepos.x=3;
	enepos.y=3;







getch();
}