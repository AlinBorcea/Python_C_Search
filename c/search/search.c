#include <math.h>

#include "search.h"

int search_liniar(int *arr, int len, int x) {
    for (int i = 0; i < len; i++) {
        if (arr[i] == x)
            return i;
    }
    return -1;
}

int search_binary(int *arr, int len, int x) {
    int l = 0;
    int m;
    int r = len - 1;
    
    while (l <= r) {
        m = l + (r - l) / 2;

        if (arr[m] == x)
            return m;

        if (arr[m] < x)
            l = m + 1;
        else
            r = m - 1;
    }

    return -1;
}

int search_jump(int *arr, int len, int x) {
    int squareRoot = sqrt(len);
    int step = squareRoot;
    int prev = 0;

    int mini = step < len ? step : len;
    while (arr[mini - 1] < x) {
        prev = step;
        step += squareRoot;
        if (prev >= len)
            return -1;
        mini = step < len ? step : len;
    }

    while (arr[prev] > x) {
        prev--;
        if (prev == step < len ? step : len)
            return -1;
    }

    if (arr[prev] == x)
        return prev;

    return -1;
}
