#include <iostream>
#include <conio.h>
#include <time.h>
#include <windows.h>

srand(time(null))

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

bool stop=0;
bool win=0;

int hp=100;
int pts=0;

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


void move(int posy,int posx)
{
	char colision = map[posy][posx];
	
	if (colision==' ')
	{
		graczposold.y=graczpos.y;
		graczposold.x=graczpos.x;
		graczpos.y=posy;
		graczpos.x=posx;
		
	}
	
	if (colision=='!')
	{
		hp-=30;
		graczpos.y=1;
		graczpos.x=1;
		if(hp<=0)
		stop=1;
	}
	
	
	//if (collision=='X')
	
	if (colision=='e')
	{
		win=1
	}
	
	if (collision=='$')
	{
		kasa+=10;
		
	}
	
	
	
	
}







void main()
{
	graczpos.x=1;
	graczpos.y=1;
	enepos.x=3;
	enepos.y=3;

while (stop!=1 || win!=1)
	{
		
		
		if(_kbhit())
			{
				switch(getch())
				
				case 65: //UP
				move(graczpos.y-1,graczpos.x)
				break;
				
				
				case 66:  //DOWN
				move(graczpos.y+1,graczpos.x)
				break;
				
				
				case 67: //RIGHT
				move(graczpos.y,graczpos.x+1)
				break;
				
				
				case 68: //DOWN
				move(graczpos.y,graczpos.x-1)
				
				
			
			
			}
		
		
	}





getch();
}
