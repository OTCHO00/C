#include <stdio.h>


void ft_print_alphabet(void){

    char lettre = 'z';
    int count = 0; 

    while (count != 26)
    {
        putchar(lettre);
        count++;
        lettre--;
    }
    
}

int main() {
    ft_print_alphabet();
    return 0;
}
