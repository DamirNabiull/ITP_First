#include <stdio.h>

int f(int x)
{
    static int e = 1;
    if(e + x < 10){
        printf("%d %d \n", x, e);
        e++;
        f(1);
    }else {
        return 0;
    }

}

int main () {
    f(1);
}