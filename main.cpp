#include "helper.h"
#include "nullSolution.h"
#include "displaySolution.h"

int main(int argc, char** argv) {
    if(argc == 0){
        displayNullSolution(); // calls function to display termination message and terminates program
        return 0;
    }
    vector<int> inputVec,  outputVec; // gets the vector for input and output vectors
    vector<int> result;
    vector<int> final;
    vector<bool> visited;
    int initialMin = 999;
    for (int i = 1; i < argc; i++) {
        inputVec.emplace_back(stoi(argv[i])); // Inserts a new element into the container constructed in-place with the given args
                                                // if there is no element with the key in the container
                                                // stoi converts string to integer
    }
    if(inputVec.size() == 0){
        displayNullSolution();
        return 0;
    }

    //visited(inputVec); // populateVisited will not work
    for(unsigned int i = 0 ; i < inputVec.size() ; i++){
        visited.push_back(false);
    }


    solve(result, inputVec, 0, (int)inputVec.size() - 1, visited, final , initialMin);
    if(final.size() == 0){
        displayNullSolution();
        return 0;
    }
    displaySolution(final);
    
}
