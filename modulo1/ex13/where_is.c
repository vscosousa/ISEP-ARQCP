#include <string.h>
int where_is (char *str, char c, int *p){

	int n = strlen(str);
    int contador = 0;
    
    char *x = str;
  
    for (int i = 0; i < n; i++) {
        if(*x == c){
            *(p+contador) = i;
            contador++;
        }
        x++;
    }
	return contador;
}
