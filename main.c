#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void clear_screen() {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

void add(int a, int b){
    int c;
    c = a + b;
    printf("\nresult: %d\n", c);
}

void sub(int a, int b){
    int c;
    c = a - b;
    printf("\nresult: %d\n", c);
}

void divide(int a, int b){
    int c;
    c = a / b;
    printf("\nresult: %d\n", c);
}

void multiply(int a, int b){
    int c;
    c = a * b;
    printf("\nresult: %d\n", c);
}

int banner(){

    printf("\n1. add");
    printf("\n2. subtract");
    printf("\n3. multiply");
    printf("\n4. divide");

}

int options(){
    
    while (1){
        int opt, a, b;

        banner();

        printf("\nEnter option: ");
        scanf("%d", &opt);

        printf("\nEnter your first number: ");
        scanf("%d", &a);

        printf("\nEnter your second number: ");
        scanf("%d", &b);

        switch (opt){
            case 1:
                add(a,b);
                break;
            case 2:
                sub(a,b);
                break;
            case 3:
                multiply(a,b);
                break;
            case 4:
                divide(a,b);
                break;
            default:
                printf("error");
        }
    }
    
    
}


int main(){
    clear_screen();
    options();
    return 0;
}
