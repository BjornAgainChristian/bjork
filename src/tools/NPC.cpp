#include <iostream>
#include <string>
#include <fstream>
#include "NPC.h"

using namespace std;

NPC::NPC()
{
	StoryNPC = BattleNPC = GymNPC = 0; 
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
	cin.ignore();
	getline(cin, temp.SpriteFile);

	cout << "Name: ";
	getline(cin, temp.Name);

	cout << "Flavor Text: ";
	getline(cin, temp.FlavorText);

	cout << "Save As: ";
	getline(cin, file);

	Output.open(file.c_str());
	//FLAGS: THIS IS A STORYLINE NPC, TRUE FALSE FALSE
	Output << "1" << endl << "0" << endl << "0" << endl;
	Output << temp.SpriteFile << endl
		<< temp.Name << endl
		<< temp.FlavorText << endl;

	Output.close();
}

void NPC::AddBattle()
{

	Battle temp;
	string file;
	ofstream Output;

	cout << "SpriteFile Location: ";
	cin.ignore(); //flush previous cin stream
	getline(cin, temp.SpriteFile);

	cout << "Name: ";
	getline(cin, temp.Name);

	cout << "Pre Battle Text: ";
	getline(cin, temp.PreBattleText);

	cout << "Post Battle Text: ";
	getline(cin, temp.PostBattleText);

	cout << "Money Dropped: ";
	cin >> temp.MoneyDropped;

	cout << "Battle Theme File: ";
	cin.ignore(); //flush cin due to previous int
	getline(cin, temp.BattleThemeFile);

	cout << "Save As: ";
	getline(cin, file);

	Output.open(file.c_str());
	//FLAGS: THIS IS A BATTLE (TRAINER) NPC, FALSE TRUE FALSE
	Output << "0" << endl << "1" << endl << "0" << endl;
	Output << temp.SpriteFile << endl
		<< temp.Name << endl
		<< temp.PreBattleText << endl
		<< temp.PostBattleText << endl
		<< temp.MoneyDropped << endl
		<< temp.BattleThemeFile << endl;
	
	Output.close();
}

void NPC::AddGym()
{
        Gym temp;
        string file;
        ofstream Output;

        cout << "SpriteFile Location: ";
	cin.ignore();
	getline(cin, temp.SpriteFile);

        cout << "Name: ";
	getline(cin, temp.Name);

        cout << "Pre Battle Text: ";
	getline(cin, temp.PreBattleText);

        cout << "Post Battle Text: ";
	getline(cin, temp.PostBattleText);

        cout << "Money Dropped: ";
        cin >> temp.MoneyDropped;

        cout << "Battle Theme File: ";
	cin.ignore();
	getline(cin, temp.BattleThemeFile);

	cout << "TM Number Dropped: ";
	cin >> temp.TMDropped;

	cout << "Badge Number Dropped: ";
	cin >> temp.BadgeDropped;

        cout << "Save As: ";
	cin.ignore();
	getline(cin, file);

        Output.open(file.c_str());
        //FLAGS: THIS IS A GYM LEADER NPC, FALSE TRUE FALSE
        Output << "0" << endl << "0" << endl << "1" << endl;
        Output << temp.SpriteFile << endl
                << temp.Name << endl
                << temp.PreBattleText << endl
                << temp.PostBattleText << endl
                << temp.MoneyDropped << endl
                << temp.BattleThemeFile << endl
		<< temp.TMDropped << endl
		<< temp.BadgeDropped << endl;

        Output.close();

}

bool NPC::FileLoad(string filename)
{


	return true;
}
