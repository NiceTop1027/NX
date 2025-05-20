#include <stdio.h>

void init() {
    setvbuf(stdout, NULL, _IONBF, 0);
    setvbuf(stdin, NULL, _IONBF, 0);
    setvbuf(stderr, NULL, _IONBF, 0);
}

int main(){
    init();
    char buf[100];
    printf("buf address : %p\n", buf);
    printf("input : ");
    read(0, buf, 0x100);
    return 0;
}
