/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebachill <ebachill@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 21:10:43 by ebachill          #+#    #+#             */
/*   Updated: 2023/04/28 21:20:59 by ebachill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	char	digit;

	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		n *= -1;
	}
	if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
	}
	digit = n % 10 + '0';
	write(fd, &digit, 1);
}

/*
int		main(void)
{
	int		nbr;

	nbr = -1234;
	ft_putnbr_fd(nbr, STDOUT_FILENO);
	return (0);
}
*/
/*Esta función ft_putnbr_fd recibe como parámetros un entero n y un 
file descriptor fd, y su tarea es escribir el número n en el file 
descriptor dado.
La función comienza con la declaración de una variable 
de tipo char llamada digit.
Después, se hace un chequeo especial para el caso en que el número 
n sea igual a -2147483648, ya que esta condición no puede ser negada 
por un operador unario. Si este es el caso, se escribe directamente 
la cadena de caracteres "-2147483648" en el file descriptor dado y 
se retorna de la función.
Si el número n es negativo, se escribe un carácter "-" en el file 
descriptor y se cambia el signo de n para que sea positivo.
Si el número n es mayor a 9, se llama recursivamente a la función 
ft_putnbr_fd para imprimir el cociente de n / 10.
Se guarda el dígito actual de n en la variable digit, convirtiéndolo 
a su representación en caracteres con '0' + n % 10, y se escribe esta 
variable en el file descriptor.
La función termina.
Esta función recibe un número entero n y un file descriptor fd. 
El objetivo es escribir ese número en el file descriptor dado.
La función comienza con una verificación especial para el caso en 
que n es igual a -2147483648. Este es el valor mínimo para un entero 
de 32 bits y no se puede almacenar en un entero sin signo. En este caso, 
la función simplemente escribe el número como una cadena de caracteres 
"-2147483648" en el file descriptor dado utilizando la función ft_putstr_fd.
Luego, la función comprueba si n es negativo. Si es así, se escribe un signo 
negativo en el file descriptor y el valor absoluto 
de n se asigna a la variable n.
A continuación, se comprueba si n tiene más de un dígito. Si es así, 
se llama a la función ft_putnbr_fd recursivamente, pasando n / 10 como 
el nuevo valor de n. Esto imprimirá los dígitos de n de derecha a izquierda, 
ya que se llama a la función recursivamente antes de escribir el último dígito.
Finalmente, se escribe el último dígito de n en el file descriptor. 
Esto se hace mediante la función ft_putchar_fd, que toma un carácter 
como argumento y lo escribe en el file descriptor dado. El carácter 
a escribir se obtiene mediante la expresión n % 10 + '0', que convierte 
el dígito numérico en su representación de carácter ASCII.
*/
/*En este ejemplo, primero declaramos la función ft_putnbr_fd en la cabecera 
del archivo unistd.h, luego declaramos la función main, que define una 
variable nbr y la inicializa con un número negativo. Luego llamamos a la 
función ft_putnbr_fd y pasamos nbr como argumento y el file descriptor 
estándar de salida STDOUT_FILENO. Finalmente, la función main devuelve 0 
como un indicador de que el programa ha terminado sin errores.
Se define la función main con tipo de retorno int y sin parámetros.
Se declara la variable nbr de tipo entero y se le asigna el valor -1234.
Se llama a la función ft_putnbr_fd pasando nbr como argumento y STDOUT_FILENO 
como segundo argumento. STDOUT_FILENO es un descriptor de archivo que se 
refiere a la salida estándar (por defecto es la pantalla 
en la mayoría de los sistemas).
La función main devuelve 0 para indicar que el 
programa se ha ejecutado correctamente.
En resumen, este main llama a la función ft_putnbr_fd para imprimir 
el número -1234 en la salida estándar.
*/