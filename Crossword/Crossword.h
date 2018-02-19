//
// Created by peter on 2/16/18.
//

#ifndef CROSSWORD_CROSSWORD_H
#define CROSSWORD_CROSSWORD_H

#include <stdint.h> // For _t.

typedef struct {
    // Dimensions.
    int rows;
    int cols;

    // Pointer to the crossword's matrix.
    char* matrix;
} Crossword;

// Creates a crossword w/ rows rows and cols cols, and returns a pointer to that crossword.
// Also allocates memory for the crossword's matrix.
Crossword* CreateCrossword (int32_t rows, int32_t cols);

// Completely destroys a crossword, freeing it and its matrix.
// Also makes the given crossword pointer NULL.
void DestroyCrossword (Crossword* crossword);

// Read and return crossword from file.
Crossword* ReadFromFile (const char fileName[]);

// Prints all positions of a word in the crossword (up-down, left-right).
// Input: ASCII string from user.
void PrintWordPositions (Crossword* crossword, char word[]);

// Returns length of longest (vertical) word.
uint32_t VertMaxWordLength (Crossword* crossword);

// Prints all vertical words of length length in the crossword.
void PrintVertWordsOfLength(Crossword* crossword, uint32_t length);

// Finds asymmetry in the crossword, returns 1 if asymmetric and prints locations of asymmetry.
// Returns 0 if symmetric.
int FindAsymmetry (Crossword* crossword);

// Runs example tests.
void RunTests ();

// Frees this crossword from memory.
void FreeCrossword (Crossword* crossword);

// Gets string from user.
char* GetUserString ();

// Returns max of 2 numbers.
int32_t Max (int32_t a, int32_t b);

#endif //CROSSWORD_CROSSWORD_H