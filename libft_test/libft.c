/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevdos-s <kevdos-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/04 21:48:59 by kevdos-s          #+#    #+#             */
/*   Updated: 2025/10/04 21:48:59 by kevdos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"
#include "../test_helper.h"

void	initialize_global_var(void)
{
	char	startEndLine;
	int		subjectsLine;
	size_t	numberCases;
	int		newlinesBefore;
	int		newlinesAfter;
	int		newlinesBetween;
	char	commonChars[9] = {'a', '5', '@', ' ', 'J', '!', 'h', '*', '0'};
	int		nbrs[9] = {1, -42, 0, 42, 2147483646, 2147483647, 5678, 100000,
				-100000};
	char	strs1[9][20] = {"int", "-42", "0", "42", "2147483648", "2147483647",
			"5678", "100000", "-100000"};
	char	strs2[9][20] = {"Programming ", "languages ", "like ", "Python ",
			"Java ", "and ", "C++ ", "are ", "used "};
	char	strs3[9][20] = {"robotics ", "is ", "the ", "future ", "of ",
			"technology ", "and ", "innovation ", "in "};
	char	strs4[9][20] = {"mm", "an", "in", "on", "re", "in", " ", "0", "."};
	char	strs5[9][20] = {"fields", "like", "manufacturing", "medicine",
			"space", "exploration", "and", "more", "!"};
	char	strs6[9][20] = {"fields", "like", "manufacturing", "medicine",
			"space", "exploration", "and", "more", "!"};
	char	comb1[9][60] = {"I ", "am ", "happy ", "to ", "learn ", "new ",
			"things ", "and ", "grow "};
	char	comb2[9][60] = {"I ", "am ", "happy ", "to ", "learn ", "new ",
			"things ", "and ", "grow "};
	char	comb3[9][60] = {"I ", "am ", "happy ", "to ", "learn ", "new ",
			"things ", "and ", "grow "};
	char	comb4[9][60] = {"I ", "am ", "happy ", "to ", "learn ", "new ",
			"things ", "and ", "grow "};
	char	EMPTY_A[9][40] = {"", "", "", "", "", "", "", "", ""};
	char	EMPTY_B[9][40] = {"", "", "", "", "", "", "", "", ""};
	char	*EMPTY_C[9];
	char	SENTENCES[9][40] = {"The quick brown fox", "A lazy dog",
			"Star Wars", "Science Fiction movie", "Rock Music",
			"Artificial Intelligence is cool", "Hey Bro", "It's a nice day",
			"You're welcome"};

	startEndLine = '#';
	subjectsLine = '-';
	numberCases = 9;
	newlinesBefore = 1;
	newlinesAfter = 1;
	newlinesBetween = 1;
	(void)startEndLine;
	(void)subjectsLine;
	(void)numberCases;
	(void)newlinesBefore;
	(void)newlinesAfter;
	(void)newlinesBetween;
	(void)commonChars;
	(void)nbrs;
	(void)strs1;
	(void)strs2;
	(void)strs3;
	(void)strs4;
	(void)strs5;
	(void)strs6;
	(void)comb1;
	(void)comb2;
	(void)comb3;
	(void)comb4;
	(void)EMPTY_A;
	(void)EMPTY_B;
	(void)*EMPTY_C;
	(void)SENTENCES;
}

void	first_part(void)
{
	char	startEndLine;
	int		subjectsLine;
	size_t	numberCases;
	int		newlinesBefore;
	int		newlinesAfter;
	int		newlinesBetween;
	char	commonChars[9] = {'a', '5', '@', ' ', 'J', '!', 'h', '*', '0'};
	int		nbrs[9] = {1, -42, 0, 42, 2147483646, 2147483647, 5678, 100000,
				-100000};
	char	strs1[9][20] = {"int", "-42", "0", "42", "2147483648", "2147483647",
			"5678", "100000", "-100000"};
	char	strs2[9][20] = {"Programming ", "languages ", "like ", "Python ",
			"Java ", "and ", "C++ ", "are ", "used "};
	char	strs3[9][20] = {"robotics ", "is ", "the ", "future ", "of ",
			"technology ", "and ", "innovation ", "in "};
	char	strs4[9][20] = {"mm", "an", "in", "on", "re", "in", " ", "0", "."};
	char	strs5[9][20] = {"fields", "like", "manufacturing", "medicine",
			"space", "exploration", "and", "more", "!"};
	char	strs6[9][20] = {"fields", "like", "manufacturing", "medicine",
			"space", "exploration", "and", "more", "!"};
	char	comb1[9][60] = {"I ", "am ", "happy ", "to ", "learn ", "new ",
			"things ", "and ", "grow "};
	char	comb2[9][60] = {"I ", "am ", "happy ", "to ", "learn ", "new ",
			"things ", "and ", "grow "};
	char	comb3[9][60] = {"I ", "am ", "happy ", "to ", "learn ", "new ",
			"things ", "and ", "grow "};
	char	comb4[9][60] = {"I ", "am ", "happy ", "to ", "learn ", "new ",
			"things ", "and ", "grow "};
	char	EMPTY_A[9][40] = {"", "", "", "", "", "", "", "", ""};
	char	EMPTY_B[9][40] = {"", "", "", "", "", "", "", "", ""};
	char	*EMPTY_C[9];
	char	SENTENCES[9][40] = {"The quick brown fox", "A lazy dog",
			"Star Wars", "Science Fiction movie", "Rock Music",
			"Artificial Intelligence is cool", "Hey Bro", "It's a nice day",
			"You're welcome"};
	char	*ptr1;
	char	*ptr2;
	char	*nonAscii;
	char	*nonPrint;
	int		size;
	int		*arrA;
	int		*arrB;

	startEndLine = '#';
	subjectsLine = '-';
	numberCases = 9;
	newlinesBefore = 1;
	newlinesAfter = 1;
	newlinesBetween = 1;

	(void)startEndLine;
	(void)subjectsLine;
	(void)numberCases;
	(void)newlinesBefore;
	(void)newlinesAfter;
	(void)newlinesBetween;
	(void)commonChars;
	(void)nbrs;
	(void)strs1;
	(void)strs2;
	(void)strs3;
	(void)strs4;
	(void)strs5;
	(void)strs6;
	(void)comb1;
	(void)comb2;
	(void)comb3;
	(void)comb4;
	(void)EMPTY_A;
	(void)EMPTY_B;
	(void)EMPTY_C;
	(void)SENTENCES;
	(void)arrA;
	(void)arrB;

	// toupper
	insertHeadline("toupper", subjectsLine, newlinesBefore, newlinesAfter);
	for (size_t i = 0; i < numberCases; i++)
	{
		printf("  Target  : %s%c%s\n", BLU, commonChars[i], STD);
		printf("  Original: %c\n", toupper(commonChars[i]));
		if (toupper(commonChars[i]) == ft_toupper(commonChars[i]))
			printf("%s  Remake  : %c\n", GRN, ft_toupper(commonChars[i]));
		else
			printf("%s  Remake  : %c\n", RED, ft_toupper(commonChars[i]));
		linesBetweenCases(newlinesBetween);
	}
	// tolower
	insertHeadline("tolower", subjectsLine, newlinesBefore, newlinesAfter);
	for (size_t i = 0; i < numberCases; i++)
	{
		printf("  Target  : %s%c%s\n", BLU, commonChars[i], STD);
		printf("  Original: %c\n", tolower(commonChars[i]));
		if (tolower(commonChars[i]) == ft_tolower(commonChars[i]))
			printf("%s  Remake  : %c\n", GRN, ft_tolower(commonChars[i]));
		else
			printf("%s  Remake  : %c\n", RED, ft_tolower(commonChars[i]));
		linesBetweenCases(newlinesBetween);
	}
	// isalpha
	insertHeadline("isalpha", subjectsLine, newlinesBefore, newlinesAfter);
	for (size_t i = 0; i < numberCases; i++)
	{
		printf("  Target  : %s%c%s is alphabetic?\n", BLU, commonChars[i], STD);
		printf("  Original: %s\n", isalpha(commonChars[i]) ? "Yes" : "No");
		if (isalpha(commonChars[i]) >= ft_isalpha(commonChars[i]))
			printf("%s  Remake  : %s\n", GRN,
				ft_isalpha(commonChars[i]) ? "Yes" : "No");
		else
			printf("%s  Remake  : %s\n", RED,
				ft_isalpha(commonChars[i]) ? "Yes" : "No");
		linesBetweenCases(1);
	}
	// isdigit
	insertHeadline("isdigit", subjectsLine, newlinesBefore, newlinesAfter);
	for (size_t i = 0; i < numberCases; i++)
	{
		printf("  Target  : %s%c%s is digit?\n", BLU, commonChars[i], STD);
		printf("  Original: %s\n", isdigit(commonChars[i]) ? "Yes" : "No");
		if (isdigit(commonChars[i]) >= ft_isdigit(commonChars[i]))
			printf("%s  Remake  : %s\n", GRN,
				ft_isdigit(commonChars[i]) ? "Yes" : "No");
		else
			printf("%s  Remake  : %s\n", RED,
				ft_isdigit(commonChars[i]) ? "Yes" : "No");
		linesBetweenCases(newlinesBetween);
	}
	// isalnum
	insertHeadline("isalnum", subjectsLine, newlinesBefore, newlinesAfter);
	for (size_t i = 0; i < numberCases; i++)
	{
		printf("  Target  : %s%c%s is alphanumeric?\n", BLU, commonChars[i],
			STD);
		printf("  Original: %s\n", isalnum(commonChars[i]) ? "Yes" : "No");
		if (isalnum(commonChars[i]) >= ft_isalnum(commonChars[i]))
			printf("%s  Remake  : %s\n", GRN,
				ft_isalnum(commonChars[i]) ? "Yes" : "No");
		else
			printf("%s  Remake  : %s\n", RED,
				ft_isalnum(commonChars[i]) ? "Yes" : "No");
		linesBetweenCases(newlinesBetween);
	}
	// isascii
	insertHeadline("isascii", subjectsLine, newlinesBefore, newlinesAfter);
	for (size_t i = 0; i < numberCases - 1; i++)
	{
		printf("  Target  : %s%c%s is ascii?\n", BLU, commonChars[i], STD);
		printf("  Original: %s\n", isascii(commonChars[i]) ? "Yes" : "No");
		if (isascii(commonChars[i]) >= ft_isascii(commonChars[i]))
			printf("%s  Remake  : %s\n", GRN,
				ft_isascii(commonChars[i]) ? "Yes" : "No");
		else
			printf("%s  Remake  : %s\n", RED,
				ft_isascii(commonChars[i]) ? "Yes" : "No");
		linesBetweenCases(newlinesBetween);
	}
	nonAscii = "€";
	printf("  Target  : %s€%s is ascii?\n", BLU, STD);
	printf("  Original: %s\n", isascii(*nonAscii) ? "Yes" : "No");
	if (isascii(*nonAscii) >= ft_isascii(*nonAscii))
		printf("%s  Remake  : %s\n", GRN, ft_isascii(*nonAscii) ? "Yes" : "No");
	else
		printf("%s  Remake  : %s\n", RED, ft_isascii(*nonAscii) ? "Yes" : "No");
	linesBetweenCases(newlinesBetween);
	// isprint
	insertHeadline("isprint", subjectsLine, newlinesBefore, newlinesAfter);
	for (size_t i = 0; i < numberCases - 1; i++)
	{
		printf("  Target  : %s%c%s is printable?\n", BLU, commonChars[i], STD);
		printf("  Original: %s\n", isprint(commonChars[i]) ? "Yes" : "No");
		if (isprint(commonChars[i]) >= ft_isprint(commonChars[i]))
			printf("%s  Remake  : %s\n", GRN,
				ft_isprint(commonChars[i]) ? "Yes" : "No");
		else
			printf("%s  Remake  : %s\n", RED,
				ft_isprint(commonChars[i]) ? "Yes" : "No");
		linesBetweenCases(newlinesBetween);
	}
	nonPrint = "\n";
	printf("  Target  : %s\\n%s is printable?\n", BLU, STD);
	printf("  Original: %s\n", isprint(*nonPrint) ? "Yes" : "No");
	if (isprint(*nonPrint) >= ft_isprint(*nonPrint))
		printf("%s  Remake  : %s\n", GRN, ft_isprint(*nonPrint) ? "Yes" : "No");
	else
		printf("%s  Remake  : %s\n", RED, ft_isprint(*nonPrint) ? "Yes" : "No");
	linesBetweenCases(newlinesBetween);
	// isalnum
	insertHeadline("isalnum", subjectsLine, newlinesBefore, newlinesAfter);
	for (size_t i = 0; i < numberCases; i++)
	{
		printf("  Target  : %s%c%s is alphanumeric?\n", BLU, commonChars[i],
			STD);
		printf("  Original: %s\n", isalnum(commonChars[i]) ? "Yes" : "No");
		if (isalnum(commonChars[i]) >= ft_isalnum(commonChars[i]))
			printf("%s  Remake  : %s\n", GRN,
				ft_isalnum(commonChars[i]) ? "Yes" : "No");
		else
			printf("%s  Remake  : %s\n", RED,
				ft_isalnum(commonChars[i]) ? "Yes" : "No");
		linesBetweenCases(newlinesBetween);
	}
	// strlen
	insertHeadline("strlen", subjectsLine, newlinesBefore, newlinesAfter);
	for (size_t i = 0; i < numberCases; i++)
	{
		printf("  Target  : %s%s%s\n", BLU, strs2[i], STD);
		printf("  Original: %lu\n", strlen(strs2[i]));
		if (strlen(strs2[i]) == ft_strlen(strs2[i]))
			printf("%s  Remake  : %lu\n", GRN, ft_strlen(strs2[i]));
		else
			printf("%s  Remake  : %lu\n", RED, ft_strlen(strs2[i]));
		linesBetweenCases(newlinesBetween);
	}
	insertHeadline("strchr", subjectsLine, newlinesBefore, newlinesAfter);
	for (size_t i = 0; i < numberCases; i++)
	{
		printf("  Target  : Find first %s%c%s in %s%s%s\n", BLU, commonChars[i],
			STD, BLU, comb3[i], STD);
		ptr1 = strchr(comb3[i], commonChars[i]);
		ptr2 = ft_strchr(comb4[i], commonChars[i]);
		if (ptr1 != NULL)
			printf("  Original: %c is found in [%s] at index %ld\n", *ptr1,
				comb1[i], ptr1 - comb3[i]);
		else
			printf("  Original: %s\n", ptr1);
		if (ptr2 != NULL)
		{
			if (ft_strcmp(ptr1, ptr2) == 0)
				printf("%s  Remake  : %c is found in [%s] at index %ld\n", GRN,
					*ptr2, comb1[i], ptr2 - comb4[i]);
			else
				printf("%s  Remake  : %c is found in [%s] at index %ld\n", RED,
					*ptr2, comb1[i], ptr2 - comb4[i]);
		}
		else
		{
			if (ptr1 == NULL && ptr2 == NULL)
				printf("%s  Remake  : %s\n", GRN, ptr2);
			else
				printf("%s  Remake  : %s\n", RED, ptr2);
		}
		linesBetweenCases(newlinesBetween);
		ptr1 = NULL;
		ptr2 = NULL;
	}
	// strrchr
	insertHeadline("strrchr", subjectsLine, newlinesBefore, newlinesAfter);
	for (size_t i = 0; i < numberCases; i++)
	{
		printf("  Target  : Find last %s%c%s in %s%s%s\n", BLU, commonChars[i],
			STD, BLU, comb3[i], STD);
		ptr1 = strrchr(comb3[i], commonChars[i]);
		ptr2 = ft_strrchr(comb3[i], commonChars[i]);
		if (ptr1 != NULL)
			printf("  Original: %c is found in [%s] at index %ld\n", *ptr1,
				comb3[i], ptr1 - comb3[i]);
		else
			printf("  Original: %s\n", ptr1);
		if (ptr2 != NULL)
		{
			if (ft_strcmp(ptr1, ptr2) == 0)
				printf("%s  Remake  : %c is found in [%s] at index %ld\n", GRN,
					*ptr2, comb3[i], ptr2 - comb3[i]);
			else
				printf("%s  Remake  : %c is found in [%s] at index %ld\n", RED,
					*ptr2, comb3[i], ptr2 - comb3[i]);
		}
		else
		{
			if (ptr1 == NULL && ptr2 == NULL)
				printf("%s  Remake  : %s\n", GRN, ptr2);
			else
				printf("%s  Remake  : %s\n", RED, ptr2);
		}
		linesBetweenCases(newlinesBetween);
		ptr1 = NULL;
		ptr2 = NULL;
	}
	// memcpy
	insertHeadline("memcpy", subjectsLine, newlinesBefore, newlinesAfter);
	for (size_t i = 0; i < numberCases; i++)
	{
		printf("  Target  : Copy of %s%s%s\n", BLU, strs2[i], STD);
		memcpy(EMPTY_A[i], strs2[i], ft_strlen(strs2[i]) + 1);
		ft_memcpy(EMPTY_B[i], strs2[i], ft_strlen(strs2[i]) + 1);
		printf("  Original: %s\n", EMPTY_A[i]);
		if (ft_strcmp(EMPTY_A[i], EMPTY_B[i]) == 0)
			printf("%s  Remake  : %s\n", GRN, EMPTY_B[i]);
		else
			printf("%s  Remake  : %s\n", RED, EMPTY_B[i]);
		linesBetweenCases(newlinesBetween);
	}
	for (size_t i = 0; i < numberCases; i++)
	{
		ft_strclr(EMPTY_A[i]);
		ft_strclr(EMPTY_B[i]);
	}
	// memset
	insertHeadline("memset", subjectsLine, newlinesBefore, newlinesAfter);
	for (size_t i = 0; i < numberCases; i++)
	{
		printf("  Target  : %s%s%s receive %s%c%s until position %s%lu%s\n",
			BLU, strs5[i], STD, BLU, commonChars[i], STD, BLU, i + 1, STD);
		ft_strcpy(EMPTY_A[i], strs5[i]);
		ft_strcpy(EMPTY_B[i], strs6[i]);
		memset(strs5[i], commonChars[i], i + 1);
		ft_memset(strs6[i], commonChars[i], i + 1);
		printf("  Original: %s > %s\n", EMPTY_A[i], strs5[i]);
		if (ft_strcmp(strs5[i], strs6[i]) == 0)
			printf("%s  Remake  : %s > %s\n", GRN, EMPTY_B[i], strs6[i]);
		else
			printf("%s  Remake  : %s > %s\n", RED, EMPTY_B[i], strs6[i]);
		linesBetweenCases(newlinesBetween);
	}
	for (size_t i = 0; i < numberCases; i++)
	{
		ft_strclr(EMPTY_A[i]);
		ft_strclr(EMPTY_B[i]);
	}
	// memmove
	insertHeadline("memmove", subjectsLine, newlinesBefore, newlinesAfter);
	for (size_t i = 0; i < numberCases; i++)
	{
		printf("  Target  : Move %s%s%s to dest string until position %s%lu%s\n", BLU, strs2[i], STD, BLU, i + 1, STD);
		memmove(EMPTY_A[i], strs2[i], i + 1);
		ft_memmove(EMPTY_B[i], strs2[i], i + 1);
		printf("  Original: %s\n", EMPTY_A[i]);
		if (ft_strcmp(strs5[i], strs6[i]) == 0)
			printf("%s  Remake  : %s\n", GRN, EMPTY_B[i]);
		else
			printf("%s  Remake  : %s\n", RED, EMPTY_B[i]);
		linesBetweenCases(newlinesBetween);
	}
	for (size_t i = 0; i < numberCases; i++)
	{
		ft_strclr(EMPTY_A[i]);
		ft_strclr(EMPTY_B[i]);
	}
	// bzero
	insertHeadline("bzero", subjectsLine, newlinesBefore, newlinesAfter);
	for (size_t i = 0; i < numberCases; i++)
	{
		printf("  Target  : %s%s%s receive 0 until position %s%lu%s\n", BLU,
			strs2[i], STD, BLU, i + 1, STD);
		size = ft_strlen(strs2[i]);
		ft_strcpy(EMPTY_A[i], strs2[i]);
		ft_strcpy(EMPTY_B[i], strs2[i]);
		bzero(EMPTY_A[i], i + 1);
		ft_bzero(EMPTY_B[i], i + 1);
		printf("  Original: ");
		for (int j = 0; j < size; j++)
			printf("[%c]", strs2[i][j]);
		printf(" > ");
		for (int j = 0; j < size; j++)
			printf("[%c]", EMPTY_A[i][j]);
		printf("\n");
		if (ft_strcmp(EMPTY_A[i], EMPTY_A[i]) == 0)
		{
			printf("%s  Remake  : ", GRN);
			for (int j = 0; j < size; j++)
				printf("[%c]", strs2[i][j]);
			printf(" > ");
			for (int j = 0; j < size; j++)
				printf("[%c]", EMPTY_B[i][j]);
			printf("\n%s", STD);
		}
		else
		{
			printf("%s  Remake  : ", RED);
			for (int j = 0; j < size; j++)
				printf("[%c]", strs2[i][j]);
			printf(" > ");
			for (int j = 0; j < size; j++)
				printf("[%c]", EMPTY_B[i][j]);
			printf("\n%s", STD);
		}
		linesBetweenCases(newlinesBetween);
	}

	// strnstr
	insertHeadline("strnstr", subjectsLine, newlinesBefore, newlinesAfter);
	for (size_t i = 0; i < numberCases; i++)
	{
		printf("  Target  : Find %s%s%s in %s%s%s until position %s%lu%s\n", \
		BLU, strs4[i], STD, BLU, comb1[i], STD, BLU, i + 8, STD);
		ptr2 = ft_strnstr(comb1[i], strs4[i], i + 8);
		printf("%s  Remake  : %s\n", GRN, ptr2);
		linesBetweenCases(newlinesBetween);

		ptr2 = NULL;
	}
	free(ptr2);

	// atoi
	insertHeadline("atoi", subjectsLine, newlinesBefore, newlinesAfter);
	for (size_t i = 0; i < numberCases; i++)
	{
		printf("  Target  : %s%s%s\n", BLU, strs1[i], STD);
		printf("  Original: %d\n", atoi(strs1[i]));
		if (atoi(strs1[i]) == ft_atoi(strs1[i]))
			printf("%s  Remake  : %d\n", GRN, ft_atoi(strs1[i]));
		else
			printf("%s  Remake  : %d\n", RED, ft_atoi(strs1[i]));
		linesBetweenCases(newlinesBetween);

	}
		// calloc
	insertHeadline("calloc", subjectsLine, newlinesBefore, newlinesAfter);
	for (size_t i = 0; i < numberCases; i++)
	{
		printf("  Target  : Alloc %s%lu%s positions of memory\n", BLU, i + 1, STD);
		arrA = calloc(i + 1, sizeof(int));
		arrB = calloc(i + 1, sizeof(int));
		printf("  Original: ");
		for (size_t j = 0; j < i + 1; j++)
			printf("[%d]", arrA[j]);
		printf("%s\n  Remake  : ", GRN);
		for (size_t j = 0; j < i + 1; j++)
			printf("[%d]", arrB[j]);
		linesBetweenCases(newlinesBetween);
		free(arrA);
		free(arrB);
	}
	// strdup
	insertHeadline("strdup", subjectsLine, newlinesBefore, newlinesAfter);
	for (size_t i = 0; i < numberCases; i++)
	{
		printf("  Target  : Copy of %s%s%s\n", BLU, strs3[i], STD);
		ptr1 = strdup(strs3[i]);
		ptr2 = ft_strdup(strs3[i]);
		printf("  Original: %s\n", ptr1);
		if (ft_strcmp(ptr1, ptr2) == 0)
			printf("%s  Remake  : %s\n", GRN, ptr2);
		else
			printf("%s  Remake  : %s\n", RED, ptr2);
		linesBetweenCases(newlinesBetween);

	}
	free(ptr1);
	free(ptr2);
	ptr1 = NULL;
	ptr2 = NULL;
}

void	second_part(void)
{
	char	startEndLine;
	int		subjectsLine;
	size_t	numberCases;
	int		newlinesBefore;
	int		newlinesAfter;
	int		newlinesBetween;
	char	spaceChar = ' ';
	char	commonChars[9] = {'a', '5', '@', ' ', 'J', '!', 'h', '*', '0'};
	int		nbrs[9] = {1, -42, 0, 42, 2147483646, 2147483647, 5678, 100000,
				-100000};
	char	strs1[9][20] = {"int", "-42", "0", "42", "2147483648", "2147483647",
			"5678", "100000", "-100000"};
	char	strs2[9][20] = {"Programming ", "languages ", "like ", "Python ",
			"Java ", "and ", "C++ ", "are ", "used "};
	char	strs3[9][20] = {"robotics ", "is ", "the ", "future ", "of ",
			"technology ", "and ", "innovation ", "in "};
	char	strs4[9][20] = {"mm", "an", "in", "on", "re", "in", " ", "0", "."};
	char	strs5[9][20] = {"fields", "like", "manufacturing", "medicine",
			"space", "exploration", "and", "more", "!"};
	char	strs6[9][20] = {"fields", "like", "manufacturing", "medicine",
			"space", "exploration", "and", "more", "!"};
	char	comb1[9][60] = {"I ", "am ", "happy ", "to ", "learn ", "new ",
			"things ", "and ", "grow "};
	char	comb2[9][60] = {"I ", "am ", "happy ", "to ", "learn ", "new ",
			"things ", "and ", "grow "};
	char	comb3[9][60] = {"I ", "am ", "happy ", "to ", "learn ", "new ",
			"things ", "and ", "grow "};
	char	comb4[9][60] = {"I ", "am ", "happy ", "to ", "learn ", "new ",
			"things ", "and ", "grow "};
	char	EMPTY_A[9][40] = {"", "", "", "", "", "", "", "", ""};
	char	EMPTY_B[9][40] = {"", "", "", "", "", "", "", "", ""};
	char	*EMPTY_C[9];
	char	SENTENCES[9][40] = {"   The quick brown fox   ", "A lazy dog",
			"Star Wars", "Science Fiction movie", "Rock Music",
			"Artificial Intelligence is cool", "Hey Bro", "It's a nice day",
			"You're welcome"};
	char	*ptr1;
	char	*ptr2;
	char	*nonAscii;
	char	*nonPrint;
	int		size;
	int		*arrA;
	int		*arrB;
	char	*empty[9];
	int		fd;
	ssize_t bytes_read;
	char	buffer[1];

	startEndLine = '#';
	subjectsLine = '-';
	numberCases = 9;
	newlinesBefore = 1;
	newlinesAfter = 1;
	newlinesBetween = 1;

	(void)startEndLine;
	(void)subjectsLine;
	(void)numberCases;
	(void)newlinesBefore;
	(void)newlinesAfter;
	(void)newlinesBetween;
	(void)commonChars;
	(void)nbrs;
	(void)strs1;
	(void)strs2;
	(void)strs3;
	(void)strs4;
	(void)strs5;
	(void)strs6;
	(void)comb1;
	(void)comb2;
	(void)comb3;
	(void)comb4;
	(void)EMPTY_A;
	(void)EMPTY_B;
	(void)*EMPTY_C;
	(void)SENTENCES;
	(void)arrA;
	(void)arrB;
	(void)*empty[9];
	(void)size;
	(void)nonPrint;
	(void)nonAscii;
	(void)ptr1;
	(void)ptr2;
	(void)spaceChar;
	(void)fd;
	(void)bytes_read;
	(void)buffer;

	// substr
	insertHeadline("substr", subjectsLine, newlinesBefore, newlinesAfter);
	for (size_t i = 0; i < numberCases; i++)
	{
		printf("  Target: Get a substring of %s%s%s\n", BLU, SENTENCES[i], GRN);
		printf("  Remake: %s > ", SENTENCES[i]);
		empty[i] = ft_substr(SENTENCES[i], i, i * i);
		printf("%s", empty[i]);
		free(empty[i]);
		linesBetweenCases(newlinesBetween);
	}
	// strjoin
	insertHeadline("strjoin", subjectsLine, newlinesBefore, newlinesAfter);
	for (size_t i = 0; i < numberCases; i++)
	{
		printf("  Target: Combine %s%s%s with %s%s%s\n", BLU, strs1[i], STD, BLU, strs2[i], GRN);
		empty[i] = ft_strjoin(strs1[i], strs2[i]);
		printf("  Remake: ");
		printf("%s", empty[i]);
		linesBetweenCases(newlinesBetween);
	}
	for (size_t i = 0; i < numberCases; i++)
		free(empty[i]);

	// strtrim
	insertHeadline("strtrim", subjectsLine, newlinesBefore, newlinesAfter);
	for (size_t i = 0; i < numberCases; i++)
	{
		char *sep = " ATxs";
		printf("  Target: Remove spaces of [%s%s%s] from start and end%s with this sep %s\n", BLU, SENTENCES[i], STD, GRN, sep);
		printf("  Remake: %s > ", SENTENCES[i]);
		empty[i] = ft_strtrim(SENTENCES[i], sep);
		printf("%s", empty[i]);
		free(empty[i]);
		linesBetweenCases(newlinesBetween);
	}

	// split
	insertHeadline("split", subjectsLine, newlinesBefore, newlinesAfter);
	for (size_t i = 0; i < numberCases; i++)
	{
		char	**words = ft_split(SENTENCES[i], spaceChar);
		printf("  Target: Split %s%s%s with '%c'%s\n", BLU, SENTENCES[i], STD, spaceChar, GRN);
		printf("  Remake: ");
		for (size_t j = 0; words[j] != NULL; j++)
		{
			printf("[%s]", words[j]);
			free(words[j]);
		}
		free(words);
		linesBetweenCases(newlinesBetween);
	}
	// itoa
	insertHeadline("itoa", subjectsLine, newlinesBefore, newlinesAfter);
	for (size_t i = 0; i < numberCases; i++)
	{
		printf("  Target: Store %s%d%s in an array%s\n", BLU, nbrs[i], STD, GRN);
		empty[i] = ft_itoa(nbrs[i]);
		printf("  Remake: ");
		printf("%s", empty[i]);
		linesBetweenCases(newlinesBetween);
	}
	for (size_t i = 0; i < numberCases; i++)
		free(empty[i]);

	insertHeadline("strmapi", subjectsLine, newlinesBefore, newlinesAfter);
	for (size_t i = 0; i < numberCases; i++)
	{
		printf("  Target: Create new string iterating with %sft_lowercase_plus_index%s\n", BLU, GRN);
		printf("  Remake: %s > ", strs3[i]);
		empty[i] = ft_strmapi(strs3[i], ft_lowercase_plus_index);
		printf("%s", empty[i]);
		free(empty[i]);
		linesBetweenCases(newlinesBetween);
	}
	// striteri
	insertHeadline("striteri", subjectsLine, newlinesBefore, newlinesAfter);
	for (size_t i = 0; i < numberCases; i++)
	{
		printf("  Target: Iterate with %sft_replace_with_i%s\n", BLU, GRN);
		printf("  Remake: %s > ", strs1[i]);
		ft_striteri(strs1[i], ft_replace_with_i);
		printf("%s", strs1[i]);
		linesBetweenCases(newlinesBetween);
	}
	// putchar_fd
	insertHeadline("putchar_fd", subjectsLine, newlinesBefore, newlinesAfter);
	for (size_t i = 0; i < numberCases; i++)
	{
		printf("  Target: Write %s%c%s in a file%s\n", BLU, commonChars[i], STD, GRN);
		fd = open("output.txt", O_WRONLY | O_CREAT, 0644);
		if (fd == -1)
		{
			perror("open");
			return;
		}
		ft_putchar_fd(commonChars[i], fd);
		close(fd);
		fd = open("output.txt", O_RDONLY);
		if (fd == -1)
		{
			perror("open");
			return;
		}
		printf("  Remake: output.txt > ");
		while ((bytes_read = read(fd, buffer, 1)) > 0)
			printf("%c", *buffer);
		close(fd);
		remove("output.txt");
		linesBetweenCases(newlinesBetween);
	}
	remove("output.txt");

}
void	quick_test()
{
	char test[] = "back salut test";
	ft_memmove(test + 5, test+2, 5);
}
int	main(void)
{
	//first_part();
	// second_part();
	quick_test();

}
