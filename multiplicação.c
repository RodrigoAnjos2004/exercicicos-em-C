#include <stdio.h>

#define contas 3

float add_subtract_multiply(float num_a, float num_b, int opt);

int main() {
  float num_a, num_b;

  system("clear");

  printf("\n\nInforme o primeiro numero para a conta: \n");
  scanf("%f", &num_a);

  printf("Informe o segundo numero para a conta: \n");
  scanf("%f", &num_b);
  
  printf("\n\nA conta de multiplicação entre %2.2f e %2.2f\n\n", num_a, num_b);
  for (int i = 0; i < contas; i++) {

    if (i == 0)
      printf("conta de multiplicação = %2.2f\n", (add_subtract_multiply(num_a, num_b, i)));
  }

  printf("\n");
  return 0;
}

float add_subtract_multiply(float num_a, float num_b, int opt) {
  float result;


  if (opt == 0)
    return result = num_a * num_b;
}