An Enumeration type is a user defined type which is used to assign names to `integeral constant` because names are easier to handle in  program.

```c
enum Bool{False,True};
int main()
{
    enum Bool var;
    var=True;
    printf("%d",var);
    return 0;
}
```

False and True are the names to Integeral constants.

If we do not assign values to enum names then, automatically compiler will assign values to them starting from 0.


# Need of Enumeration
Two important reasons:
1) Enums can be declared in the local scope
2) Enum names are automatically initialized by the compiler.