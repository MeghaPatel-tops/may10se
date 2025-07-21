#include<iostream>
using namespace std;

template <typename T>
T   findMax(T a, T b){
	return a >b ? a:b;
}

main(){
	cout<<findMax<int>(12,67)<<"\n";
	cout<<findMax<float>(12.5,1.3)<<"\n";
	cout<<findMax<char>('f','m');
}
