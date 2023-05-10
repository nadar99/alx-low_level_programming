/**
 * prime - check if number is prime
 *@n: number
 *@i: number
 * Return: int.
 */
int prime(int n, int i)
{
	if (n % i == 0)
	{
		if (n == i)
			return (1);
		else
			return (0);
	}
	return (prime(n, i + 1));
}
/**
 * is_prime_number - check if the number is prime
 *@n: number
 * Return: int.
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (prime(n, 2));
}
