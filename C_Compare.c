#include <stdio.h>
#include <string.h>
#include <math.h>
int main() {
  
    char s1[30];
    char s2[30];
    
    scanf("%s%s",&s1,&s2);
    int i=0;
    int f=0;
    
    int e=0;
    while(1){
        if(s1[i]=='\0' && s2[i]=='\0')
        {
            f=0;
            break;
            
        }
        else if(s1[i]=='\0')
        {
            f=-1;
            break;
        }
        else if(s2[i]=='\0')
        {
            f=1;
            break;
        }
        else if(s1[i]<s2[i])
        {
            f=-1;
            break;
        }
        else if(s1[i]>s2[i])
        {
            f=1;
            break;
        }
        else i++;
    }

    if(f==-1){
        printf("%s",s1);
    }
    else  printf("%s",s2);

    return 0;
}