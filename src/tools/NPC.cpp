#include <iostream>
#include <string>
#include <fstream>
#include "NPC.h"

using namespace std;

NPC::NPC()
{
	Story = Battle = Gym = 0; 
}

NPC::~NPC()
{

}

void NPC::AddStory()
{
	Story temp;
	string file;
	ofstream Output;

	cout << "SpriteFile Location: ";
	cin >> temp.SpriteFile;

	cout << "Name: ";
	cin >> temp.Name;

	cout << "Flavor Text: ";
	cin >> temp.FlavorText;

	cout << "Save As: ";
	cin >> file;

	Ouput.open(file.c_str());
	//FLAGS: THIS IS A STORYLINE NPC, TRUE FALSE FALSE
	Output << "1" << endl << "0" << endl << "0" << endl;
	Output << temp.SpriteFile << endl
		<< temp.Name << endl
		<< temp.FlavorText << endl;
}

void NPC::AddBattle()
{

}

void NPC::AddGym()
{

}

bool NPC::FileLoad(string filename)
{

}
