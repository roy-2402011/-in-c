#include <stdio.h>
#include <string.h>
#include <math.h>
int main() {
  
    int t;

    scanf("%d",&t);

    while(t--){
        char a[100001];
        scanf("%s",a);
        int n=strlen(a);
        int f=0;
        for(int i=0;i<n-2;i++)
        {
            if(a[i]=='0' && a[i+1]=='1' && a[i+2]=='0')
            {
                f=1;
                break;
            }
            else if(a[i]=='1' && a[i+1]=='0' && a[i+2]=='1')
            {
                f=1;
                break;
            }
        }
        if(f==1){
            printf("Good\n");
        }
        else printf("Bad\n");
    }


    return 0;
}