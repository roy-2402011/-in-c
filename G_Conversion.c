#include <stdio.h>
#include <string.h>
#include <math.h>
int main() {
  
    char s[1000001];
    scanf("%s",&s);
    int n=strlen(s);
    for(int i=0;i<n;i++){

        if(s[i]>='A' && s[i]<='Z'){
            printf("%c",s[i]+32);
        }
        else if(s[i]>='a' && s[i]<='z'){

            printf("%c",s[i]-32);

        }
        else printf(" ");

    }

    return 0;
}