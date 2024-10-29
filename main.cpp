#include <iostream>
#include <math.h>

int main() {
    int a, b, c;
    for(a=1;a<17;a++) {
        for(b=a;b<17;b++) {
            c=sqrt(a*a+b*b);

                if(a*a+b*b==c*c) {
                    std::cout<<"-"<<a<<"-"<<b<<"-"<<c<<std::endl;

                }

        }
    }

    return 0;
}

