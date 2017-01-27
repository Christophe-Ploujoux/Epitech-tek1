#!/usr/bin/python

import matplotlib.pyplot as plt
import numpy as np
import sys
import math
import array as array

def reverse_tab(CH):
	CH2 = ""
	for lettre in reversed(CH):
		CH2 += lettre
	return CH2
#algo de horner
def horner(L, a):
	R = 0
	for k in range(0, len(L) + 1):
		R = R*a+L[k]
	return (R)

#partie 2 (2 arguments)
argv = sys.argv
if (len(argv) <= 1):
	print('I need more than one argument\n')
	sys.exit(1)
else:

	#TEST A METTRE (TEST ISNUMBER, NB ARG)

	#get param + atoi python like
	e = (map(int, (argv[1].split('|'))))
	a = map(int, (argv[2].split('|')))

        arg1 = e[::-1]
        arg2 = a[::-1]

	#creation des polynome
	P = np.poly1d(arg1, variable='x')
	P2 = np.poly1d(arg2, variable='x')

	#debug
        sys.stdout.write('composant 1 : \n\n')
	print(P)
        i = 0;
        while (i < len(argv[1]) * 3 - 4):
                sys.stdout.write('_')
                i += 1
        sys.stdout.write('\n')
	print (P2)

	#deuxieme partie
        tabx = []
        i = -10
        while (i < 10):
                tabx.append(i)
                i += 0.001
	taby, taby2 = [], []
	i = 0
	while (i < len(tabx)):
		taby.append(horner(P, tabx[i]))
		taby2.append(horner(P2, tabx[i]))
		i += 1
	tabf = []
	y = 0
	while (y < len(taby)):
		tabf.append(taby2[y]/taby[y])
		y += 1
	p1 = plt.plot(tabx,tabf, "b")

	plt.axis([-10, 10, -30, 30])
	plt.title("107 - Transfert")
	plt.ylabel("Frequence de sortie")
	plt.xlabel("Frequence d'entree")
	plt.show()
