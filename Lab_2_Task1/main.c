#include <stdio.h>

int main() {
    char str[1000];
    char temp;
    int k = 0;
    fgetc(str, , stdin);
    for(int i = 0; i < 1000; i++){
        if(str[i]!='\0'){
            k++;
        }else{
            break;
        }
    }
    for(int i = 0; i < k/2; i++) {
        temp = str[i];
        str[i] = str[k-i-1];
        str[k-i-1] = temp;

    }
    for(int i = 0; i < k; i++){
        printf("%c", str[i]);
    }

}
