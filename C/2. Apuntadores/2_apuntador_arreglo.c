#include <stdio.h>

#define MAX (3)

void captura_arreglo_int(int arreglo[]);
void imprime_arreglo_int(int arreglo[]);

void captura_arreglo_int_v2  (int arreglo[]);
void imprime_arreglo_int_pint(int arreglo[]);

void main(){
  int x[MAX];

  printf("\n\n=========="
          " Version 1\n");
  captura_arreglo_int(x);
  imprime_arreglo_int(x);
  getchar();
  
  printf("\n\n=========="
          " Version 2\n");
  captura_arreglo_int_v2(x);
  imprime_arreglo_int   (x);
  getchar();
  
  imprime_arreglo_int_pint(x);
}

void captura_arreglo_int(int arreglo[]){
  for(int i=0; i<MAX; i++){
    printf("X[%2d]: ", i);
    scanf("%d", &arreglo[i]);
  }
}

void imprime_arreglo_int(int arreglo[]){
  printf("\n\nArreglo X\n");
  for(int i=0; i<MAX; i++){
    printf("X[%2d]: %3d\n",i,arreglo[i]);
  }  
}



void captura_arreglo_int_v2(int arreglo[]){
  for(int i=0; i<MAX; i++){
    printf("X[%2d]: ", i);
    scanf("%d", (arreglo + i));
  }
}

void imprime_arreglo_int_pint(int arreglo[]){
  printf("\n\nArreglo X\n");
  for(int i=0; i<MAX; i++){
    printf("X[%2d]: $(%ld) -> %3d\n", i, (long int)(arreglo+i), arreglo[i]);
  }  
}