/**
 * _strncpy - append src string to des string
 *@src : src string
 *@dest : des string
 *@n : integer
 * Return: char *.
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *dest2 = dest, *src2 = src;
	int src_size = 0, n2 = n;

	while (*src != '\0' && n > 0)
	{
		*dest2 = *src;
		src++;
		dest2++;
		n--;
	}
	while (*src2 != '\0')
	{
		src_size++;
		src2++;
	}
	while (n2 > src_size)
	{
		*dest2 = '\0';
		dest2++;
		n2--;
	}
	return (dest);

}
