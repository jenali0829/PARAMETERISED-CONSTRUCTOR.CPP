#include<iostream>
#include<string.h>

using namespace std;
class user{
	
	private:
		int comp_id;
		char comp_name[100];
		int comp_staff_quantity;
		int comp_revenue;
		char comp_import_raw_diamonds[100];
		char comp_export_daiamonds[100];
		char comp_ceo[100];
		
		public:
			user(int comp_id,char comp_name[100],int comp_staff_quantity,int comp_revenue,char comp_import_raw_diamonds[100],char comp_export_daiamonds[100],char comp_ceo[100]){
				
				this->comp_id=comp_id;
				strcpy(this->comp_name,comp_name);
				this->comp_staff_quantity=comp_staff_quantity;
				this->comp_revenue=comp_revenue;
				strcpy(this->comp_import_raw_diamonds,comp_import_raw_diamonds);
				strcpy(this->comp_export_daiamonds,comp_import_raw_diamonds);
				strcpy(this->comp_ceo,comp_ceo);
				
				cout<<comp_id<<endl;
				cout<<comp_name<<endl;
				cout<<comp_staff_quantity<<endl;
				cout<<comp_revenue<<endl;
				cout<<comp_import_raw_diamonds<<endl;
				cout<<comp_export_daiamonds<<endl;
				cout<<comp_ceo<<endl;
			}
			user(){
				cout<<"End of program";
			}
};
main(){
	int n;
	user obj[n];
	int i;
	
	cout<<"Enter size:";
	cin>>n;
	
	for(i=0; i<n; i++){
		
		obj[i].user(comp_id,comp_name,comp_staff_quantity,comp_revenue,comp_import_raw_diamonds,comp_export_diamonds,comp_ceo);
		
	}
}

