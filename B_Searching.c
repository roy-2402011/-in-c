#include <stdio.h>
#include <string.h>
#include <math.h>
int main() {
  
    int n;
    
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int s;
    scanf("%d",&s);
     int found=0;
    for(int i=0;i<n;i++){
        if(arr[i]==s){
            printf("%d",i);

            found=1;
            break;
        }
        
    }
   if (!found) {
        printf("-1");
   }

    return 0;
}