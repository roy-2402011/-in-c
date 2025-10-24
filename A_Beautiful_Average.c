#include <stdio.h>
#include <string.h>
#include <limits.h>

#include <math.h>
int main() {
  
    int t;
    scanf("%d",&t);
    while(t--){
        
    int n;
     scanf("%d",&n);
     int arr[n];
     int m=INT_MIN;
     for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
     }

      for(int i=0; i<n; i++){
        if(arr[i]>m){
            m=arr[i];
        }
    }

     printf("%d\n",m);

    }
     
    return 0;
}