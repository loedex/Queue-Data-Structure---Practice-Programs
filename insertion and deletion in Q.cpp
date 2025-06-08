#include<iostream>
using namespace std;
class Class{
	private:
		int F,R,s,Q[];
		public:
			Class();
			int insert(int);
			int deletee();
			void display();
};
Class::Class(){
	F=R=-1;
	cout<<"Enter Size :\n";
	cin>>s;
}
int Class::insert(int n){
	if(R>=s){
		cout<<"OVERFLOW\n";
		//return 0;
	}
	else{
		R++;
		Q[R]=n;
		if(F==-1)
		F=0;
	}
	return 0;
}
int Class::deletee(){
	int deletedItem;
	if(F==-1){
		cout<<"UNDERFLOW\n";
	}
	else{
		deletedItem=Q[F];
		if(F==R)
		F=R=-1;
        else
        F++;
	}
	return 0;
}
void Class::display() {
	if(F==-1){
		cout<<"Queue is Empty\n";
	}
	else{
		for(int i=F; i<=R;i++){
			cout<<Q[i]<<"\t";
		}
	}
}
int main(){
	Class obj;
	int choice;
	
	while(choice!=3){
    cout<<"Enter 1 for Insertion\n";
	cout<<"Enter 2 for Deletion\n";
	cout<<"Enter 3 for Exit\n";
	cin>>choice;
		switch(choice){
			case 1:
				int num;
				cout<<"Enter Number to Insert\n";
				cin>>num;
				obj.insert(num);
				break;
				case 2:
					obj.deletee();
					cout<<"Array after deletion is :\n";
					obj.display();
					break;
		}
	}
	return 0;
}