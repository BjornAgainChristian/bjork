#include <iostream>
#include <string>

#include "NPC.h"

int main()
{
	NPC npc;
	string file;
	int choice = 0;

	cout << "Choices:" << endl <<
		"1) Input new story NPC" << endl <<
		"2) Input new Trainer NPC" << endl <<
		"3) Input new Gym Leader NPC" << endl <<
		"4) Edit an NPC" << endl <<
		"5) Output NPC file" << endl <<
		"Input choice: ";

	cin >> choice;

	switch (choice)
	{
		case 1:
			npc.AddStory();
			break;
		case 2:
			npc.AddBattle();
			break;
		case 3:
			npc.AddGym();
			break;
		case 4:
			break;
		case 5:
			break;

	}


	return 0;
}
