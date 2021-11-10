//1. Include
#include <stdio.h>

//2. Define
//#define PI 3.1416

//3. Declaracion
void captura_int(int *px);
void imprime_int(int *px);

//4. Main
void main(){
  int x; // float, char, unsigned int, long int, long float, long unsigned int, short int, unsigned short int 
  
  printf("\n\n Bloque 1\n");
  captura_int(&x); //&x -> direccion de memoria de x, *(&x) -> valor 
  printf("\n  x = %d\n", x);
  getchar();
  
  printf("\n\n Bloque 2\n");
  int *pointer_x = &x; // (*pointer_x)->int, pointer_x->apuntador
  printf("\n  pointer -> %ld\n", (long int)pointer_x); // (int)3.2 -> 3, (char)65->'A'
  getchar();
  
  printf("\n\n Bloque 3\n");
  captura_int(pointer_x);
  printf("\n  x = %d\n", x);
  getchar();
  
  printf("\n\n Bloque 4\n");
  imprime_int(pointer_x);
}

//5. Definiciones
void captura_int(int *px){ // px=(&x), *px=x
  printf(" x <- ");
  scanf("%d", px);
  //si esto estuviera en el main 
  //scanf(%d, &x);
}

//Esta es la version como funcion (regresa valor)
/*
int captura_int(){
  int val;
  printf(" x <- ");
  scanf("%d", &val);
  
  return val;
}
*/

void imprime_int(int *px){
  printf("\n  $(%ld) -> %d\n", (long int)px, *px);
}
