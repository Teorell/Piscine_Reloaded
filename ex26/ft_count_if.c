/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsandor- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 15:30:57 by lsandor-          #+#    #+#             */
/*   Updated: 2018/11/20 15:38:45 by lsandor-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int (*f)(char*))
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (tab[i] != 0)
	{
		if (f(tab[i]) == 1)
			j++;
		i++;
	}
	return (j);
}