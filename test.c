/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crepou <crepou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 16:33:33 by crepou            #+#    #+#             */
/*   Updated: 2022/11/23 17:41:53 by crepou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

void	ft_modify_list_with_d(void *elem)
{
	int		len;
	char		*content;

	len = 0;
	content = (char *)elem;
	while (content[len])
	{
		content[len++] = 'd';
	}
}

void	ft_print_result(t_list *elem)
{
	int		len;

	while (elem)
	{
		len = 0;
		while (((char *)elem->content)[len])
			len++;
		write(1, elem->content, len);
		write(1, "\n", 1);
		elem = elem->next;
	}
}

t_list	*ft_lstnewone(void *content)
{
	t_list	*elem;

	elem = (t_list *)malloc(sizeof(t_list));
	if (!elem)
		return (NULL);
	if (!content)
		elem->content = NULL;
	else
		elem->content = content;
	elem->next = NULL;
	return (elem);
}

//void	ft_print_result(char const *s)
//{
//	int		len;

//	len = 0;
//	while (s[len])
//		len++;
//	write(1, s, len);
//}

char	mapi(unsigned int i, char c)
{
	static int indexArray[11] = {0};

	if (i > 10 || indexArray[i] == 1)
		write(1, "wrong index\n", 12);
	else
		indexArray[i] = 1;
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	else if (c >= 'A' && c <= 'Z')
		return (c + 32);
	else
		return (c);
}

void	iter(unsigned int i, char *c)
{
	static int indexArray[11] = {0};

	if (i > 10 || indexArray[i] == 1)
		write(1, "wrong index\n", 12);
	else
		indexArray[i] = 1;
	if (*c >= 'a' && *c <= 'z')
		*c = *c - 32;
	else if (*c >= 'A' && *c <= 'Z')
		*c = *c + 32;
}

void *		lstmap_f(void *content) {
	(void)content;
	return ("OK !");
}

int				__delNum = 0;
void			lstdel_f(void *lst) {
	(void)lst;
	__delNum++;
}

int main(void)
{
    /*printf("The character A is alpha: %d\n", ft_isalpha('A'));
    printf("the character # is an alpha: %d\n", ft_isalpha('#'));
    printf("The character 2 is alpha: %d\n", ft_isalpha('2'));
    printf("the space character is alpha: %d\n", ft_isalpha(' '));*/

    /*printf("0 is a digit: %d\n", ft_isdigit('0'));
    printf("9 is a digit: %d\n", ft_isdigit('9'));
    printf("a is a digit: %d\n", ft_isdigit('a'));
    printf("+ is a digit: %d\n", ft_isdigit('+'));*/

    /*printf("A is alphanumeric: %d\n", ft_isalnum('A'));
    printf("a is alphanumeric: %d\n", ft_isalnum('a'));
    printf("0 is alphanumeric: %d\n", ft_isalnum('0'));
    printf("space is alphanumeric: %d\n", ft_isalnum(' '));*/

    /*printf("A is a printable character: %d\n", ft_isprint('A'));
    printf("\\n is a printable character: %d\n", ft_isprint('\n'));
    printf("space is a printable character: %d\n", ft_isprint(' '));*/

    /*char str[50] = "This is crepou";
    char *str2 = "he";
    char str3[2] = "oo";
    int len,len2,len3;

	char *str4 = &(str[4]);
	printf("string 4: %s \n", str4);

    len = ft_strlen(str);
    len2 = ft_strlen(str2);
    len3 = ft_strlen(str3);
    printf("Length of |%s| is |%d|\n", str, len);
    printf("Length of |%s| is |%d|\n", str2, len2);
    printf("Length of |%s| is |%d|\n", str3, len3);

	printf("result after memset: %s\n", ft_memset(str, 'o', 2));
	ft_bzero(str4, 3);
	printf("result after bzero: %s\n", str);*/

	/*const char src[50] = "Christina Repou";
	char dest[50];
	strcpy(dest,"Heloooo!!");
	printf("Before memcpy dest = %s\n", dest);
	ft_memcpy(dest, src, strlen(src)+1);
	printf("After memcpy dest = %s\n", dest);*/

	/*char str[100] = "Learningisfun";
    char *first, *second;
    first = str;
    second = str;
    printf("Original string :%s\n ", str);

	ft_memmove(second, first+8, 10);
    printf("memmove overlap : %s \n ", str);*/

	/*char *str = "christina Repou";
	char *str2 = NULL;
	int result = 0;
	result  = ft_strlcpy(str2, str, 10);
	printf("after strlcpy: %d %s\n", result, str2);*/

	/*char	*dest;
	int		arg;

	dest = (char *)malloc(sizeof(*dest) * 15);
	memset(dest, 0, 15);
	memset(dest, 'r', 6);
	dest[11] = 'a';
	printf("length of dest %lu\n", strlen(dest));
	printf("dest before: %s\n", dest);
	//arg = ft_strlcpy(dest, "lorem", 15);
	//arg = ft_strlcpy(dest, "", 15);
	//arg = strlcpy(dest, "lorem ipsum", 3);
	//arg = strlcat(dest, "lorem", 8);
	arg = ft_strlcpy(dest, "lorem ipsum dolor sit amet", 0);
	printf("dest: %s  ret_val: %d\n", dest, arg);*/
	
	/*
		ft_print_result(strlcpy(dest, "lorem ipsum", 3));
		write(1, "\n", 1);
		write(1, dest, 15);
	}
	else if (atoi(argv[1]) == 4)
	{
		ft_print_result(strlcpy(dest, "lorem ipsum dolor sit amet", 15));
		write(1, "\n", 1);
		write(1, dest, 15);
	}
	else if (atoi(argv[1]) == 5)
	{
		ft_print_result(strlcpy(dest, "lorem ipsum dolor sit amet", 0));
		write(1, "\n", 1);
		write(1, dest, 15);
	}*/

	/*printf("tolower 4: %c\n", ft_tolower('4'));
	printf("tolower Z: %c\n", ft_tolower('Z'));*/

	//char		*str;
	/*char		str2[] = "\0";
	char *s;
	s = ft_strchr(str2, '\0');
	//str = ft_strrchr(str2, 's');
	printf("%s\n", s);*/

	/*char str1[15];
	char str2[15];
	int ret;

	strcpy(str1, "abcdef");
	strcpy(str2, "ABCDEF");

	ret = ft_strncmp("test\200", "test\0", 6);

	if(ret < 0) {
		printf("str1 is less than str2\n");
	} else if(ret > 0) {
		printf("str2 is less than str1\n");
	} else {
		printf("str1 is equal to str2\n");
	}*/

	/*const char str[] = "http://www.tutorialspoint.com";
	const char ch = '.';
	void *ret;

	ret = ft_memchr(str, ch, ft_strlen(str));

	printf("String after |%c| is - |%s|\n", ch, ret);*/
	/*char dest[30]; memset(dest, 0, 30);
	dest[0] = 'B';
	printf("sizeof: %lu\n",sizeof(dest));*/

	/*char str1[15];
	char str2[15];
	int ret;

	memcpy(str1, "abcdef", 6);
	memcpy(str2, "ABCDEF", 6);

	ret = ft_memcmp("t\200", "t\0", 2);;

	if(ret > 0) {
		printf("str2 is less than str1\n");
	} else if(ret < 0) {
		printf("str1 is less than str2\n");
	} else {
		printf("str1 is equal to str2\n");
	}*/

	/*const char *str;
	str = ft_strnstr("lorem ipsum dolor sit amet", "dolor", 15);
	printf("str: %s\n", str);*/

	/*int mynum;

	mynum = ft_atoi("-4886");
	printf("my num is : %d\n", mynum);*/

   /*int i, n;
   int *a;

   printf("Number of elements to be entered:");
   scanf("%d",&n);

   a = (int*)ft_calloc(n, sizeof(int));
   printf("Enter %d numbers:\n",n);
   for( i=0 ; i < n ; i++ ) {
      scanf("%d",&a[i]);
   }

   printf("The numbers entered are: ");
   for( i=0 ; i < n ; i++ ) {
      printf("%d ",a[i]);
   }
   free( a );*/

