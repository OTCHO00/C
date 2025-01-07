#include <stdio.h>


void ft_print_alphabet(void){

    char lettre = 'z';

    for (int cb = 0; lettre <= 'a'; cb--){
        putchar(lettre);
    }
    putchar('\n');
}

int main() {
    ft_print_alphabet();
    return 0;
}
