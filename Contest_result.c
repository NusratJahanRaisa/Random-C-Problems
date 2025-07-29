#include <stdio.h>

int main() {
    int n,m;
    scanf("%d %d",&n,&m);

    int a[n+1];
    int b;
    // int b[n+1];
    for(int i=1;i<=n;i++){
      scanf("%d",&a[i]);
    }
    long long sum =0;
    for(int i=1;i<=m;i++){
      scanf("%d",&b);

       sum+=a[b];
    }
    
    printf("%d\n",sum);
    return 0;
}