#include<iostream>

int main(){

    //a letter value
    char letter = 'a';

    //a pointer to char
    char *pointer_to_character = &letter;

    //an array of ten numbers
    int numbers[10] = {0};

    //a pointer to an array of character strings
    char *pointer_to_string = "hola";

    //a pointer to a pointer to a character
    char **twice_pointed = &pointer_to_character;

    //a constant integer
    int number = 42;

    //a pointer to a constant integer
    int *num_pointed = &number;


    return 0;
}
