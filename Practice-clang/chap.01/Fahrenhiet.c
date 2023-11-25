#include <stdio.h>

float func_for(int fahr)
{
    float celsius_val = (fahr - 32) * 5 / 9.0f;
    return celsius_val;
};

int main()
{
    int celsius, fahr;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;
    fahr = lower;

    celsius = 5 * (fahr - 32) / 9;
    printf("celsius=%d\tfahrenhiet=%d\n", celsius, fahr);

    for (fahr = lower; fahr <= upper; fahr += step)
    {
        printf("print in float type : %f\n", func_for(fahr));
    }
    return 0;
}
