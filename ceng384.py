import numpy as np
import matplotlib.pyplot as plt

def even_odd_parts(x, si):
    # Create a time vector
    n = np.arange(si, si + len(x))

    # Calculate even and odd parts of the signal
    xe = (x + np.flip(x)) / 2
    xo = (x - np.flip(x)) / 2

    # Plot even and odd parts of the signal
    plt.stem(n, xe, linefmt='C0-', markerfmt='C0o', label='Even part')
    plt.stem(n, xo, linefmt='C1-', markerfmt='C1o', label='Odd part')
    plt.legend()
    plt.xlabel('n')
    plt.ylabel('Amplitude')
    plt.show()

# Read input files and call even_odd_parts function for each file
files = ['sine_part_a.csv', 'shifted_sawtooth_part_a.csv', 'chirp_part_a.csv']
for file in files:
    data = np.loadtxt(file, delimiter=',')
    si = int(data[0])
    x = data[1:]
    even_odd_parts(x, si)

