#include<stdio.h>

int add(){
    int x,y;
    printf("2 nums- ");
    scanf("%d %d",&x,&y);
    return x+y;
}

int dec(int c){
    int y;
    printf("\ndec- ");
    scanf("%d",&y);
    return c-y;
}

int main(){
    int c;
    int (*pt)();    //fn ptr
    pt=&add;
    c=(*pt)();
    printf("\nSum- %d",c);
    pt=&dec;
    c=(*pt)(c);
    printf("\nWapas kam- %d",c);
    return 0;
}