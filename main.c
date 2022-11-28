#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    char d;
    int n = 0, n1 = 1, n2 = 1000;
    srand(time(NULL));
    int nr = rand() % (n2 - n1 + 1) + n1;
    do {
        printf ("%d\n", nr);
        printf("Tengo un numero entero del 1 al 1000\n");
        printf("�Puedes adivinar cual es?\n");
        do {
            printf("Escribe tu respuesta:");
            scanf("%d", &n);
            if (n > nr) {
                printf("Muy arriba. Intenta de nuevo\n");
            } if (n < nr) {
                printf("Muy abajo. Intenta de nuevo\n");
            } if (n == nr) {
                printf("�Excelente! �Adivinaste el numero!\n");
                break;
            }
        }while (n == nr);
        printf ("�Quieres jugar otra vez? (s o n)\n");
        fflush(stdin);
        scanf("%c", &d);
    } while (d == 's');
}
