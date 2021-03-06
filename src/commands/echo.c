/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   echo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fporto <fporto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 07:02:27 by fporto            #+#    #+#             */
/*   Updated: 2022/04/25 21:16:23 by fporto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void	echo(void)
{
	int		n_flag;
	char	*echo;
	size_t	i;

	n_flag = 0;
	i = 0;
	while (g_global.input[i] && g_global.input[i] != ' ')
		i++;
	if (!ft_strcmp(g_global.argv[1], "-n"))
	{
		n_flag = 1;
		i += 3;
	}
	echo = ft_strdup(g_global.input + i + 1);
	if (!echo)
		exit(EXIT_FAILURE);
	printf("%s", echo);
	if (!n_flag)
		printf("\n");
	free(echo);
}
