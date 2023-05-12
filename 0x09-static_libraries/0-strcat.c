/**
 * _strcat - append src string to des string
 *@src : src string
 *@dest : des string
 * Return: char *.
 */
char *_strcat(char *dest, char *src)
{
	char *dest2 = dest;

	while (*dest2 != '\0')
	{
		dest2++;
	}
	while (*src != '\0')
	{
		*dest2 = *src;
		src++;
		dest2++;
	}
	*dest2 = '\0';
	return (dest);

}
