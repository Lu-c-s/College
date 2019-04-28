#include <stdio.h>
#include <stdlib.h>
#include "Lista.h"

int main()
{
    node *lista=NULL;

    ad_e_f(&lista,4);
    ad_e_f(&lista,7);
    ad_e_f(&lista,9);
    ad_e_f(&lista,1);
    //ad_e_f(&lista,3);
    // ad_e_f(&lista,6);
    // ad_e_f(&lista,5);

    p(lista);

    t(&lista,1,4);

    p(lista);

    return 0;
}
