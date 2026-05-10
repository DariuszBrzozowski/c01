#include <unistd.h>

// Function found on the Internet - for testing
void ft_putnbr(int n) {
    // Handle the smallest possible integer to avoid overflow during negation
    if (n == -2147483648) {
        write(1, "-2147483648", 11);
        return;
    }
    // Handle negative numbers
    if (n < 0) {
        write(1, "-", 1);
        n = -n;
    }
    // Recursively print preceding digits
    if (n >= 10) {
        ft_putnbr(n / 10);
    }
    // Convert the current digit to ASCII and write it
    char c = (n % 10) + '0';
    write(1, &c, 1);
}

void ft_ultimate_div_mod(int *a, int *b)
{
	int	temp_val_a;

	temp_val_a = *a;

	if (*b != 0)
	{
		*a = *a / *b;
		*b = temp_val_a % *b;
	}
}

int	main(void){
	int	a;
	int	b;

	a = 9;
	b = 6;

	ft_ultimate_div_mod(&a, &b);
	ft_putnbr(a);
	ft_putnbr(b);
	return (0);
}

