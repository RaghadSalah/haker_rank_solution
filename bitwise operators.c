#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  //Write your code here.
int and, or, xor, i, j, temp;
    and = 0;
    or = 0;
    xor = 0;
    for(i=1; i<=n; i++ ){
        for(j=i+1; j<=n; j++){
            temp = i&j;
            if(temp>and && temp<k){and = temp;}
            temp = i|j;
            if(temp>or && temp<k){or = temp;}
            temp =i^j;
            if(temp>xor && temp<k){xor = temp;}
        }
    }
    printf("%d\n%d\n%d", and, or, xor);
}


int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
