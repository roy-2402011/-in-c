#include <stdio.h>
#include <string.h>
#include <math.h>
int main() {
  
    char s1[100000];
    char s2[100000];
    scanf("%s%s",&s1,&s2);
    
    int l1=strlen(s1);
    int l2=strlen(s2);
    printf("%d %d\n",l1,l2);
    printf("%s %s\n",s1,s2);

    return 0;
}