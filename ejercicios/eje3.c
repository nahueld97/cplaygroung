#include <stdio.h>
#include <stdlib.h>

float celtofar(float i){
    return i*33.8;
}

float millahtokh(float i){
    return (i/60) * 1.609344;
}

float littogal(float i){
    return (i*(1.609344*0.264172052)) / 100;
}
