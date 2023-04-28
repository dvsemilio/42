/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebachill <ebachill@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 13:23:55 by ebachill          #+#    #+#             */
/*   Updated: 2023/04/28 13:50:10 by ebachill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/*#include "libft.h"
#include <fcntl.h>

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

    close(fd);
    return 0;
}
*/
/*La constante `STDOUT_FILENO` está definida en la cabecera `unistd.h`. 
La inclusión de la cabecera `fcntl.h` es necesaria para definir la constante 
`O_CREAT`, que se utiliza para especificar que se debe crear el archivo si no 
existe cuando se abre en modo de escritura.
Este es un programa que escribe la palabra "Hello" en un archivo llamado 
"output.txt", usando la función `ft_putchar_fd`.
1. Incluimos las librerías `libft.h` y `fcntl.h`.
2. Definimos la función `main`.
3. Creamos una variable `fd` que será el file descriptor del archivo 
que queremos abrir, y la inicializamos con la función `open`. 
Esta función toma tres argumentos: el nombre del archivo a abrir, 
una serie de flags que indican el modo en el que se abrirá el archivo 
(en este caso, "O_WRONLY" para escritura, "O_CREAT" para crear el archivo 
si no existe, y "O_TRUNC" para borrar su contenido si ya existe), 
y un tercer argumento que indica los permisos que se le dan al archivo. 
En este caso, 0644 significa que el archivo tendrá permisos de lectura y 
escritura para el usuario que lo creó, y solo 
permisos de lectura para los demás.
4. Verificamos si la apertura del archivo fue exitosa. Si no lo fue, 
imprimimos un mensaje de error usando la función `ft_putstr_fd` y 
cerramos el programa con un código de error 1.
5. Escribimos cada letra de la palabra "Hello" en el archivo, 
usando la función `ft_putchar_fd`.
6. Cerramos el archivo con la función `close`.
7. Retornamos 0 para indicar que el programa terminó correctamente.
`STDERR_FILENO` es una macro definida en la biblioteca estándar `unistd.h` 
que representa el número de descriptor de archivo asociado con la salida 
de error estándar (por lo general, la consola o el terminal). En sistemas 
POSIX, los tres descriptores de archivo estándar son:
- `STDIN_FILENO` (0): entrada estándar
- `STDOUT_FILENO` (1): salida estándar
- `STDERR_FILENO` (2): salida de error estándar
`ft_putstr_fd` es una función que escribe una cadena de caracteres en un 
descriptor de archivo dado. En este caso, se está usando `STDERR_FILENO` 
como descriptor de archivo, por lo que el mensaje de error "Error: failed 
to open file." se escribirá en la salida de error estándar en lugar de la 
salida estándar.
POSIX (Portable Operating System Interface) es un conjunto de estándares 
de programación y sistemas operativos que especifican una interfaz común 
para la compatibilidad entre sistemas operativos UNIX y otras variantes 
de sistemas operativos similares. El objetivo de POSIX es establecer un 
conjunto de estándares que permitan a los programas escritos en diferentes 
sistemas operativos ser compatibles entre sí y portables entre plataformas. 
Esto significa que el mismo programa POSIX se puede ejecutar en diferentes 
sistemas operativos sin necesidad de reescribir el código.
*/