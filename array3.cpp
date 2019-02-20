/*
   diagonal Traverse

 */
#include<iostream>
#include<vector>
using namespace std;

class Solution{
public:
	vector<int> findDiagonalOrder(vector<vector<int> >& matrix) {
		vector<int> retElems(1);
		for(int i=0;i<matrix.size();i++){
			for(int j=0;j<matrix[i].size();j++){
				cout<<matrix[i][j]<<" ";
			}
		}
		cout<<endl;
	 return retElems;
	}
};

int main(){
	Solution s;
	int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	int size = sizeof(a) / sizeof(int);
	cout<<size<<endl;
    vector<vector<int> > matrix(3, vector<int>(3, 0));
	for(int i =0; i< matrix.size();i++){
		for(int j=0;j<matrix[0].size();j++){
			matrix[i][j]=a[i][j];
		}
	}
	//vector<vector<int> > matrix(a, a + size);
    s.findDiagonalOrder(matrix);
	return 0;
}
