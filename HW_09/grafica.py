import matplotlib.pyplot as plt
import numpy as np
datos = np.genfromtxt('datos.txt', delimiter=',')
f = plt.figure(figsize=(11,8.5))
plt.title("Altura de la piedra en el tiempo")
plt.ylabel("Altura [m]")
plt.xlabel("Tiempo [s]")
plt.xlim(left=0)
plt.ylim(bottom=0, top=np.ceil(np.max(datos[:,1])/5)*5)
plt.grid(True)
plt.xticks(np.arange(0, np.ceil(datos[-1][0]), 0.5))
plt.yticks(np.arange(0, np.ceil(np.max(datos[:,1])/5)*5, 2))
plt.plot(datos[:,0], datos[:,1])
f.savefig("grafico.pdf", bbox_inches='tight')