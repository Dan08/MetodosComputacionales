# -*- coding: utf-8 -*-
"""
Created on Thu Sep  8 08:55:48 2016

@author: juan
"""

import numpy as np
import matplotlib.pyplot as plt

def complexExp(value):
    re, im = np.cos(value), np.sin(value)       # since the use of complex numbers was limited
    return np.array([re, im])
    
def fourierCoeff(points):
    N = len(points)
    a_n = np.zeros(N)
    b_n = np.zeros(N)
    
    for k in range(N):
        suma = 0
        for n in range(N):
            suma += points[n]*complexExp(-2*np.pi*k*float(n)/N)
        a_n[k], b_n[k] = suma    
    return a_n, b_n
    
N = 20
x = np.linspace(0, 2*np.pi*(1-1./N), N)
y = np.sin(x)
a_n, b_n = fourierCoeff(y)

print(a_n, b_n)
