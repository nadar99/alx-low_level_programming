/**
 * _memcpy - a function that copies memory area
 * @dest: the destenation to copy to
 * @src: the src to copy from
 * @n: number of bytes of memory to copy from src
 *
 * Return: pointer to the destination.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *dest1 = dest;

	while (n > 0)
	{
		*dest1 = *src;
		dest1++;
		src++;
		n--;
	}
	return (dest);
}
