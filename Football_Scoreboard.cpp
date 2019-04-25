//Unit Two Assignment
//written on dev++
//Football_Scoreboard_Felopateer_Girgis
//c++ COSC-1437-58000 
//DR. T
#include<iostream>
#include<string>
#include <stdio.h> 
#include <stdlib.h> 
#include "Input_Validation_Extended.h"
using namespace std;

class Team

{
	private:
		string name;
		string coachname;
		string homecity;
		bool homestatus;
		int score;
		int timeoutcount;
		
	public:
		void setname(string);
		string getname();
		void setcoachname(string);
		string getcoachname();
		void sethomecity(string);
		string gethomecity();
		void sethomestatus(bool);
		bool gethomestatus();
		void setscore(int);
		int getscore();
		void settimeoutcount(int);
		int gettimeoutcount();
};

void Team::setname(string n)
{
		name = n;
}
string Team::getname()
{
	return name;
}
void Team::setcoachname(string cn)
{
	coachname = cn;
}
string Team::getcoachname()
{
	return coachname;
}

void Team::sethomecity(string hc)
{
	homecity = hc;
}
string Team::gethomecity()
{
	return homecity;
}
void Team::sethomestatus(bool hs)
{
	homestatus = hs;
}

bool Team::gethomestatus()
{
	return homestatus;
}
void Team::setscore(int s)
{
	score = s;
}
int Team::getscore()
{
	return score;
}

void Team::settimeoutcount(int tc)
{
	timeoutcount = tc;
}

int Team::gettimeoutcount()
{
	return timeoutcount;	
}

class Scoreboard
{
	private:
		Team home;
		Team score;
		Team timeouts;
		int player;
		int period;
	public:
		void sethome(Team);
		Team gethome();
		void setscore(Team);
		Team getScore();
		void settimeout(Team);
		Team gettimeout();
		void setplayer(int);
		Team getplayer();
		void setperiod(int);
		Team getperiod();
		
		
};


void populateTeam1 (Team &T1) //Def.
{
int ita;
int tfa;
int toca;
	
T1.setname("Mustangs");
T1.setcoachname("Samuel");
T1.sethomecity("Grapevine");
T1.sethomestatus(true);
cout << "Please enter a secore for The " << T1.getname() << " : ";
ita = validateInt(ita);
T1.setscore(ita) ;

cout << "Please enter a Time out count for The " << T1.getname() << " : ";
toca = validateInt(toca);
T1.settimeoutcount(toca);
}

void populateTeam2 (Team &T2)
{
	int itb;
	int tocb;

	T2.setname("Pirates");
	T2.setcoachname("Mac");
	T2.sethomecity("Staten Island");
	T2.sethomestatus(false);
	cout << "Please enter a secore for The " << T2.getname() << " : ";
	itb = validateInt(itb);
	T2.setscore(itb);
	cout << "Please enter a Time out count for The " << T2.getname() << " : ";
	tocb = validateInt(tocb);
	T2.settimeoutcount(tocb);	
}

void printTeam1(Team &T1)
{
	cout << "Team Name: " << T1.getname() << endl;
	cout << "Coach Name: " << T1.getcoachname() << endl;
	cout << "Home City: " << T1.gethomecity() << endl;
	if (T1.gethomestatus() == 0)
	{
		cout << "Status: Away Team" << endl;
	}
	else 
	{
		cout << "Home Team" << endl;
	}
	cout << "Score: " << T1.getscore() << endl ;
	cout << "Timeout Count : " << T1.gettimeoutcount()  <<" \n" << endl;
}

void printTeam2(Team &T2)
{
	cout << "Team Name: " << T2.getname() << endl;
	cout << "Coach Name: " << T2.getcoachname() << endl;
	cout << "Home City: " <<T2.gethomecity() << endl;
	if (T2.gethomestatus() == 0)
	{
		cout << "Away Team" << endl;
	}
	else 
	{
		cout << "Home Team" << endl;
	}
	cout << "Score: " << T2.getscore() << endl ;
	cout << "Timeout Count : " << T2.gettimeoutcount() << endl;
}
int main()
{
	/*
	int ita;
	int itb;
	cin >> ita;
	cin >> itb;
	*/
	string input;
	
	Team Mustangs;
	populateTeam1(Mustangs);
	printTeam1(Mustangs);
	Team Pirates;
	populateTeam2(Pirates);
	printTeam2(Pirates);
	cout << "Do you want to update the score again? " <<endl ;
	cout << "y = yes or n =  no  " ;
	
	cin >> input;
	if(input == "y")
	{
	Team Mustangs;
	populateTeam1(Mustangs);
	printTeam1(Mustangs);
	Team Pirates;
	populateTeam2(Pirates);
	printTeam2(Pirates);
	}
	else if(input == "n")
	{
		cout << "Thank you for using my program :)" ;
			return 0;
	}
	else
	{
	cout << "Invalid input, Please restart the program";
	}
}

