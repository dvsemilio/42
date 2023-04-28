/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebachill <ebachill@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 17:50:09 by ebachill          #+#    #+#             */
/*   Updated: 2023/04/28 18:19:02 by ebachill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
#include <fcntl.h>

#include <unistd.h>

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	while (*s)
	{
		if ((*s & 0x80) == 0x00)
			write(fd, s, 1);
		else if ((*s & 0xE0) == 0xC0)
		{
			write(fd, s, 2);
			s++;
		}
		else if ((*s & 0xF0) == 0xE0)
		{
			write(fd, s, 3);
			s += 2;
		}
		else if ((*s & 0xF8) == 0xF0)
		{
			write(fd, s, 4);
			s += 3;
		}
		else
			return ;
		s++;
	}
}

/*
int main(void)
{
    int fd = open("output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
    if (fd == -1)
    {
        ft_putstr_fd("Error: failed to open file.\n", STDERR_FILENO);
        return 1;
    }

    ft_putchar_fd('H', fd);
    ft_putchar_fd('e', fd);
    ft_putchar_fd('l', fd);
    ft_putchar_fd('l', fd);
    ft_putchar_fd('o', fd);

    ft_putstr_fd(" World!\n", fd);

    close(fd);
    return 0;
}
*/

/*
Un caracter Unicode es un elemento básico de un conjunto de caracteres 
universal que puede representar la mayoría de los sistemas de escritura del 
mundo, así como también símbolos y caracteres especiales. Cada carácter 
Unicode se representa por un número único que se llama "punto de código". 
La mayoría de los puntos de código Unicode se escriben como números 
hexadecimales de cuatro dígitos precedidos por el prefijo "U+". 
Por ejemplo, el carácter "A" se representa en Unicode como U+0041 y 
el carácter "é" se representa como U+00E9. Los caracteres Unicode permiten 
a los programadores trabajar con textos en diferentes idiomas y sistemas 
de escritura de manera uniforme y coherente.
codigo:
1. La función recibe dos parámetros: un puntero a una cadena de caracteres 
y un entero que representa el file descriptor.
2. La primera comprobación que se hace es si el puntero a la cadena 
de caracteres es nulo, en cuyo caso se retorna sin hacer nada. 
Esta comprobación es importante para evitar errores al intentar 
acceder a un puntero nulo.
3. Luego se inicia un bucle while que se ejecutará mientras el 
puntero a la cadena de caracteres no apunte a un carácter nulo '\0'.
4. Dentro del bucle se hace una serie de comprobaciones para determinar 
si el carácter actual es un carácter ASCII o un carácter Unicode de varias bytes.
Esta comprobación se realiza mediante el uso de máscaras binarias.
Las máscaras binarias son patrones numéricos que se utilizan para aplicar 
operaciones lógicas bit a bit sobre números binarios. Una máscara binaria 
se compone de una serie de 0 y 1, y se utiliza para seleccionar y manipular 
un conjunto específico de bits dentro de un número binario. 
Por ejemplo, si queremos seleccionar el tercer bit de un número binario, 
podemos crear una máscara binaria con un 1 en la tercera posición y 0 
en todas las demás posiciones. Luego, aplicamos una operación AND bit 
a bit entre el número binario original y la máscara binaria para 
seleccionar solo el tercer bit.
Las máscaras binarias se utilizan comúnmente en programación para 
trabajar con valores binarios, como en la función `ft_putstr_fd` 
que utiliza máscaras binarias para identificar y escribir caracteres 
ASCII de longitud variable.
5. Si el carácter es ASCII, se envía directamente al file descriptor 
con un write de un byte.
6. Si el carácter es Unicode de dos bytes, se envían dos bytes al 
file descriptor y se avanza el puntero en una posición para saltar al 
siguiente carácter.
7. Si el carácter es Unicode de tres bytes, se envían tres bytes al file 
descriptor y se avanza el puntero en dos posiciones.
8. Si el carácter es Unicode de cuatro bytes, se envían cuatro bytes 
al file descriptor y se avanza el puntero en tres posiciones.
9. Si el carácter no se corresponde con ninguna de estas formas 
de codificación, se retorna sin hacer nada.
10. Al final de cada iteración del bucle se avanza el puntero 
al siguiente carácter.
11. Una vez terminado el bucle, la función finaliza sin devolver nada.
La línea `if ((*s & 0x80) == 0x00)` verifica si el primer bit más 
significativo (MSB) del carácter apuntado por `s` es 0. 
Aquí, `*s` es el carácter actual y `&` es el operador de bits "y" 
(AND) que aplica la máscara binaria `0x80` al carácter. La máscara 
binaria `0x80` es `1000 0000` en binario, lo que significa que aplica 
un 1 en el bit más significativo y 0 en los otros bits. 
Si el resultado de la operación `&` es igual a `0x00`, significa que 
el primer bit más significativo del carácter es 0. En otras palabras, 
el carácter es un carácter ASCII de 7 bits o un carácter nulo.
 En este caso, se escribe el carácter en el descriptor de archivo especificado.
El error "[fail]: your putstr_fd does not work with basic input" puede 
ocurrir si no estás escribiendo correctamente la cadena de caracteres 
en el descriptor de archivo proporcionado. Verifica que estás pasando 
correctamente el segundo argumento de la función `ft_putstr_fd` como el 
descriptor de archivo. Asegúrate de que estás pasando el número correcto 
de bytes de la cadena, es decir, su longitud, utilizando la función `strlen`.
El error "[fail]: your putstr_fd does not work with non ascii chars" 
puede ocurrir si la función `ft_putstr_fd` no está manejando correctamente 
los caracteres que no son ASCII. Para asegurarte de que tu función maneja 
correctamente estos caracteres, debes tener en cuenta que los caracteres no 
ASCII pueden requerir más de un byte para representarse. Puedes utilizar la 
función `write` para escribir los caracteres en el descriptor de archivo 
proporcionado, ya que esta función maneja correctamente los caracteres no ASCII.

void ft_putstr_fd(char *s, int fd)
- Se define una función llamada `ft_putstr_fd` que recibe dos argumentos:
  - `s`, un puntero a un caracter, que corresponde a la cadena que se desea 
  imprimir en el archivo.
  - `fd`, un entero que corresponde al descriptor de archivo en el que 
  se desea imprimir la cadena.
{
	if (!s)
		return ;
- Si la cadena `s` es nula, es decir, no tiene ningún valor asignado, 
entonces se termina la función usando la instrucción `return`. 
	while (*s)
	{
- Se inicia un bucle while que se ejecutará mientras `s` tenga un valor no nulo. 
Esto significa que el bucle se ejecutará mientras `s` no llegue al final de la 
cadena (carácter nulo).
		if ((*s & 0x80) == 0x00)
			write(fd, s, 1);
- Si el valor del primer byte de la cadena apuntada por `s` es menor que 
`0x80`, lo que significa que corresponde a un caracter ASCII, entonces se 
escribe el byte en el archivo utilizando la función `write`.
		else if ((*s & 0xE0) == 0xC0)
		{
			write(fd, s, 2);
			s++;
		}
- Si el valor del primer byte de la cadena apuntada por `s` tiene el formato 
`110xxxxx`, lo que significa que corresponde a un caracter Unicode de dos bytes, 
entonces se escriben los dos bytes en el archivo utilizando la función `write`, 
y se incrementa el puntero `s` en 1 byte para apuntar al siguiente caracter en 
la cadena.
		else if ((*s & 0xF0) == 0xE0)
		{
			write(fd, s, 3);
			s += 2;
		}
- Si el valor del primer byte de la cadena apuntada por `s` tiene el formato 
`1110xxxx`, lo que significa que corresponde a un caracter Unicode de tres 
bytes, entonces se escriben los tres bytes en el archivo utilizando la función 
`write`, y se incrementa el puntero `s` en 2 bytes para apuntar al siguiente 
caracter en la cadena.
		else if ((*s & 0xF8) == 0xF0)
		{
			write(fd, s, 4);
			s += 3;
		}
- Si el valor del primer byte de la cadena apuntada por `s` tiene el formato 
`11110xxx`, lo que significa que corresponde a un caracter Unicode de cuatro 
bytes, entonces se escriben los cuatro bytes en el archivo utilizando la 
función `write`, y se incrementa el puntero `s` en 3 bytes para apuntar 
al siguiente caracter en la cadena.
		else
			return ;
		s++;
	}
}
- Si el primer byte de la cadena apuntada por `s` no tiene ningún 
formato válido de Unicode, se sale del bucle y se termina la función 
usando `return`. En cualquier otro caso, se incrementa el puntero `s` 
en 1 byte para apuntar al siguiente caracter en la cadena.
main:
#include "libft.h": Se incluye la biblioteca de funciones de Libft 
para poder utilizar las funciones definidas en ella.
#include <fcntl.h>: Se incluye la biblioteca de funciones 
para operaciones de archivo.
int main(void): Función principal del programa.
int fd = open("output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);: Se abre 
un archivo llamado "output.txt" en modo escritura (O_WRONLY), 
si no existe se crea (O_CREAT) y si existe se trunca (O_TRUNC). 
El tercer argumento 0644 indica los permisos del archivo.
if (fd == -1) { ... }: Si la función open devuelve -1, significa que 
hubo un error al abrir el archivo y se muestra un mensaje de error en 
la salida de error estándar (STDERR_FILENO) con la función ft_putstr_fd. 
Luego se sale del programa con un valor de retorno de 1.
ft_putchar_fd('H', fd); ft_putchar_fd('e', fd); ft_putchar_fd('l', fd); 
ft_putchar_fd('l', fd); ft_putchar_fd('o', fd);: Se escribe en el archivo 
los caracteres 'H', 'e', 'l', 'l' y 'o' uno por uno utilizando 
la función ft_putchar_fd.
ft_putstr_fd(" World!\n", fd);: Se escribe en el archivo la cadena 
de caracteres " World!\n" utilizando la función ft_putstr_fd.
close(fd);: Se cierra el archivo con la función close.
return 0;: El programa termina correctamente con un valor de retorno de 0.
*/