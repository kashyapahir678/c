
#include <stdio.h>
#include <conio.h>

void main() {

    int n;
    int i;
    clrscr();

    printf("enter the value");
    scanf("%d",&n);

    for(i=n;i>=1;i--){
     printf("%d",i);
    }
}