/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_helper.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevdos-s <kevdos-s@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/04 21:45:35 by kevdos-s          #+#    #+#             */
/*   Updated: 2026/03/17 05:47:46 by kevdos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TESTS_H
# define TESTS_H

# include <stdio.h>
# include <string.h>
//# include <bsd/string.h>
#include <stddef.h>
# include <ctype.h>
# include <fcntl.h>
# include <stdlib.h>
# include <sys/ioctl.h> // controle entree sortie unix
# include <unistd.h>
#include <limits.h>

// resizing and define colors
# define MAX_WINDOW_WIDTH 80
# define STD "\033[0m"
# define RED "\033[31m"
# define GRN "\033[32m"
# define YEL "\033[33m"
# define BLU "\033[34m"

/* extern char	startEndLine;
extern int		subjectsLine;
extern size_t	numberCases;
extern int		newlinesBefore;
extern int		newlinesAfter;
extern int		newlinesBetween;

extern char	commonChars[9];
extern int		nbrs[9];
extern char	strs1[9][20];
extern char	strs2[9][20];
extern char	strs3[9][20];
extern char	strs4[9][20];
extern char	strs5[9][20];
extern char	strs6[9][20];
extern char	comb1[9][60];
extern char	comb2[9][60];
extern char	comb3[9][60];
extern char	comb4[9][60];
extern char	EMPTY_A[9][40];
extern char	EMPTY_B[9][40];
extern char	*EMPTY_C[9];
extern char	SENTENCES[9][40]; */

int		getWidth(void);
void	insertHeadline(char *text, char c, int before, int after);
size_t	getCaseNumbers(size_t startCase);
void	linesBetweenCases(size_t newLines);
void	ft_strclr(char *s);
int		ft_strcmp(const char *s1, const char *s2);
char	*ft_strcpy(char *dest, const char *src);
char	ft_lowercase_plus_index(unsigned int i, char c);
void	ft_replace_with_i(unsigned int i, char *c);

#endif
