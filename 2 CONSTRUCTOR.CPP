#include<iostream>

using namespace std;
class cafe{
	
	private:
		
		int cafe_id;
		int cafe_staff_quantity;
		char cafe_name[100];
		char cafe_type[100];
		char cafe_rating[100];
		char cafe_location[100];
		char cafe_establish_year[100];
		
		public:
			cafe(){
				
				cout<<"Enter id:";
				cin>>cafe_id;
				
				cout<<"Enter staff quantity:";
				cin>>cafe_staff_quantity;
				
				cout<<"Enter name:";
				cin>>cafe_name;
				
				cout<<"Enter type:";
				cin>>cafe_type;
				
				cout<<"Enter rating:";
				cin>>cafe_rating;
				
				cout<<"Enter location:";
				cin>>cafe_location;
				
				cout<<"Enter establish year:";
				cin>>cafe_establish_year;
			}
			
			void getter();
			
};
void cafe::getter(){
	
	cout<<cafe_id<<endl;
	cout<<cafe_staff_quantity<<endl;
	cout<<cafe_name<<endl;
	cout<<cafe_type<<endl;
	cout<<cafe_rating<<endl;
	cout<<cafe_location<<endl;
	cout<<cafe_establish_year<<endl;
	
}
main(){
	
	cafe obj;
	int n;
	
	cout<<"Enter value:";
	cin>>n;
	
	
	
	
		
		obj.getter();
	
}
