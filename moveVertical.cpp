#include<iostream>
#include<windows.h>
using namespace std;
void printMaze();
void printMove(int x,int y);
void gotoxy(int x , int y);
 main ()
{
	system("cls");	
	int x=4, y=2;
	printMaze();
while(true)
{
        printMove(x,y);
	if (y < 19)
	{
	 y=y+1;
	}
        if(y==19)
        {
	gotoxy(x,y-1);
	cout <<" ";
	y=2;
        }
}



}
void printMaze()
{
cout <<" #########################################################################  "<<endl;
cout<< " ||.. ..........................................................  .......|| "<<endl;
cout<< " ||.. %%%%%%%%%%%%%%%%        ...     %%%%%%%%%%%%%%  |%|..        %%%%  || "<<endl;
cout<< " ||..        |%|   |%|     |%|...     |%|        |%|  |%|..         |%|  || "<<endl;     
cout<< " ||..        |%|   |%|     |%|...     |%|        |%|  |%|..         |%|  || "<<endl;
cout<< " ||..        %%%%%%%% . .  |%|...     %%%%%%%%%%%%%%               %%%%. || "<<endl;
cout<< " ||..        |%|      . .  |%|...    ............... |%| ..            . || "<<endl; 
cout<< " ||..        %%%%%%%%%. .  |%|...    %%%%%%%%%%%%    |%| ..        %%%%. || "<<endl;
cout<< " ||..              |%|.              |%|......       |%| ..         |%|. || "<<endl;
cout<< " ||..    ......... |%|.              |%|......|%|        ..         |%|. || "<<endl;
cout<< " ||..|%| |%|%%%|%|.|%|.|%|              ......|%|        ..|%|.     |%|. || "<<endl;
cout<< " ||..|%| |%|   |%|..   %%%%%%%%%%%%%%%  ......|%|         .|%|.          || "<<endl;
cout<< " ||..|%| |%|   |%|..            ...|%|     %%%%%%        . |%|.          || "<<endl;
cout<< " ||..|%|           .            ...|%|               |%| ..|%|.          || "<<endl;
cout<< " ||..|%| %%%%%%%%%%%%%%         ...|%|%%%%%%%%%%     |%| ..|%|.%%%%%%%%% || "<<endl;
cout<< " ||..............................................    |%|   ............. || "<<endl;
cout<< " ||   ...........................................             .......... || "<<endl;
cout<< " ||..|%|  |%|   |%|..    %%%%%%%%%%%%%  ......|%|    |%| ..|%|.          || "<<endl;
cout<< " ||..|%|  |%|   |%|..           ...|%|     %%%%%%    |%| ..|%|.          || "<<endl;
cout<< " ||..|%|            .     G     ...|%|               |%| ..|%|.          || "<<endl;
cout<< " ||.. ..........................................................  .......|| "<<endl;
cout<< " ########################################################################## "<<endl; 
}

void printMove(int x,int y)

{
gotoxy(x,y-1);
cout<<" ";
gotoxy(x,y);
cout<<"P";
Sleep(200);

}
void gotoxy(int x, int y)
{
COORD coordinates;
coordinates.X =x;
coordinates.Y =y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}