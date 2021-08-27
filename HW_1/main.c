#include <stdio.h>

int main() {
    FILE *input = fopen("input.txt", "r");
    FILE *output = fopen("output.txt", "w");
    int n, len = 0, l = 0;
    n = fgetc(input);
    n = n - 48;
    int m = n*(n+1)/2;
    int a[m];
    for(int i = 0; i < m; i++){
        a[i] = i+1;
    }
    for(int i = 0; i < n; i++){
        int temp = a[m-i-1];
        while(temp > 0){
            temp /= 10;
            len++;
        }
    }
    for(int i = 0; i < n; i++){
        l = 0;
        for(int j = 0; j < i + 1; j++){

        }
    }

    return 0;
}
