#include<iostream>
using namespace std;
class CLASS{
	private:
		int F,R,DEQ[5];
		public:
			CLASS();
			int insert(int);
			int Remove();
};
CLASS::CLASS(){
	F=R=-1;
}
int CLASS::insert(int n){
	if((F==0 && R==5-1) || F==R+1){
		cout<<"OVERFLOW\n";
	}
	else if(F==-1){
		F=R=0;
	}
	else if(R==5-1 && F!=0){
		R=0;
	}
	else{
		R++;
	}
	DEQ[R]=n;
	return 0;
}
int CLASS::Remove(){
	int deletedItem;
	if(F==-1){
		cout<<"UNDERFLOW\n";
	}
	deletedItem=DEQ[F];
	if(F==R){
		F=R=-1;
	}
	else if(F==5-1){
		F=0;
	}
	else{
		F++;
	}
	return deletedItem;
}
int main(){
	CLASS obj;
	int value,val;
	for(int i=0;i<5;i++){
		cout<<"Enter "<<i+1<<" value :";
		cin>>value;
		obj.insert(value);
	}
	int s=0;
	for(int i=0; i<5;i++){
		val=obj.Remove();
		cout<<"\nRemoved value :"<<val;
		s+=val;
	}
	cout<<"\nAverage is :"<<s/5;
	return 0;
}