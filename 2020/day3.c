#include <stdio.h>

char* datain[] = {".#......##..#.....#....#.#.#...",
".#.#...#.##.#..........#...##..",
".........#.....#.####........#.",
".......#.#...#.#...............",
"..#....#...#.#...#.#...#.#.....",
"...#...........#..#.........#.#",
"....#..#....#..#..#.#...#..##..",
"#...........#..#.....#.......#.",
"#..#...#...#.###...#...#.#...#.",
"#...#.#.......#...#...#...##.##",
"..#..................#.#.#....#",
"..#.##....#........##..........",
".....#....#....#.#.......#.....",
"##.#..##.#.....###.......#.....",
"......#...###....#..#.#...#....",
"..............#.........#.##...",
"#......#.............#....#...#",
".#..#......#.###....#...#.....#",
"..#........#.....#.....#...#..#",
".......#...#..............#..#.",
"..#...#........#...##........#.",
".#........#....#......#......#.",
"....#..#.###.......##....#.#..#",
"..#..###..#....................",
"......#...#....#.........#.#...",
"....#.##................#..#...",
"....#......######.....#........",
".#......##.......#....#..##.###",
"..#...##.###..#.......#....#...",
"....#.###...#.#.#........#.....",
"...###...#.......#..........#.#",
"..........#...#..........##.#..",
"..#....#........#.....#....#..#",
"..#...#.#....##..#...##....#...",
"........##...#..##.....#.......",
"###.......#.#...#...#.......#.#",
"....#.#....##.###........#.....",
".....#..............#....##..##",
"#......#.#....#.#......#.....##",
".....#....#..#......#...#......",
"..#.##..#.....#..#....#......#.",
".....#.#.#..........##....#....",
".........#..#..........#.#.....",
".##..#...#......#.#..#....#....",
"#.#..##.......#.#......##......",
"..#.#....#.#.....#.............",
".#.........#.......#..#.#......",
"##.........#..##.#......#......",
"#..#.....#...#.....#.........#.",
"..........#..##..##.#..##...###",
"..##.....#...#..##...##.#.#....",
"..#..........#.#.....##.#....#.",
".##..#..#.........###.......#..",
"......##....#...##....##.......",
".....#.#.##...............#....",
"#..#......#.....#..#..#.#.....#",
".....##.#....#.#.....#.#.#.....",
"....#..#.#..##....#.....#....#.",
"#...#.....#....#....#.#.#......",
".....#................#.......#",
".......#..#.#...#.#......#..#.#",
"...........#....#....###...#.#.",
"#.##....##..###.#.#......#.##.#",
"..##...#.#..#..#...#.....#.#.#.",
"#.....###.#..#.#...#.#......#.#",
"..##.#...#...#.#.....#.#.......",
"#....#...#.##......#.#......#..",
"..#.....##.....#...............",
".....###...##.#...........#....",
"...#..##.....##....#...........",
".....#..#......#..........#....",
"....##..##.#...#...#.#.....#.##",
".#.....###..###.#...#.#..#....#",
".#..........#...#..#.#.#..#...#",
".##.##..#..#....#....####......",
"....#..#.#..........#..........",
"###...#.#..#..#...#..###.......",
"####.#...#....#..#...#..#......",
".....##....#.#...#....##....##.",
"....#.#.##....#.##..#....#.#.#.",
"#......#..#.###....#####.##....",
"..##..#.#.#..#........##.##..##",
"#.#...#..#..#......#..#.....#..",
".###.....#.#....#.#..##.....#.#",
"....#......#.#...#...#.#....#.#",
".....#.###.##..................",
".#..........#........#.#...##.#",
".##......#.#.#..#....##.###..#.",
"..#.##....#....#.........#.#..#",
"........#..#..#.#.####.....##..",
"#..#.##.#......#.#..##.#...#..#",
"..#.#.##..#.##..........#......",
"##.#.....#.#.##..#..##.....##.#",
".##........#..#.....#...#.##.##",
"...#....#.#.#.........##.....#.",
"...#....#.#....#...#..#........",
".....#...#..#...#.##......##...",
"##.........#......#..........##",
".#......#.....##....#.#.#.....#",
"..#.###......#..#.#....#.....#.",
".#.......#...#...#.#.#.#..##...",
"...#..............#...###.....#",
"...##......#.#..#.#........#.#.",
"..##.#....#..........##...#.#..",
"..#...#.....#.######...##...#..",
"#...#...#............#.....#...",
".###..###.##..#.........#......",
".#........##..#....#...#.#..##.",
"#.#.##.#.#...###...............",
"..#.#.#......#.#.#....#.....#.#",
".#...........#.##.#..#.###.....",
".###.#....#...........##.#.#...",
".#...#...........#..##.........",
".#...#.#...........#..###....#.",
".##.......#.....#.....##....#..",
"#.......#........#...##.##..#.#",
"....#..###..#.....##.......#...",
"......###.#...#..#....#.#...#..",
"..#..#.......##...#.#.#...#....",
"......#..#.......#.......##.#..",
"#.#....###.....#...#..#...#....",
"#...#.##.#........#..........##",
".....#.#.##.#.#..#..##.......##",
".#.#.......##....#.#...........",
"#..##.............##...#.#..#..",
"#...........#.#......#.##.##..#",
"...#...#...........#....###.#.#",
".##..#.#.#....#....#####.......",
"..#...#.....#.#....#...........",
".#..#........#.....#.#......#..",
".#.........#...#...#.#.#..#....",
".##.##......#.#...#.......#...#",
".##...#..#..........#...#.....#",
"#..........#..#...#.#......#...",
"....##......#...##..##..#....#.",
".##.......#...#.#..##..#..#....",
".#.#................#....#.....",
"..#..#..###.......#............",
"...##.....#..#......#....#.....",
"....#...###...#....#..##...#.#.",
"#.........#.......#...#....#...",
".#.#...#.#....##....#.#..##.#..",
"...#..#..#....#..#.#..##.....##",
"..#..#.#.#....#...#....#..#....",
"......###.....#...##.#..#.#...#",
".#.#.#..#.##........#.#....#...",
".#..........#....#.#.......#...",
"#.....#........#........#....#.",
".#.#..#...#...................#",
"....####..#..#..#..#....#..#.#.",
"..##.#..........#.##..#.....##.",
"..................##..........#",
"....##....###.....#..#...#.#...",
".##.........#..#...............",
"....##..###....#.##............",
"#.#...###.#..##...#...........#",
".....#..#......#.....#.........",
"..#..##...#.....#.....#.#......",
"......#....###.#..#.#.#....#..#",
"#...#.......#.##.....#.........",
".#.#..#...#.............##.....",
"......#..............#.....#..#",
"......#......###....#...#......",
".....#.....#...#.......###.....",
"#..........##......##.#.#.....#",
"....#.......#..#......#.......#",
"..#...#.###...........#..#.###.",
".....#...#.#...........#.#...##",
"........#.#.#........#.#.....#.",
"....##..##.#.#..#.#....#.#.##..",
"..#.#.#......##.....#...#.#...#",
"##...#..#......#.#.#..#...#....",
"....#..##...........#..#..#..#.",
".#..##...#...#...##.#..#.#....#",
".#.....####.#..#..#....##..#.#.",
".#....#..#......#.....#.#.#....",
"....#..#.....#......#..........",
"..#.#..###.....#...#...#.....##",
"..#.#...##..#...........####...",
".#.##....##.#......#.....##.#..",
"#.##..#....#.###..........##...",
".###...#......#.#....##........",
"...................#..#.....#..",
"#.#...#.#..#.....#...#..####.##",
"....#.##..##...##.##.....#.....",
".#...#.##...........#.......##.",
"###..#.....##...#.........##...",
".###....##...###...............",
".#....#####........#.#.#.##....",
".#.#....####.##........#.......",
".....#......#..................",
"......###.....##......#..##.#..",
"....#.#...........##.#....##.#.",
"...................#.#.#.......",
"#.#.#........#..#.......##.....",
"..#...#...#....#......#....##.#",
"#..#..............#......#....#",
"......#.........##.............",
".....#.#....##..#.......#......",
"......#.......#...........#....",
"....#....#.#..##.#....#...#....",
"#.#.#..#..#.#.#.#...#....#....#",
".#.#....#...#.#..#......#.....#",
".#...........#.#....##.....#...",
"........#...#....#....##.....##",
"#..#..........#..#..#.....#....",
"#.#.###..........#.##....#...##",
"..#................#.##.##.....",
"..#...#.##...##...#.........#..",
"#....#......#......#.........#.",
"##...#...##.#.........#......#.",
".......#.....#.................",
"...#...#.....##.........#.#..#.",
"..#......#...#.......#......#.#",
"#.......#...#.##.#..##..#......",
".#.#............#...###..#.....",
"...#.......##.......#....#..#..",
".....#..#.#....#.#.............",
"#....#...##.##....#....##......",
"........#......#.......#....#..",
"..#..#..##......##.#..#.#..##..",
"....##......#.##.##......#.....",
"........##.#...#.....#.......#.",
"..##.#....#..#......#.##.......",
"..##.####.#...#.#....#.........",
".#........#.....#..#....#...#.#",
"###....##......#..#..#.##..#...",
"..........###.#..#..#....#.....",
"..#.........#....#.....#....#.#",
".#...#.#.....##.#...#...#.#..#.",
"....##......##.##.#.....#..#...",
"....#.##...##.......#..##......",
"#..........#..#....#.......#.#.",
"..#.....#.................#....",
"..........#.#.#.....#.#....#..#",
".......#..........#.##....#....",
"#..#.....#.......#........#....",
"#.....##..#.........##..#..#.#.",
".##.#...#..........#....#......",
"....#..#.#......#.##..#..#.##..",
"...##.####....#.....#.#...##...",
"..#.#....#.#........#..........",
"#...#.#.##.##....##..#...#...#.",
"...#.#.......#..#...#..#..##..#",
".....#....#........###.....#...",
".......#..#.##....#.#.....#....",
"....##....#....#.......#.....#.",
".........#........###...##.....",
"#.#..#...##.........#.#..#....#",
"...##...........#.........#...#",
"......#.#.#.........#..#.#.#...",
"........##.###....#..#.......#.",
"....#.#...#......#..#........##",
".#....##....#...#.##.........#.",
"####.#..#...........##.#.#.....",
"...#....#..#.....#..##.####.#..",
".##...#...........#.#.........#",
"#.#..#..#...#.#.#.........#..#.",
"#......###............#...#....",
"..#.......#....#...#...#..#...#",
"#.#.#...##..#...#...#.......##.",
"......#.#.......#..........#.#.",
"...............#...#..#...#.#..",
".#.#...##.####..##.##....#..##.",
"#..####.......##.#........#...#",
"......###....##...#.#..#.##....",
".##.....###..#...#.###.###.....",
"..#...#.....#...#..#..##..#....",
"...#...##.....##........#.#.##.",
".#...#..#....#....#..###....#.#",
"..#.#.#.#.#..........#.#..#..##",
".......###.....................",
"##.#......#.##.....#.........#.",
"......................#.#.....#",
"#..#........##.......#..##..#.#",
"#.#.#.....##.#.##.##.#....##...",
".#...#.....#.........#.....#...",
"..#.........#.##.#.###.#......#",
".........#..#.##...#.......###.",
".....##........#......#........",
"...#.#...##...#........#.##....",
".........##............#.####..",
"#....#...#...#..#....#..#.#.#.#",
"..#.........#......#.##........",
"....#.....#........#........#.#",
".##.#..#.#..#..###......###....",
"#.###.....#.#.#.##........#..##",
"#.#..#...##.....#....#...#.#...",
"......#....#.....#...#.........",
"...#........##.......#.##..####",
"..#..#....#....#..#..#...#.##..",
".##.....#............#...#.....",
"......#.......#.....#...#.#.#..",
".........#.....#...##..........",
".....#........##...........#...",
"#.#..##.#...#....#....#........",
"#.##..#.#.......#...#......#...",
"...........#.#..#..#.....##.#..",
"#....#.##.......#......#.##..#.",
".....#........#.##.#...#.....#.",
".....###..#.......##...........",
".........#.#.#.....#.##.......#",
".......#....#......#.#.....#...",
"##........#...#..#.#.........#.",
"##...........#.##...##......#..",
"..#.###.#.#.#...####..#....###.",
".........#...#.....##....#.#.##",
".###..###.#.#.....#.##.........",
"#..#...#.#.................##.#",
"##.........#.#....#.#...#.###..",
"#.#....#..............#.##.#...",
"...#..#....##.#..#.......#..##.",
".#..#.###......##..........#..#",
".##....#.#....#....#.#..#......",
".......#.....#..#....#.##...#..",
"#.#.#.........###..#..#.....#..",
"...##..##...##....#..#......#..",
"..........#....#..........#....",
"#..##..#...#......#.....#.#....",
"#..##..#....#.#.#...#..........",
"......##..#.........#........#.",
".##..#..#......###.....#..#....",
".....#..#.##..........#.#..#..."};

