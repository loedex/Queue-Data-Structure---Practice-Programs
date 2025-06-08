#include<iostream>
using namespace std;
class CLASS{
	private:
	 int F,R,size,DEQ[];
	public:
		CLASS();
		int InsertFront(int);
		int InsertRear(int);
		int DeleteFront();
		int DeleteRear();
		int display();
};
CLASS::CLASS(){
	F=R=-1;
	cout<<"Enter Size :\n";
	cin>>size;
}
int CLASS::InsertFront(int n){
	if((F==0 && R==size-1) || (F==R+1)){
		cout<<"OVERFLOW\n";
		return 0;
	}
	if(F==-1){
		F=R=0;
	}
	else if(F==0 && R!=size-1){
		F=size-1;
	}
	else{
		F--;
	}
	DEQ[F]=n;
	return 0;
}
int CLASS::InsertRear(int n){
	if((F==0 && R==size-1) || (F==R+1)){
		cout<<"OVERFLOW\n";
		return 0;
	}
	if(F==-1){
		F=R=0;
	}
	else if(R==size-1 && F!=0){
		R=0;
	}
	else{
		R++;
	}
	DEQ[R]=n;
	return 0;
}
int CLASS::DeleteFront(){
	int deletedItem;
	if(F==-1){
		cout<<"UNDERFLOW\n";
		return 0;
	}
	deletedItem=DEQ[F];
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
int CLASS::DeleteRear(){
	int deletedItem;
	if(F==-1){
		cout<<"UNDERFLOW\n";
		return 0;
	}
	deletedItem=DEQ[R];
	if(F==R){
		F=R=-1;
	}
	else if(R==0){
		R=size-1;
	}
	else{
		R--;
	}
	return 0;
}
int CLASS::display(){
	if(F==-1){
		cout<<"DEQ is Empty. \n";
		return 0;
	}
	else{
		for(int i=F; i<=R; i++){
			cout<<DEQ[i]<<"\t";
		}
	}
	return 0;
}
int main(){
	CLASS obj;
	int choice,num;
	while(choice!=5){
		cout<<"\nEnter 1 for Front Insertion :";
		cout<<"\nEnter 2 for Rear Insertion :";
		cout<<"\nEnter 3 for Front Deletion :";
		cout<<"\nEnter 4 for Rear Deletion :";
		cout<<"\nEnter 5 to Exit :";
		cin>>choice;
		switch(choice){
			case 1:
				cout<<"\nEnter value to Insert :";
				cin>>num;
				obj.InsertFront(num);
				break;
				case 2:
				   cout<<"\nEnter value to Insert :";
				   cin>>num;
				   obj.InsertRear(num);
				   break;
				   case 3:
				   	obj.DeleteFront();
				   	cout<<"\nDEQ after Front Deletion :";
				   	obj.display();
				   	break;
				   	case 4:
				   		obj.DeleteRear();
				   		cout<<"\nDEQ after Rear Deletion :";
				   		obj.display();
				   		break;
		}
	}
	return 0;
}