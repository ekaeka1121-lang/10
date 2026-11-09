#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void main(void) {
    char src[] = "The worst things to eat before you sleep";
    char dst[100];

    //복사
    strcpy(dst , src); //대상,원본, 반복문짤필요없이 


    printf("copied string : %s\n", dst);
    return 0;
}