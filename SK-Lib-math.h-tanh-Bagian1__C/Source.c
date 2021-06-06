/* tanh example */
#include <stdio.h>      /* printf */
#include <math.h>       /* tanh, log */
#include <conio.h>		/* _getch()	*/

int main() {
	double param, result;

	param = log(2.0);
	result = tanh(param);

	printf("The hyperbolic tangent of %f is %f.\n", param, result);

	_getch();
	return 0;
}