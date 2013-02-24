#include <iostream>

using namespace std;

#include "chances.h"


int main()
{	
	Chances prog;
	string file;
	int choice = 0;

	cout << "Choices:" << endl <<
		"1) Input new data file" << endl <<
		"2) Edit old data file" << endl <<
		"3) Ouput old data file" << endl << endl <<
		"Input choice: ";

	cin >> choice;

	switch (choice)
	{
		case 1:
			prog.Input();
			break;
		case 2:
			cout << "Enter file name: ";
			cin >> file;
			prog.Edit(file);
			break;
		case 3:
			cout << "Enter file name: ";
			cin >> file;
			prog.FileLoad(file);
			prog.Output();
			break;
	}

	return 0;
}
