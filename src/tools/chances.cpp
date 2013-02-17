/* This writes the file that dictates the pokemon found in each area
 * and also dictates levels and other information for them
 */

#include "chances.h"

#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

Chances::Chances()
{

}

Chances::~Chances()
{

}

void Chances::Input()
{
	Poke Poketemp;
	string file;

	cout << "Number of pokemon breeds: ";
	cin >> this->Breeds;

	for (int i = 0; i < Breeds; i++)
	{
		cout << "Pokemon " << i + 1 << ":" << endl;
		
		cout << "Pokedex ID number: ";
		cin >> Poketemp.ID;

		cout << "Lower level bound: ";
		cin >> Poketemp.Lower;

		cout << "Upper level bound: ";
		cin >> Poketemp.Upper;

		cout << "Found in grass: ";
		cin >> Poketemp.Grass;

		cout << "Found in water: ";
		cin >> Poketemp.Water;

		cout << "Found when fishing: ";
		cin >> Poketemp.Fishing;

		cout << "Chance of encounter: ";
		cin >> Poketemp.Chance;

		cout << endl; //formatting

		Pokemon.push_back(Poketemp);

	}

	cout << "Save as file: ";
	cin >> file;
	this->FileSave(file);
}

void Chances::Output()
{
	cout << Breeds << " in file." << endl << endl;
	for (int i = 0; i < Breeds; i++)
	{
		cout << "Pokemon " << i + 1 << ":" << endl
			<< "Pokedex ID number: " << Pokemon[i].ID << endl
			<< "Lower level bound: " << Pokemon[i].Lower << endl
			<< "Upper level bound: " << Pokemon[i].Upper << endl
			<< "Found in grass: " << Pokemon[i].Grass << endl
			<< "Found in water: " << Pokemon[i].Water << endl
			<< "Found when fishing: " << Pokemon[i].Fishing << endl
			<< "Chance of encounter: " << Pokemon[i].Chance << endl;

		cout << endl;
	}
}

bool Chances::FileSave(string filename)
{
	ofstream Output;
	Output.open(filename.c_str());

	Output << Breeds << endl;
	for (int i = 0; i < Breeds; i++)
	{
		Output << Pokemon[i].ID << endl <<
			Pokemon[i].Lower << endl <<
			Pokemon[i].Upper << endl <<
			Pokemon[i].Grass << endl <<
			Pokemon[i].Water << endl <<
			Pokemon[i].Fishing << endl <<
			Pokemon[i].Chance << endl;
	}

	Output.close();
}

bool Chances::FileLoad(string filename)
{
	Poke Poketemp;
	ifstream Input;
	Input.open(filename.c_str());

	Input >> Breeds;
	for (int i = 0; i < Breeds; i++)
	{
		Input >> Poketemp.ID
			>> Poketemp.Lower
			>> Poketemp.Upper
			>> Poketemp.Grass
			>> Poketemp.Water
			>> Poketemp.Fishing
			>> Poketemp.Chance;

		Pokemon.push_back(Poketemp);
	}

	Input.close();
}
