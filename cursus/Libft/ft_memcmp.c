/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebachill <ebachill@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 17:49:22 by ebachill          #+#    #+#             */
/*   Updated: 2023/04/21 17:55:36 by ebachill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	const unsigned char	*s1 = str1;
	const unsigned char	*s2 = str2;

	while (n--)
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}
	return (0);
}

/*int main()
{
    char str1[] = "Hola mundo!";
    char str2[] = "Hola amigos!";
    int result = ft_memcmp(str1, str2, 5);
    printf("El resultado es: %d\n", result);
    return 0;
}

la función memcmp en C compara los primeros n bytes del bloque de memoria 
apuntado por s1 con los primeros n bytes del bloque de memoria apuntado por s2. 
Esta función devuelve un valor entero que indica la relación entre los bloques 
de memoria comparados.
Si los bloques son iguales, memcmp devuelve 0. Si s1 es menor que s2,
memcmp devuelve un valor negativo. Si s1 es mayor que s2, memcmp devuelve 
un valor positivo. La magnitud de este valor indica la diferencia entre los 
bloques de memoria.

En este código, la función ft_memcmp recibe dos punteros a memoria str1 y str2 
que apuntan a dos bloques de memoria de tamaño n y devuelve un valor entero que 
indica la relación entre los contenidos de los dos bloques de memoria.
Dentro de la función, los punteros a memoria s1 y s2 son inicializados con 
los valores de los punteros str1 y str2, respectivamente. Luego, en un bucle 
while, se comparan los contenidos de los dos bloques de memoria hasta que se 
hayan comparado n bytes o se encuentre una diferencia.
Si se encuentra una diferencia, se devuelve la diferencia entre los contenidos
de los dos bloques de memoria en esa posición. Si no se encuentra ninguna
diferencia después de comparar todos los bytes, se devuelve 0.

En el main, se declara y se inicializa dos cadenas de caracteres str1 y str2,
se llama a la función ft_memcmp para comparar los primeros 5 caracteres de
ambas cadenas y se imprime el resultado.

`const unsigned char` es un tipo de dato en C que se refiere a una variable 
que no se puede modificar una vez que se ha inicializado y que tiene un rango 
de valores de 0 a 255. 
La palabra clave `const` indica que el valor de la variable no se puede 
cambiar después de que se ha inicializado, mientras que `unsigned` especifica 
que el valor de la variable solo puede ser positivo o cero. `char` se refiere 
a un tipo de dato que ocupa 1 byte de memoria y se utiliza para almacenar 
caracteres ASCII. 
En conjunto, `const unsigned char` se utiliza comúnmente para definir 
variables que representan constantes o valores que no deben ser modificados 
en una función o programa, como las claves de cifrado o valores de configuración 
de hardware.
En el código anterior, se utiliza `const unsigned char` para asegurarse de 
que el puntero de la memoria no sea modificado durante la ejecución de la 
función `memcmp`. Al declarar los parámetros de la función como `const`, 
se indica que no se modificará el contenido apuntado por el puntero pasado 
como argumento en la función. Al usar `unsigned char`, se asegura que se 
compararán los bytes individuales en lugar de tratarlos como números con signo.
Esta es una buena práctica de programación defensiva que evita errores 
accidentales en la manipulación de la memoria. Además, también ayuda al 
compilador a realizar ciertas optimizaciones al programar y al hacer 
comparaciones de bytes individuales.
*/