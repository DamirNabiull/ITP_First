#include <stdio.h>

struct bludo{
    char name[250];
    char ingridients[10][250];
    char metric[10][250];
    char amount[10][250];
};

int main() {
    FILE *input = fopen("input.txt", "r");
    FILE *output = fopen("output.txt", "w");
    struct bludo arr[100];
    int k = 0, iter = 0, n = 0, count = 0;
    char a;
    while(!feof(input)){
        a = fgetc(input);
        if(feof(input)){
            break;
        }
        if(n==0){
            if(a=='\n'){
                arr[k].name[iter] = a;
                iter = 0;
                count = 0;
                n = 1;
            }else{
                arr[k].name[iter] = a;
                iter++;
            }
        }else{
            if(n==1){
                if(a==' '){
                    arr[k].ingridients[count][iter] = '\n';
                    iter = 0;
                    n = 2;
                }else{
                    arr[k].ingridients[count][iter] = a;
                    iter++;
                }
            }else if(n==2){
                if(a==' '){
                    arr[k].metric[count][iter] = '\n';
                    iter = 0;
                    n = 3;
                }else{
                    arr[k].metric[count][iter] = a;
                    iter++;
                }
            }else if(n==3){
                if(a=='\n' || a==EOF){
                    arr[k].amount[count][iter] = '\n';
                    iter = 0;
                    if(a=='\n'){
                        a = fgetc(input);
                        if(a!='\n'){
                            n = 1;
                            count++;
                            arr[k].ingridients[count][iter] = a;
                            iter++;
                        }else{
                            k++;
                            n = 0;
                        }
                    }else{
                        break;
                    }
                }else{
                    arr[k].amount[count][iter] = a;
                    iter++;
                }
            }
        }
    }

    return 0;
}
