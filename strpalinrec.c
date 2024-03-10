#include <stdio.h>
#include <string.h>
int string(char *s,char *ans,int size,int i)
{
    if(size>=0){
        *(ans+i)=*(s+size);
        i++;
        size--;
        string(s,ans,size,i);
    }
    else if(size<0)
    {
        return 0;
    }
}
int main()
{
    char str[100];
    scanf("%s",str);
    char ans[100]="";
    string(str,ans,strlen(str)-1,0);
    // printf("%s ",ans);
    if(strcmp(ans,str)==0)
        printf("Palindrome");
    else    printf("Not palindrome");
}