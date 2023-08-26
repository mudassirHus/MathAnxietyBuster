#ifndef MATH_ANXIETY_BUSTER
#define MATH_ANXIETY_BUSTER
#include <stdio.h>
#include <stdbool.h>
#define Problems_Per_Row 8
#define Plus_Sign "+ "
#define Spaces_2 "  "
#define Spaces_3 "   "
#define New_Line_1 "\n"
#define New_Line_2 "\n\n"
#define New_Line_3 "\n\n\n"
#define New_Line_4 "\n\n\n\n"
#define Problems_File_Path "./build/problems"
typedef struct intPair {
	int num1;
	int num2;
} IntPair;

typedef struct problem {
	int position;
	IntPair* question;
	int answer;
} Problem;

const IntPair pairs[] = {
	{ 1, 1 }, { 1, 2 }, { 1, 3 }, { 1, 4 }, { 1, 5 }, { 1, 6 }, { 1, 7 }, { 1, 8 }, { 1, 9 }, 
	{ 2, 1 }, { 2, 2 }, { 2, 3 }, { 2, 4 }, { 2, 5 }, { 2, 6 }, { 2, 7 }, { 2, 8 }, { 2, 9 },
	{ 3, 1 }, { 3, 2 }, { 3, 3 }, { 3, 4 }, { 3, 5 }, { 3, 6 }, { 3, 7 }, { 3, 8 }, { 3, 9 },
	{ 4, 1 }, { 4, 2 }, { 4, 3 }, { 4, 4 }, { 4, 5 }, { 4, 6 }, { 4, 7 }, { 4, 8 }, { 4, 9 },
	{ 5, 1 }, { 5, 2 }, { 5, 3 }, { 5, 4 }, { 5, 5 }, { 5, 6 }, { 5, 7 }, { 5, 8 }, { 5, 9 },
	{ 6, 1 }, { 6, 2 }, { 6, 3 }, { 6, 4 }, { 6, 5 }, { 6, 6 }, { 6, 7 }, { 6, 8 }, { 6, 9 },
	{ 7, 1 }, { 7, 2 }, { 7, 3 }, { 7, 4 }, { 7, 5 }, { 7, 6 }, { 7, 7 }, { 7, 8 }, { 7, 9 },
	{ 8, 1 }, { 8, 2 }, { 8, 3 }, { 8, 4 }, { 8, 5 }, { 8, 6 }, { 8, 7 }, { 8, 8 }, { 8, 9 },
	{ 9, 1 }, { 9, 2 }, { 9, 3 }, { 9, 4 }, { 9, 5 }, { 9, 6 }, { 9, 7 }, { 9, 8 }, { 9, 9 }
};
bool CreateTextFile(FILE** file);
bool ExtractArguments(int argc, char** argv, int* numDigits, int* numProblems);
bool InitializeProblems(Problem** problems, int numDigits, int numProblems);
void PrintProblems(Problem* problems, int numDigits, int numProblems, FILE* file);
#endif