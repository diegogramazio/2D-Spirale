#include <stdio.h>

/* Programma che legge un intero n introdotto dall'utente e crea
 * una matrice contenente i numeri da 1 a n^2 disposti a spirale */
 int main() {
       int n;                              // dimensione matrice
       int numero;                       // il prossimo numero da assegnare alla matrice

       /* leggi dimensione e crea array */
       printf("Introduci la dimensione della matrice: ");
       scanf("%d", &n);
       int matrice[n][n];

       /* scrivi i numeri su una "cornice" alla volta; il primo numero da scrivere e' 1
        * e ci sono (n+1)/2 cornici */
        numero=1;
        for(int cornice=0; cornice<(n+1)/2; cornice++) {

              /* scrivi i numeri sulla parte alta della cornice attuale */
              for(int i=cornice; i<=n-cornice-1; i++) {
                    matrice[cornice][i] = numero;
                    numero++;
              }

              /* scrivi i numeri sulla parte destra della cornice attuale */
              for(int i=cornice+1; i<=n-cornice-1; i++) {
                    matrice[i][n-cornice-1] = numero;
                    numero++;
              }

              /* scrivi i numeri sulla parte bassa della cornice attuale */
              for(int i=n-cornice-2; i>=cornice; i--) {
                    matrice[n-cornice-1][i] = numero;
                    numero++;
              }

              /* scrivi i numeri sulla parte sinistra della cornice attuale */
              for(int i=n-cornice-2; i>=cornice+1; i--) {
                    matrice[i][cornice] = numero;
                    numero++;
              }
        }

        /* visualizza la matrice, allineando a sinistra gli elementi */
        printf("\nEcco la tua matrice:\n\n");
        for(int i=0; i<n; i++) {
              for(int j=0; j<n; j++)
                    printf("%-5d", matrice[i][j]);
              printf("\n");
              system("PAUSE");
        }
 }
