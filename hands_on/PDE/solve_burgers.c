//#include <stdio.h>
//#include <stdlib.h>
#include "array.h"
#include "solver.h"
#define PI 3.14159

int main(){
  FLOAT *u;
  FLOAT *u_past;
  int n_points=100;
  int n_time=400;
  FLOAT nu = 0.07;
  FLOAT sigma = 0.02;
  FLOAT delta_x=2.0*PI/n_points; 
  FLOAT delta_t=sigma * delta_x * delta_x/nu;
  FLOAT alpha = delta_x * nu;
  int j;


  u = reserva(n_points);
  u_past = reserva(n_points);

  set_initial_sin(u, n_points, delta_x);
  for(j=0;j<n_time;j++){
    copy(u, u_past, n_points);
    iteration_burgers(u, u_past, n_points, delta_t, delta_x, nu, alpha);
  }
  print_array(u, n_points, delta_x);

  return 0;
}

