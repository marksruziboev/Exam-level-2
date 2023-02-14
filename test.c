/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maruzibo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 16:43:13 by maruzibo          #+#    #+#             */
/*   Updated: 2023/01/16 18:13:01 by maruzibo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(int c, char **v)
{
	int m; // 000 000 11
	int i = 8;
	char a;
	char l[9], s[9];
	l[8] = '\0';
	
	if (c != 2) 
		write(1, "enter an integer\n", 17);
	
	m = atoi(v[1]);
	
	while(--i >= 0) // this loop prints bits of m
	{
		a = (m >> i & 1) + '0';
		write(1, &a, 1);
	}
	write(1, "\n", 1);
	 i = -1;
	 while(++i < 8) // this is an alternative wayto prints bits of m
	 {
	 	l[7 - i] = m % 2 + '0';
	 	m = m / 2;
	 }
	 write(1, l, 8);
	 write(1, "\n", 1);
	  m = 3;
	  i = -1;
	 while(++i < 8) //here we revesre the bits
	 {
	 	s[i] = m % 2 + '0';
	 	m = m / 2;
	 }
	 write(1, s, 8);
	 write(1, "\n", 1);
	 m = 3;
	 int d;
	 d = m % 16;
	 m = m /16 + d*16;
	 
	 i = -1;
	 while(++i < 8) // here we swap 4 fouts of m
	 {
	 	l[7 - i] = m % 2 + '0';
	 	m = m / 2;
	 }
	 write(1, l, 8);
	return (0);
}
