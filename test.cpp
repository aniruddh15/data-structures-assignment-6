#include <iostream>     // Provides cout.
#include <cstdlib>      // Provides size_t.
#include "sequence4.h"  // Provides the template sequence class
using namespace std;
using namespace stack_sequence_4;

int main(){
	sequence<int> s1;
	s1.attach(10);
	cout<<s1.current()<<endl;
	s1.advance();
	cout<<s1.current()<<endl;
	// s1.advance();
	// cout<<s1.current()<<endl;
	// s1.advance();
	// cout<<s1.current()<<endl;
	// s1.attach(3);
	// s1.attach(4);
	// s1.attach(5);
	// s1.start();
	// cout<<s1.current()<<endl;
	// s1.advance();
	// cout<<s1.current()<<endl;
	// s1.advance();
	// cout<<s1.current()<<endl;
	// s1.advance();
	// cout<<s1.current()<<endl;
	// s1.advance();
	//cout<<s1.current()<<endl;
	
	
}