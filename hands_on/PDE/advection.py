import numpy as np
import matplotlib.pyplot as plt

L = 10.0
T = 10.0
delta_x = 0.1
delta_t = 0.05
c = 0.5
alpha = c * delta_t/delta_x
print('alpha = {}'.format(alpha))

N_x = int(L/delta_x + 1)
N_t = int(T/delta_t + 1)
x = np.linspace(0,L,N_x)
u_now = np.exp(-(2-x)**2)
u_new = np.zeros(N_x)
plt.plot(x,u_now)
plt.show()


for j in range(N_t):
    for i in range(N_x):
        u_new[i] = u_now[i] - alpha * (u_now[i] - u_now[i-1])
    u_now = u_new.copy()

plt.plot(x,u_now)
plt.show()
