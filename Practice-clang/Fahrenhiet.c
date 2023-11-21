#include <stdio.h>

int main(){

    int celsius, fahr;
    int lower, upper, step;

    lower=0;
    upper=300;
    step=20;
    fahr=lower;

    celsius = 5 * (fahr-32) / 9;
    printf("celsius=%d\tfahrenhiet=%d\n", celsius, fahr);

    return 0;
}