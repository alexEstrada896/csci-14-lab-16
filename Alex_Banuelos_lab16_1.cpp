/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
// void morningRoutine: displays routine for morning
void morningRoutine()
{
	cout <<"Morning routine: "<<endl;
	cout <<"Wake up "<<endl;
	cout << "Brush your teeth "<<endl;
	cout <<"Have breakfeast" <<endl;
}
//void nightRoutine: displays routine for night
void nightRoutine()
{
	cout <<"Night Routine: "<<endl;
	cout <<"Brush your teeth "<<endl;
	cout << "Read a book "<<endl;
	cout <<"Go to bed" <<endl;
}





int main()
{

//variable for routine entered
	string routine;

//asks user to enter a routine 
	cout << "Which routine do you want to see (morning or night)?"<<endl;
	cin >> routine;

//displays morning routine if user chooses morning 
	if (routine == "morning")
	{
		  morningRoutine();
	}
//displays night routine if user chooses night 
	else if (routine == "night")
	{
		nightRoutine();
	}
//validates input
	else
	{
        cout << "Error! enter morning or night";
	}
	return 0;
}