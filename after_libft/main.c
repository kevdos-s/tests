/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevdos-s <kevdos-s@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 02:10:32 by kevdos-s          #+#    #+#             */
/*   Updated: 2026/04/01 02:30:35 by kevdos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"
#include <fcntl.h>

int main()
{
	ft_printf("test\n");
	char *line;

	int file_descriptor = open("test.txt", O_RDONLY);

	while (line = get_next_line(file_descriptor))
	{
		ft_printf("%s", line);
		free(line);
	}

}
