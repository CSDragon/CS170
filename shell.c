/////imports
#include <stdio.h>


/////



int mainloop()//is this main or is this called? What are the args
{

	char lineIn[1000];
	while(true) //stdinloop
	{
		// ??? In cases where STDIN is not a TTY (input redirection during invocation of your shell), no prompt should be displayed. 
		if(isatty(STDIN_FILENO))
			printf("\nsish:>");
	
		//get the next line
		fgets(lineIn, 1000, stdin);
		
		//execute command
		
	}
	
	exit(0);
}