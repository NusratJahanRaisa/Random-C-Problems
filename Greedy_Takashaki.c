#include <stdio.h>
#include <math.h>

int main() {
    long long a,b,k;
    scanf("%lld %lld %lld",&a,&b,&k);
    
    if(a<k){
       k-=a;
       a=0;

       if(b<=k) { 
        b=0;
       }else{
        b=b-k;
       }
    }

    else if(a>=k){
       a=a-k;
    }

   
    printf("%lld %lld\n",a,b);
    
    return 0;
}