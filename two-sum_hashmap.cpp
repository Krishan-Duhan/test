#include<iostream>
#include<vector>
#include<map>

using namespace std;

class solution{
public:
	vector<int> twosum(vector<int>& nums, int target){
	    map<int,int> mp;
	    vector<int> res;
	    //loop through the vector
            for(int i = 0; i < nums.size(); i++){
                if(mp.find(nums[i]) == mp.end()){                 //if the element is not found in the map,then insert its target-value in map
		//gquiz.insert(pair <int, int> (0, 10));
		    mp.insert(pair <int,int> (target - nums[i],i));
                } else{                                      
	            //if element is found in map, store the value for the element in map and current location(i) in a vector to return
		    res.push_back(mp.find(nums[i])->second);
                    res.push_back(i);
		    return res;
		}
            }
	}
};


int main(){
    vector <int> input;
    vector<int> result;
    int in;
    solution obj;
    cout << "Enter vector elements:\n";
    for(int i = 0; i < 4; i++){
    cin >> in;
    input.push_back(in);
    }
/*    cout << "input elements are:\n";
    for(int i = 0; i < 4; i++){
    cout << input[i];
    }
*/
    result = obj.twosum(input, 9);
    cout << "indices for 2-sum are:" << result[0] << "," << result[1] << endl;
    return 0;
}
