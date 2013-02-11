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

	cout << "Number of pokemon breeds: ";
	cin >> this->Breeds;

	for (int i = 0; i < Breeds; i++)
	{
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

		cout << "Chance of encounter: ";
		cin >> Poketemp.Chance;
	}
}

void Chances::Output()
{

}

bool Chances::FileSave(string filename)
{
	
}

bool Chances::FileLoad(string filename)
{

}
