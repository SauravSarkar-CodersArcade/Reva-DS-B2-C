#include<stdio.h>
// R24EQ101
// Vowel Or Consonant using switch case
// A,E,I,O,U, a,e,i,o,u - vowels ; all others consonants
int main(){
    char ch;
    printf("Enter a character:\n");
    scanf("%c", &ch);
    switch(ch){
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("Vowel");
            break;
        default:
            printf("Consonant");    
    }
    return 0;
}