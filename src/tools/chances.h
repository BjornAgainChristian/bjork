/* This writes the file that dictates the pokemon found in each area
 * and also dictates levels and other information for them
 */

#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

typedef struct {
	int lower, upper; //level upper and lower bounds
	int ID; //pokemon pokedex number

	int Grass, Water; //what tiles do they show up on?

	int chance; //chance of encounter

} Poke;

class Chances
{
	private:
		vector<Poke> Pokemon;

	public:
		Chances();
		~Chances();

		bool FileSave(string filename);
		bool FileLoad(string filename);
};
