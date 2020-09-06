#ifndef SEARCH_H
#define SEARCH_H

// Finds x using liniar search.
int search_liniar(int *arr, int len, int x);

// Finds x using binary search.
int search_binary(int *arr, int len, int x);

// Finds x using jump search.
int search_jump(int *arr, int len, int x);

#endif