#include <stdio.h>
#include <stdlib.h>


int octalRecur(int num){
    int resu;
    if(num < 8)
        return num;

    resu = num%8 + (10 * octalRecur(num/8));

    return resu;
}
