/**
 * string_toupper - change string to uppercase
 *@s : the array
 * Return: string
 */
char *cap_string(char *s)
{
	int index = 0;

	while (s[index])
	{
		while (!(s[index] >= 'a' && s[index] <= 'z'))
		{
			index++;
		}
		if (s[index] == ' ' || s[index] == '\t' ||
				s[index] == '\n' || s[index] == ',' ||
				s[index] == ';' || s[index] == '.' ||
				s[index] == '!' || s[index] == '?' ||
				s[index] == '"' || s[index] == '(' ||
				s[index] == ')' || s[index] == '{' || s[index] == '}')
		{
			s[index] -= 32;
		}
		index++;
	}
	return (s);
}
