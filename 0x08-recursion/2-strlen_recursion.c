/**
 * _strlen_recursion - a function that returns the length of a string
 *@s: string
 * Return: int.
 */
int _strlen_recursion(char *s)
{
	static int n;

	if (*s == '\0')
	{
		return (n);
	}
	else
	{
		n++;
	}
	_strlen_recursion(++s);
}
