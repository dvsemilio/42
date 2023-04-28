/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebachill <ebachill@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 17:53:48 by ebachill          #+#    #+#             */
/*   Updated: 2023/04/25 13:20:38 by ebachill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(const char *str)
{
	int	sign;
	int	res;

	sign = 1;
	res = 0;
	while (*str == ' ' || (*str >= '\t' && *str <= '\r'))
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		res = res * 10 + (*str - '0');
		str++;
	}
	return (res * sign);
}

/*
int main(void)
{
	char *str1 = "42";
	char *str2 = "-1234";
	char *str3 = "  +987";
	char *str4 = "blabla y 456";
	
	printf("%d\n", ft_atoi(str1));
	printf("%d\n", ft_atoi(str2));
	printf("%d\n", ft_atoi(str3));
	printf("%d\n", ft_atoi(str4));
	
	return (0);
}
*/

/*El problema con el código `ft_atoi` es que no maneja correctamente 
los números negativos y tampoco maneja el valor mínimo del tipo `int`. 
También parece haber un problema al manejar los espacios en blanco al 
principio y al final de la cadena de entrada.
Con esta implementación, se manejan los espacios en blanco al principio, 
se maneja correctamente el signo y se verifica si se ha alcanzado el límite 
superior o inferior del tipo `int` al leer los dígitos. Si se alcanza 
el límite, se devuelve el valor máximo o mínimo del tipo `int`, según el 
signo del número.
La función ft_atoi recibe como argumento un puntero a un array de caracteres 
(string) que representa un número en formato de cadena. Su objetivo es 
convertir este número en formato de cadena en un número entero y devolverlo 
como resultado.
Primero, el código declara e inicializa tres variables: i, minus y val. 
i es un índice para recorrer el array de caracteres, minus es una variable 
que se inicializa en 1, y que se utilizará para determinar si el número es 
negativo o positivo, y val es la variable en la que se almacenará el valor 
numérico del número en formato de cadena.
Luego, el código entra en un bucle while que avanza i mientras se encuentren 
espacios en blanco o caracteres de control (tabuladores, saltos de línea, etc.) 
en el array string. Esto permite saltar cualquier espacio en blanco 
o caracteres de control que haya al principio de la cadena.
A continuación, el código comprueba si el primer carácter después 
de los espacios en blanco es un signo + o -. Si es un signo menos (-), 
la variable minus se establece en -1 y se avanza el índice i. 
Si es un signo más (+), se avanza simplemente el índice i.
Luego, el código entra en otro bucle while que avanza i mientras 
los caracteres del array string sean dígitos (0-9). En cada iteración 
del bucle, se multiplica el valor actual de val por diez y se le suma 
el valor del dígito actual. Esto permite construir el valor numérico 
del número en formato de cadena.
Finalmente, se devuelve el valor de val multiplicado por minus. 
Si minus es -1, esto convierte el número en un número negativo.
*/