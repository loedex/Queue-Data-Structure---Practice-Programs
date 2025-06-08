#include<iostream>
using namespace std;
class CLASS{
	private:
		int F,R,size,Q[];
		public:
			CLASS();
			int Insert(int);
			int RemoveAndFactorial();
};
CLASS::CLASS(){
	F=R=-1;
	cout<<"Enter Size :\n";
	cin>>size;
}
int CLASS::Insert(int n){
	if(R>=size-1){
		cout<<"OVERFLOW\n";
		return 0;
	}
	R++;
	Q[R]=n;
	if(F==-1){
		F=0;
	}
	return 0;
}
int CLASS::RemoveAndFactorial(){
	int deletedItem;
	int f=1;
	if(F==-1){
		cout<<"UNDERFLOW\n";
		return 0;
	}
	deletedItem=Q[F];
	cout<<"Value you deleted is :"<<deletedItem;
	if(F==R){
		F=R=-1;
	}
	else{
		F++;
	}
	for(;deletedItem>=1; deletedItem--){
		f=f*deletedItem;
	}
	cout<<"Factorial of deleted Value is   : "<<f<<endl;
	return 0;
}
int main(){
    CLASS obj;
    int choice;
    while(choice!=3){
    	cout<<"Enter 1 for Insertion :\n";
    	cout<<"Enter 2 for Deletion and Factorial of deleted Item :";
    	cout<<"Enter 3 to Exit :";
    	cin>>choice;
    	switch(choice){
    		case 1:
    			int num;
    			cout<<"Enter Number :";
    			cin>>num;
    			obj.Insert(num);
    			break;
    			
    			case 2:
    				obj.RemoveAndFactorial();
                    break;
		}
	}
	return 0;
}