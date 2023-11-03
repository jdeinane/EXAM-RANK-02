unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char	res = 0;
	int				i = 8;

	while (i--)
	{
		res = res * 2 + (octet % 2);
		octet /= 2;
	}
	return (res);
}