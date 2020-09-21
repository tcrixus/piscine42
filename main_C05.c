/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thtanguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 10:49:02 by thtanguy          #+#    #+#             */
/*   Updated: 2020/09/21 11:07:47 by thtanguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int ft_iterative_factorial(int nb);
int ft_recursive_factorial(int nb);
int ft_iterative_power(int nb, int power);
int ft_recursive_power(int nb, int power);
int	ft_fibonacci(int index);
int	ft_sqrt(int nb);
int	ft_is_prime(int nb);
int	ft_find_next_prime(int nb);

#include <stdio.h>
#include <stdlib.h>
int	main(int argc, char **argv)
{
	int arg;
	int arg2;

	if (argc == 4)
		arg2 = atoi(argv[3]);
	arg = atoi(argv[1]);
	if (arg == 0)
		printf("%d\n", ft_iterative_factorial(atoi(argv[2])));
	else if (arg == 1)
		printf("%d\n", ft_recursive_factorial(atoi(argv[2])));
	else if (arg == 2)
		printf("%d\n", ft_iterative_power(atoi(argv[2]), arg2));
	else if (arg == 3)
		printf("%d\n", ft_recursive_power(atoi(argv[2]), arg2));
	else if (arg == 4)
		printf("%d\n", ft_fibonacci(atoi(argv[2])));
	else if (arg == 5)
		printf("%d\n", ft_sqrt(atoi(argv[2])));
	else if (arg == 6)
		printf("%d\n", ft_is_prime(atoi(argv[2])));
	else if (arg == 7)
		printf("%d\n", ft_find_next_prime(atoi(argv[2])));
	return (argc);
}
