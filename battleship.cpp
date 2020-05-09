#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, const char* argv[])
{
    int x[10][10] = {{0,0,0,0,0,0,0,0,0,0}, {0,0,0,0,0,0,0,0,0,0}, {0,0,0,0,0,0,0,0,0,0}, {0,0,0,0,0,0,0,0,0,0}, {0,0,0,0,0,0,0,0,0,0}, {0,0,0,0,0,0,0,0,0,0}, {0,0,0,0,0,0,0,0,0,0}, {0,0,0,0,0,0,0,0,0,0}, {0,0,0,0,0,0,0,0,0,0}, {0,0,0,0,0,0,0,0,0,0}};
    int num1;
    int num2;

    //initialize random seed
    srand (time(NULL));

    for(int i = 0; i < 10; i++){
        num1 = rand() % 10;
        num2 = rand() % 10;

        x[num1][num2] = 1;
    }
}
