#include <stdio.h>
#include "functions.h"

void sayHello() {
    printf("Hello world !\n");
}

int compare(int a, int b){
    int biggest = 0;
    if (a > b){
        biggest = a;
        return biggest;
    }

    else if (b > a){
        biggest = b;
        return biggest;
    }
    else {
        printf("Ce sont les mêmes nombres");
        return 0;
    }
}

void FOR (int a){
    for (int b = 1; b <= a; b++){
        printf("%d\n", b);
    }
}

void WHILE (int a){
    int b = 1;
    while (b<=a){
        printf("%d\n", b);
        b++;
    }
}

//void adresse(int a){
  //  printf("Variable : %d\n", a);
  //  printf("Adresse : %d\n", &a);
//}


int sum(int a, int b){
    return(a+b);
}
