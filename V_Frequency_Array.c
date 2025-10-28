#include <stdio.h>

int main() {
    int N, M;
    scanf("%d %d", &N, &M);

    static int freq[100005] = {0}; 

    int x;
    for (int i = 0; i < N; i++) {
        scanf("%d", &x);
        freq[x]++;  
    }

    for (int i = 1; i <= M; i++) {
        printf("%d\n", freq[i]);
    }

    return 0;
}
