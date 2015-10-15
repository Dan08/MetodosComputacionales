//#include <stdio.h>
//#include <stdlib.h>

float *reserva(int n_puntos);
void print_array(float * array, int n_puntos, float delta_x);
void copy(float *origen, float *destino, int n_puntos);

void set_initial(float *array, int n_puntos, float delta_x);
void first_iteration(float *u_future, float *u_initial, int n_puntos, float r);
void iteration(float *u_future, float *u_present, float *u_past, int n_puntos, float r);

int main(){
  float *u_initial;
  float *u_past;
  float *u_present;
  float *u_future;
  int n_points=1000;
  int n_time=1000;
  float delta_t=0.0005;
  float delta_x=1.0/n_points; 
  float r=delta_t / delta_x;
  int j;
  u_initial = reserva(n_points);
  u_past = reserva(n_points);
  u_present = reserva(n_points);
  u_future = reserva(n_points);
  set_initial(u_initial, n_points, delta_x);
  first_iteration(u_future, u_initial, n_points, r);

  copy(u_initial, u_past, n_points);
  copy(u_future, u_present, n_points);

  for(j=1;j<n_time;j++){
    iteration(u_future, u_present, u_past, n_points, r);
    copy(u_present, u_past, n_points);
    copy(u_future, u_present, n_points);
  }
    print_array(u_future, n_points, delta_x);

  return 0;
}

