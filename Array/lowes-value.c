#include <stdio.h>

int main(){
  
  int array[5] = {5, 10, 20, 6, 1};
  int value = array[0];

  for (int i = 0; i < sizeof(array) / 4; i++){
      if (value > array[i]){
          printf("%d\n", array[i]);
        
      }
    

  }
  


}
