//Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.
#include <stdio.h>

enum status
{
    SUCCESS,
    FAILURE,
    TIMEOUT
};

int main()
{
    enum status result = SUCCESS;

    if (result == SUCCESS)
    {
        printf("Operation Successful");
    }
    else if (result == FAILURE)
    {
        printf("Operation Failed");
    }
    else
    {
        printf("Operation Timeout");
    }

    return 0;
}
