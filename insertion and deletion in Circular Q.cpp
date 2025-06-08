#include<iostream>
using namespace std;
class CLASS{
	private:
		int F,R,size,Q[];
		public:
			CLASS();
			int insert(int);
			int Deletee();
			void Display();
};
CLASS::CLASS(){
	F=R=-1;
	cout<<"Enter Size :\n";
	cin>>size;
}
int CLASS::insert(int n){
	if((F==0 && R==size-1) || (F==R+1)){
		cout<<"OVERFLOW\n";
		return 0;
	}
	else if(R==size-1 && F!=0){
		R=0;
	}
	else if(F==-1){
		R=0;
		F=0;
	}
	else{
		R++;
	}
	Q[R]=n;
	return 0;
}
int CLASS::Deletee(){
	int deletedItem;
	if(F==-1){
		cout<<"UNDERFLOW\n";
	}
	deletedItem=Q[F];
	if(F==R){
		F=R=-1;
	}
	else if(F==size-1){
		F=0;
	}
	else{
		F++;
	}
	return 0;
}
void CLASS::Display(){
	if(F==-1){
		cout<<"Queue is Empty :\n";
	}
	else{
		for(int i=F;i<=R;i++){
			cout<<Q[i]<<"\t";
		}
	}
}
int main(){
	CLASS obj;
	int choice;
	while(choice!=3){
		cout<<"Enter 1 fro Insertion :\n";
		cout<<"Enter 2 fro Deletion :\n";
		cout<<"Enter 3 to Exit :\n";
		cin>>choice;
		switch(choice){
			case 1:
				int num;
				cout<<"Enter Number to Insert :\n";
				cin>>num;
				obj.insert(num);
				break;
				case 2:
					obj.Deletee();
					cout<<"Queue after Deletion :\n";
					obj.Display();
					break;
		}
	}
	return 0;
}