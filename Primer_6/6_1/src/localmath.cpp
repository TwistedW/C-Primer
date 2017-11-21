#include "localmath.h"

int fact(int val)
{
    int ret=1;
    for(int i=1; i!=val+1; ++i){
        ret*=i;
    }
    return ret;
}
