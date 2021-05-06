/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuriel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 10:05:50 by amuriel           #+#    #+#             */
/*   Updated: 2021/05/06 15:45:04 by amuriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"
#include <stdio.h>

void	test_strlen(void)
{
	printf("\n===========STRLEN===========\n");
	printf("\n");
	printf("strlen: %zu\n", strlen("aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaasdklfnlfkm;lfmlkmc;lsmcslkmawekm;wkmq;'lwmce;wlfmw;'lmc;lemwe;lwmc;lcvmerlf;wemfpwmcslcmwpf'lewmwlcml;cvml'w;mfw';lfm;'lvemwf'l;wmwepmew;flwm;lcm,s'[ewkf'pwkf;pcm;a'cmew[wemflkmflwemwel;fmwelwem;lfmwlfkmw;klfmw;lwmc;lwmewl;melwmclcmlcwmc;lecmw;lceml;cwmec;lemew;lcmew;lcmwe;clewmc;welmcew;lcmwc;lewmc;wemwel;mewc'mwec;ewmcwe;'cmw;cmwwmcwcmwl;cmwcl;wm;clmc;w'cmw[p'kw,c;lsmcwp'fmew'pmc"));
	printf("ft_strlen: %zu\n", ft_strlen("aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaasdklfnlfkm;lfmlkmc;lsmcslkmawekm;wkmq;'lwmce;wlfmw;'lmc;lemwe;lwmc;lcvmerlf;wemfpwmcslcmwpf'lewmwlcml;cvml'w;mfw';lfm;'lvemwf'l;wmwepmew;flwm;lcm,s'[ewkf'pwkf;pcm;a'cmew[wemflkmflwemwel;fmwelwem;lfmwlfkmw;klfmw;lwmc;lwmewl;melwmclcmlcwmc;lecmw;lceml;cwmec;lemew;lcmew;lcmwe;clewmc;welmcew;lcmwc;lewmc;wemwel;mewc'mwec;ewmcwe;'cmw;cmwwmcwcmwl;cmwcl;wm;clmc;w'cmw[p'kw,c;lsmcwp'fmew'pmc"));
	printf("\n");
	printf("strlen: %zu\n", strlen(""));
	printf("ft_strlen: %zu\n", ft_strlen(""));
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

void	test_strcmp(void)
{
	printf("\n|===========|=STRCMP=|===========|\n");
	printf("\ns1 > s2\n");
	printf("strcmp: %d\n", strcmp("hello", "hel"));
	printf("ft_strcmp: %d\n", ft_strcmp("hello", "hel"));
	printf("\ns1 = s2\n");
	printf("strcmp: %d\n", strcmp("hello", "hello"));
	printf("ft_strcmp: %d\n", ft_strcmp("hello", "hello"));
	printf("\ns1 < s2\n");
	printf("strcmp: %d\n", strcmp("hel", "hello"));
	printf("ft_strcmp: %d\n", ft_strcmp("hel", "hello"));
	printf("\n");
}

void	test_write(void)
{
	printf("\n|===========|=WRITE=|===========|\n");
	printf("\n");
	printf("Error write: %zd", write(-1, "IT IS WRITE\n", strlen("IT IS WRITE\n")));
	printf("\n");
	printf("Error ft_write: %zd", ft_write(-1, "IT IS WRITE\n", ft_strlen("IT IS WRITE\n")));
	printf("\n");

	// char *s1 = "'123456789123456789'\n";
	// int fd1 = open("temp1.txt", O_CREAT | O_WRONLY | O_TRUNC, S_IRWXU);

}

// void	test_read(void)
// {
// 	char str3[6];
// 	char str4[6];

// 	printf("\n===========READ===========\n");

// 	printf("ft_read: ");
// 	ft_read(1, str4, 10);
// 	str4[ft_strlen(str4)] = '\0';
// 	printf("%s", str4);
// 	printf("Error ft_read: %zd", ft_read(-1, str4, 10));
// 	printf("\n");
// 	printf("read: ");
// 	read(1, str3, 10);
// 	str3[ft_strlen(str3)] = '\0';
// 	printf("%s", str3);
// 	printf("Error read: %zd\n", read(-1, str4, 10));

// }

int		main(void)
{
	test_strlen();
	test_strcpy();
	test_strcmp();
	test_write();
	//test_read();
	return (0);
}
