#include <stdio.h>

void llena_arreglo_int  (int arreglo[], int len);
void imprime_arreglo_int(int arreglo[], int len);



void main(){
  int   entero;
  
  printf("Ingresa el tamano del arreglo:\n");
  scanf("%d",&entero);
  
  int a_enteros[entero];
  
  llena_arreglo_int  (a_enteros,entero);
  imprime_arreglo_int(a_enteros,entero);
}



void llena_arreglo_int(int arreglo[], int len){
  int ent;
  
  for(int i=0; i<len; i++){
    printf("\nIngresa A[%d]: ",i);
    scanf("%d",&ent);
    arreglo[i] = ent;   
  }
}

void imprime_arreglo_int(int arreglo[], int len){
  printf("\n\nArreglo: [");
  for(int i=0; i<len-1; i++){
    printf("%d, ",arreglo[i]);
  }
  printf("%d]\n\n",arreglo[len-1]);
}