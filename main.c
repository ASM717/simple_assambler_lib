#include "libasm.h"
#include <stdio.h>

void	test_strlen(void)
{
	char str1[500];
	char str2[500];

	printf("\n===========STRLEN===========\n");
	printf("\n");
	printf("strlen: %zu\n", strlen("aaaakqdoqmdmfjwjnxmw;lkmel;m,c;lmer;lmc;lme;lrm;l,;lsc,l;c"));
	printf("ft_strlen: %zu\n", ft_strlen("aaaakqdoqmdmfjwjnxmw;lkmel;m,c;lmer;lmc;lme;lrm;l,;lsc,l;c"));

}

void	test_strcpy(void)
{

	char str1[500];
	char str2[500];

	printf("\n===========STRCPY===========\n");
	printf("\n");
	printf("strcpy: %s\n", strcpy(str1, "Hello 21 school!\0"));
	printf("ft_strcpy: %s\n", ft_strcpy(str2, "Hello 21 school!\0"));
	printf("\n");
}

int		main(void)
{
	test_strlen();
	test_strcpy();
	return (0);
}
