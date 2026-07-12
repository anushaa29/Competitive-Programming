#include<stdio.h>

int main() {
    int s1;
    scanf("%d", &s1);
    int a1[s1];
   for (int i = 0; i < s1; i++)
        scanf("%d", &a1[i]);
        
      int s2;
     scanf("%d",&s2);
      int a2[s2];
      for(int i=0;i<s2;  i++){
     scanf("%d",&a2[i]);
      }
    int res[s1 + s2];

    
    for (int i = 0; i < s2; i++)
        scanf("%d", &a2[i]);

    int i = 0, j = 0, k = 0;

    while (i < s1 && j < s2) {
        if (a1[i] <= a2[j])
            res[k++] = a1[i++];
        else
            res[k++] = a2[j++];
    }

    while (i < s1)
        res[k++] = a1[i++];

    while (j < s2)
        res[k++] = a2[j++];

    for (i = 0; i < k; i++)
        printf("%d ", res[i]);

    return 0;
}
