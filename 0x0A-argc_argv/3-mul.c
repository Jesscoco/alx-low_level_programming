#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int number_one = 0;
    int number_two = 0;

    if (argc != 3) {
        printf("Error\n");
        return (1);
    }
    number_one = atoi(argv[1]); 
    number_two = atoi(argv[2]);
    printf("%d\n", number_one * number_two);
    return (0);
}
