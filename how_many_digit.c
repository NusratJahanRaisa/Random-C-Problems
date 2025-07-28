#include <stdio.h>

int main() {
    int num;
    scanf("%d",&num);
    int c=0;

    // if(num==0) c++;
    
    do {
        /* code */
        int mod=num%10;
        num/=10;
        
        printf("%d",mod);
        c++;
    } while (num>0);

    printf("\n%d\n",c);
    
    return 0;
}