/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebachill <ebachill@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 17:49:30 by ebachill          #+#    #+#             */
/*   Updated: 2023/04/25 19:18:21 by ebachill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	uc1;
	unsigned char	uc2;

	while (n-- > 0)
	{
		uc1 = (unsigned char)*s1++;
		uc2 = (unsigned char)*s2++;
		if (uc1 != uc2)
			return (uc1 - uc2);
		if (uc1 == '\0')
			return (0);
	}
	return (0);
}

/*
int	main(void)
{
	char s1[] = "Hola Mundo";
	char s2[] = "Hola Amigos";
	size_t n = 4;
	int result = ft_strncmp(s1, s2, n);
	
	if (result < 0)
	{
		printf("'%s' es menor que '%s' en los primeros %zu caracteres.\n", s1, s2, n);
	}
	else if (result > 0)
	{
		printf("'%s' es mayor que '%s' en los primeros %zu caracteres.\n", s1, s2, n);
	}
	else
	{
		printf("'%s' es igual a '%s' en los primeros %zu caracteres.\n", s1, s2, n);
	}

	return (0);
}
*/
/*
`%zu` es un especificador de formato utilizado en la función `printf` en C 
para imprimir valores de tipo `size_t`. `size_t` es un tipo de datos sin signo 
utilizado para representar tamaños de objetos en memoria. Es una buena práctica 
utilizar `%zu` para imprimir valores de tipo `size_t` para garantizar que se 
formatee correctamente en todas las plataformas.

El problema con este código es que si los dos argumentos son iguales 
y n es mayor que la longitud de la cadena más uno, entonces el ciclo 
while se ejecutará una vez más de lo necesario, comparando el carácter 
nulo y decrementando n a cero, lo que resultará en un valor de retorno 
no deseado. Además, el valor de retorno si las cadenas son iguales y 
n es menor que la longitud de la cadena, es incorrecto ya que no se 
compara la longitud de ambas cadenas.
Para solucionar estos problemas, se puede agregar una comprobación 
adicional para verificar si los caracteres actuales son iguales y 
si n es mayor que cero antes de continuar con el ciclo. También se 
puede agregar una verificación para comparar la longitud de ambas 
cadenas y devolver el valor correspondiente.

Los errores indican que hay algunos problemas en el código:
El primer error indica que la diferencia entre los caracteres no se está 
convirtiendo en unsigned char. Esto puede ser un problema cuando se compara 
con caracteres con el bit más alto establecido, ya que el resultado podría 
ser un número negativo en lugar del valor correcto.
El segundo error indica que el código no funciona con caracteres no-ASCII, 
lo que significa que no puede manejar correctamente caracteres multibyte o 
caracteres fuera del conjunto de caracteres ASCII de 7 bits.
Los dos últimos errores sugieren que el código no está manejando 
adecuadamente los parámetros nulos. Aunque esto no causa un fallo en el código, 
es importante manejar los casos en que los parámetros son nulos.
Para solucionar los errores, se puede hacer lo siguiente:
Convertir la diferencia de caracteres en unsigned char.
Utilizar una función como memcmp en lugar de comparar cada caracter 
para manejar correctamente los caracteres multibyte y no-ASCII.
Añadir una comprobación para los parámetros nulos para evitar que se 
produzcan fallos.
*/
