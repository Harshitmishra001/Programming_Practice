import matplotlib.pyplot as plt
import numpy as np

# Define the internuclear distance (r) range
r_min = 0.1
r_max = 2.5
r = np.linspace(r_min, r_max, 1000)

# Define the potential energy curve (PE)
def PE(r):
    a = 1.1744
    De = 0.04746
    Re = 1.645
    return De * (1 - np.exp(-2 * a * (r - Re)))**2

# Calculate the potential energy
pe = PE(r)

# Plot the potential energy curve
plt.plot(r, pe, label='Dihydrogen Potential Energy')
plt.xlabel('Internuclear Distance (Å)')
plt.ylabel('Potential Energy (eV)')
plt.title('Dihydrogen Potential Energy Curve')
plt.legend()
plt.grid(True)

# Show the plot
plt.show()