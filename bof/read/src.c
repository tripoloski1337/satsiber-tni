// gcc src.c -fno-stack-protector -no-pie
#include<stdio.h>
int main(){
        char buf[0xf];
        read(0,buf, 0xff);
        return 0;
}
 
void win(){
    system("/bin/sh");
}