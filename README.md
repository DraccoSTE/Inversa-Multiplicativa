# Inversa-Multiplicativa

El algoritmo presentado nos ayuda a calcular la inversa multiplicativa de un numero n en un modulo mod, aplicando primero el algoritmo de Euclides extendido, el cual en este caso se ha realizado utlizando la libreria vector de C++, gracias a la cual podemos almacenar los datos en un mismo vector, con lo cual podemos calcular los valores de la ecuacion diofantica "gcd(a;b) = ax + by", donde teniendo a es el numero y b el modulo, hallaremos el gcd de estas dos y los valores de x e y respectivamente, los cuales seran almacenados dentro de nuestro vector resultante.
Posteriormente tendremos que comprobar si el gcd de los n y mod es igual a 1, lo cual tambien significa que son primos, si esto es verdad el valor de x de la ecuacion diofantica almacenado en el vector es nuestra inversa
Finalmente, si el gcd de n y mod no es 1 se dice que nuestro numero no tiene inversa en mod
