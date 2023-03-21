#include "..\data_libs\data_io.c"
#include "..\data_libs\data_stat.c"
#include "decision.c"
#include <stdio.h>

void main() {
  double *data;
  int n;

  if (make_decision(data, n))
    printf("YES");
  else
    printf("NO");
}
