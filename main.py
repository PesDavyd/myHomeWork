import matplotlib.pyplot as plt
import math
from math import radians

x = []
y = []

for i in range(722):
    x.append(i)

for i in range(180):
    temp = math.sin(radians(i))
    y.append(temp)



i = len(y) - 1
y.append(float(0))
while i >= 0:
    y.append(-y[i])
    i -= 1


size = len(y)//2
temp = y[-1:size:]
y += temp

for i in range(len(y)):
    if abs(y[i]) == 1.2246467991473532e-16:
        y[i] = float(0)

plt.plot(x, y*2)
plt.grid()
plt.title('sin(x)')
plt.show()