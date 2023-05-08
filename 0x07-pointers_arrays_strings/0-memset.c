/**
 * _memset - fills memory with a constant byte
 * @s: the address of memory to fill
 * @b: the constant byte
 * @n: number of bytes of memory to fill
 *
 * Return: pointer.
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *s1 = s;

	while (n > 0)
	{
		*s1 = b;
		s1++;
		n--;
	}
	return (s);
}
