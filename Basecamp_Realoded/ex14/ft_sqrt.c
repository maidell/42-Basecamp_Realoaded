/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaidel- <mmaidel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 22:50:06 by mmaidel-          #+#    #+#             */
/*   Updated: 2022/05/27 23:42:08 by mmaidel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	squirtle;

	squirtle = 0;
	while (nb > (squirtle * squirtle) && squirtle < 46340)
		squirtle++;
	if (squirtle * squirtle == nb)
		return (squirtle);
	return (0);
}
