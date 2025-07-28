#include <stdio.h>

int main() {
        int a[5] = {12,3,4,5,6};
        
        int l=0 , r=4;

        while (l<r)
        {
            /* code */
            // swap

            /*int leftVal = a[l];
            int rightVal = a[r];

            a[l]= rightVal;
            a[r]= leftVal;*/

            int temp = a[l];
            a[l] = a[r];
            a[r] = temp;


            l++;
            r--;
        }

        for(int i=0;i<5;i++){
            printf("%d ",a[i]);
         }
        

    return 0;
}