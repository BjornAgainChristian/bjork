/*
 * File is for creating the sprite files that are used
 * for controling sprites + animations
 */

/*
 * Sprite file struct:
 *
 * NPC Flag
 * Master Sprite File
 * Rear Facing Animation (up)
 * Left Facing Animation
 * Right Facing Animation
 * Forward Facing Animation (down)
 */

#include <vector>


typedef struct {

} NPC; //if it's an NPC, contain all directions

typedef struct {

} Object; //Objects only need to face forward


class Sprite
{
	private:
		int NPC; //NPC/Object

	public:
		NPC();
		~NPC();

		bool FileSave(string filename);
		bool FileLoad(string filename);
};
