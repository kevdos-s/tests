/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_helper.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevdos-s <kevdos-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/04 21:45:31 by kevdos-s          #+#    #+#             */
/*   Updated: 2025/10/08 13:55:43 by kevdos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_helper.h"

int getWidth()
{
    int width = MAX_WINDOW_WIDTH;

    #ifdef _WIN32
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    if (GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi))
	{
        width = csbi.srWindow.Right - csbi.srWindow.Left + 1;
    }
    #else
    struct winsize size;
    if (ioctl(STDOUT_FILENO, TIOCGWINSZ, &size) == 0)
	{
        width = size.ws_col;
    }
    #endif

    return (width);
}

void insertHeadline(char *text, char c, int before, int after)
{
	int window = getWidth();
	int textSize = strlen(text);
	int total = window - textSize - 4;
	int left = total / 2;
	int right = total - left;

	for (int i = 0; i < before; i++)
		printf("\n");
	for (int i = 0; i < left; i++)
		printf("%c", c);
	printf("  %s  ", text);
	for (int i = 0; i < right; i++)
		printf("%c", c);
	for (int i = 0; i < after + 1; i++)
		printf("\n");
}

size_t	getCaseNumbers(size_t startCase)
{
	char	empty;
	size_t	numberCases = 0;
	do
	{
        printf("Enter the number of cases (%lu-9): ", startCase);
        if (scanf("%lu", &numberCases) != 1)
		{
            scanf("%c", &empty);
            printf("Enter a number between %lu and 9.\n", startCase);
            numberCases = 0;
        }
    } while (numberCases < startCase || numberCases >= 44);
	printf("Number of cases: %lu\n\n", numberCases);
	return (numberCases);
}

void	linesBetweenCases(size_t newLines)
{
	for (size_t i = 0; i < newLines; i++)
		printf("\n");
	printf("%s", STD);
}

void	ft_strclr(char *s)
{
	if (!s)
		return ;
	while (*s)
		*s++ = '\0';
}

int	ft_strcmp(const char *s1, const char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i])
		i++;
	return (s1[i] - s2[i]);
}

char	*ft_strcpy(char *dest, const char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
char	ft_lowercase_plus_index(unsigned int i, char c)
{
	return (tolower(c) + (i + 1));
}
void	ft_replace_with_i(unsigned int i, char *c)
{
    *c = i + '0';
}
