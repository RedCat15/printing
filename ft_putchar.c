#include <unistd.h>

void ft_putchar(char a)
{
  write(1, &a, 1);
}

//написать ф-ю, которая напечатает английский алфавит с помощью ф-и ft_putchar
void ft_print_alphabet()
{
  //печатаем маленький алфавит
  for (int i = 0; i < 26; i++)
    {
      ft_putchar('a' + i);
    }

  //печатаем \n
ft_putchar('\n');

  //печатаем большой алфавит
for (int i = 0; i < 26; i++)
    {
      ft_putchar('A' + i);
    }

  //печатаем \n
 ft_putchar('\n');
 

}

int main()
{
  ft_print_alphabet();
}
