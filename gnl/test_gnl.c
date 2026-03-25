
#include "../../get_next_line.h"


void print_str(char *str);

void print_str(char *str)
{
	int current = 0;

	while (str[current] != '\0')
	{
		write(1, &str[current], 1);
		current++;
	}
}


int main()
{
	//printf("%d\n", BUFFER_SIZE);
	int fd = open("fichier_test/test.txt", O_RDONLY);
	char *test = get_next_line(fd);
	printf("%s\n", test);
	test = get_next_line(fd);
	printf("%s\n", test);
	test = get_next_line(fd);
	printf("%s\n", test);
	test = get_next_line(fd);
	printf("%s\n", test);
}
