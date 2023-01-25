//
// Created by Joshua` on 1/20/2023.
//

#include <stdio.h>
#include <stdlib.h>

char random();


int main(){
    random();
    return 0;

}
char random(){
    char array[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int rando = rand() % 26;

    return array[rando];

}

