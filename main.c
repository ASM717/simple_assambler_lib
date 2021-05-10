/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuriel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 10:05:50 by amuriel           #+#    #+#             */
/*   Updated: 2021/05/08 13:54:27 by amuriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	http://www.codenet.ru/progr/asm/tasm/39.php
	http://osinavi.ru/asm/cmp.html
	https://ravesli.com/assembler-usloviya/
	https://cs.lmu.edu/~ray/notes/nasmtutorial/
	http://natalia.appmat.ru/c&c++/assembler.html
	http://cs.mipt.ru/wp/wp-content/uploads/2018/09/07-assembly.pdf
*/

#include "libasm.h"

void	test_strlen(void)
{
	printf("\n|===========|=STRLEN=|===========|\n");
	printf("\n");
	printf("strlen: %zu\n", strlen("aaaaaaaaaaaaaaaaaaaaaaaaaaa"));
	printf("ft_strlen: %zu\n", ft_strlen("aaaaaaaaaaaaaaaaaaaaaaaaaaa"));
	printf("\n+++++strlen with empty string+++++\n");
	printf("strlen: %zu\n", strlen(""));
	printf("ft_strlen: %zu\n", ft_strlen(""));
}

void	test_strcpy(void)
{
	char	str1[500];
	char	str2[500];

	printf("\n|===========|=STRCPY=|===========|\n");
	printf("\n");
	printf("strcpy: %s\n", strcpy(str1, "Hello 21 school!\0"));
	printf("ft_strcpy: %s\n", ft_strcpy(str2, "Hello 21 school!\0"));
	printf("\n+++++strcpy with empty string+++++\n");
	printf("strcpy: %s\n", strcpy(str1, ""));
	printf("ft_strcpy: %s\n", ft_strcpy(str2, ""));
}

void	test_strcmp(void)
{
	printf("\n|===========|=STRCMP=|===========|\n");
	printf("\ns1 > s2\n");
	printf("strcmp: %d\n", strcmp("hello", ""));
	printf("ft_strcmp: %d\n", ft_strcmp("hello", ""));
	printf("\ns1 = s2\n");
	printf("strcmp: %d\n", strcmp("hello", "hello"));
	printf("ft_strcmp: %d\n", ft_strcmp("hello", "hello"));
	printf("\ns1 < s2\n");
	printf("strcmp: %d\n", strcmp("hel", "hello"));
	printf("ft_strcmp: %d\n", ft_strcmp("hel", "hello"));
	printf("\n+++++strcmp with empty string+++++\n");
	printf("strcmp: %d\n", strcmp("", ""));
	printf("ft_strcmp: %d\n", ft_strcmp("", ""));
}

void	test_write(void)
{
	int	fd;

	printf("\n|===========|=WRITE=|===========|\n");
	printf("\n");
	printf("Error fd for write: %zd errno = %d\n", write(-1, "write\n", strlen("write\n")), errno);
	printf("Error fd for ft_write: %zd errno = %d\n", ft_write(-1, "write\n", ft_strlen("write\n")), errno);
	printf("\n");
	printf(" \n");
	printf("Error with NULL for write: %zd errno = %d\n", write(1, NULL, 1), errno);
	printf("Error with NULL for ft_write: %zd errno = %d\n", ft_write(1, NULL, 1), errno);
	printf(" \n");
	system("touch write.txt");
	fd = open("write.txt", O_WRONLY);
	printf("write: %zd\n", write(fd, "write: hello 21 school\n", 23));
	printf("ft_write: %zd\n", ft_write(fd, "ft_write: hello 21 school\n", 26));
	close(fd);
	printf(" \n");
	system("cat write.txt");
}

void	test_read(void)
{
	int		fd1;
	void	*buff;

	printf("\n|===========|=READ=|===========|\n");
	printf("\n");
	fd1 = open("write.txt", O_RDONLY);
	buff = malloc(sizeof(char) * 1);
	read(fd1, buff, 100);
	ft_read(fd1, buff, 100);
	printf("read\n%s\n", buff);
	printf("ft_read\n%s\n", buff);
	printf("\n");
	printf("Error fd for read: %zd errno = %d\n", read(-1, buff, 100), errno);
	printf("Error fd for ft_read: %zd errno = %d\n", ft_read(-1, buff, 100), errno);
	printf("\n");
	printf("Error with NULL for read: %zd errno = %d\n", read(fd1, NULL, 100), errno);
	printf("Error with NULL for ft_read: %zd errno = %d\n", ft_read(fd1, NULL, 100), errno);
	printf("\n");
	free(buff);
	close(fd1);
}

void	test_strdup(void)
{
	char	*s1;
	char	*s2;
	char	*s3;
	char	*s4;

	printf("\n|===========|=STRDUP=|===========|\n");
	printf("\n");
	printf("strdup: %s\n", s1 = strdup("Hello 21 school!"));
	printf("ft_strdup: %s\n", s2 = ft_strdup("Hello 21 school!"));
	printf("\n");
	printf("+++++strdup with empty string+++++\n");
	printf("strdup: %s\n", s3 = strdup(""));
	printf("ft_strdup: %s\n", s4 = ft_strdup(""));
}

int	main(void)
{
	test_strlen();
	test_strcpy();
	test_strcmp();
	test_write();
	test_read();
	test_strdup();
	return (0);
}
