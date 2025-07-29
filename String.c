#include <stdio.h>
#include <string.h>


int main() {
    int n;
    scanf("%d",&n);

    getchar();

    char s1[n+1];
    char s2[n+1];

    fgets(s1,n+1,stdin);
    getchar();
    fgets(s2,n+1,stdin);

    puts(s1);
    puts(s2);

    return 0;
}


// #include <stdio.h>
// #include <string.h>


// int main() {
//     int n;
//     scanf("%d",&n);

//     getchar();

//     char s1[n+1];
//     char s2[n+1];

//     gets(s1);
//     gets(s2);

//     puts(s1);
//     puts(s2);

//     return 0;
// }