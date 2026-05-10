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

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

int main(void)
{
	int	a;

	a = 2147483647;
	ft_putnbr(a);
	ft_ft(&a);
	ft_putnbr(a);
	return (0);
}
