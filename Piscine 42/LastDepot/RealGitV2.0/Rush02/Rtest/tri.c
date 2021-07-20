/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tri.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbettini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 20:12:27 by jbettini          #+#    #+#             */
/*   Updated: 2021/06/22 17:54:09 by jbettini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
char	*ft_strcat(char **dest, char *src, int *i)
{
	int	k;

		k = 0;

		while(dest[k] != '\0')
			k++;

	while (src[*i] != '\n')
		{
			dest[k] = src[*i];
			k++;
			(*i)++;
		}
		dest[k] = '\0';
	return (dest);
}
	void ft_putstr(char *str)
	{
		int i;
		i = 0;

		while(str[i])
		{
			write(1, &str[i], 1);
			i++;
		}
	}

	int ft_is_num(char *str, int *i)
	{
		if (str[*i] >= '0' && str[*i] <= '9')
			return (1);
		else
			return (0);
	}



	int main()
	{
		int i;
		int j;
		int k;
		int fd;
		int comp;
		int count;
		char *tab3[30];
		char all[1024]; 
		fd = open("numbers.dict", O_RDONLY);
		count = read(fd, all, 1024);
		close(fd);

		i = 0;
		j = 0;
		k = 0;
		comp = 0;
		while(tab3[i])
		{
			tab3[i][0] = '\0';
			i++;
		}
		i = 0;
		while(all[i])
		{
			while (ft_is_num(all,&i) == 0)
				i++;
			j = i;
			while (ft_is_num(all,&j) == 1)
			{
				if (all[j] >= '0' && all[j] <= '9')
					comp += 1; 
				j++;
			}
			while(all[j] != '\n')
				j++;
			
			if (comp > 2) 
			ft_strcat(tab3, all, &i);

			if (all[i] == '\n')
				comp = 0;
			i++;
		}
		int g = 0;
		while(tab3[g])
		{
			ft_putstr(tab3[g]);
				g++;
		}
	}
