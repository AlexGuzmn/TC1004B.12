#include <signal.h>
#include <stdio.h>
#include <unistd.h>

void handle(int signal){
    printf("Jajaja %d \n", signal);
}

int main(){
    signal(2, handle);
    while(1){
        printf("Trabajandoando \n");
        sleep(1);
    }

    return 0;
}