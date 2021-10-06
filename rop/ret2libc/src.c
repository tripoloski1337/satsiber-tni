// gcc src.c -fno-stack-protector -no-pie
#include<stdio.h>
int main(){
        char buf[0xf];
        puts("input:");
        gets(buf);
        return 0;
}