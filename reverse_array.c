#include <stdio.h>

int main() {
    int a[5] = {12,3,4,5,6};
    int b[5]; 

    for(int i=0;i<5;i++){
        b[5-1-i] = a[i];
    }
    for(int i=0;i<5;i++){
        printf("%d ",b[i]);
    }
    return 0;
}