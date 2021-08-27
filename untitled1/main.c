#include <stdio.h>

union un{
    unsigned long long int a;
    char b[8];
};

int main() {
    FILE *input = fopen("input.txt", "r");
    FILE *output = fopen("output.txt", "w");
    union un c;
    char t;
    fscanf(input,"%llu", &c.a);
    for(int i = 0; i < 8; i+=2){
        t = c.b[i];
        c.b[i] = c.b[i+1];
        c.b[i+1] = t;
    }
    fprintf(output, "Encrypted message: %llu \n", c.a);
    for(int i = 0; i < 8; i+=2){
        t = c.b[i];
        c.b[i] = c.b[i+1];
        c.b[i+1] = t;
    }
    fprintf(output, "Decrypted message: %llu \n", c.a);

}
