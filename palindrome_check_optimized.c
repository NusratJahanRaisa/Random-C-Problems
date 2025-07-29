#include <stdio.h>
#include <string.h>

int main() {
    char s1[1001];

    scanf("%s",s1);

    int len = strlen(s1);
    
    int flag=1;

    for(int i=0;i<len;i++){

        if(s1[i]!=s1[len-1-i]) flag=0;
    }


    if(flag==1){
        printf("Palindrome\n");
    }else{
        printf("Not Palindrome\n");
    }


    return 0;
}