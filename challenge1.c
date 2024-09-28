#include <stdio.h>

void somme(int a, int o) {
    printf("Le resultat: %d + %d = %d\n", a, o, a + o);
}

int main() {
    int n, m;
    printf("entrez le premiere nombre : ");
    scanf("%d", &n);
    printf("entrez le dexieme nombre : ");
    scanf("%d", &m);
    somme(n, m);

    return 0;
}
