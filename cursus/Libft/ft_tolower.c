/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebachill <ebachill@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 17:09:39 by ebachill          #+#    #+#             */
/*   Updated: 2023/04/24 16:34:46 by ebachill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int n)
{
	if (n >= 'A' && n <= 'Z' )
		return (n + 32);
	else
		return (n);
}

/*int main() {
    char letra_mayuscula = 'F';
    char letra_minuscula = ft_tolower(letra_mayuscula);

    printf("La letra %c en minúscula es %c\n", letra_mayuscula, letra_minuscula);

    return 0;
}*/