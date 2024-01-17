/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsalaber <jsalaber@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 09:20:24 by junesalaber       #+#    #+#             */
/*   Updated: 2024/01/17 10:36:36 by jsalaber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	main(void)
{
	int		fd;
	char	*lines;
	int		count;

	count = 0;
	fd = open("prueba.txt", O_RDONLY);
	if (fd < 0)
	{
		printf("Error al abrir el archivo\n");
		return (1);
	}
	while ((lines = get_next_line(fd)) != NULL)
	{
    	count++;
   	 	if (lines && lines[0] != '\0')
		 {
      		printf("%d: %s", count, lines);
       		free(lines);
    	}
		else
		{
    		printf("Línea vacía o error al leer línea\n");
      		free(lines);
      		break;
    	}
	}
	close (fd);
	return (0);
}
