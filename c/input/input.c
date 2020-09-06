#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "input.h"

void read_data(DATA *data) {
    FILE *file = fopen64(DATA_FILE, "r");
    char str[64];

    data->fileName = 0;
    data->array = 0;
    data->len = 0;
    data->func = 0;
    data->target = 0;
    
    fscanf(file, "%s", str);
    fscanf(file, "%d", &data->func);
    fscanf(file, "%d", &data->target);
    fclose(file);

    data->fileName = (char*) malloc(sizeof(char) * strlen(str));
    strcpy(data->fileName, str);

    file = fopen64(data->fileName, "r");

    fscanf(file, "%d", &data->len);
    data->array = (int*) malloc(sizeof(int) * data->len);
    for (int i = 0; i < data->len; i++) 
        fscanf(file, "%d", &data->array[i]);
    
    fclose(file);
}

void print_data(DATA data) {
    printf("Data:\n");
    printf("fileName: %s\n", data.fileName);
    printf("func: %d\n", data.func);
    printf("len: %d\n", data.len);
    printf("array:\n");
    print_array(data.array, data.len);
}

void print_array(int *arr, int len) {
    for (int i = 0; i < len; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

void free_data(DATA *data) {
    //free(data->fileName); // it gives me an error
    free(data->array);
    data->len = 0;
    data->func = 0;
}