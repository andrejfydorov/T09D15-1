#include "data_stat.h"
#include <stdlib.h>

double max(double *data, int n) {
  double max = data[0];
  for (int i = 1; i < n; i++) {
    if (max < data[i])
      max = data[i];
  }
  return max;
}

double min(double *data, int n) {
  double min = data[0];
  for (int i = 1; i < n; i++) {
    if (min > data[i])
      min = data[i];
  }
  return min;
}

double mean(double *data, int n) {
  double sum = 0;
  for (double *p = data; p - data < n; p++) {
    sum += (*data) * (1.0 / n);
  }

  return sum;
}
double variance(double *data, int n) {
  double m1 = mean(data, n);

  double *arr = malloc(n * sizeof(double));

  for (double *p = data; p - data < n; p++) {
    arr[p - data] = (*p) * (*p);
  }

  double m2 = mean(arr, n);
  return m2 - (m1 * m1);
}

void sort(double *data, int n) {
  for (int i = 0; i < n - 1; i++) {
    // сравниваем два соседних элемента.
    for (int j = 0; j < n - i - 1; j++) {

      if (data[j] > data[j + 1]) {
        // если они идут в неправильном порядке, то
        //  меняем их местами.
        double tmp = data[j];
        data[j] = data[j + 1];
        data[j + 1] = tmp;
      }
    }
  }
}