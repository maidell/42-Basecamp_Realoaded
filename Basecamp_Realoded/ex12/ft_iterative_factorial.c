/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaidel- <mmaidel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 22:44:02 by mmaidel-          #+#    #+#             */
/*   Updated: 2022/05/27 23:15:16 by mmaidel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	start;
	int	finish;

	start = 1;
	finish = 1;
	if (nb < 0 || nb >= 13)
		return (0);
	while (start <= nb)
	{
		finish *= start;
		start++;
	}
	return (finish);
}
