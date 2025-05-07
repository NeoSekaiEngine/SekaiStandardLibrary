#include <stdio.h>
#include "SekaiStandardLibrary/arraylist.h"


int main(void)
{
    sk_arraylist lst = { 0 };
    sk_u8 init = sk_arraylist_init(&lst, sizeof(sk_byte));
    if(!init)
    {
        fprintf(stderr, "Failed to init array list\n");
        return -1;
    }

    sk_arraylist_destroy(&lst);
    return 0;
}
