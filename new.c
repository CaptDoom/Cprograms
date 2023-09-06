#include <stdio.h>

int main() {
    int a1[] = {2, 5, 6};
    int a2[] = {8, 2, 1};
    int l1, l2, l3;
    l1 = sizeof(a1) / sizeof(int);
    l2 = sizeof(a2) / sizeof(int);
    l3 = l1 + l2;
    int i, j, k;
    int a3[l3];

    printf("%d\t%d\t%d \n", l1, l2, l3);

    // Copy elements from a1 to a3
    for (i = 0; i < l1; i++) {
        a3[i] = a1[i];
    }

    // Copy elements from a2 to a3
    for (i = l1, j = 0; i < l3; i++, j++) {
        a3[i] = a2[j];
    }

    // Print the concatenated array a3
    for (k = 0; k < l3; k++) {
        printf(" %d", a3[k]);
    }

    printf("\n");

for ( int m = 0; m < l3; m++)
{
    for (int n = m+1; n<l3; n++)
    {
        if (a3[m]>a3[j])
        {
           printf("%d \n",a3[m]);
        }else{
            printf("%d ",a3[n]);
        }
        
    }
    
}

    return 0;
}
