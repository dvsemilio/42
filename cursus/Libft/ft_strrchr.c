/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebachill <ebachill@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 17:39:02 by ebachill          #+#    #+#             */
/*   Updated: 2023/04/25 19:47:01 by ebachill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = ft_strlen(str);
	c = (char)c;
	while (i >= 0)
	{
		if (str[i] == c)
			return ((char *)&str[i]);
		i--;
	}
	return (NULL);
}

/*int	main(void)
{
	char str1[] = "hello";
	char str2[] = "world";
	char str3[] = "hello world";
	int c = 'l';

	printf("Resultado de ft_strrchr: %s\n", ft_strrchr(str1, c));
	printf("Resultado de strrchr: %s\n", strrchr(str1, c));

	printf("Resultado de ft_strrchr: %s\n", ft_strrchr(str2, c));
	printf("Resultado de strrchr: %s\n", strrchr(str2, c));

	printf("Resultado de ft_strrchr: %s\n", ft_strrchr(str3, c));
	printf("Resultado de strrchr: %s\n", strrchr(str3, c));

	return (0);
}*/

/*El problema en este código es que no considera el caso en que el carácter 
buscado no esté presente en la cadena. En este caso, se devuelve un puntero 
nulo, lo cual está bien. Sin embargo, si la cadena es una cadena vacía, el 
programa intentará acceder a `str[-1]` en la segunda `while` loop, lo que 
resultará en un comportamiento indefinido y posiblemente en un fallo de 
segmentación.
Para arreglar el código de ft_strrchr, se debe asegurar que la variable 
i se inicialice con el valor de la longitud de la cadena str, menos uno, 
y no cero. Además, para evitar errores de puntero, la función debe devolver 
NULL si se recibe un puntero nulo como argumento
Aquí se usa la función ft_strlen para obtener la longitud de la cadena 
y se verifica que str no sea nulo antes de su uso. Además, se utiliza 
char en lugar de unsigned char para que la función también pueda manejar 
caracteres con signo.
Se define la función ft_strrchr que toma una cadena str y un entero c. 
La función busca la última aparición del carácter c en la cadena str. 
Se define una variable i que se usará para recorrer la cadena.
La variable i se inicializa en cero. Luego, un bucle while se ejecuta 
hasta que se alcance el final de la cadena str (el carácter nulo '\0'). 
Cada vez que se itera, i se incrementa en uno.
Una vez que se ha encontrado el final de la cadena, otro bucle while 
se ejecuta hasta que i sea menor o igual a cero. En cada iteración, 
se verifica si el carácter en la posición actual (str[i]) es igual 
al carácter buscado c. Si es así, se devuelve un puntero a esa ubicación 
en la cadena str. Si no, i se decrementa en uno y se continúa con la 
siguiente iteración.
Finalmente, si no se encuentra el carácter c en la cadena str, 
se devuelve un puntero nulo (NULL).
En general, este código parece correcto. Sin embargo, hay un problema 
potencial con el uso de `ft_strlen`. Si esa función tiene un problema, 
también lo tendrá esta función. Además, si el parámetro `c` es '\0', 
el código podría devolver una posición incorrecta ya que el bucle sigue 
hasta que encuentra c, pero '\0' es un carácter válido en una cadena y 
podría ser el último carácter.
Para solucionar estos problemas, debes agregar una condición para verificar 
si el parámetro `c` es '\0' y devolver el final de la cadena si es el caso.
Los errores indican que tu función `ft_strrchr` no está retornando los 
punteros esperados en las pruebas.
El primer error indica que al pasarle un puntero nulo 
como primer parámetro, la función debería retornar un puntero nulo, 
pero en tu implementación está retornando un puntero no nulo. 
Esto puede deberse a que no estás manejando correctamente los casos 
en que se pasan punteros nulos a la función.
El segundo error indica que la función no está retornando 
correctamente el puntero correspondiente al último carácter 'e' 
en la cadena "teste". Es posible que estés teniendo problemas con 
la indexación de los caracteres de la cadena.
El tercer error indica que al pasarle una longitud `n` de 1024, 
la función debería retornar un puntero al carácter nulo al final 
de la cadena, pero en tu implementación está retornando un puntero nulo. 
Esto puede deberse a que no estás manejando correctamente los casos en 
que la longitud `n` es mayor que la longitud de la cadena.
Te recomiendo revisar tu implementación y verificar que estás manejando 
correctamente los casos de punteros nulos y longitudes `n` mayores que 
la longitud de la cadena. Además, verifica que estás indexando 
correctamente los caracteres de la cadena.
Los errores que estás viendo en tus pruebas son debidos a que estás 
devolviendo NULL en vez de devolver un puntero que apunte a la última 
ocurrencia del carácter buscado.
Para corregirlo, deberías modificar el condicional que chequea 
la existencia de str para evitar que se produzcan errores de 
segmentación si el parámetro str es NULL. Además, deberías asegurarte 
de que el puntero que estás devolviendo apunta al carácter buscado.
hay que convertir c en char, si es mayor de 256 no puede castearlo de forma
normal, por eso hay que hacerlo anticipadamente en este caso.
*/