/**
 * _strlen - return size of string
 *@s : pointer to a charachter
 * Return: int.
 */
int _strlen(char *s)
{
	int size = 0;

	while (*s != '\0')
	{
		size++;
		s++;
	}
	return (size);
}
