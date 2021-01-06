#include "helper.h"
//Jump game passes in values
void solve(vector<int> &result , vector<int>& input , int position , int target , vector<bool> & visited , vector<int>& final , int& minimum){
    
    visited[position] = true;
    
    if(position < 0 || position > target) return; //return if out of range
    if(position == target){ // if is in target , print path
        result.push_back(position); //pushes back position (index) to result
        int pathSize = (int)result.size();
        if(pathSize < minimum){
            final.clear();
            minimum = pathSize;
            for(auto s: result){
                final.push_back(s);
            }
        }
        result.pop_back();
        visited[position] = false;
        return;
    }
    result.push_back(position); // save the index
    if(input[position] == 0) return;
    if((position - input[position]) >= 0 && (position - input[position]) <= target && visited[position - input[position]] == false){
        solve(result, input, position - input[position], target, visited, final , minimum); //Go Left  if not visited and in range
    }
    visited[position] = false;
    if((position + input[position]) >= 0 && (position + input[position]) <= target && visited[position + input[position]] == false){
        solve(result, input, position + input[position] , target, visited, final , minimum); // Go right  if not visited
    }
    result.pop_back();
    //Compare path
    //return path
}
