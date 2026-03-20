/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevdos-s <kevdos-s@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 06:16:17 by kevdos-s          #+#    #+#             */
/*   Updated: 2026/03/20 10:56:00 by kevdos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../ft_printf.h"
#include "../../libft/libft.h"
#include "../test_helper.h"

void test_di()
{
	int test = -1;
	int first_result = 0;
	int second_result = 0;

	insertHeadline("test decimal (d + i)", '-', 1, 1);

	first_result = ft_printf("%d", test);
	ft_printf("\n");
	second_result = printf("%d", test);

	printf("\nmon printf = %d \nprinf normal = %d\n", first_result, second_result);

}

void test_p()
{
	int test = -1;
	int first_result = 0;
	int second_result = 0;


	insertHeadline("test pointer (p)", '-', 1, 1);

	//================================================================
	first_result = ft_printf("%p", &test);
	ft_printf("\n");
	second_result = printf("%p", &test);

	printf("\nmon printf = %d \n prinf normal = %d\n", first_result, second_result);


	//===============================================
	insertHeadline("test long min et max", '-', 1, 1);

	first_result = ft_printf("%p", LONG_MIN);
	ft_printf("\n");
	//second_result = printf("%p", LONG_MIN);

	printf("\nmon printf = %d \n prinf normal = %d", first_result, second_result);

	first_result = ft_printf("%p", LONG_MAX);
	ft_printf("\n");
	//second_result = printf("%p", LONG_MAX);

	printf("\nmon printf = %d \n prinf normal = %d", first_result, second_result);
}
void test_xX()
{
	long test = LONG_MAX;
	int first_result = 0;
	int second_result = 0;

	insertHeadline("test hexa (x + X)", '-', 1, 1);

	first_result = ft_printf("%x", test);
	ft_printf("\n");
	//second_result = printf("%x", test);

	printf("\nmon printf = %d \nprinf normal = %d\n", first_result, second_result);
}
int main(void)
{
	char *string;

	string = NULL;
	ft_printf(string);
	//printf(string);
/* 	test_p();
	test_di();
	test_xX();
	ft_printf("ceci est un test %d", 42); */
}
