union Value
{
    int intValue;
    float floatValue;
    char charValue;
};

void printValue(union Value val, int type)
{
    switch (type)
    {
    case 0:
        printf("Integer: %d\n", val.intValue);
        break;
    case 1:
        printf("Float: %f\n", val.floatValue);
        break;
    case 2:
        printf("Char: %c\n", val.charValue);
        break;
    }
}

int main()
{
    union Value val;
    val.intValue = 42;
    printValue(val, 0);

    val.floatValue = 3.14;
    printValue(val, 1);

    val.charValue = 'A';
    printValue(val, 2);

    return 0;
}
