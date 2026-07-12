#include<stdio.h>

int majorityElement(int a[], int n) {
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (a[j] == a[i]) {
                count++;
            }
        }

        if (count > n / 2) {
            return a[i];
        }
    }

    return -1;
}

int main() {
    int n;
    scanf("%d", &n);

    int a[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int result = majorityElement(a, n);

    printf("%d", result);

    return 0;
}
