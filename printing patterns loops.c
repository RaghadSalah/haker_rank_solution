#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n;
    scanf("%d", &n);
  	// Complete the code to print the pattern.
    int length = n*2 - 1;
    for(int i=0;i<length;i++){
        for(int j=0;j<length;j++){
            int min; 
            
            if(i < j)
            min = i;
            else
            min = j;
          
            if(min < length - i )
            min = min;
            else 
            min = length - i -1;
          
          if(min < length  -j - 1)
          min = min;
          else 
          min = length -j-1;
            printf("%d ", n-min);
        }
        printf("\n");
    }
    return 0;
    
}
