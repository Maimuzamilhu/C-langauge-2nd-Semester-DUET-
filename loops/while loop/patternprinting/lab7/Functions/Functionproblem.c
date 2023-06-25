#include <stdio.h>

    void england(){

        printf("Your are in England\n");
        return ;
    }

      void Australia(){

        printf("Your are in Australia\n");
        england();
        return ;
    }

     void India(){

        printf("Your are in India\n");
        Australia();
        return ;
    }
    int main (){

        India();
        return 0;
    }