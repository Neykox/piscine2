#include <unistd.h>

int diago(int k, int grille[8][8], int i, int j);
int column (int k, int grille[8][8], int j);
int ligne (int k, int grille[8][8], int i);
int valide(int grille[8][8], int position, int compt);
int ft_eight_queens_puzzle(void);
void ft_putchar(char c);

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int ft_eight_queens_puzzle(void)
{
	int compt = 0;
	int grille[8][8] = 
	{
		{0, 0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0, 0},
	};
	valide(grille, 0, compt);
	ft_putchar(compt + 48);
	return 0;
}

int valide(int grille[8][8], int position, int compt)
{
    int i;
    int j; 
    int k;

    i = position/8;
    j = position%8;
    k = 1;
    while (k <= 8)
    {
    	if (ligne(k,grille,i) && column(k,grille,j) && diago(k,grille,i,j))
        {
            grille[i][j] = k;

            if (valide (grille, position+1, compt))
            {
                return 1;
                compt++;
            }
        }
        k++;
    }
    grille[i][j] = 0;

    return 0;
}

int ligne (int k, int grille[8][8], int i)
{
	int j;

	j = 0;
	while (j < 8)
	{
		if (grille[i][j] == k)
			return 0;
		else
			j++;
	}
	return 1;
}

int column (int k, int grille[8][8], int j)
{
	int i;

	i = 0;
	while (i < 8)
	{
		if (grille[i][j] == k)
			return 0;
		else
			i++;
	}
	return 1;
}

int diago(int k, int grille[8][8], int i, int j)
{
	int  f;

	f = 0;
	while (f < 8)
	{
		if (grille[i + 1][j + 1] == k)
			return 0;
		else
			f++;
	}
	return 1;
}

int main()
{
	ft_eight_queens_puzzle();
	return 0;
}
