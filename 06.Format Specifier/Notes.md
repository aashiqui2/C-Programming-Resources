Sure, here is the requested information in chart form:

### Format Specifiers Chart

| Specifier | Used For                                      | Example                    |
|-----------|-----------------------------------------------|----------------------------|
| `%c`      | A single character                            | `printf("%c", 'A');`       |
| `%s`      | A string                                      | `printf("%s", "Hello");`   |
| `%hi`     | Short (signed)                                | `printf("%hi", (short)10);`|
| `%hu`     | Short (unsigned)                              | `printf("%hu", (unsigned short)10);` |
| `%Lf`     | Long double                                   | `printf("%Lf", 1.23L);`    |
| `%n`      | Prints nothing                                | `int n; printf("Hello%n", &n);` |
| `%d`      | A decimal integer (assumes base 10)           | `printf("%d", 123);`       |
| `%i`      | A decimal integer (detects the base automatically) | `printf("%i", 123);` |
| `%o`      | An octal (base 8) integer                     | `printf("%o", 0123);`      |
| `%x`      | A hexadecimal (base 16) integer               | `printf("%x", 0xA);`       |
| `%p`      | An address (or pointer)                       | `printf("%p", ptr);`       |
| `%f`      | A floating point number for floats            | `printf("%f", 1.23);`      |
| `%u`      | Int unsigned decimal                          | `printf("%u", 123);`       |
| `%e`      | A floating point number in scientific notation| `printf("%e", 1.23e4);`    |
| `%E`      | A floating point number in scientific notation (uppercase) | `printf("%E", 1.23E4);` |
| `%%`      | The % symbol                                  | `printf("%%");`            |

This chart provides a concise reference for common format specifiers and their usage examples.