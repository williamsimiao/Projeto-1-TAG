#include <stdlib.h>
#include <stdio.h>
#include "readgml.h"
#include "network.h"

void read_file(FILE *my_file) {
    char line[1000];
    int i;
    my_file = fopen("karate.gml", "r");
    if(my_file == NULL){
        printf("Nao achei o arquivo\n");
        exit(1);
    }

    for(i=0; i < 4; i++) {
        fscanf(my_file, "%[^\n]", line);
    }
    printf("%s\n", line);


}

int main() {
    FILE *my_file;
    read_file(my_file);
    return 0; 
}