/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

//void displayWarning(): displays countdown fro launch launchSequence
void displayWarning()
{
	for (int i = 5 ; i > 0 ; i--)
	{
		cout << i << endl;
		cin.get();
	}
}

//displays warning,rocket lunching ,and rocket leaving atmosphear after countdown 
void launchSequence ()
{
	displayWarning();

	cout << "Warning: Prepare for launch."<<endl;
	cin.get();
	cout <<"Launching the rocket!"<<endl;
	cin.get();
	cout <<"Rocket has left the atmosphere."<<endl;
}

int main()
{
//calls launch rocket sequence
	launchSequence();

	return 0;
}