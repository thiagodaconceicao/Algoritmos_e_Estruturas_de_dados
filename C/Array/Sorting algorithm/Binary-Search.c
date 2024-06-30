#include <stdio.h>

int binary_search(int array[10], int target, int x, int y){

 int low = array[0];

  while(x <= y){
    int  mid = (low + y) / 2;

      if (array[mid] == target){
          return mid;
      
      } else if (array[mid] < target){
          low = mid + 1; 

      } else  {
          y = mid - 1;  
      }

  }
  
  return -1;

}


int main(){
  int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  
  
  printf("%d", binary_search(array, 1, 0, sizeof(array) / 4));
  
  

}
