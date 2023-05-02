/**
 * _strcpy - copy source to destination
 *@dest : pointer to a charachter
 *@src : pointer to a buffer
 * Return: pointer to a char.
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
