#include <stdio.h>

int main() {
    FILE *input = fopen("input.txt", "r");
    FILE *output = fopen("output.txt", "w");
    int lines = 0;
    int words = 0;
    int characters = 0;
    char a = '1';
    while(!feof(input)){
        a = fgetc(input);
        if(feof(input) && characters != 0){
            lines++;
            words++;
            break;
        }else if(feof(input)){
            break;
        }
        if(a == '\n'){
            lines++;
        }
        if(a == ' '){
            words++;
        }
        if(a != '\0' && a != ' ' && a != '\n') {
            characters++;
        }
    }
    fprintf(output, "lines: %d\n", lines);
    fprintf(output, "words: %d\n", words);
    fprintf(output, "characters: %d", characters);
    return 0;
}
