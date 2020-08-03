/**#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x,y;
    cin>>x;

    cout<<"ceil: "<<ceil(x)<<endl;
    cout<<"floor: "<<floor(x);

    return 0;
}
*/

#include <algorithm>
#include <iostream>
#include <vector>

int main()
{
    std::vector<int> v{0, 2, 3, 25, 5};
    std::vector<int> t{3, 19, 10, 2};

    auto result = std::find_first_of(v.begin(), v.end(), t.begin(), t.end());

    if (result == v.end()) {
        std::cout << "no elements of v were equal to 3, 19, 10 or 2\n";
    } else {
        std::cout << "found a match at "
                  << std::distance(v.begin(), result) << "\n";
    }
 }
