/*
 * File contains the flags and text for NPCs
 * be they for battle or for normal use
 * (each has its own struct)
 *
 * Story = Flavor text NPCs
 * Battle = NPCs you fight
 * Gym = Gym Leaders (give items etc)
 */

/* 
 * NPC file struct:
 *
 * Story flag
 * Battle flag
 * Gym flag
 * Path To SpriteFile
 * Pre battle string (used as only thing said by story npc)
 * Post battle string (used when player gets victory)
 * Money given
 * Battle theme
 * 
 * Gym leader only:
 * TM Number given
 * Badge Number given
 *
 */

#include <string>

using namespace std;

typedef struct {
	string SpriteFile;
	string FlavorText;
} Story;

typedef struct {

} Battle;

typedef struct {

} Gym;


class NPC
{
	private:
		Story story;
		Battle battle;
		Gym gym;

	public:

};
