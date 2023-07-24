/**
 * rot13 -  encodes a string using rot13
 * @s: the string to encode
 *
 * Return: a pointer to the encoded string
 */
char *rot13(char *s)
{
	char *temp = s;
	char input_arr[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char output_arr[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == input_arr[j])
			{
				s[i] = output_arr[j];
				break;
			}
		}
	}
	return (temp);
}
