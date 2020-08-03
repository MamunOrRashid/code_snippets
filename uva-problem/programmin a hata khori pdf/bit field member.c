#include <stdio.h>

int main()
{
    struct dmy
    {
      unsigned month : 4;
      unsigned day : 5;
      unsigned year : 7;
    }date;
    date.month=1;
    date.day=1;
    date.year=75;
    printf("\n somebodys birth date is %d-%d-%d.",date.month,date.day,date.year);

    return 0;

}
