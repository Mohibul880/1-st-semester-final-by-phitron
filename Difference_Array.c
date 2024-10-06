#include <stdio.h>
#include <stdlib.h>

int main()
 {
    int T;
    scanf("%d",&T);

    for (int i=0;i<T;i++)
     {
        int N;
        scanf("%d", &N);
        int A[N];
        for (int i=0;i<N;i++) 
        {
            scanf("%d",&A[i]);
        }
        int B[N];
        for (int i=0;i<N;i++)
         {
            B[i]=A[i];
        }
        for (int i=0;i<N-1;i++) 
        {
            int k=i;
            for (int j=i+1;j<N;j++) 
            {
                if (B[j]<B[k])
                 {
                    k=j;
                }
            }
            
            int temp=B[k];
            B[k]=B[i];
            B[i]=temp;
        }
        for (int i=0; i<N; i++) {
            int result=abs(A[i]-B[i]);
            printf("%d ",result);
        }
        printf("\n");
    }

    return 0;
}