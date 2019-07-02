#include <stdio.h>


int eingabe(){
    int tmp = 0;
    while(!scanf("%d", &tmp)){
        printf("Gib eine positive ganzzahl ein: ");
        getchar();
    }
    return tmp;
}

int main() {
    int durchlauf = 0;
    int fibo1 = 0;
    int fibo2 = 1;
    int folge = 0;
    printf("Gib die Anzahl der Durchlaeufe an: ");
    durchlauf = eingabe();
    printf("0, ");
    for(int i = 0; i < durchlauf; i++){
        folge = fibo1 + fibo2;
        fibo1 = fibo2;
        fibo2 = folge;
        printf("%d, ", folge);
    }
    return 0;
}