#include "laba.h"

int main(){
    printf("Введите номер работы %u",0);
    int s;
    scanf("%i",&s);
    if (s == 1)
        return labaone();
    if (s == 2)
        return labatwo();
    if (s == 3)
        return labathree();
    if (s == 4)
        return labafour();
    if (s == 5)
        return labafive();
    if (s == 6)
        return labasix();
    if (s == 7)
        return labaseven();
    else{
        return 0;
    }
}