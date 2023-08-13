#include <unistd.h>
#include <stdio.h>

int main()
{
    int id = fork();
    int id1 = 121;
    if(id != 0)
    {
        id1 = fork();
    }
    printf("Hello Mazhar! %d, %d\n", id, id1);
    return 0;
}


