//

#include <iomanip>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;

int getRandom(void);
int getClosestMed(int, int, int);

// complete two functions
int getRandom(void)
{
        int random;
        random = rand() % 100;
        return random;
}
int getClosestMed(int rdnum1, int rdnum2, int rdnum3)
{
        double mean = (rdnum1 + rdnum2 + rdnum3) / 3;
        int closest;
        int newrdnum1, newrdnum2, newrdnum3;

        if (mean > rdnum1) {
                newrdnum1 = mean - rdnum1;
        }
        else if (mean > rdnum2) {
                newrdnum2 = mean - rdnum2;
        }
        else if (mean > rdnum3) {
                newrdnum3 = mean - rdnum3;
        }

        if (rdnum1 > mean) {
                newrdnum1 = rdnum1 - mean;
        }
        else if (rdnum2 > mean) {
                newrdnum2 = rdnum2 - mean;
        }
        else if (rdnum3 > mean) {
                newrdnum3 = rdnum3 - mean;
        }

        if (newrdnum1 > newrdnum2 && newrdnum1 > newrdnum3) {
                closest = rdnum1;
        }
        else if (newrdnum2 > newrdnum1 && newrdnum2 > newrdnum3) {
                closest = rdnum2;
        }
        else if (newrdnum3 > newrdnum1 && newrdnum3 > newrdnum2) {
                closest = rdnum3;
        }
        return closest;
}

//64 75 86
//10 1 12