#include <stdio.h>


void calc_esfera(float r, float *area, float *volume)
{
    *area = 4 * r * r;
    *volume = (4 * r * r * r) / 3;
}

int main(void)
{
    float r = 2.0, area, volume;

    calc_esfera(r, &area, &volume);

    printf("Área: %.2f\n", area);
    printf("Volume: %.2f", volume);

    return 0;
}