#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int min,max,val;


    for(int i=0;i<n;i++){
        
       scanf("%d",&val);


       if(i==0){
        min=val;
        max=val;
       }


       if(val<min){
        min=val;
       }

       if(val>max){
        max=val;
       }

    }

    printf("min val = %d\nmax val = %d\n",min,max);

    return 0;
}