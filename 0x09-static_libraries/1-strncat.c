/**
 * _strncat - append src string to des string
 *@src : src string
 *@dest : des string
 *@n : integer
 * Return: char *.
 */
char *_strncat(char *dest, char *src, int n)
{
	char *dest2 = dest;

	/** move the pointer at the end of the destionation string**/
	while (*dest2 != '\0')
	{
		dest2++;
	}
	while (*src != '\0' && n > 0)
	{
		*dest2 = *src;
		src++;
		dest2++;
		n--;
	}
	return (dest);

}
