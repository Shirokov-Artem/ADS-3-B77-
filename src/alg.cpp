// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
  int a = 0;
  int b = size - 1;
  do {
    int ab = (a + b) / 2;
    if (value == arr[ab]) {
      return ab;
    } else if (value < arr[ab]) {
      b = ab - 1;
    } else {
      a = ab + 1;
    }
  } while (a <= b);
  //  поместить сюда реализацию алгоритма
  return 0; // если ничего не найдено
}
