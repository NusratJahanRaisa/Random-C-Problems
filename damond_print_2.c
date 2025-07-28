#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    
    // UPPER SHAPE
    for(int i=1;i<=n;i+=2){
        int spaceCnt= (n-i)/2;
        for(int j=1;j<=spaceCnt;j++){
            printf(" ");
        }

        for(int j=1;j<=i;j++){
            printf("#");
        }

        printf("\n");
    }


    // LOWER SHAPE
    for(int i=n-2;i>=1;i-=2){

        int spaceCnt= (n-i)/2;
        for(int j=1;j<=spaceCnt;j++){
            printf(" ");
        }

        for(int j=i;j>=1;j--){
            printf("#");
        }

        printf("\n");
    }
    return 0;
}