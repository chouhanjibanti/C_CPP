#include<stdio.h>

enum week{Sun,Mon,Tue,Wed};

int main(){
    enum week w;

    w = Wed;
    printf("%d",w);

    return 0;
}