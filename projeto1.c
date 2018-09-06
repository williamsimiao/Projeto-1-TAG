#include <stdlib.h>
#include <stdio.h>
#include "readgml.h"
#include "network.h"

int main() {
    printf("Hello2\n");
    FILE *my_file = fopen("r", "karate/karate.gml");
    printf("Hello3\n");
    if(my_file != NULL){
        printf("Nao achei o arquivo\n");
    }
    NETWORK *my_net;
    read_network(my_net, my_file);
    printf("Hello\n");
    return 0; 
}