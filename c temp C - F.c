#include <stdio.h>

int main()
{

    float cels,fahren;

    printf ("Enter the Celsius temperature :");

    scanf ("%f", &cels);

    fahren = 1.8 * cels + 32 ;

    printf ("The Fahrenheit temperature is : %.2f ",fahren);

    return 0 ;

}
