#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);

    int t = 4*n-1;

    int freq[n+1];
    for(int i=0;i<=n;i++){
        freq[i] = 0;
    }


    while (t--)
    {
        /* code */
        int card;
        scanf("%d",&card);

        freq[card]++;
    }
    int ans;

    for(int i=0;i<=n;i++){
        if(freq[i]==3){
            ans=i;
        }
    }
    printf("%d\n",ans);
    
    return 0;
}