#include <stdio.h>
double getAverage(int *ptr, int size);
int main(void) {

    int numbers[] = {1000, 2, 3, 17, 50};
    double avg;

    avg = getAverage(numbers, 5);
    printf("Average is %.2lf\n",avg);
    return 0;
}
double getAverage(int *ptr, int size)
{
    int i = 0;
    int sum;
    double avg;
    while(i < size)
    {
        sum = sum + ptr[i];
        i++;
    }
    avg = (double)sum / size;
    return avg;
}