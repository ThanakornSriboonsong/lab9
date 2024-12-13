#include<iostream>
using namespace std;

//อาจารย์ครับผมขออภัยครับใน cmu exam ผมใช้  while loop แต่ผมพึ่งมาอ่านที่หลังว่าต้องใช้ for loop โปรดอาจารย์เมตตาด้วยครับT-T
char printO(int N,int M){
	int a = 0 ;
	if(N <= 0 or M <=0){
		cout << "Invalid input" ;
	}
	for(int i = 0; i < N; i++ ){
	for (int a = 0 ; a < M ; a++){
		cout << 'O' ;
	}
	cout << '\n' ;
	}
	
	return 0 ;

}

int main(){
	
	printO(2,2);
	cout << "\n";
	
	printO(3,5);
	cout << "\n";	
	
	printO(5,3);
	cout << "\n";	
	
	printO(0,3);
	cout << "\n";	
	
	printO(7,-1);
	cout << "\n";	
	
	return 0;
}
