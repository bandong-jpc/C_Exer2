#include <stdio.h>
#include <stdlib.h>

int main(){
  int input = 0, sum = 0;

  printf("\nInput number: ");
  scanf("%d", &input);

  for(int i = input; i > 0; i = i / 10){
    sum = sum + i%10;
  }

  printf("\n\n%d\n", sum);
  

  return 0;

}