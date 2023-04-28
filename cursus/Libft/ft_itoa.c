/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   ft_itoa.c										  :+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: ebachill <ebachill@student.42malaga.com	+#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2023/04/27 18:57:01 by ebachill		  #+#	#+#			 */
/*   Updated: 2023/04/27 19:19:06 by ebachill		 ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

static int	get_num_len(int n)
{
	int		len;
	long	num;

	len = 0;
	num = n;
	if (num == 0)
		return (1);
	if (num < 0)
	{
		num *= -1;
		len++;
	}
	while (num > 0)
	{
		num /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	long	num;

	num = n;
	len = get_num_len(n);
	str = (char *)malloc((len + 1) * sizeof(char));
	if (!(str))
		return (NULL);
	if (num < 0)
	{
		str[0] = '-';
		num *= -1;
	}
	str[len--] = '\0';
	while (num > 0)
	{
		str[len--] = (num % 10) + '0';
		num /= 10;
	}
	if (n == 0)
		str[len] = '0';
	return (str);
}

/*int	main(void)
{
	int		n;
	char	*str;

	n = 42;
	str = ft_itoa(n);
	printf("ft_itoa(%d) = %s\n", n, str);
	free(str);

	n = -123;
	str = ft_itoa(n);
	printf("ft_itoa(%d) = %s\n", n, str);
	free(str);

	n = 0;
	str = ft_itoa(n);
	printf("ft_itoa(%d) = %s\n", n, str);
	free(str);

	n = -2147483648;
	str = ft_itoa(n);
	printf("ft_itoa(%d) = %s\n", n, str);
	free(str);

	return (0);
}*/

/*main:
Primero, se declara una variable `n` con el valor del número a convertir 
a string, en este caso el número -123. 
Luego se llama a `ft_itoa` pasando como argumento `n` y 
se guarda el resultado en la variable `str`. Después se 
imprime `str` en la consola utilizando la función `printf` 
con el formato `"%s"`. El resultado esperado en este caso es 
la string "-123".
Luego se prueba con el número 0 y se espera obtener la string "0". 
Después se prueba con el número mínimo posible en una variable de tipo 
`int`, -2147483648, que debería dar como resultado la string "-2147483648". 
Finalmente, se libera la memoria utilizada por `str` y se retorna 0 
para indicar que el programa se ha ejecutado correctamente.

codigo:
Este código define una función llamada `ft_itoa` que toma un número entero 
`n` como argumento y devuelve una cadena de caracteres que representa ese 
número. La función comienza por definir una función auxiliar llamada 
`get_num_len` que se encarga de devolver la longitud de la cadena de 
caracteres necesaria para representar el número entero.
La función principal `ft_itoa` utiliza la función auxiliar `get_num_len` 
para obtener la longitud necesaria de la cadena de caracteres. 
Luego, se reserva suficiente espacio en memoria para almacenar 
la cadena de caracteres y se comprueba si la asignación de memoria 
ha tenido éxito.
A continuación, la función comprueba si el número es negativo, 
en cuyo caso se agrega un signo menos a la cadena de caracteres 
y se convierte el número en positivo para su posterior tratamiento. 
Luego, la función asigna el carácter nulo (`\0`) al final de la cadena 
de caracteres y comienza a llenar la cadena de caracteres con los 
dígitos del número en orden inverso.
Finalmente, si el número era cero, la función asigna el carácter 
`'0'` al inicio de la cadena de caracteres. La función devuelve 
un puntero a la cadena de caracteres resultante. Si falla la reserva 
de memoria, la función devuelve `NULL`.
*/