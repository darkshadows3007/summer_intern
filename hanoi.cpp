#include <iostream>
#include <cmath>
using namespace std;


void hanoi_tower(int n,int sor,int des){
    if(n==1){
        cout<<sor<<" "<<des<<endl;
    }else{
        hanoi_tower(n-1,1,2);
        cout<<1<<" "<<3<<endl;
        hanoi_tower(n-1,2,3);
    }
}
int main() {
    int n;
    cout<<"Enter number of Disc: ";
    cin>>n;
    cout<<endl;
    cout<<pow(2,n)-1<<endl;
    hanoi_tower(n,1,3);
	// your code goes here
	return 0;
}
