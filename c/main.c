#include <stdio.h>
#include <stdlib.h>

#include "input/input.h"
#include "search/search.h"

int main() {
    DATA data;
    
    read_data(&data);
    print_data(data);

    switch (data.func) {
        case 0:
            printf("search_liniar = %d\n", search_liniar(data.array, data.len, data.target));
            break;

        case 1:
            printf("search_binary = %d\n", search_binary(data.array, data.len, data.target));
            break;

        case 2:
            // does not work!
            printf("search_jump = %d\n", search_jump(data.array, data.len, data.target));
            break;

        default:
            break;
    }

    free_data(&data);
    return 0;
}
