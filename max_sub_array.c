#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int a[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int max_sofar = a[0];
    int max_end = 0;

    for (int i = 0; i < n; i++) {
        max_end += a[i];

        if (max_sofar < max_end) {
            max_sofar = max_end;
        }

        if (max_end < 0) {
            max_end = 0;
        }
    }

    printf("%d\n", max_sofar);

    return 0;
}
