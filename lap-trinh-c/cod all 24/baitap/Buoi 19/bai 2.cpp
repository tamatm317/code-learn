//19.2
#include<stdio.h>
#include<string.h>
int main()
{
    char c[1000];
    int n;
    scanf("%d",&n);
    getchar();
    gets(c);
    int dem=0;
    for(int i=0;i<strlen(c)-1;i++)
        if(c[i]==c[i+1]) dem++;
    printf("%d",dem);
}





