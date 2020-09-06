#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file = fopen64("array.txt", "w");
    int n;

    printf("n = ");
    scanf("%d", &n);

    fprintf(file, "%d\n", n);
    for (int i = 0; i < n; i++)
        fprintf(file, "%d ", rand() % 50);

    fclose(file);
    return 0;
}