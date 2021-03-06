// gcc day5.c -g -lm -o day5

#include <stdio.h>
#include <math.h>
#include <string.h>

#define DATASIZE 859
#define PART1 // comment me to see only part 2 output
char* datain[];

/*
0 - 127-64
1 - 63-0
2 - 
*/
int rows(char* input){
	int low = 0;
	int high = 127;
	int final = 0;
	for(int j = 0; j<6; j++){ // First 6
		if(input[j] == 'F'){
			high = high - low;
			high = (int)floor(high/2.00)+low;
		}else{
			//low = (int)ceil(high/2.00);
			low = low+ceil((high-low)/2.00);
		}
#ifdef DEBUG
		printf("DEBUG: letter: %c low: %d high: %d step: %d\n", input[j], low, high, j+1);
#endif
	}
	// Final 7
	if(input[6] == 'F'){
		final = low;
	}else{
		final = high;
	}
	return final;
}

int columns(char* input){
	int low = 0;
	int high = 7;
	int final = 0;
	for(int j = 7; j<9; j++){ // First 2
		if(input[j] == 'L'){
			high = high - low;
			high = (int)floor(high/2.00)+low;
		}else{
			//low = (int)ceil(high/2.00);
			low = low+ceil((high-low)/2.00);
		}
#ifdef DEBUG
		printf("DEBUG: letter: %c low: %d high: %d step: %d\n", input[j], low, high, j+1);
#endif
	}
	// Final 3
	if(input[9] == 'L'){
		final = low;
	}else{
		final = high;
	}
	return final;
}

int main(){
	// Sanity check
	char* sanity_input = "FBFBBFFRLR";
	printf("SANITY CHECK: %d should be 44\n", rows(sanity_input));
	printf("SANITY CHECK: %d should be 5\n", columns(sanity_input));

	// Part 1
#ifdef PART1
	int highestID = 0;
	int currentID = 0;
	for(int i = 0; i<DATASIZE; i++){
		printf("ROW: %d\n", rows(datain[i]));
		printf("COLUMN: %d\n", columns(datain[i]));
		currentID = rows(datain[i])*8 + columns(datain[i]);
		if(currentID > highestID)
			highestID = currentID;
	}
	printf("Highest ID: %d\n", highestID);
#endif

	// Part 2
	// We need all seat ID's, then sort them, and find one missing
	char ID_table[872];
	memset(&ID_table, 0x00, 872);
	for(int i = 0; i<DATASIZE; i++){
		ID_table[rows(datain[i])*8 + columns(datain[i])] = 1;
	}
	for(int i = 0; i<872; i++){
		if(ID_table[i] == 0){
			printf("ID %d is free!", i);
			if(i > 15 && i < 900)
				printf(" And is probably right!");
			printf("\n");
		}
	}
		
	return 0;
}

