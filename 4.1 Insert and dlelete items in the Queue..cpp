//Insert and delete items to a queue and then display the values using queue.
#include<iostream>
using namespace std;
class Class{
	private:
		int f,r,s,queue[];
		public:
			Class();
			int display();
			int insert(int);
			int deletee();
};
Class::Class(){
	f=-1;
	r=-1;
	cout<<"\nEnter Size :";
	cin>>s;
}
int Class::insert(int n){
	if(r>=s){
	cout<<"\n\tOverflow.";
	return 0;}
	else{
		//cout<<"\nEnter Value :";
		//cin>>queue[++r];
		queue[r]=n;
		r++;
		if(f==-1)
		f=0;
		return 0;
	}
	return 0;
}
int Class::deletee(){
	int s;
	if(f==-1){
	cout<<"\n\tUnderflow";
	return 0;}
	
	else{
		s = queue[f];
		if(f==r)
		f=r=-1;
		else
		f++;
		return s;
	}
	
}
int Class::display(){
	if(f==-1){
	cout<<"\nQueue is Empty.";
	return 0;}
	else{
		for(int i=f;i<r;i++){
			cout<<queue[i]<<"\t";
		}
		return 0;
	}
	return 0;
}
int main(){
	Class obj;
	int ch,val;
	while(ch!=3){
		cout<<"\nEnter 1 to insert : ";
		cout<<"\nEnter 2 for Deletion : ";
		cout<<"\nEnter 3 to exit : ";
		cin>>ch;
		switch(ch){
			case 1:
			    cout<<"\nEnter Value to Insert : ";
				cin>>val;
				obj.insert(val);
				break;	
				case 2:
					cout<<"\nValue "<<obj.deletee()<<" is deleted :";
					cout<<"\nQueue after deletion is : ";
					obj.display();
					break;
		}
	}
	return 0;
}