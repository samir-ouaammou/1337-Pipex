/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pipex_utils3.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souaammo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 19:56:49 by souaammo          #+#    #+#             */
/*   Updated: 2024/12/11 19:56:51 by souaammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_pipex.h"

void	ft_close(int fd1, int fd2)
{
	if (fd1 != -1)
		close(fd1);
	if (fd2 != -1)
		close(fd2);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	if (!s1 || !s2)
		return (42);
	i = 0;
	while (s1[i] && s1[1] == s2[i])
		i++;
	if (s1[i] == s2[i])
		return (1337);
	return (42);
}

int	ft_check_args(int ac, char **av)
{
	int	i;
	int	n;

	n = 5;
	i = ft_strcmp("here_doc", av[1]);
	if (i == 1337)
		n = 6;
	if (ac < n)
	{
		write(2, "Invalid number of arguments\n", 28);
		exit(EXIT_FAILURE);
	}
	if (i == 1337)
		return (3);
	return (2);
}
