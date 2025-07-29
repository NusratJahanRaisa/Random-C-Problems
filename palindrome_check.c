#include <stdio.h>
#include <string.h>

int main() {
    char s1[1001];
    char s2[1001];

    scanf("%s",s1);

    int len = strlen(s1);

    for(int i=0;i<len;i++){
       
       int s2Len = len-1-i;

       s2[s2Len] = s1[i];
    }
    s2[len] = '\0';
    
    printf("%s\n%s\n",s1,s2);
    
    int flag=1;

    for(int i=0;i<len;i++){
        if(s1[i]!=s2[i]) flag=0;
    }


    if(flag==1){
        printf("Palindrome\n");
    }else{
        printf("Not Palindrome\n");
    }


    return 0;
}