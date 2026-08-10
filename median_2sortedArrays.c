#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int a[n], b[m];

    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (int i = 0; i < m; i++)
        scanf("%d", &b[i]);

    int res[n + m];
    int i = 0, j = 0, k = 0;

    while (i < n && j < m) {
        if (a[i] < b[j])
            res[k++] = a[i++];
            else if (a[i]==b[j]){
              res[k++]=a[i++];
              res[k++]=b[j++];  
            }
              
        else
            res[k++] = b[j++];
    }

    while (i < n)
        res[k++] = a[i++];

    while (j < m)
        res[k++] = b[j++];

    double median;
    if (k % 2 == 0) {
      median = (double)(res[(k / 2 )- 1] + res[k / 2]) / 2.0;
    } else {
        median = res[(k / 2)];
    }
    printf("%.1f\n", median);
    return 0;
}
