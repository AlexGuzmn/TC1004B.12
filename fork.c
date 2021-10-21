#include <stdio.h>
#include <unistd.h>

int main(){
    while(1){
        int pid = fork();
        if(pid == 0){
            printf("Soy el porceso hijo \n");
        }else{
            printf("Soy el padre y mi hijo es %d \n", pid);
        }
    }
    return 0;
}