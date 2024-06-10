# 1 лабораторная , 2 задача

import numpy as np

# Define the equation
def f(x):
    return np.exp(-x) - np.sqrt(x - 1)

# Define the derivative of the equation
def df(x):
    return -np.exp(-x) - 1/(2*np.sqrt(x - 1))

# Define the bisection method
def bisection_method(a, b, tolerance=1e-6, max_iter=1000):
    iter = 0
    while iter < max_iter:
        c = (a + b) / 2
        if abs(f(c)) < tolerance:
            return c
        if f(c) * f(a) < 0:
            b = c
        else:
            a = c
        iter += 1
    return None

# Define the iteration method
def iteration_method(x0, tolerance=1e-6, max_iter=1000):
    x = x0
    iter = 0
    while iter < max_iter:
        x_old = x
        x = x - f(x)/df(x)
        if abs(x - x_old) < tolerance:
            return x
        iter += 1
    return None

# Define the chord method
def chord_method(a, b, tolerance=1e-6, max_iter=1000):
    iter = 0
    while iter < max_iter:
        c = (a*f(b) - b*f(a)) / (f(b) - f(a))
        if abs(f(c)) < tolerance:
            return c
        if f(c) * f(a) < 0:
            b = c
        else:
            a = c
        iter += 1
    return None

# Define the Newton-Raphson method
def newton_raphson_method(x0, tolerance=1e-6, max_iter=1000):
    x = x0
    iter = 0
    while iter < max_iter:
        x_old = x
        x = x - f(x)/df(x)
        if abs(x - x_old) < tolerance:
            return x
        iter += 1
    return None

# Set the initial guesses for the bisection method
a = 1
b = 2

# Set the initial guess for the iteration, chord, and Newton-Raphson methods
x0 = 1.5

# Set the tolerance
tolerance = 1e-6

# Set the maximum number of iterations
max_iter = 1000

# Solve the equation using the bisection method
root_bisection = bisection_method(a, b, tolerance, max_iter)

# Solve the equation using the iteration method
root_iteration = iteration_method(x0, tolerance, max_iter)

# Solve the equation using the chord method
root_chord = chord_method(a, b, tolerance, max_iter)

# Solve the equation using the Newton-Raphson method
root_newton_raphson = newton_raphson_method(x0, tolerance, max_iter)

# Print the roots
print("Bisection method root:", root_bisection)
print("Iteration method root:", root_iteration)
print("Chord method root:", root_chord)
print("Newton-Raphson method root:", root_newton_raphson)