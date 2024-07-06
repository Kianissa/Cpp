#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Soltution {
    public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        for (int i=0; i < nums.size(); i++)
        {
            for (int j= i+1; j< nums.size(); j++)
            {
                if (nums[i] + nums[j] == target)
                {
                    return {i, j};
                }
            }
        }
        return {};
    }
};

int main()
{

    vector<int> myVector{2,3,4,5,6,7,8};
    vector<int> myRes;
    Soltution myTwoSum;

    myRes = myTwoSum.twoSum(myVector, 9);

    // Iterating vector by using index
    for (int i = 0; i < myRes.size(); i++) {
        // Printing the element at
        // index 'i' of vector
        cout << myRes[i] << ',';
    }
    cout << endl;
 
}