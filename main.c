/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khalid <khalid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 08:49:45 by khalid            #+#    #+#             */
/*   Updated: 2023/12/23 08:59:33 by khalid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <limits.h>
#include <stdio.h>

int main (void)
{
    int var;
    
    ft_printf("d: |%d|\n", 0);    
    ft_printf("c: |%c|\n", 'a');
    ft_printf("s: |%s|\n", "Hello from 1337");
    ft_printf("x: |%x|\n", UINT_MAX);
    ft_printf("X: |%X|\n", 255);
    ft_printf("p: |%p|\n", &var);
    puts("-------------------------------------------------------");
    ft_printf("Hello I'm NULL: %s\n", NULL);
    printf("the return of NULL is: %d\n", ft_printf(NULL));
    printf("Hello I'm NULL: %s\n", NULL);
    ft_printf("Hello I'm NULL: %s\n", NULL);
    printf("return value of my ft_printf: %d\n", ft_printf("Hello from %d", 1337));
    printf("return value of my ft_printf: %d\n", printf("Hello from %d", 1337));
    puts("-------------------------------------------------------");
    ft_printf("Bonjour je suis %s j'ai %d en hex %X j'ai un varaible dans la memoire %p lol!!\n", "Khalid", 20, 20, &var);
}
