/**
 * have_natural_square - returns the natural square root of a number
 *@n: number
 *@i: number
 * Return: int.
 */
int have_natural_square(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return (have_natural_square(n, i + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 *@n: number
 * Return: int.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (have_natural_square(n, 0));
}
