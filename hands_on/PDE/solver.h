void set_initial(float *array, int n_puntos, float delta_x);
void first_iteration(float *u_future, float *u_initial, int n_puntos, float r);
void iteration(float *u_future, float *u_present, float *u_past, int n_puntos, float r);

