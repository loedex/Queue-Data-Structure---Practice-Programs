#include<iostream>
using namespace std;
//int size=10;
class CLASS{
	private:
		int F,R;
		float Q[10];
		public:
			CLASS();
			int insert(float);
			float deletee();
};
CLASS::CLASS(){
	F=R=-1;
	//cout<<"Enter Size :\n";
	//cin>>size;
}
int CLASS::insert(float n){
	if(R>=10){
		cout<<"OVERFLOW\n";
		//return 0;
	}
	else{
		R++;
	}
	if(F==-1){
		F=0;
	}
	Q[R]=n;
	return 0;
}
float CLASS::deletee(){
	float deletedItem;
	if(F==-1){
		cout<<"UNDERFLOW\n";
		//return 0;
	}
	else{
		deletedItem=Q[F];
	}
	if(F==R){
		F=R=-1;
	}
	else{
		F++;
	}
	return deletedItem;
}
int main(){
	CLASS obj;
	float val;
	for(int i=0;i<10;i++){
		cout<<"Enter value :\n";
		cin>>val;
		obj.insert(val);
	}
	float Min,Max;
	bool flag = true;
	//Remove values from Q.
	for(int i=0;i<10;i++){
		float value=obj.deletee();
		//cout<<"\n\tDeleted Value is :"<<value;
		if(flag){
			Max=Min=value;
			flag=false;
		}
		else{
			if(value>Max){
				Max=value;
			}
			if(value<Min){
				Min=value;
			}
		}
	}
	cout<<"Maximum Value is :"<<Max<<endl;
	cout<<"Minimum Value is :"<<Min<<endl;
	return 0;
}