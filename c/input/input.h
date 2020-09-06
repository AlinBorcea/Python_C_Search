#ifndef INPUT_H
#define INPUT_H

#define DATA_FILE "../data/data.txt"
#define ARRAY_FILE "../data/array.txt"

typedef struct InputData {
    char *fileName;
    int *array;
    int len;
    int func;
    int target;
} DATA;

// Reads data from file DATA_FILE.
void read_data(DATA *data);

// Prints data properties.
void print_data(DATA data);

// Prints an array.
void print_array(int *arr, int len);

// Frees data memory.
void free_data(DATA *data);

#endif