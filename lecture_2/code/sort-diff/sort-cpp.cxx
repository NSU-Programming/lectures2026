#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <algorithm>




int main(int argc, char* argv[]){
    int n = atoi(argv[1]);
    int* arr = (int*)malloc(n*sizeof(int));
    for (int i = 0; i < n; i++){
        arr[i] = rand() % 10000;
    }

    clock_t begin = clock();
    std::sort(arr, arr+n);
    clock_t end = clock();

    double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
    printf("Time: %lf sec\n", time_spent);
    free(arr);
    return 0;
}