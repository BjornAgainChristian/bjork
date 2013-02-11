#include <iostream>

using namespace std;

#include "chances.h"


int main()
{	
	Chances prog;

	int choice = 0;

	cout << "Choices:" << endl <<
		"1) Input new data file" << endl <<
		"2) Edit old data file" << endl <<
		"3) Ouput old data file";

	cin >> choice;

	switch (choice)
	{
		case 1:
			prog.Input();
		case 2:
//TODO: add			prog.Edit();
		case 3:
			prog.Output();
	}

	return 0;
}
