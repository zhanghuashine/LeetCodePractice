//
// Created by asr on 19-8-22.
//

#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::endl;


int find(string& src, string& tar){
    if(src.length() < tar.length()){
        return -1;
    }

    int i, j = 0;
    int output;
    for(i=0; i<src.length(); ++i){
        if(src[i] == tar[j]){
            ++j;
        }
        else{
            if(j == tar.length()){
                break;
            }
            else if(j){
                --i;
                j = 0;
            }
        }
    }

    output = j == tar.length() ? i - j : -1;
    return output;
}

int main(){
    string src, tar;
    src = "12345454567";
    tar = "456";
    cout<<src.find(tar)<<endl; // call "string.find"
    cout<<find(src, tar)<<endl; // implement

    return 0;
}

