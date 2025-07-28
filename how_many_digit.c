#include <stdio.h>

int main() {
    int num;
    scanf("%d",&num);
    int c=0;

    // if(num==0) c++;
    
    do {
        /* code */
        num/=10;
        c++;
    } while (num>0);

    printf("%d\n",c);
    
    return 0;
}