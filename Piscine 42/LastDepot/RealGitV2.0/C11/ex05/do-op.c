/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbettini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 15:15:58 by jbettini          #+#    #+#             */
/*   Updated: 2021/06/24 15:53:31 by jbettini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>
int plus(int a, int b)
{
	return (a + b);
}
int subs(int a, int b)
{
	return (a - b);
}
int mult(int a, int b)
{
	return (a * b);
}
int div(int a, int b)
{
	return (a / b);
}
int modul(int a, int b)
{
	return (a % b);
}


void main (int ac, char *av)
{
	if (ac == 4)
	{
		int *g_[5](int x, int y);

		i = 0;
		g_[0] = (&plus);
		g_[1] = (&subs);
		g_[2] = (&mult);
		g_[3] = (&div);
		g_[4] = (&modul);
		if ( av[2] == '/' && (av[1] == '0' || av[3] == '0'))
			write(1, "Stop : division by zero", 23);
		else if ( av[2] == '%' && (av[1] == '0' || av[3] == '0'))
			write(1, "Stop : modulo by zero", 21);
		else
		{
			
		}

	}
}
