#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy (int x , int y);
main()
{
system("cls");
cout<< " ########################################################################## "<<endl;
cout<< " ||.. ..........................................................  .......|| "<<endl;
cout<< " ||.. %%%%%%%%%%%%%%%%        ...     %%%%%%%%%%%%%%  |%|..        %%%%  || "<<endl;
cout<< " ||..        |%|   |%|     |%|...     |%|        |%|  |%|..         |%|  || "<<endl;     
cout<< " ||..        |%|   |%|     |%|...     |%|        |%|  |%|..         |%|  || "<<endl;
cout<< " ||..        %%%%%%%% . .  |%|...     %%%%%%%%%%%%%%               %%%%. || "<<endl;
cout<< " ||..        |%|      . .  |%|...    ............... |%| ..            . || "<<endl; 
cout<< " ||..        %%%%%%%%%. .  |%|...    %%%%%%%%%%%%    |%| ..        %%%%. || "<<endl;
cout<< " ||..              |%|.              |%|......       |%| ..         |%|. || "<<endl;
cout<< " ||..    ......... |%|.         P    |%|......|%|        ..         |%|. || "<<endl;
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
int x = 10, y= 20;
while(true)
{
	if(x == 19)
	{
	x=3;
	}
	gotoxy(x ,y);
	cout << " ";
	x++;
	if(x < 38)
	{
	gotoxy(x,y);
	cout << "P";
	}
	Sleep(100);

}
return 0;
}
void gotoxy(int x, int y)
{
COORD coordinates;
coordinates.X =x;
coordinates.Y =y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
