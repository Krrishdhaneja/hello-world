#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(int argc, char const *argv[]) {
  double num1;
  double num2;
  char op;

  printf("type the 1st number :" );
  scanf("%lf",&num1 );
  printf("type the 2nd number :" );
  scanf("%lf",&num2);
  printf("which operator you want to use(type h to get a list of all operators):\n");
  scanf("%c",&op );

  if(op == 'h'){
    printf("plus(+)\n");
    printf("minus(-)\n");
    printf("multiply(x)\n");
    printf("divide(/)\n");
    printf("sqrt\n");
    printf("exponentiation(^)\n" );

  }else if(op == '+'){
      printf("%f",num1 + num2 );
  }else if(op == '-'){
      printf("%f",num1 - num2 );
  }else if(op == 'x'){
      printf("%f",num1 * num2 );
  }else if(op == '/'){
      printf("%f",num1/num2 );
  }else if(op == 's'){
      printf("which number you want to be rooted:" );
      printf("%f",sqrt(num1));
      printf("It does not matter if you will be entering the second number only first number will be rooted" );
  }else if(op == '^'){
      printf("%f",pow(num1,num2) );
    }

    return 0;
}
//k char k;
//k = scanf("%c");
