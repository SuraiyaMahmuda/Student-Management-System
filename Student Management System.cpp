#include<iostream>
using namespace std;

string arr1[20],arr2[20],arr3[20],arr4[20],arr5[20];
int i,j,k,total=0;

void enter(){
		int ch=0;
			cout<<"How many students do u want to enter??"<<endl;
			cin>>ch;

			if(total==0){
			total=ch+total;

			for(i=0;i<ch;i++){

				cout<<"\nEnter the Data of student "<<i+1<<endl<<endl;
				cout<<"Enter Name: ";
				cin>>arr1[i];
				cout<<"Enter Roll No: ";
				cin>>arr2[i];
				cout<<"Enter Course Name: ";
				cin>>arr3[i];
				cout<<"Enter Class: ";
				cin>>arr4[i];
				cout<<"Enter Contact: ";
				cin>>arr5[i];
			}
	    	}
	    	else{
	    		for(i=total;i<ch+total;i++){
				cout<<"\nEnter the Data of student "<<i+1<<endl<<endl;
				cout<<"Enter Name: ";
				cin>>arr1[i];
				cout<<"Enter Roll No: ";
				cin>>arr2[i];
				cout<<"Enter Course Name: ";
				cin>>arr3[i];
				cout<<"Enter Class: ";
				cin>>arr4[i];
				cout<<"Enter Contact: ";
				cin>>arr5[i];
			}
			total=ch+total;
			}
}

void show(){
	if(total==0){
		cout<<"No data is Entered"<<endl;
	}
	else{
		for(i=0;i<total;i++){
	    		cout<<"\nData of Student "<<i+1<<endl<<endl;
	    		cout<<"Name "<<arr1[i]<<endl;
	    		cout<<"Roll No "<<arr2[i]<<endl;
	    		cout<<"Course Name "<<arr3[i]<<endl;
	    		cout<<"Class "<<arr4[i]<<endl;
	    		cout<<"Contact "<<arr5[i]<<endl;
	    	    }
	    	}
}

void search(){
	if(total==0){
		cout<<"No data is Entered"<<endl;
	}
	else{
	string rollno;
				cout<<"Enter the Roll no of student"<<endl;
				cin>>rollno;

				for(i=0;i<total;i++){
					if(rollno==arr2[i]){
						cout<<"Name "<<arr1[i]<<endl;
	    	        	cout<<"Roll No "<<arr2[i]<<endl;
	    		        cout<<"Course Name "<<arr3[i]<<endl;
	    		        cout<<"Class "<<arr4[i]<<endl;
	    	        	cout<<"Contact "<<arr5[i]<<endl;
					}
				}
			}
}

void update(){
	if(total==0){
		cout<<"No data is Entered"<<endl;
	}
	else{
		string rollno;
				cout<<"Enter the Roll no of student which you want to Update"<<endl;
				cin>>rollno;

					for(i=0;i<total;i++){
					if(rollno==arr2[i]){
						cout<<"\nPrevious Data"<<endl<<endl;
						cout<<"Data of Student "<<i+1<<endl;
						cout<<"Name "<<arr1[i]<<endl;
	    	        	cout<<"Roll No "<<arr2[i]<<endl;
	    		        cout<<"Course Name"<<arr3[i]<<endl;
	    		        cout<<"Class "<<arr4[i]<<endl;
	    	        	cout<<"Contact "<<arr5[i]<<endl;
	    	        	cout<<"\nEnter New Data"<<endl<<endl;
							cout<<"Enter Name: ";
				            cin>>arr1[i];
				            cout<<"Enter Roll No: ";
				            cin>>arr2[i];
			             	cout<<"Enter Course Name: ";
				            cin>>arr3[i];
				            cout<<"Enter Class: ";
				            cin>>arr4[i];
				            cout<<"Enter Contact: ";
				            cin>>arr5[i];
					}
				}
			}
		}

void deleterecord(){
	if(total==0){
		cout<<"No data is Entered"<<endl;
	}
	else{
		int a;
	        	cout<<"Press 1 to Delete All record"<<endl;
				cout<<"Press 2 to Delete Specific record"<<endl;
				cin>>a;
				if(a==1){
					total=0;
					cout<<"All record is Deleted..!!"<<endl;
				}
				else if(a==2){
				string rollno;
				cout<<"Enter the Roll no of student which you wanted to Delete"<<endl;
				cin>>rollno;

				for(i=0;i<total;i++){
					if(rollno==arr2[i]){
						for(j=i;j<total;j++){
						arr1[j]=arr1[j+1];
						arr2[j]=arr2[j+1];
					    arr3[j]=arr3[j+1];
						arr4[j]=arr4[j+1];
						arr5[j]=arr5[j+1];
				     	}
					total--;
					cout<<"Your required record is Deleted"<<endl;
					}
				}
				}
			else{
				cout<<"Invalid Input";
			}
}
}

int main(){
	int value;
	while(true){
	cout<<"\nPress 1 to Enter Data"<<endl;
	cout<<"Press 2 to Show Data"<<endl;
	cout<<"Press 3 to Search Data"<<endl;
	cout<<"Press 4 to Update Data"<<endl;
	cout<<"Press 5 to Delete Data"<<endl;
	cout<<"Press 6 to Exit"<<endl;
	cin>>value;

	switch(value){
		case 1:
			enter();
			break;

		case 2:
			show();
			break;

		case 3:
			search();
			break;

		case 4:
			update();
			break;

		case 5:
			deleterecord();
			break;

		case 6:
			exit(0);
			break;

		default:
			cout<<"Invalid Input"<<endl;
			break;
	}
}
}
