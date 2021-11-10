#include <stdio.h>

void captura_int(int *px);
void imprime_int(int *px);

void main(){
  int x;
  
  printf("\n\n Bloque 1\n");
  captura_int(&x);
  printf("\n  x = %d\n", x);
  getchar();
  
  printf("\n\n Bloque 2\n");
  int *pointer_x = &x;
  printf("\n  pointer = %ld\n", (long int)pointer_x);
  getchar();
  
  printf("\n\n Bloque 3\n");
  captura_int(pointer_x);
  printf("\n  x = %d\n", x);
  getchar();
  
  printf("\n\n Bloque 4\n");
  imprime_int(pointer_x);
}


void captura_int(int *px){
  printf(" x <- ");
  scanf("%d", px);
}

void imprime_int(int *px){
  printf("\n  $(%ld) -> %d\n", (long int)px, *px);
}
