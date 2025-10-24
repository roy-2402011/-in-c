#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <math.h>

int main() {
    int n;
    scanf("%d", &n);

    int x;
    int m = INT_MAX; 

    while(n--) {
        scanf("%d", &x);

        if (x < 0) {
            x = -x; 
        }
        if (x < m) {
            m = x;
        }
    }

    printf("%d\n", m);

    return 0;
}
