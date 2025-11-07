
/***************************************************
 *       @author : PRASANJIT ROY                   *
 *       @Diamond shape                            *
 * *************************************************/ 
 
#include <stdio.h>
#include <string.h>
#include <math.h>
int main() {
    int n;
    scanf("%d",&n);
    int space=n-1;
    int star=1;
   for(int i=1;i<=n;i++)
   {
        for(int j=1;j<=space;j++)
        {
            printf(" ");
        }

        for(int k=1;k<=star;k++)
        {
            if(i%2!=0){
                printf("#");
            }
            else printf("-");
        }
        printf("\n");
        space--;
        star+=2;
   }

   int st=(n-1)*2-1;
   int sp=1;

  for (int i=n-1; i>=1; i--) {  
        for (int j = 1; j <= sp; j++) {
            printf(" ");
        }

        for (int k = 1; k <= st; k++) {
            if (i % 2 != 0)
                printf("#");
            else
                printf("-");
        }
        printf("\n");
        st-=2;
        sp++;
    }
    return 0;
}