#define DATASIZE 323
#define XMAX 323
#define YROLLOVER 31
#define DEBUG
/*

0---------> +Y
|
|
|
|
|
\/ +X

*/

int main(){
	unsigned int posx, posy, trees;
	posx = 0;
	posy = 0;
	trees = 0;

	// First position is always open square
	// So don't calculate, easier for for-loop
	
	// First half (3 right 1 down)
	for(posx = 1; posx<XMAX; posx++){ // always one step down
		posy+=3;
		if(posy >= YROLLOVER)
			posy = posy - YROLLOVER; // Roll over map
		#ifdef DEBUG
		printf("DEBUG %c @ %u:%u\n", datain[posx][posy], posx, posy);
		#endif
		if(datain[posx][posy] == '#')
			trees++;
	}
	printf("First half - Trees: %d\n", trees);

	// Second half
	unsigned int r1d1_trees, r3d1_trees, r5d1_trees, r7d1_trees, r1d2_trees;

	// Function for calculation
	void _trees(unsigned int stepright, unsigned int stepdown, unsigned int* return_trees){
		posy = 0;
		posx = stepdown;
		for(NULL; posx<XMAX; posx = posx + stepdown){ // one step down
			posy = posy + stepright;
			if(posy >= YROLLOVER)
				posy = posy - YROLLOVER; // Roll over map
			#ifdef DEBUG
			printf("DEBUG %c @ %u:%u\n", datain[posx][posy], posx, posy);
			#endif
			if(datain[posx][posy] == '#')
				return_trees[0]++;
		}
	}

	r1d1_trees = 0;
	r3d1_trees = 0;
	r5d1_trees = 0;
	r7d1_trees = 0;
	r1d2_trees = 0;

	_trees(1,1,&r1d1_trees);
	_trees(3,1,&r3d1_trees);
	_trees(5,1,&r5d1_trees);
	_trees(7,1,&r7d1_trees);
	_trees(1,2,&r1d2_trees);

	if(r3d1_trees != trees)
		printf("ERROR SANITY CHECK\n");

	// second sanity check
	unsigned int r1d1_trees_debug = 0;
	posy = 0;
	for(posx = 1; posx<XMAX; posx++){ 
		posy+=1;
		if(posy >= YROLLOVER)
			posy = posy - YROLLOVER; // Roll over map
		#ifdef DEBUG
		printf("DEBUG %c @ %u:%u\n", datain[posx][posy], posx, posy);
		#endif
		if(datain[posx][posy] == '#')
			r1d1_trees_debug++;
	}

	if(r1d1_trees != r1d1_trees_debug)
		printf("ERROR SANITY CHECK 2: %d != %d\n", r1d1_trees, r1d1_trees_debug);


	unsigned long long ext = r1d1_trees * r3d1_trees * r5d1_trees * r7d1_trees * r1d2_trees;

	printf("%u %u %u %u %u\n", r1d1_trees, r3d1_trees, r5d1_trees, r7d1_trees, r1d2_trees);
	printf("Second half - %llu\n", ext);
	return 0;
}