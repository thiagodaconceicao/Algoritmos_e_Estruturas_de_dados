#include <stdio.h>

void swap(int *array, int a, int b){
  int swap = array[a];
  array[a] = array[b];
  array[b] = swap;

}

int main(){
  int array[10] = {52, 3, 80, 9, 2, 4, 3, 50, 41, 99};

  int len = sizeof(array) / 4;

  for (int a = 0; a < len - 1; a++){
      int min = a;
      for (int b = a + 1; b < len; b ++){
          if (array[b] < array[min]){
                  min = b;
          }
    
      }
          swap(array, a, min);
  }

  for (int i = 0; i < len; i++){
      printf("%d\n", array[i]);
  }

}

