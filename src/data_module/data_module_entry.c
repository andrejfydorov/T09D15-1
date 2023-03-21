#include "..\data_libs\data_io.c"
#include "..\data_libs\data_stat.c"
#include ".\data_process.c"
#include <stdio.h>
#include <stdlib.h>

int main() {
  double *data;
  int n;

  scanf("%d", &n);
  data = malloc(n * sizeof(double));

  // Don`t forget to allocate memory !

  input(data, n);
  output(data, n);

  if (normalization(data, n))
    output(data, n);
  else
    printf("ERROR");

  free(data);

  return 0;
}
