#include <stdio.h>

int main(){
  //array - caso comum
  int array[11] = {1, 50, 92, 9999, 77, 5, 2, 3, 4, 9, 0};

  //array2 - pior caso
  int array2[11] = {11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};

  int n = sizeof(array2) / 4;

  for (int a = 0; a < n - 1 ; a++){
      for (int b = 0; b < n - a - 1; b++){
        if (array2[b] > array2[b + 1]){

            int valor = array2[b];
            array2[b] = array2[b + 1];
            array2[b + 1] = valor; 

        }

      }


  }
  
  for (int i = 0; i < sizeof(array2) / 4; i++){
      printf("%d\n", array2[i]);
  
  }
  

}
