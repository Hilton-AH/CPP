#include <iostream>
#include <vector>

using namespace std;

/*
Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.

Input: nums = [-1,0,1,2,-1,-4]
Output: [[-1,-1,2],[-1,0,1]]

time: O(n^2)
space: O(n)

*/

class Solution {
public:
    vector<vector<int> > threeSum(vector<int>& nums) { 
        vector<vector<int> > result; //vector of vectors is a two dimensional dynamic array
        if (nums.size() < 3) { //if the size of the array is less than 3, return empty vector
            return result;
        }
        sort(nums.begin(), nums.end()); //sort the array in ascending order
        for (int i = 0; i < nums.size() - 2; i++) { //loop through the array with nums.size() - 2 because we need to check the last two elements
            if (i > 0 && nums[i] == nums[i - 1]) { //if the current element is the same as the previous element, skip it
                continue;
            }
            int j = i + 1; //set j to i + 1 because we need to check the elements after i
            int k = nums.size() - 1; //set k to the last element of the array
            while (j < k) { //while j is less than k
                int total = nums[i] + nums[j] + nums[k]; //set sum to the sum of the current elements
                if (total == 0) { //if the sum is equal to 0 push the current elements into the result vector
                    vector<int> temp; //create a temporary vector to store the current elements
                    temp.push_back(nums[i]); //push the current elements into the temporary vector
                    temp.push_back(nums[j]);
                    temp.push_back(nums[k]);
                    result.push_back(temp);
                    j++; //increment j to check the next element
                    k--; //decrement k to check the next element
                    while (j < k && nums[j] == nums[j - 1]) { //if the next element is the same as the previous element, increment j
                        j++;
                    }
                    while (j < k && nums[k] == nums[k + 1]) { //if the next element is the same as the previous element, decrement k
                        k--;
                    }
                } else if (total < 0) { //if the sum is less than 0, increment j
                    j++;
                } else { //if the sum is greater than 0, decrement k
                    k--;
                }
            }
        }
        return result;
    }
};

//main function
int main() {
    Solution sol; //create a Solution object called sol to call the threeSum function
    vector<int> nums; //create a vector called nums to store the input array
    nums.push_back(-1); //push input array into nums vector
    nums.push_back(0);
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(-1);
    nums.push_back(-4);
    vector<vector<int> > result = sol.threeSum(nums); //call the threeSum function and store the result in a vector of vectors called result
    for (int i = 0; i < result.size(); i++) { //loop through the result vector
        for (int j = 0; j < result[i].size(); j++) { //loop through the elements in the current vector
            cout << result[i][j] << " "; //print the elements in the current vector
        }
        cout << endl;
    }
    return 0;
}