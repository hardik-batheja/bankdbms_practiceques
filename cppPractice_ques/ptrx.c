#include<stdio.h>

int *fn(){
    int y=12;
    return &y;
}

int main(){
    int *pc,c=9;
    pc=&c;
    printf("C:-\nAdd: %p\nVal: %d\n",&c,c);
    *pc=11;
    printf("Ptr:-\nAdd: %p\nVal: %p\nC Val: %d",&pc,pc,c);

    char *str;{
    char a='a';
    str=&a;
    }
    printf("\n\n%c",*str);
    int *py=fn();
    printf("\n\n%d",*py);
    return 0;
}