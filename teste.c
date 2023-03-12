#include <stdio.h>

int main() {
    /* 9 */
    int pri_conta;
    pri_conta = -3 + (875 * 434) - (144 / 12);
    
    printf("O resultado da primeira conta é: %d \n", pri_conta);

    /* 10 */
    int seg_conta;
    seg_conta = ((-3 + 875)*(434-144))/12;

    printf("O resultado da segunda conta é: %d \n", seg_conta);

    /* 11 */
    float ter_conta;
    ter_conta = ((-3 + 875)*(434-144))/12.0;

    printf("O resultado da terceira conta é: %f", ter_conta);

    return 0;
}
