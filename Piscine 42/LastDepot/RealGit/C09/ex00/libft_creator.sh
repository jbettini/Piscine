# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jbettini <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/22 15:48:27 by jbettini          #+#    #+#              #
#    Updated: 2021/06/22 16:29:02 by jbettini         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/sh

gcc -c *.c && ar rcs libft.a *.o && rm *.o
