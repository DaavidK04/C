#include <stdio.h>

int main(){

    const double PI = 3.14159;
    double umfang;
    double radius;
    double inhalt;

    printf("\nGib den Radius des Kreises an: ");
    scanf("%lf", &radius);

    umfang = 2 * PI * radius;
    printf("\nDer Radius des Kreises ist %lf", umfang);
    inhalt = PI * radius * radius;
    printf("\nDer Inhalt ist %lf", inhalt);

    return 0;
}