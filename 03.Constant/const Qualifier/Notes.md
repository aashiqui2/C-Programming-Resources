# const qualifier

*  <a href="https://www.geeksforgeeks.org/const-qualifier-in-c/?ref=lbp">Refer This page</a> 


| Type                              | Declaration          | Pointer Value Change(*ptr = 100) | Pointing Value Change(ptr  = &a) |
|-----------------------------------|----------------------|----------------------|-----------------------|
| Pointer to Variable               | int * ptr            | Yes                  | Yes                   |
| Pointer to Constant               | const int * ptr      | No                   | Yes                   |
|                                   | int const * ptr      | No                   | Yes                   |
| Constant Pointer to Variable      | int * const ptr      | Yes                  | No                    |
| Constant Pointer to Constant      | const int * const ptr| No                   | No                    |
