#include <stdio.h>
extern int counter;
extern int vec[]; 
void inc_nsets(){
	
	for (int i=0;i<100;i++){
			if (vec[i]==1){
				counter++;
				}
		}
	printf("\nO número de sets é igual a %i \n", counter);
	
}
