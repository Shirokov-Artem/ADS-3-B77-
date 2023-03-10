// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
  int quantity = 0;
  for (int i = 0; i < size; ++i) {
    if (value == arr[i]) {
      quantity = quantity + 1;
    }
  }
  return quantity;
  //  поместить сюда реализацию алгоритма
  return 0; // если ничего не найдено
}
