#include <stdio.h>

int main()
{
    int m, n;
    scanf("%d %d", &m, &n);
    
    int arr[m][n];
    for(int i=0; i<m; i++)
        for(int j=0; j<n; j++)
            scanf("%d", &arr[i][j]);
    int p = m*n;
    int brr[p];
    int k=0;
    printf("Given array: \n");
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++)
            printf("%d ", arr[i][j]);
        printf("\n");
    }

    for(int i=0; i<m; i++)
        for(int j=0; j<n; j++){
            brr[k]=arr[i][j];
            k++;
        }
    
    printf("\nFinal Array: \n");
    for(int i=0; i<p; i++)
        printf("%d ", brr[i]);

    return 0;
}