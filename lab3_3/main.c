#include <stdio.h>

int main() {
    FILE *input = fopen("input.txt", "r");
    FILE *output = fopen("output.txt", "w");
    char a = '1';
    while(!feof(input)){
        a = fgetc(input);
        if(feof(input)){
            return 0;
        }
        fprintf(output, "%c", a);
    }
    return 0;
}