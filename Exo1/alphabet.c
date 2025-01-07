#include <stdio.h>


void ft_print_alphabet(void);


void ft_print_alphabet(void){
    for (char c = 'a'; c <= 'z'; c++){
        putchar(c);
    }
    putchar('\n');
}

int main() {
    ft_print_alphabet();
    return 0;
}
