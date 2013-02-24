/*
 * This writes the file that dictates the pokemon found in each area
 * and also dictates levels and other information for them
 */

/*
 * Chances file struct:
 * 
 * Number of breeds
 *
 * Per pokemon:
 * Pokedex ID Number
 * Lower Level Bound
 * Upper Level Bound
 * Grass Flag
 * Water Flag
 * Fishing Flag
 * Chance To Encounter
 */

#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

typedef struct {
	int ID; //pokemon pokedex number

	int Lower, Upper; //level upper and lower bounds

	int Grass, Water, Fishing; //what tiles do they show up on?

	int Chance; //chance of encounter

} Poke;

class Chances
{
	private:
		vector<Poke> Pokemon;
		int Breeds;

	public:
		Chances();
		~Chances();

		bool FileSave(string filename);
		bool FileLoad(string filename);
		bool Edit(string filename);

		void Input(); //inputting information
		void Output(); //writes informations to the screen
};
