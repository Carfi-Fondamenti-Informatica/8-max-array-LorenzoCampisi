#include "lib.h"
#include <cmath>
#include <limits>

float max(int a,float numeri[]) {
    float m=-INFINITY;

    for (int i = 0; i < a; i++) {

        if (numeri[i]>m){
            m=numeri[i];
        }

    }

return m;
}
