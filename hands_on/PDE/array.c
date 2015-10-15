#include <stdlib.h>
#include <stdio.h>

float *reserva(int n_puntos){
  float *array;
  int i;
  if(!(array = malloc(n_puntos * sizeof(float)))){
    printf("Problema en reserva\n");
    exit(1);
  }
  for(i=0;i<n_puntos;i++){
    array[i] = 0.0;
  }
  return array;
}

void print_array(float * array, int n_puntos, float delta_x){
  int i;
  for(i=0;i<n_puntos;i++){
    printf("%f %f\n", delta_x*i, array[i]);
  }
}

void copy(float *origen, float *destino, int n_puntos){
  int i;
  for(i=0;i<n_puntos;i++){
    destino[i] = origen[i];
  }
}
