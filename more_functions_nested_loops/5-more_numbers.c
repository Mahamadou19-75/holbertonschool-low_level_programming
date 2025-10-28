#include "main.h"

/**
 * more_numbers - prints numbers from 0 to 14, 10 times
 */
void more_numbers(void)
{
    int i, j;

    for (i = 0; i < 10; i++)  /* répète 10 fois */
    {
        for (j = 0; j <= 14; j++)
        {
            if (j >= 10)
                _putchar('0' + j / 10);  /* chiffre des dizaines */
            _putchar('0' + j % 10);      /* chiffre des unités */
        }
        _putchar('\n');  /* nouvelle ligne */
    }
}
