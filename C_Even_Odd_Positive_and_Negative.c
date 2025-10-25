#include <stdio.h>
#include <string.h>
#include <math.h>
int main() {
  
     int n;
     
     scanf("%d",&n);
     int even=0;
     int odd=0;
     int Pos=0;
     int neg=0;
     int x;
    
     for(int i=0;i<n;i++){
         scanf("%d",&x);
         if(x%2==0){
            even++;
         } 
         else odd++;

         if(x<0){
            neg++;
         }
         else if (x>0){
            Pos++;
         }
     }
     printf("Even: %d\n",even);
     printf("Odd: %d\n",odd);
     printf("Positive: %d\n",Pos);
     printf("Negative: %d\n",neg);

    return 0;
}