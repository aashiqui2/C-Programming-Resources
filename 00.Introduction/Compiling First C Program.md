## C Program to Print “Hello World”

```
#include <stdio.h>
int main()
{
	printf("Hello World");
	return 0;
}
```
## Steps to follow
* <p>Save the file with filename along the extension as <b style="color:red">.c</b> </p>
* To compile the code execute the following command:<br>
 ```gcc HelloWorld.c ```
* This would create a C-executable file with a random name given by the compiler itself. We got the executable filename as a.
* To give a user-oriented name, run the following command:
```gcc -o helloworld HelloWorld.c```