char* datain[] = {"BBFFBFFRRR",
"FBBFFBBLRR",
"FFBFBFBRRR",
"FFFBFBFRRR",
"BBFFBBFLRR",
"BFFBFBFLRL",
"FBBBBBFRRR",
"FFFFBFFLLR",
"BFBFFBFLLR",
"FFBBFFFLRR",
"BFFFFFFLLL",
"FBFFBFFRLL",
"FFBFFBFRLR",
"FBBBFBFRRR",
"FBFFBBBRRL",
"FBFFBFFLRL",
"BFBBFFFLLL",
"FBBFBFBRRL",
"BFFBFFFLRR",
"FFFFBFFRLR",
"FFFBBBFRLR",
"FBFFFBFLLL",
"BFBFBBBLRR",
"FBBBFFBRLR",
"BBFFFFFLLL",
"BFFFFBFRRL",
"FBBBFBFRRL",
"FFBBBFBRLR",
"FFFFBBFLLL",
"FBFBFBBRLL",
"BFFFBFBRLL",
"FFBFBFBRLR",
"FBFFFBBRLR",
"BBFFFBBLRR",
"BFFBBFFRRL",
"BFBBBFFRRR",
"FFBFBFFRRL",
"FBFBBFBLLR",
"BFFBFBBRRR",
"BFFFFBFLLR",
"FFFBFFFRRR",
"FBFFFBFRLR",
"BFBFFBFRLR",
"FBBBFFFLLR",
"FBBFFBFLLL",
"BFBBFBFLLR",
"FFBFBBFLLL",
"BFFFBFBLRL",
"FBBFBBBLLL",
"FFFBFFBLLR",
"BFFFFFFRRR",
"BFBBBBFRRL",
"FFBFBBFRLL",
"FBBBFBBLRL",
"BFFBFBFLRR",
"BBFFFBFRRL",
"BFFBBFFLRR",
"BFBFFFFLLR",
"FBFBFFFLRR",
"BFBBFBBLRL",
"FBFBFFFRLR",
"FFBBBFFRLR",
"BBFBBFFRLR",
"BFFFFBBRLL",
"FFFBFBBLRR",
"FFFFBFBRRL",
"BFFBFBFRRL",
"FBFFBBBRRR",
"BFBBFFBLRL",
"FFBBFFFLLL",
"FBFBBFBRRR",
"FBBBFFFLRL",
"FBBFFBFLRR",
"FBBBBBFRRL",
"BFFFBBBLRL",
"FFFBBFBRLL",
"FFFFFBBLLR",
"FFBFBBBRLL",
"FFBBFBFLLR",
"FBFBBFFLLL",
"FFFBFFBRLL",
"BFBBFBFRLR",
"BFBFBBFRRL",
"FFFBFFFLRL",
"FBBFBBFRLR",
"BFFBFFBRRL",
"BBFFFBBRLR",
"FBBBBBFRLL",
"FFBBFFFRLL",
"BBFBFBBRLR",
"FFBBBFFLLR",
"BFBBBBBLLL",
"FFFBFBBLLL",
"FBFFBFFRRL",
"FBFBFFBLLL",
"BFFBBBFRRL",
"FBBBBBFLLL",
"FBFBBFBLRR",
"FFBBBBFLLR",
"BBFFBFFRRL",
"FBBBBBFLRR",
"FBFFFFFRLR",
"FBFFBBFLLR",
"FFBBBFBLRR",
"BFFFBBBRRL",
"FBFBFBFRRL",
"FFFBFBBRLL",
"FFBFBFBLRL",
"FBBBFBBLLL",
"FBBBFBFLRL",
"FBBBBFFLRL",
"FBFBBBBRLR",
"FBBFFBFLLR",
"FBFFBBFLRR",
"FBFFFBBLLL",
"BBFFBBFRRR",
"FBBFBBBRLL",
"BFFBBBFLLR",
"FBFFFFFLRR",
"FBFFBBFRRL",
"BFFBBFBLLL",
"FBBBFBBLLR",
"FBBBBFBLRL",
"FBBBFFFRRR",
"FFFFBBFRRR",
"BFBFFFFRRR",
"BFBFFBBLRL",
"BFFFFFBLLR",
"BFBBFFFRRR",
"FBFFFBFRRL",
"BFFBBFFLRL",
"FFFBFFBRRL",
"FFBFBFBLLL",
"FFBFBFFLLL",
"BBFFFBBRRR",
"FFFFFBFLRL",
"BFBFFFBLRL",
"BFBFBFFLRR",
"BFFBBBBRLL",
"BFFFBFFRRR",
"BBFBFFBRLL",
"FBFFFBBRRL",
"FFBBFBBRRL",
"FFBFFFFLLR",
"FFFBFFFLLL",
"FBBFFBBLRL",
"BFBFBBFLLR",
"FBFBFFFRRL",
"BBFFFFFLRR",
"BBFFFBFLRL",
"BBFFBBBLLL",
"BFBBFBFLLL",
"BFBFFBFRRL",
"FBFFFFBRRL",
"FBFFBBBRLR",
"BFBBFBBRLL",
"BFFBBFFLLR",
"FBBBFFBLRL",
"BFFFBFFRLR",
"FFFBFFBRLR",
"BFFBBBFLLL",
"FBBBBFFRLL",
"FFFFBBBRLR",
"FBFFBFFLRR",
"FBFBFBBRRL",
"FFFFFFBRRR",
"FFFBBBFLRL",
"FBFFBFBLLR",
"FFFBBBBLRL",
"BBFBFFBLLL",
"FBFFFFBLLR",
"BBFBFBBRRR",
"BFBFFFBRRR",
"FBBFBFFRLL",
"FBBBBFFRLR",
"FFBBFBBLRL",
"BBFBFFBLLR",
"FBBBBBBLRL",
"BFFFBBFLLL",
"BBFBBFFLLR",
"FBFFBFBLRL",
"BFFFBBBLRR",
"BBFFFFFRRR",
"BFBFBBBRLR",
"BBFFFBFLRR",
"FBBFBBFLLR",
"BBFBFFBLRR",
"BFBBBFFLRR",
"FBBFBFFRRL",
"FBFBFBBLRR",
"BFBBFFBRLL",
"FFFBBFBRLR",
"BFFBBBFRRR",
"FBFFBFFRLR",
"FFFBBBBRLL",
"FFFFFBBRLR",
"FBBFBFBLLR",
"FBBFBBFLRR",
"BBFFBBFLLR",
"FFFBFBBLLR",
"FFBFBFFLRR",
"BFBBFBFRLL",
"BFFFFBFRRR",
"BBFBFFFLRL",
"BFFFFBFLLL",
"FBFBFBFLRL",
"BFBBFBBLLR",
"BFFBFFFRLL",
"BBFBFFFRLR",
"BBFFBFFRLL",
"FFFBFBBRLR",
"FBFBBBFLRL",
"FFBFFBBRLR",
"BBFFFBBLRL",
"BFBBBBFLRR",
"FFBFFFBLRL",
"FFBBBFBRLL",
"BBFFBFFLRR",
"BBFFBFFRLR",
"FFFFFBFRRR",
"BBFBFBBLRL",
"BFFBBBBLLL",
"FBBBBFBRRR",
"FFBBBBBLRL",
"FBBFBBFRRR",
"FFBBFFBRLL",
"BFBFBFBLRR",
"BBFBFFFRRR",
"BFFFBBFRRR",
"FBFBFFFLLL",
"FBBFBFBRRR",
"BBFFBFBLLR",
"BBFBFBFLRR",
"BFFFFBBLRL",
"BFBBBFFLRL",
"BBFBFFBLRL",
"BFFBBFFRLL",
"FBFFBFFLLR",
"FBFBFBBLLL",
"BBFBFBFLRL",
"BBFFBBBLRL",
"FFFFFBBRLL",
"FFFBBBBRRR",
"FFBBFFFRLR",
"FFBFFFBRRR",
"FBFBFFBLRR",
"FFBFFBBLLL",
"FBBFBBFLRL",
"FBFFBBBLRL",
"FBBBBFFRRR",
"BFBBBBBLLR",
"FFBFBBBLRR",
"FFFFBFBLRR",
"BFFFFFFRLL",
"FBBFFFBLRR",
"BFBBBBBRLL",
"FFBBFFBLRL",
"BFBBBFFRLR",
"FFBFFBFLLL",
"FFBBFBFRLR",
"BFBFFBBLRR",
"FFFFBFFLRR",
"FFBFFBFLRL",
"BBFFBBFRRL",
"FFBFFFFLLL",
"BBFBFFBRLR",
"FBFBFBBRLR",
"BBFFBBBRRR",
"FBFFBBBRLL",
"BFBFFBBRRR",
"BBFFFBFRLL",
"FBBFBBBLRL",
"FBBFFFFLRR",
"BBFFFBBLLL",
"FFBFFFFLRL",
"FBBFFBFLRL",
"FBBBBFFLLR",
"BFBBFBFRRR",
"FBBFFFBLLL",
"FFBFBFFRLL",
"FFFBBBFLRR",
"FFFBFFFLRR",
"FBFFBFFRRR",
"BFFFBFFLLR",
"BFFFFFFRLR",
"BFFFBFFLLL",
"FBBBFBBRRL",
"BFBFFFBLLL",
"FBFBBBBRRR",
"BFBBBFBRLR",
"BBFFFFBRLR",
"FBFFFFFRLL",
"FBBFFBBRLR",
"BBFBBFFLRR",
"BBFFBFFLLR",
"BBFFBBFRLL",
"FBFFFFFRRL",
"FFBFBBFRRR",
"FFBFFFFRLL",
"BFFFFBBLRR",
"BFBFBFBLRL",
"FBBFFFFRRR",
"FFBBFBBRRR",
"BFBBBBBRLR",
"FBFFFBBLLR",
"BBFFFBFRLR",
"FBFFFBBRRR",
"FBBFFBFRLR",
"BFFFBFBRRR",
"FFBBBBBLLL",
"FFFFFBFLLR",
"FBBFBFBRLL",
"BFBFBFBRRL",
"BBFFFFBRRL",
"FFBFBBFLLR",
"FFBBBFFRRL",
"FBFFBFBRLR",
"FBBFFFFRLL",
"BFFBFFFLLR",
"FBFFFBBLRR",
"BFFBFFFLLL",
"BFBFBBBRRR",
"BFFFFBFLRL",
"FFFFBFBLLL",
"FFFBFFBLLL",
"BFFFBBFRRL",
"BFBFBBFRLL",
"FFFBBBBLLL",
"BFFBFBBRLR",
"BFBBBBBLRR",
"BFBBBFBRRL",
"FFBFFFBRLR",
"BFFBFFFLRL",
"FFBFBBBLLL",
"BFBFBBFRRR",
"BFBFFBFRRR",
"FFBFFFBRLL",
"FBFFFFFLRL",
"BBFFBBFLLL",
"BFBFBBBRLL",
"FFFBFFFRRL",
"FBBBBBBLLR",
"FFFBFBBLRL",
"FBBFBBFRLL",
"FFBFFFFRRR",
"FFFBBBFLLR",
"BFFBBFFRLR",
"FFFFFBFLRR",
"FFFBBBBLLR",
"FBFFBFBRRL",
"FBBFFFFLLL",
"FFFFFBFRRL",
"BFFBBBFRLL",
"FFFBBFFRLL",
"FFFBBFFLRR",
"FFFFBBFRLL",
"BFBBBBBRRR",
"BFFBFBFLLL",
"BBFBFBFLLR",
"FFBBBBFRLR",
"FFFBBBFRLL",
"BFBBBBFRRR",
"FBFBFFBRLR",
"FFBFBBFRRL",
"BBFFBBBRRL",
"FFBFBBFRLR",
"FFFFBFFRLL",
"FBFFFBBRLL",
"BBFFBFBRRL",
"BFBFBFBLLR",
"FBFBFBBLRL",
"FBBFFFFRRL",
"FFFBBFFRRR",
"FFBBBBBLRR",
"BBFBFBBLRR",
"FFFFBBBLRR",
"FFBBBBBRLL",
"FFBFFFBRRL",
"BFBBFFFRLL",
"FBBBFBFRLL",
"BBFFBFFLRL",
"BBFFBFBRLR",
"BFFBBBBRRR",
"FBBBBBBRRL",
"BBFBFFFRLL",
"BFFBBFFRRR",
"BFBBFFFRRL",
"FFBFFBFLRR",
"FBFBBFFRLL",
"FBBFBBFRRL",
"BBFBBFFRRR",
"FFBBFBFRRL",
"FFBBFBFLLL",
"FBBFFFFLLR",
"BFBFFBBRLR",
"BFBBFFFLLR",
"FBBBFFFLLL",
"FFFBFFBLRR",
"FFFBFBFRLR",
"BFFBBBBRLR",
"FBFFBBBLLR",
"FFFFBBBRRR",
"FFBBBBFLLL",
"FBBBBFBLLR",
"BFBFBFFRRL",
"BBFFBBBLRR",
"FBBFFBFRRL",
"FFFBBBFLLL",
"BFFFFBBLLL",
"BBFBFBFRRR",
"BFBBBFBLRR",
"FBBFBBBLLR",
"FFBBBBFLRL",
"FFFBFFBLRL",
"FBBBFFBRRL",
"BFFBBFBRLL",
"BFBFBFBRRR",
"BBFBFBBRLL",
"FBFFFBFRLL",
"BFFFBFBLRR",
"BFBFFFFLRL",
"BBFFFFBLRR",
"BFBBFFBRRL",
"BBFBFBBLLR",
"FFFBBBFRRL",
"BFBBBFFRRL",
"FFBFFBFLLR",
"FFBBBFBLLL",
"FBFBBBFLLL",
"FFBBBBBRLR",
"BBFFBBBRLL",
"BFBFBBBRRL",
"FFBBFBBRLL",
"FBFBBFBLRL",
"BBFFBFBLLL",
"FBFBFFFLRL",
"FFBFFBBLRL",
"FFBFBBFLRL",
"BBFBFBBLLL",
"FFBBFBFRLL",
"BBFBBFFLLL",
"FBFFFFBLRL",
"FBFBBBFRLR",
"FFBFFBFRLL",
"FBBFFFBRRR",
"FBFBFFBLRL",
"BFFFFBBLLR",
"FBFBFBBRRR",
"BBFFBBFLRL",
"BFBBFFFRLR",
"FBFFFFFLLR",
"FBBFFBBLLL",
"FFFFFBBRRL",
"FFFBBFBRRL",
"BFFBBBBRRL",
"FBFFFBFLRL",
"FFBBFFFLLR",
"FBBBBBBLRR",
"BFFFBBFRLL",
"FFBFFFBLLR",
"FBBBFFFRLL",
"FFFFBBBLRL",
"BBFFBFBLRR",
"FFFFBBFLRR",
"BFFBFBFRLR",
"FFBFBBBLRL",
"FBFBFBFLLR",
"FFBBFBBRLR",
"BFBFBFFRRR",
"BBFFFFBRLL",
"FFBFBFFRRR",
"FFBFBBFLRR",
"BFBBFBFLRR",
"FFFFBBBLLR",
"FFBBBBBRRL",
"FBBFFBBRRR",
"FFFBBBBRLR",
"BFFBBBFLRL",
"BFBBFFBRRR",
"BBFFBBFRLR",
"FBBBBBFLRL",
"FFFBBFFLLL",
"BFBBBFFRLL",
"FBFFFFFLLL",
"FBFBBFBLLL",
"FFFBFFBRRR",
"BFBFBFFLLL",
"BFBFBFBLLL",
"BFBBBFFLLL",
"FFFFBBFRLR",
"BFFBBFBRRL",
"BFBBFBBLLL",
"FBBFBFBRLR",
"BFFFBFFLRL",
"FBFBBFFLRL",
"FFFFFBFLLL",
"FBBFFBFRRR",
"FBFBBBBLLL",
"FBBBBBFRLR",
"FBFFBBFRLL",
"FFBFFBFRRR",
"FFBFFFFRRL",
"BFFBFBBLLR",
"BFBBFBBRRR",
"FFBBFBBLRR",
"FBFFFFBRLR",
"FFBBBBFRLL",
"BBFFFBFRRR",
"FFFBFBBRRR",
"BFFFBFFRLL",
"BFFBBBBLRR",
"FBBBBFBLLL",
"BFFFFFFLLR",
"BFBFFFFLRR",
"BFFBBBBLLR",
"FFBBBFBRRR",
"FBBFBFFRRR",
"FBBFFFBRLR",
"BFBFBBFRLR",
"BFFBFFBRLL",
"FBFBBFBRLR",
"BFFFFFBLRR",
"BFFBFFBRRR",
"BFBFFBFLRL",
"BBFFFBFLLL",
"BBFBFBFLLL",
"BFBFBFFLRL",
"FBBFBFFLLL",
"FBFFBFBLLL",
"BFFFBFBRLR",
"FFFBFFFRLL",
"BBFBFFFLLL",
"BFFFBBBRLR",
"FBFBFBFLRR",
"FFBBBBFRRR",
"FBFBFBFRLR",
"BBFFBFFLLL",
"FBBBBFBLRR",
"FBBBBBFLLR",
"BFBFFFFRLL",
"FBFFFBFLRR",
"FFBFFFBLLL",
"BFBFFBBLLR",
"FFBBBFBLLR",
"FBFFFBBLRL",
"FFBBBFFRRR",
"FBBBFBFLLR",
"FBBBBFFLRR",
"FBFFBBBLLL",
"FFBFBFFLLR",
"FFFFFBBLLL",
"BFFFFFBLRL",
"BBFFFFBRRR",
"BFBFFFBRRL",
"BBFFFFFRRL",
"BFBBBBBLRL",
"FBBBBFBRLL",
"FFBFFFFLRR",
"BFBBBFFLLR",
"BFFFFBBRLR",
"FFBBFFBRRL",
"BFBFBFFRLR",
"FFBBBBFLRR",
"BFBFFBFLLL",
"FBBFFBBRRL",
"FFFBBFFLLR",
"FFFFBFFRRR",
"BFFBBBFRLR",
"BFFFFFBRRR",
"FFBFBFBLLR",
"FFFBBBFRRR",
"BBFBFBFRLR",
"FFBBFFBLLR",
"FBFBBBBLRL",
"FFFBFBFLRL",
"FFFFBBBRLL",
"FBFFFFBRRR",
"FFBBBFFRLL",
"FBFBFFBRRL",
"BFFBFFBLLL",
"FFFFFBFRLL",
"BBFFFBBRLL",
"FBBFBFBLRL",
"BFBFBFFLLR",
"BFBBFBBRLR",
"FFBFFFBLRR",
"BBFBFFFLRR",
"FBBFBBBLRR",
"FBBBFFBLLR",
"BFBBBBBRRL",
"BFBBFFBLLR",
"FBBBFBFLRR",
"BFFBFBBLLL",
"BFFBFFBLRL",
"BFBFBFBRLR",
"FBFFBBBLRR",
"FBFBBBBRRL",
"BFBFBBFLLL",
"FBFBBBBLRR",
"BFFBBFBRLR",
"FFFBFBFRRL",
"BFFFFBBRRR",
"FBFFBBFRLR",
"BFBBFBFLRL",
"BFFFBBBLLL",
"BFFFFFBRLR",
"BBFFFFBLRL",
"BFFBFFFRRR",
"BFBBBBFRLL",
"FBFBBFBRLL",
"FBBFFFBLLR",
"FFFBBFBRRR",
"FBFBBBBLLR",
"FFFFBFFLLL",
"FFFFFBFRLR",
"BFFFFBFRLR",
"FBBFFFBLRL",
"BFBFFBFLRR",
"FFFFFFBRLL",
"FFBBFFFLRL",
"BBFFFFBLLL",
"FFFBBFFRRL",
"FBBFBBFLLL",
"FBFFBFBLRR",
"FFBBFBBLLL",
"BFFFBBBRRR",
"BFFFBBBLLR",
"BBFBFBFRLL",
"BFFFBBFRLR",
"FFBFBBBRRL",
"FBFBFFFRRR",
"FBBBBBBRRR",
"FFBBBFFLRL",
"BFFBFBBRRL",
"BFBFBFFRLL",
"BFFFBFFRRL",
"BBFFBBBRLR",
"BBFFFFFRLL",
"FFBBFFBRRR",
"FBBFBFFLLR",
"FBBBFBBRLR",
"FFBFFBBRRL",
"FBBBFFBLLL",
"FBBFFFBRRL",
"BFFBFFFRRL",
"FBBFBFFRLR",
"BFFBBBBLRL",
"FFBFFBBRRR",
"FBFBBBFLRR",
"BFBBBBFRLR",
"FFFBFBFLLL",
"FBBBBBBRLL",
"FFBFFBBLRR",
"BBFFFFFLLR",
"FFFFBBFRRL",
"BBFFFFFRLR",
"FBFBFFBRLL",
"BBFFBFBRRR",
"FBFFFBFLLR",
"FFBBFBBLLR",
"FBFBFFFRLL",
"BFBBBFBRLL",
"FFFFFFBRLR",
"FFBBFFFRRL",
"BBFBBFFRLL",
"FBBFFFFRLR",
"BBFBBFFLRL",
"FBBFFBBLLR",
"BFFFBBFLLR",
"BBFBFBBRRL",
"BFFBFFBLLR",
"FFBBFBFRRR",
"FBBBBFBRLR",
"FFFBFBFLLR",
"FFBBBFBRRL",
"FFBBBFFLLL",
"FFBFBBBRLR",
"FBFBBFFLRR",
"FFFBFBBRRL",
"FFFFBFBRRR",
"FFFFBBBLLL",
"FFFBFBFLRR",
"BFBBBFBLLR",
"BFBFFFFRRL",
"BFBBFFBLRR",
"FFBFFBFRRL",
"BFBBFBFRRL",
"BFFFFFBRRL",
"FBBBBFFLLL",
"FFBFBBBLLR",
"FBBBFBFRLR",
"FFFBBFFRLR",
"BBFFBFBRLL",
"BBFBFBFRRL",
"FFBBBBFRRL",
"FBBBFBBLRR",
"BFFBFFBRLR",
"FFBBFFBRLR",
"FFBFBFBLRR",
"BFBFFFBLLR",
"BFFFBBFLRL",
"FBBBFBBRLL",
"BBFFFBFLLR",
"BBFFFBBRRL",
"BFBFFFBRLL",
"BFBFFFBLRR",
"FFBFBFFRLR",
"BFFFFFFRRL",
"BFFFBFFLRR",
"BFBBBBFLRL",
"FFFBFFFLLR",
"BFFFFFFLRR",
"BBFBBFFRRL",
"BFFFFFFLRL",
"FFFFBFBRLL",
"BFFBBFBLRR",
"FFFFBFFLRL",
"BBFFFFFLRL",
"FBBFBFBLRR",
"FBFBBFFRLR",
"FFFFFBBRRR",
"BFFFBFBRRL",
"FBFFBFBRRR",
"BBFFFBBLLR",
"BFFBFBBLRR",
"FFFBFBFRLL",
"FBFBBFFRRR",
"FFBFBBBRRR",
"BFBFFFBRLR",
"FBBFFFBRLL",
"FFBFBFBRRL",
"FFBBBFBLRL",
"FBBFBBBRRL",
"FBFFBFBRLL",
"BFBFBBFLRL",
"FFFBBBBLRR",
"BFFBFBBRLL",
"FFFBFFFRLR",
"FBFBFFBLLR",
"FBFFBBFLLL",
"FBBBFBBRRR",
"FBBFBBBRRR",
"FBFBBBFRRL",
"BFBBFBBRRL",
"BFBFBBBLRL",
"FBBFBBBRLR",
"FFBBFFBLRR",
"FBBFBFFLRL",
"FBFBFFBRRR",
"FFBBBBBLLR",
"BFBBFFFLRR",
"FFBBFBFLRR",
"BFBBBBFLLR",
"BFBFFBBRRL",
"FBFBBFFRRL",
"BFFFFFBLLL",
"FBBBBFBRRL",
"FBBBFFBRLL",
"BBFBFFFLLR",
"FFFBBFBLLL",
"BFFFBBBRLL",
"BFBFFBBLLL",
"BFBFBBBLLR",
"FBFFBBFLRL",
"FFFFBBFLRL",
"FBBFFFFLRL",
"FBBBBFFRRL",
"BFBBFBBLRR",
"BFBFBFBRLL",
"FBBBFBFLLL",
"FBFBBBBRLL",
"FBBBFFBLRR",
"FFBBFBFLRL",
"FFFFBFBLRL",
"FFBBBFFLRR",
"FFBBFFFRRR",
"FFBFFBBRLL",
"FFFFBFFRRL",
"FBBFFBFRLL",
"BFFFBBFLRR",
"BFBFFBBRLL",
"BFFBBFFLLL",
"FBBBBBBLLL",
"BFFBFBFRRR",
"BFBFFFFRLR",
"BFFBFBBLRL",
"BFBBBFBLRL",
"FBFBFBFRLL",
"FBBFBFFLRR",
"BFBBBFBLLL",
"BFFBBBFLRR",
"BFBBBBFLLL",
"BFBBFFBRLR",
"FFFBBFBLRR",
"FFFFBBFLLR",
"FFBFFBBLLR",
"FBFBBBFLLR",
"BFBBBFBRRR",
"BFFFFFBRLL",
"BBFBFFBRRL",
"BFBBFFBLLL",
"FFFBBBBRRL",
"FBFBBBFRRR",
"BFFBBFBLRL",
"BFFBFFFRLR",
"FFFFFBBLRR",
"FBFBFFFLLR",
"FFBFFFFRLR",
"FBFFFBFRRR",
"FBFBFBFRRR",
"FFBFBFBRLL",
"FFFFFFBRRL",
"FFBBBBBRRR",
"FFFBBFFLRL",
"BFFFBFBLLL",
"FBFFFFBLRR",
"FBBBBBBRLR",
"FBFBBFBRRL",
"FFBBFFBLLL",
"FBFFBBFRRR",
"FBFFFFBLLL",
"BBFBFFFRRL",
"FFFFBFBLLR",
"BFFBFBFLLR",
"BBFBFFBRRR",
"FBFFFFFRRR",
"FFBFBFFLRL",
"BFFBBFBLLR",
"FBBBFFFRRL",
"BFFBBFBRRR",
"BFBFBBFLRR",
"FBBBFFFRLR",
"FBBFBFBLLL",
"FBFBFBFLLL",
"BFBBFFFLRL",
"BBFFBBBLLR",
"BFFFFBBRRL",
"FFFBBFBLLR",
"BFFFFBFRLL",
"FFFFFBBLRL",
"FBFBBBFRLL",
"BFBFFBFRLL",
"FBFFBFFLLL",
"FBFBFBBLLR",
"FFFFBFBRLR",
"BFFFBFBLLR",
"BFFBFFBLRR",
"BFFFFBFLRR",
"FBBFFBBRLL",
"FFFFBBBRRL",
"FBBBFFBRRR",
"BFFBFBFRLL",
"BBFFBFBLRL",
"FFFBBFBLRL",
"BBFFFFBLLR",
"FBFFFFBRLL",
"BFBFBBBLLL",
"FBFBBFFLLR",
"FBBBFFFLRR"};
