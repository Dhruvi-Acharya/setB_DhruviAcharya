#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void foo(char *s){
    int len = strlen(s);
    int i, j;
    j = 0;
    for(i = 0; i < len; i++)
    {
        if(s[i] != '$')
        {
        s[j] = s[i]; j++;
        }
    }
    s[j] = '\0';
}
char* super_reduced_string(char* s){
    int len = strlen(s);
    int i;
    for(i = 1; i < len; i++){
        if(s[i] == s[i-1])
        {
            s[i] = s[i-1] = '$';
            foo(s);
            len = strlen(s);
            i = 0;
        }
    }
    return s;
}

int main() {
    int n; 
    scanf("%d", &n);
    char s[100]={0};
    scanf("%s", s);
    char* result = super_reduced_string(s);
    int l=strlen(result);
    if(l==0)
      printf("Empty String");
    else
      printf("%s",result);
    return 0;
}

