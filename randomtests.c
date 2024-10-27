// standard functions
#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <malloc/malloc.h>
#include <limits.h>

// libft
#include "libft.h"

void printArray(int arr[], int n)
{
   for (int i=0; i<n; i++)
      printf("%d ", arr[i]);
}

int main (void)
{
	
/*
	printf("/// isalpha\n");

	printf("%d", isalpha('a'));
	printf("%d", isalpha('z'));
	printf("%d", isalpha('A'));
	printf("%d", isalpha('Z'));
	printf("%d", isalpha(1));
	printf("%d", isalpha('-'));
	printf("\n");

	printf("%d", ft_isalpha('a'));
	printf("%d", ft_isalpha('z'));
	printf("%d", ft_isalpha('A'));
	printf("%d", ft_isalpha('Z'));
	printf("%d", ft_isalpha(1));
	printf("%d", ft_isalpha('-'));
	printf("\n\n");
	
*/

/*
	printf("/// isdigit\n");

	printf("%d", isdigit('0'));
	printf("%d", isdigit('a'));
	printf("\n");

	printf("%d", ft_isdigit('0'));
	printf("%d", ft_isdigit('a'));
	printf("\n\n");

*/

/*
	printf("/// isalnum\n");

	printf("%d", isalnum('0'));
	printf("%d", isalnum('9'));
	printf("%d", isalnum('a'));
	printf("%d", isalnum('z'));
	printf("%d", isalnum('A'));
	printf("%d", isalnum('Z'));
	printf("%d", isalnum('-'));
 	printf("\n");

	printf("%d", ft_isalnum('0'));
	printf("%d", ft_isalnum('9'));
	printf("%d", ft_isalnum('a'));
	printf("%d", ft_isalnum('z'));
	printf("%d", ft_isalnum('A'));
	printf("%d", ft_isalnum('Z'));
	printf("%d", ft_isalnum('-'));
	printf("\n\n");

*/
/*
	printf("/// isprint\n");

	printf("%d", isprint(' '));
	printf("%d", isprint('!'));
	printf("%d", isprint('a'));
	printf("%d", isprint('~'));
 	printf("\n");

	printf("%d", ft_isprint(' '));
	printf("%d", ft_isprint('!'));
	printf("%d", ft_isprint('a'));
	printf("%d", ft_isprint('~'));
	printf("\n\n");

*/

/*
	printf("/// strlen\n");
	char strstrlen[] = "four";

	printf("%lu", strlen(strstrlen));
 	printf("\n");

	printf("%lu", ft_strlen(strstrlen));
	printf("\n\n");

*/

/*
	printf("/// toupper\n");
	char chartoupper = 'a';

	printf("%c", toupper(chartoupper));
	chartoupper = 'A';
	printf("%c", toupper(chartoupper));
 	printf("\n");

	chartoupper = 'a';
	printf("%c", ft_toupper(chartoupper));
	chartoupper = 'A';
	printf("%c", ft_toupper(chartoupper));
	printf("\n\n");

*/

/*
	printf("/// tolower\n");
	char chartolower = 'a';

	printf("%c", tolower(chartolower));
	chartolower = 'A';
	printf("%c", tolower(chartolower));
 	printf("\n");

	chartolower = 'a';
	printf("%c", ft_tolower(chartolower));
	chartolower = 'A';
	printf("%c", ft_tolower(chartolower));
	printf("\n\n");

*/

/*
	printf("/// memset\n");
	char strmemset[] = "This is a string.";

	memset(strmemset+4, 'X', 4);
	puts(strmemset);

	int memsetn = 10; 
    int memsetarr[memsetn]; 
    memset(memsetarr, -1, memsetn*sizeof(memsetarr[0])); 
    //printf("Array after memset()\n"); 
    printArray(memsetarr, memsetn); 
 	printf("\n\n");

	strcpy(strmemset, "This is a string.");
	ft_memset(strmemset+4, 'X', 4);
	puts(strmemset);

	int ftmemsetn = 10; 
    int ftmemsetarr[ftmemsetn]; 
    ft_memset(ftmemsetarr, -1, ftmemsetn*sizeof(ftmemsetarr[0])); 
    //printf("Array after memset()\n"); 
    printArray(ftmemsetarr, ftmemsetn); 
	printf("\n\n");

*/

/*
	printf("/// strlcpy\n");

	//char src[] = "This is a long string.\0I'm hidden lol\r\n";
	char src[] = "";
	char dst[12];
	printf("%s\n", src);

	size_t ret = strlcpy(dst, src, 12);

	puts(dst);
	printf("return size: %zu", ret);
	printf("\n\n");
	
	//char ftsrc[] = "This is a long string.\0I'm hidden lol\r\n";
	char ftsrc[] = "";
	char ftdst[12];
	printf("%s\n", ftsrc);

	size_t ftret = strlcpy(ftdst, ftsrc, 12);

	puts(ftdst);
	printf("return size: %zu", ftret);
	printf("\n\n");
*/

/*	
	
	printf("/// strlcat\n");

	char src[] = "pqrstuvwxyz";
	char dst[20] = "abcd";
	printf(" \"%s\" +  \"%s\" \n", src, dst);
	size_t ret = strlcat(dst, src, 20);

	puts(dst);
	printf("return size: %zu", ret);
	printf("\n\n");


	char ftsrc[] = "pqrstuvwxyz";
	char ftdst[20] = "abcd";
	printf(" \"%s\" +  \"%s\" \n", ftsrc, ftdst);
	size_t ftret = ft_strlcat(ftdst, ftsrc, 20);

	puts(ftdst);
	printf("return size: %zu", ftret);
	printf("\n\n");
*/

/*
	printf("/// strchr\n");

	char strchr_s[] = "String.";
	char strchr_c = 't' + 256;
	char *strchr_ret;

	printf("%s\n", strchr_ret = strchr(strchr_s, strchr_c));
	printf("\n\n");

	char ft_strchr_s[] = "String.";
	char ft_strchr_c = 't' + 256;
	char *ft_strchr_ret;

	printf("%s\n", ft_strchr_ret = ft_strchr(ft_strchr_s, ft_strchr_c));
	printf("\n\n");
*/

/*

	printf("/// strRchr\n");

	char strrchr_s[] = "XStringString.";
	char strrchr_c = 'S';
	char *strrchr_ret;

	printf("%s", strrchr_ret = strrchr(strrchr_s, strrchr_c));
	printf("\n\n");

	char ft_strrchr_s[] = "XStringString.";
	char ft_strrchr_c = 'S';
	char *ft_strrchr_ret;

	printf("%s", ft_strrchr_ret = ft_strrchr(ft_strrchr_s, ft_strrchr_c));
	printf("\n\n");

*/
/*
	printf("/// strncmp\n");

	char s1[] = "teste";
	char s2[] = "teste";

	printf("%d | %s / %s", strncmp(s1, s2, 10), s1, s2);
	printf("\n\n");

	char fts1[] = "teste";
	char fts2[] = "teste";

	printf("%d | %s / %s", ft_strncmp(fts1, fts2, 10), fts1, fts2);
	printf("\n\n");
*/


/*
	printf("/// strnstr\n");

	char s1[] = "aaabcabcd";
	char s2[] = "a";
	char *ret = strnstr(s1, s2, -1);

	printf("%s | %s / %s", ret, s1, s2);
	printf("\n\n");

	char fts1[] = "aaabcabcd";
	char fts2[] = "a";
	char *ftret = ft_strnstr(fts1, fts2, -1);

	printf("%s | %s / %s", ftret, fts1, fts2);
	printf("\n\n");
*/


	printf("/// atoi\n");
	
	printf("%d %d %d %d %d %d\n", 
			atoi(" 20"), 
			atoi(" -20"), 
			atoi(" --20"), 
			atoi(" +20"), 
			atoi(" -1-2"), 
			atoi("a10"));

	printf("%d %d %d %d %d %d\n", 
			ft_atoi(" 20"), 
			ft_atoi(" -20"), 
			ft_atoi(" --20"), 
			ft_atoi(" +20"), 
			ft_atoi(" -1-2"), 
			ft_atoi("a10"));
	printf("\n\n");

	// limits stuff

	char intmin[] = "-2147483648";
	char intmax[] = "2147483647";

	char intmin1[] = "-2147483649";
	char intmax1[] = "2147483648";

	char longmin[] = "-9223372036854775808";
	char longmax[] = "9223372036854775807";

	char longmin1[] = "-9223372036854775809";
	char longmax1[] = "9223372036854775808";

	char longmin100[] = "-92233720368547758000";
	char longmax100[] = "92233720368547758000";



printf("intmin %d intmax %d intmin-1 %d intmax+1 %d\n", 
		atoi(intmin), 
		atoi(intmax), 
		atoi(intmin1), 
		atoi(intmax1));

printf("intmin %d intmax %d intmin-1 %d intmax+1 %d\n", 
		ft_atoi(intmin), 
		ft_atoi(intmax), 
		ft_atoi(intmin1), 
		ft_atoi(intmax1));
	printf("\n");


printf("longmin %d\t longmax %d\t longmin-1 %d\t longmax+1 %d\t longmin-100 %d\t longmax+100 %d\n", 
		atoi(longmin), 
		atoi(longmax), 
		atoi(longmin1), 
		atoi(longmax1),
		atoi(longmin100), 
		atoi(longmax100));


printf("longmin %d\t longmax %d\t longmin-1 %d\t longmax+1 %d\t longmin-100 %d\t longmax+100 %d\n", 
		ft_atoi(longmin), 
		ft_atoi(longmax), 
		ft_atoi(longmin1), 
		ft_atoi(longmax1),
		ft_atoi(longmin100), 
		ft_atoi(longmax100));


	printf("\n\n");

	printf("system's values\n");
	printf("long max:\t %ld\n", LONG_MAX);
	printf("long min:\t %ld\n", LONG_MIN);
	printf("longlong max:\t %lld\n", LLONG_MAX);
	printf("longlong min:\t %lld\n", LLONG_MIN);


/*
	printf("/// strtol\n");

	printf("%d %d %d %d %d %d\n", strtol(" 10"), strtol(" -10"), strtol(" --10"), strtol(" +10"), strtol(" -1-2"), strtol("a10"));
	printf("\n\n");

	printf("%d %d %d %d %d %d\n", ft_atoi(" 10"), ft_atoi(" -10"), ft_atoi(" --10"), ft_atoi(" +10"), ft_atoi(" -1-2"), ft_atoi("a10"));
	printf("\n\n");

printf("%d %d %d %d %d %d\n", atoi("-2147483648"), atoi("2147483647"), atoi("-2147483649"), atoi("-99999999999999999"), atoi("99999999999999999"), atoi("0000000000000000000000"));
	printf("\n\n");

	printf("%d %d %d %d %d %d\n", ft_atoi("-2147483648"), ft_atoi("2147483647"), ft_atoi("-2147483649"), ft_atoi("-99999999999999999"), ft_atoi("99999999999999999"), ft_atoi("0000000000000000000000"));
	printf("\n\n");
*/


/*
	printf("/// memcmp\n");

	char memcmp_s1[] = "String x";
	char memcmp_s2[] = "String";

	printf("%d | %s / %s", memcmp(memcmp_s1, memcmp_s2, 6), memcmp_s1, memcmp_s2);
	printf("\n\n");

	char ft_memcmp_s1[] = "String x";
	char ft_memcmp_s2[] = "String";

	printf("%d | %s / %s", ft_memcmp(ft_memcmp_s1, ft_memcmp_s2, 6), ft_memcmp_s1, ft_memcmp_s2);
	printf("\n\n");
*/


/*
	printf("/// bzero\n");

	char bzero_s[] = "This is a string.";

	printf("%s | size is %d\n", bzero_s, (int)sizeof(bzero_s));

	bzero(bzero_s, 2);
	printf("%s | size is %d\n", bzero_s, (int)sizeof(bzero_s));
	printf("\n\n");

	char ft_bzero_s[] = "This is a string.";

	printf("%s | size is %d\n", ft_bzero_s, (int)sizeof(ft_bzero_s));

	ft_bzero(ft_bzero_s, 2);
	printf("%s | size is %d\n", ft_bzero_s, (int)sizeof(ft_bzero_s));
	printf("\n\n");

*/

/*
	printf("/// ft_substr\n");

	char fts[] = "";
	char* ftp;

	ftp = ft_substr(fts, 1, 1);

	printf("malloc_size: %zu\n", malloc_size(ftp));
	printf("%s\n", fts);
	printf("%s",  ftp);
	printf("\n\n");
*/


/*
	printf("/// ft_strjoin\n");

	char ft_strjoin_s1[] = "What is";
	char ft_strjoin_s2[] = " love.";
	char* ft_strjoin_p;

	printf("%zu\n", ft_strlen(ft_strjoin_s2));
	ft_strjoin_p = ft_strjoin(ft_strjoin_s1, ft_strjoin_s2);
	printf("%s | %s\n", ft_strjoin_s1, ft_strjoin_s2);
	printf("%s",  ft_strjoin_p);
	printf("\n\n");

*/
/*
	printf("/// memchr\n");

	char s[] = "String.";
	char *stemp = strdup(s);
	memcpy(s, stemp, strlen(stemp));
	char c = '\0';
	char *ret;

	printf("%s\n", ret = memchr(s, c, 9));
	printf("\n\n");

	char fts[] = "String.";
	char ftc = '\0';
	char *ftret;

	printf("%s\n", ftret = ft_memchr(fts, ftc, 9));
	printf("\n\n");
*/
/*
	printf("/// isascii\n");

	printf("%d", isascii('0')); 		
	printf("%d", isascii('\n')); 		
 	printf("\n");

	printf("%d", ft_isascii('0'));
	printf("%d", ft_isascii('\n'));
	printf("\n\n");

	int i;

 	i = -1;
 	while (i < 530)
 	{
 		if (ft_isascii(i) != isascii(i))
 		{
 			printf("%d TEST_FAILED: %d vs %d \n", i, isascii(i), ft_isascii(i));
 		}
 		i++;
 	}
*/

	/*
	printf("/// memcpy\n");

	//char src[] = "basic test of memcpy !";	
	//char src[] = "";	
	char src[0];	
	char dst[0];
	size_t buf = 5;

	memcpy(dst, src, buf);
	printf("%s\n", dst);
	printf("\n\n");

	//char ftsrc[] = "basic test of memcpy !";	
	//char ftsrc[] = "";	
	char ftsrc[0];	
	char ftdst[0];
	size_t ftbuf = 5;

	ft_memcpy(ftdst, ftsrc, ftbuf);
	printf("%s\n", ftdst);
	printf("\n\n");
*/

/*
	printf("/// memmove\n");
	char dst[50] = "This is a string.";
	printf("%s\n", dst);
	memmove(dst + 2, dst, 4);
	puts(dst);
	printf("\n\n");

	char ftdst[50] = "This is a string.";
	printf("%s\n", ftdst);
	ft_memmove(ftdst + 2, ftdst, 4);
	puts(ftdst);
	printf("\n\n");
*/

/*
	printf("/// ft_itoa\n");

	int value;

	value = INT_MIN;
	printf("in:\t %d\n", value);
	printf("out:\t %s\n\n", ft_itoa(value));

	value = -20;
	printf("in:\t %d\n", value);
	printf("out:\t %s\n\n", ft_itoa(value));

	value = -1;
	printf("in:\t %d\n", value);
	printf("out:\t %s\n\n", ft_itoa(value));

	value = 0;
	printf("in:\t %d\n", value);
	printf("out:\t %s\n\n", ft_itoa(value));

	value = 1;
	printf("in:\t %d\n", value);
	printf("out:\t %s\n\n", ft_itoa(value));

	value = 20;
	printf("in:\t %d\n", value);
	printf("out:\t %s\n\n", ft_itoa(value));

	value = INT_MAX;
	printf("in:\t %d\n", value);
	printf("out:\t %s\n\n", ft_itoa(value));


	printf("\n\n");
*/
/*
	printf("/// ft_strtrim\n");

	char string[] = "XYwhatXY";
	char set[] = "XY";

	printf("in:\t %s | %s\n", string, set );
	printf("out:\t %s\n\n", ft_strtrim(string, set));

	char string2[] = "YXlorem ipsum dolor sit amet";
	char set2[] = "XY";

	printf("in:\t %s | %s\n", string2, set2 );
	printf("out:\t %s\n\n", ft_strtrim(string2, set2));

	char string3[] = "lorem ipsum dolor sit ametXY";
	char set3[] = "XY";

	printf("in:\t %s | %s\n", string3, set3 );
	printf("out:\t %s\n\n", ft_strtrim(string3, set3));

	char string4[] = "          ";
	char set4[] = " ";

	printf("in:\t %s | %s\n", string4, set4 );
	printf("out:\t %s\n\n", ft_strtrim(string4, set4));

	char string5[] = "   xxx    xxx";
	char set5[] = " x";

	printf("in:\t %s | %s\n", string5, set5 );
	printf("out:\t %s\n\n", ft_strtrim(string5, set5));

*/
/*
	printf("/// ft_split\n");

	char s[] = "      ";
	char c  = ' ';
	char	**ret;

	printf("in:\t \"%s\" | %c\n", s, c );

		ret = ft_split(s, c);
	
	int i = 0;
	//int j = 0;

	
	while (ret)
	{
		while (ret[i])
		{
			printf("print in main %s\n", ret[i]);
			i++;
		}
		ret++;
	}
	

	printf("end of test\n");
*/
	printf("\n\n");

	return 0;
}
