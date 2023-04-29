/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebachill <ebachill@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 20:57:16 by ebachill          #+#    #+#             */
/*   Updated: 2023/04/28 21:09:17 by ebachill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <fcntl.h>
#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (!s)
		return ;
	write(fd, s, strlen(s));
	write(fd, "\n", 1);
}

/*int main(void)
{
    int fd = open("output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
    if (fd == -1)
    {
        ft_putstr_fd("Error: failed to open file.\n", STDERR_FILENO);
        return 1;
    }

    ft_putendl_fd("Hello, world!", fd);

    close(fd);
    return 0;
}*/

/*
codigo:
Este código define la función `ft_putendl_fd` que es usada 
para escribir una cadena de caracteres en un archivo descriptor 
de archivo especificado, seguida de un salto de línea. 
- La función comienza con una declaración condicional `if (!s)` que 
verifica si la cadena de entrada está vacía o no. Si la cadena está 
vacía, la función termina inmediatamente con `return`.
- En caso contrario, se llama a la función `write()` 
con los siguientes argumentos:
    - `fd`: el archivo descriptor proporcionado en el 
	parámetro de entrada de la función.
    - `s`: la cadena de caracteres proporcionada en el parámetro 
	de entrada de la función.
    - `strlen(s)`: el número de bytes de la cadena de caracteres `s`, 
	calculado utilizando la función `strlen()` de la biblioteca estándar de C.
- Luego, la función llama a `write()` de nuevo, pasando `fd`, 
el carácter de salto de línea `"\n"`, y `1` como argumentos para 
escribir el salto de línea en el archivo descriptor de archivo.
En resumen, la función toma una cadena de caracteres y un archivo descriptor 
de archivo, escribe la cadena de caracteres en el archivo descriptor 
de archivo seguida de un salto de línea, y luego devuelve nada.
main:
En este ejemplo, se abre el archivo "output.txt" en modo de escritura, 
se verifica si se abrió correctamente y luego se llama a la función 
ft_putendl_fd para escribir la cadena "Hello, world!" en el archivo 
seguida de un salto de línea. Finalmente, se cierra el archivo y se 
devuelve el valor 0 para indicar que el programa terminó correctamente.
#include "libft.h"
#include <fcntl.h>
int main(void)
{
Se inicia el programa principal. Se incluye la librería personalizada 
`libft.h` y la librería `fcntl.h` que contiene definiciones de constantes 
y funciones para la manipulación de archivos.
    int fd = open("output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
Se abre o crea el archivo `output.txt` en modo escritura (`O_WRONLY`) y 
se le asigna el descriptor de archivo `fd`. Si el archivo ya existe, su 
contenido se truncará (`O_TRUNC`). El tercer argumento `0644` establece 
los permisos del archivo.
    if (fd == -1)
    {
        ft_putstr_fd("Error: failed to open file.\n", STDERR_FILENO);
        return 1;
    }
Si la apertura del archivo falla, se imprime el mensaje de error en 
la salida estándar de error (`STDERR_FILENO`) utilizando la función 
`ft_putstr_fd()` y se sale del programa con un código de error (`1`).
    ft_putchar_fd('H', fd);
    ft_putchar_fd('e', fd);
    ft_putchar_fd('l', fd);
    ft_putchar_fd('l', fd);
    ft_putchar_fd('o', fd);
Se escriben caracteres individuales en el archivo utilizando 
la función `ft_putchar_fd()`.
    ft_putendl_fd("World", fd);
Se escribe la cadena de caracteres `"World"` en el archivo 
utilizando la función `ft_putendl_fd()`, la cual añade un salto 
de línea al final de la cadena.
    close(fd);
    return 0;
}
Se cierra el archivo utilizando la función `close()` 
y se sale del programa con un código de éxito (`0`).*/