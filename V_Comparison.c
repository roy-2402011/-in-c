#include <stdio.h>
#include <string.h>
#include <math.h>
int main() {
  
    int a,b;
    char c;
    scanf("%d %c %d",&a,&c,&b);

    if(c=='>'){
       printf("Right") ;
    }
    else if(c=='='){
        printf("Right");
    }
    else printf("Wrong");

    return 0;
}