//   char *str = "Helloworld";
//   char *result;
//   result = ft_strdup(str);
//   printf("The string : %s", result);

/*char	str[] = "lorem ipsum dolor sit amet";
	char	*str_dup;

	if (!(str_dup = strdup(str)))
			printf("NULL\n");
		else
			printf("str:%s\n",str_dup);
	if (str_dup == str)
			printf("str_dup's adress == str's adress\n");*/

	/*char	*dest;

	if (!(dest = (char *)malloc(sizeof(*dest) * 15)))
		return (0);
	memset(dest, 0, 15);
	memset(dest, 'r', 6);
	dest[10] = 'a';
	printf("string: %lu, %s\n",ft_strlcat(dest, "lorem ipsum dolor sit amet", 5), dest );*/

	/*char	*str;
	char	*strmapi;

	str = (char *)malloc(sizeof(*str) * 12);
	strcpy(str, "LoReM iPsUm");
	strmapi = ft_strmapi(str, &mapi);
	ft_print_result(strmapi);
	if (strmapi == str)
		ft_print_result("\nA new string was not returned");
	if (strmapi[11] != '\0')
		ft_print_result("\nString is not null terminated");*/

	/*char	*str;

	str = (char *)malloc(sizeof(*str) * 12);
	
	strcpy(str, "LoReM iPsUm");
	ft_striteri(str, &iter);
	ft_print_result(str);*/

	//ft_putnbr_fd(5, 2);

	/*(char *res = ft_itoa(-2147483648LL);
	printf("string: %s\n", res);*/

	/*char	str[] = "lorem ipsum dolor sit amet";
	char	*strsub;

	strsub = ft_substr(str, 400, 20);
	printf("substr: %s\n", strsub);*/

	/*char s1[] = "lorem \n ipsum \t dolor \n sit \t amet";
	char	*strtrim;
	strtrim = ft_strtrim(s1, "te");
	printf("trim: %s\n", strtrim);*/

	/*char	**tabstr;
	tabstr = ft_split("The cat is", ' ');*/

	/*char *s1 = "omg1||||||||||||||||";
	char *s2 = "omg3";
	size_t size = 4;
	int i1 = ((strncmp(s1, s2, size) > 0) ? 1 : ((strncmp(s1, s2, size) < 0) ? -1 : 0));
	int i2 = ((ft_strncmp(s1, s2, size) > 0) ? 1 : ((ft_strncmp(s1, s2, size) < 0) ? -1 : 0));

	printf("i1: %d\n", i1);
	printf("cmp: %d\n", strncmp(s1, s2, size));
	if (i1 == i2)
		printf("heyyy\n");

	printf("result: %d\n", ft_strncmp("test\200", "test\0", 6));*/

	/*char	**tabstr;
	int		i;

	i = 0;
	tabstr = ft_split("      split       this for   me  !       ", ' ');
	while (tabstr[i] != NULL)
	{
		printf("word %D: %s\n", i, tabstr[i]);
		i++;
	}*/

	/*t_list * l =  NULL; t_list * l2 =  NULL; 
	ft_lstadd_back(&l, ft_lstnew((void*)1));
	//printf("correct: %d, content: %d\n",l->content == (void*)1, (int)l->content);
	//printf("is null: %d\n", l->next == 0);

	//ft_lstadd_back(&l, ft_lstnew((void*)2));
	//printf("correct: %d, content: %d\n",l->content == (void*)1, (int)l->content);
	//printf("correct: %d, content: %d\n",l->next->content == (void*)2, (int)l->next->content);
	//printf("is null: %d\n", l->next->next == 0);

	//ft_lstadd_back(&l2, ft_lstnew((void*)3));
	//ft_lstadd_back(&l2, ft_lstnew((void*)4));
	//ft_lstadd_back(&l, l2);
	//printf("correct: %d, content: %d\n",l->content == (void*)1, (int)l->content);
	//ft_lstclear(&l, free);
	//printf("is null: %d\n", l == 0);*/
	///* 6 */ check(l->content == (void*)1);
	///* 7 */ check(l->next->content == (void*)2);
	///* 8 */ check(l->next->next->content == (void*)3);
	///* 9 */ check(l->next->next->next->content == (void*)4);
	///* 10 */ check(l->next->next->next->next == 0);*/
	/*char *c1, *c2;
	char haystack[30] = "aaabcabcd";
	char needle[10] = "aabc";
	
	c1 = ft_strnstr(haystack, needle, -1);
	c2 = strnstr(haystack, needle, -1);
	printf("c1: %s c2:%s\n",c1,c2);*/

	/*char *n = "546:5";
    int i1 = atoi(n);
    int i2 = ft_atoi(n);

	printf("n: %d\n", *n);
	printf("i1: %d i2: %d\n",i1,i2);*/

	/*char *str = "";
    char *ret = ft_substr(str, 1, 1);
	printf("s: %s\n", ret);*/

	/*t_list	*l = ft_lstnew(ft_strdup(" 1 2 3 "));
	t_list	*ret;

	l->next = ft_lstnew(ft_strdup("ss"));
	l->next->next = ft_lstnew(ft_strdup("-_-"));
	// ret = ft_lstmap(l, lstmap_f, NULL);  // del may be necessary to use
	ret = ft_lstmap(l, lstmap_f, lstdel_f); // or lstdelone_f
	printf("ret content: %s\n", ret->content);
	printf("ret content: %s\n", ret->next->content);
	printf("ret content: %s\n", ret->next->next->content);
	if (!strcmp(ret->content, "OK !") && !strcmp(ret->next->content, "OK !") && !strcmp(ret->next->next->content, "OK !") && !strcmp(l->content, " 1 2 3 ") && !strcmp(l->next->content, "ss") && !strcmp(l->next->next->content, "-_-"))
		printf("problem\n");*/

	/*int res;

	res = ft_strncmp("", "", 1);
	printf("res: %d\n", res);*/

	/*char *s1 = "  \t \t \n   \n\n\n\t";
    char *s2 = "";
    char *ret = ft_strtrim(s1, " \n\t");
 
    if (!strcmp(ret, s2))
		printf("success!!!\n");
	printf("rest: %s\n", ret);*/

	/*char *s1 = "\xff\xaa\xde\xffMACOSX\xff";
	char *s2 = "\xff\xaa\xde\x02";
    size_t size = 8;
    int i1 = memcmp(s1, s2, size);
    int i2 = ft_memcmp(s1, s2, size);
 
	printf("i1: %d i2: %d\n", i1, i2);
    if (i1 == i2)
		printf("sucess!!\n");*/

	/*char *ret;
	char haystack[30] = "aaabcabcd";
	char needle[10] = "aabc";
	
	ret = ft_strnstr(haystack, needle, -1);
	printf("ret1: %s %d\n", ret, ft_strnstr(haystack, needle, -1) == haystack + 1);*/

	/*char **f = ft_split("", 'z');
	int i = 0;
	
	while (f[i] != NULL)
	{
		printf("f[%d]: %s\n",i, f[i]);
		i++;
	}*/
	
	char **result = ft_split("\10\10\10\10hello!\10\10\10\10\10", '\10');
	int i = 0;
	if (result != NULL)
	{
		while (result[i] != NULL)
		{
			printf("word: %s\n", result[i]);
			i++;
		}
	}

	return 0;
}
