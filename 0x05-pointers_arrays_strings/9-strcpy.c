/**
 * _strcpy - copy source to destination
 *@dest : pointer to a charachter
 *@src : pointer to a buffer
 * Return: pointer to a char.
 */
char *_strcpy(char *dest, char *src)
{
	char *dest2 = dest;

	while (*src != '\0')
	{
		*dest2 = *src;
		dest2++;
		src++;
	}
	dest2 = '\0';

	return (dest);
}
