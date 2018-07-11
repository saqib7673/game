#include <iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
int main()
{
	char game[3][3];
	int m,n;
	for( m=0;m<=2;m++)
	{
		for( n=0;n<=2;n++)
		{
			game[m][n]='.';
		}
	}
	cout<<"\n\tpress enter to start.";
	getch();
	
	cout<<"\n\nenter the first player name. ";
	char name1[15];
	cin>>name1;
	cout<<"\nenter secound player name. ";
	char name2[15];
	cin>>name2;		
		cout<<name1<<" play first and your sumbol is 'X'\n";
		cout<<name2<<" play secound and your sumbol is 'O'";
	
//----------------gameplay------------------------------------------
	
	char sumb;
	int q,move=1;
	q=move%2;
	
	start:
		
	if(move==1 || move==3 || move==5 || move==7 || move==9  )
	{
	sumb='X';	
	}
	else if(move==2 || move==4 || move==6 || move==8  )
	{
	sumb='O';
	}

	cout<<"\n\nIn which position you want to make your's "<<sumb<<"\n";
	int p[3][3];				//--------- example----------------
	int num=1;
	for( m=0;m<=2;m++)
	{
		for( n=0;n<=2;n++)
		{
			p[m][n]=num++;
		}
	}
	for( m=0;m<=2;m++)
	{
		for( n=0;n<=2;n++)
		{
			cout<<"  "<<p[m][n]<<" ";
		}
		cout<<"\n";
	}								//===================================
	rechose:	
	int place;
	cin>>place;
	if(place==1)
	{
		game[0][0] = sumb;
	}
	else if(place==2)
	{
		game[0][1]= sumb;
	}
	else if(place==3)
	{
		game[0][2]= sumb;
	}
	else if(place==4)
	{
		game[1][0]= sumb;
	}
	else if(place==5)
	{
		game[1][1]= sumb;
	}
	else if(place==6)
	{
		game[1][2]= sumb;
	}
	else if(place==7)
	{
		game[2][0]= sumb;
	}
	else if(place==8)
	{
		game[2][1]= sumb;
	}
	else if(place==9)
	{
		game[2][2]= sumb;
	}
	else
	{
		cout<<"plzz chose correct";
		goto rechose;
	}
	move ++;
	for( m=0;m<=2;m++)	//---------------print outour----------
	{
		for( n=0;n<=2;n++)
		{
			cout<<"  "<<game[m][n]<<" ";
		}
		cout<<"\n";
	}					//======================================
	
	if(game[0][0]==game[1][1] && game[1][1]==game[2][2] && game[2][2]==sumb || game[0][2]==game[1][1]==game[2][0]==sumb || game[0][0]==game[0][1]==game[0][2]==sumb || game[1][0]==game[1][1]==game[1][2]==sumb || game[2][0]==game[2][1]==game[2][2]==sumb || game[0][0]==game[0][1]==game[0][2]==sumb || game[1][0]==game[1][1]==game[1][2]==sumb || game[2][0]==game[2][1]==game[2][2]==sumb)
	{
	cout<<sumb<<" YOU ARE WIN.";
	goto finish;	
	}
	else if(move>=9)
	{
		cout<<"the game is drow.";		
	}
	
	goto start;
	finish:
		cout<<"\n\nfor play again press 1 or for exit press 2.";
		int fin;
		cin>>fin;
		if(fin==1)
		{
	for( m=0;m<=2;m++)
	{
		for( n=0;n<=2;n++)
		{
			game[m][n]='.';
		}
	}
			move =1;
			goto start;
		}
		else if(fin==2)
		{
		
		cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\tthaks for play.";
		}
	return 0;
}
