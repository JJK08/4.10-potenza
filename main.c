#include <stdio.h>

int main() {
    int i=1;
    int n;
    printf("inserisci il numero del potenza di 2(2<=n<=20):");
    scanf("%d",&n);
    if(n>=2 && n<=2) {
        while(i<=n) {
            printf("%d^2=%d,i");
            i++;
        }
    }else {
        printf("ERRORE: (2<n<20)");
    }
    return 0;
}
