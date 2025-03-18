#include <stdio.h>
#include <stdbool.h>
int main(){
    printf("Hello world!\n");
    printf("Ich mag cevape\n");
    printf("Hallo mein name ist David\n");

    //Das ist ein Kommentar

    /*
    Das ist auch ein Kommentar
    */

    //Escape sequences eigentlich wie in Java
    /*
    \n = newline
    \t = tab
    */
   printf("\"ich \t mag \t pizza\"\n");
    //gibt noch paar mehr aber juckt nicht weil irrelevant


    int x = 123;        //%d
    float gp = 2.05;        //%f        4 bytes
    char c = 'c';       //%c
    //strings existieren nicht weil strings sind objekte und das gibt es in c nicht
    char name[] = "Hallo";      //%s
    printf("Zahl x ist %d\n", x);
    printf("da steht %s\n", name);


    double d = 3.1415926;       //8 bytes

    bool e = true; //dieses kack stdbool muss drin sein hat nur 1 byte 
    char f = 100;       //1 byte (-128 bis +127)
    printf("%d\n", f);
    printf("%c\n", f); //ascii tabelle ist 100 = d deswegen wird das so angezeigt

    unsigned char g = 255; //(0  bis 255) kein negativ wegen unsigned
    unsigned short int kl = 65535; //2 bytes (0 bis 65535 auch %d)
    printf("char ist %d\n", g);
    printf("kl ist %d\n", kl);

    long long int sehrlang = 28309740928346; //- bis +9 quintillionen %lld
    unsigned long long int sehrlansn = 328964023964; //0 bis 18 quintillionen %llu
    printf("lange zahl ist %lld\n", sehrlang);
    printf("noch länger ist %llu\n", sehrlansn);

    /*
    %c = character
    %s = string (array an chars)
    %f = float
    */


    float item1 = 5.75;
    float item2 = 3.4534;
    float item3 = 99.9999;

    printf("item 1: $%4.2f\n", item1);
    printf("item 2: $%4.2f\n", item2);
    printf("item 3: $%10.2f\n", item3);

    //KONSTANTEN
    const float PI = 3.14159; //kann jetzt nicht mehr geändert werden

    //es gibt plus minus mal geteilt modulo inkrement und dekrement wie in java halt

    int z = 12;
    int hh = 5;
    int zahl = z / hh; //kein komma is ja klar
    float kommazahl = z / hh;
    return 0;
}