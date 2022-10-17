#include<stdio.h>
#include<string.h>
int main(){
    char ch[110]="Harry Potter";
    char s[100]="and the Philosopher's Stone";
    char *cpt=ch;
    int result;
    result=strcmp(ch,s);

    printf("Example: result = %d\nExample:\n%c\n%c\n%c\nExample:  ",result,*ch,*(ch+1),*(cpt+4));
    strcat(ch,s);
    puts(ch);
    puts(strupr(s));
    return 0;
}