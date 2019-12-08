#include <stdio.h>
#include <stdlib.h>
#include "sum_prime.h"

int main(int argc, char const *argv[])
{
  int n = 0, result = 0;

  printf("Enter n:\n");
  scanf("%d", &n);

  result = sum_prime(n);

  printf("Sum of prime numbers from 1 to %d is %d\n", n, result);

  printf("\n");
  return 0;
}
