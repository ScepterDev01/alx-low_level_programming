#include main.h



/**
 *
 *  * main - check the code for ALX School students.
 *
 *   *
 *
 *    * Return: Always 0 (Success)
 *
 *    */



int _isupper(int c)
{
	char uppercase ='A';
	int isupper = 0;
	for (; uppercase <= 'Z'; uppercase++)
    {
	    if (c == uppercase)
           {
		   isupper = 1;
		   break;
            }
    }
	return (isupper);
}
