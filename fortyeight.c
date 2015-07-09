# include <stdio.h>

int main()
{
	int i, num, j;
	printf ("Enter the number: ");
	scanf ("%d", &num );

	for (i=1; i<num; i++)
		j=j*i;    

	printf("The factorial of %d is %d\n",num,j);
}

//This program is written with errors so that we can debug them

//To run gdb (a type of debugger) on this file, do the following:

//Exit the file

//Type: cc -g fortyeight.c

//After pressing enter, type: gdb a.out

//After pressing enter, type: break, followed by the line number that you suspect one of the errors is on
//Other formats of this are: break fortyfive.c:, followed by a line number
//or: break fortyfive.c:, followed by a function name
//after typing any variation of the command, press enter

//After doing the previous step to all the line numbers the you suspect have errors
//Type: run, and press
//This will result in a prompt

//If the prompt refers to a line number other that the line number of the breakpoint it is referring to
//The line number of the breakpoint is error free
//The alternative line is also error free (note that it stops at that line for a different reason * )

//Press c to continue to the next breakpoint (gdb runs breakpoint in line number order, not breakpoint(bp)  number order)

// *Before showing the prompt of the next breakpoint, gdb will ask you to enter a number(in the case of this program if your bp<6)
//This is because gdb runs every line after the line number assigned to the breakpoint
//If it comes upon a line that needs user input, it stops and waits for you to continue the run
