#include <algorithm>
#include <vector>
#include "Header.h"
using namespace std;
int main() {
    vector<int> vec;
    read(vec);
    sort(vec.begin(), vec.end());
    print(vec);
    return 0;
}
