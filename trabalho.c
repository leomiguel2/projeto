#include <stdio.h>

void movetorre (int casas) {
    if (casas > 0){
        printf("direita/n");
        movetorre(casas - 1);
    
  }
}

int main() {
    movetorre (5);



void   moverainha (int casas) {
        if (casas > 0){
            printf("pra cima/n");
            moverainha(casas - 1);


        }
    }
int main() {
    moverainha (5);

    return 0;
}