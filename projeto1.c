#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "network.h"

void read_line(FILE *my_file) {
    char line[1000];
    fscanf(my_file, "%[^\n]", line);
    fgetc(my_file);
        printf("z");

}
void read_chars(FILE * my_file, int rept) {
    int i = 0;
    while(i < rept) {
        fgetc(my_file);
    }
}

void read_file(FILE *my_file) {
    int i;
    my_file = fopen("karate.gml", "r");
    if(my_file == NULL){
        printf("Nao achei o arquivo\n");
        exit(1);
    }
    // eliminando 4 linhas
    for(i=0; i < 4; i++) {
        read_line(my_file);
    }
        printf("d");

    int id;
    read_line(my_file);
    // Eh 7 pq sim
    printf("a");
    read_chars(my_file, 7);
        printf("v");

    fscanf(my_file, "%d", &id);
    printf("o id eh: %d", id);
    // if(strcmp(line, "node")){
        

    // }
}

int main() {
    FILE *my_file;
    printf("s");

    read_file(my_file);
    return 0; 
}