/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebachill <ebachill@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 16:06:42 by ebachill          #+#    #+#             */
/*   Updated: 2023/04/21 13:15:26 by ebachill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_isalnum(int n)
{
	return ((isalpha (n)) || (isdigit (n)));
}

/*
int	main(void)
{
	int c;

	printf("Ingrese un caracter: ");
	c = getchar();

	if (ft_isalnum(c))
		printf("El caracter ingresado es alfanumérico.\n");
	else
		printf("El caracter ingresado no es alfanumérico.\n");

	return (0);
}
En este programa, se utiliza la función getchar() para obtener un caracter
 del usuario, se llama a la función ft_isalnum() para determinar si el caracter
  ingresado es alfanumérico o no, y se imprime un mensaje en consecuencia.

que es getchar?
getchar es una función de la biblioteca estándar de C definida en <stdio.h>.
 Permite leer un solo carácter del flujo de entrada estándar 
 (normalmente el teclado) y devuelve su valor como un entero. 
 Si se produce un error, se devuelve EOF (End Of File).

se puede hacer sin usar getchar?
Sí, existen otras formas de recibir entrada del usuario sin usar la función 
getchar() en C. Algunas opciones son:

Usar la función scanf(), la cual permite leer diferentes tipos de datos 
ingresados por el usuario, incluyendo caracteres. Por ejemplo:
char c;
scanf("%c", &c);
Usar la función fgets(), la cual permite leer una línea completa de entrada 
de usuario y almacenarla en un array de caracteres. Por ejemplo:
char buffer[256];
fgets(buffer, 256, stdin);
Usar la función gets(), la cual permite leer una línea completa de entrada 
de usuario y almacenarla en un array de caracteres. Sin embargo, 
es importante tener en cuenta que esta función es considerada insegura 
debido a que no tiene un límite de tamaño para el buffer, 
lo que puede resultar en vulnerabilidades de seguridad en el programa. 
Por ejemplo:
char buffer[256];
gets(buffer);
Es importante tener en cuenta que todas estas funciones tienen diferentes
 formas de uso y características, por lo que se recomienda leer la documentación
  oficial y tener precaución al utilizarlas para evitar errores y 
  vulnerabilidades en el programa.
*/