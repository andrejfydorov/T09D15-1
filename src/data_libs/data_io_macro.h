#ifndef DATA_IO_MACRO_H
#define DATA_IO_MACRO_H

#define input(type, data, n)                                                   \
  ({                                                                           \
    for (int i = 0; i < n; i++) {                                              \
      scanf("%lf", &data[i]);                                                  \
    }                                                                          \
  })

#define output(type, data, n)                                                  \
  ({                                                                           \
    for (int i = 0; i < n; i++) {                                              \
      printf("%.2f", data[i]);                                                 \
    }                                                                          \
  })

#endif