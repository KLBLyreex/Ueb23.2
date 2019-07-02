#include <stdio.h>

/**
 * Eingabe gibt dem Nutzer die Moeglichkeit, eine Zahl einzugeben
 * @return Eingegebene Zahl
 */
int eingabe(){
    int tmp = 0;
    while(!scanf("%d", &tmp)){
        printf("Gib eine positive Ganzzahl ein: ");
        getchar();
    }
    return tmp;
}

/**
 * Berechnet iterativ die ersten n Fibonacci-Zahlen
 * @return /
 */
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