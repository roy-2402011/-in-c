#include <stdio.h>
#include <stdbool.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    bool r = true;
    int j = n - 1;

    for (int i = 0; i < n / 2; i++) {
        if (arr[i] != arr[j]) {
            r = false;
            break;
        }
        j--;
    }

    if (r)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
