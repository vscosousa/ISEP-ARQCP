#include <stdio.h>

void swap(int* vec1, int* vec2, int size){

	int t = 0;

    for (int i=0;i<size;i++) {
        t=*(vec2+i);
        *(vec2+i)=*(vec1+i);
        *(vec1+i)=t;
    }
}
