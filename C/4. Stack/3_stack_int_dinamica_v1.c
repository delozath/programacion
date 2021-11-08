#include <stdio.h>
#include <stdlib.h>

struct stack_int_node{
  int                   value;
  struct stack_int_node *next;
};
typedef struct stack_int_node stack_int_node;


stack_int_node *init_stack_int ();
int  push_int_dn       (stack_int_node *top, int val);
void print_stack_int_dn(stack_int_node *top);
//int            push_int_dn(stack_int_root *stack, int val);
//int       pop_int        (stack_int *stack, int *val);
//int       push_int       (stack_int *stack, int  val);
//void      print_stack_int(stack_int  stack);

void main(){
  int value;
  stack_int_node *top = init_stack_int();
  printf("top -> %s\n", (char*)top);
  push_int_dn(top,5);
  push_int_dn(top,6);
  push_int_dn(top,8);
  push_int_dn(top,8);
  push_int_dn(top,9);
  printf("top -> %s\n", (char*)top);
  print_stack_int_dn(top);
  /*
  for(int i=0; i<STACK_LEN+2; i++){
    push_int(&stack, 1+i*i);
    print_stack_int(stack);
    printf("\npresiona enter para continuar\n");
    getchar();
  }
  
  for(int i=0; i<STACK_LEN+2; i++){
    pop_int(&stack, &value);
    printf("Valor estraido de la pila %d\n",value);
    print_stack_int(stack);
    printf("\npresiona enter para continuar\n");
    getchar();
  }
  */
  
}

stack_int_node *init_stack_int (){
  stack_int_node *stack = NULL;
  
  return stack;
}


int push_int_dn(stack_int_node *top, int val){
 int push_success = 1;
 
 stack_int_node *node = (stack_int_node*)malloc(sizeof(stack_int_node));
 node -> value = val;
 node -> next  = top;
 top           = node;
 
 return push_success;
}

void print_stack_int_dn(stack_int_node *top){
  stack_int_node *node;
    node = top;
    while (node != NULL)
    {
        printf("\n%d", node->value);
        node = node->next;
    }
}

 /*
int push_int(stack_int *stack, int val){
  int push_success = -1;
  
  if (stack->top < stack->max-1){
    stack->top++;
    stack->data[stack->top] = val;
    push_success = 1;
  }
  else{
    printf("\nError push: stack overflow\n");
  }
  
  return push_success;
}

int pop_int(stack_int *stack, int *val){
  int pop_success = -1;
  
  if (stack->top > -1){
    *val = stack->data[stack->top];
    stack->data[stack->top] = 0;
    stack->top--;
    pop_success = 1;
  }
  else{
    printf("\nError pop: stack empty\n");
  }
  
  return pop_success;
}

void print_stack_int(stack_int stack){
  int i = 0;
  
  printf("\n\nStack\n");
  for(i=stack.max-1; i>-1; i--){
    printf("Stack[%2d]: %4d\n", i, stack.data[i]);
  }
  printf("top(%d)/max(%d)\n",stack.top,stack.max-1);
}
*/