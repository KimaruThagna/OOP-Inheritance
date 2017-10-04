#include <iostream>
#include "implement.cpp"
using namespace std;

int main()
{
    /*
    menu....register ype of vehicle..bike..ordinary..truck.......report stolen vehicle
    then call appropriate constructor to create suitable object..(vehicle = truck)..for creating on search list..perform search
    if NO validate import documents search through stolen car list
        if clear...call compute krarevenue...call generate invoice....call show logbook
    if YES...validate transfer docs...call compute krarevenue...call generate invoice....call show logbook*/


     	vehicle* vehicledb[10];
     	vehicle car;
vehicledb[0]=&car;


   int choice,v;
   int i=0;
    while(1)	{
		cout<<"\n\n\tMENU"
		<<"\n1. REGISTER MOTORBIKE"
		<<"\n2. REGISTER ORDINARY VEHICLE"
		<<"\n3. REGISTER TRUCK"
		<<"\n4. BLACKLIST VEHICLE"
		<<"\n5. Exit"
		<<"\n\nEnter your Choice: ";
		cin>> choice;

switch(choice)
{

     case 1:
         {
             int t,V,x;
             double duty;
        motorbike bike;

        cout<<"searching index"<<endl;
        cin>>V;
        i++;
        //vehicledb[i-1]=&car;
        for(t=0;t<i;t++)
{


                 if( vehicledb[t]->vehicleSearch(V))
                 {

                    cout<< "VALIDATE TRANSFER DOCUMENTS\n ENTER 1 IF VALID"<<endl;
                    cin>> x;
                    if(x==1)
                    {
                        //bike.DataInput();
                        car=bike;
                        vehicledb[t]->Transfer();
                        bike.computeKRARevenue();
                        bike.generateInvoice();
                        break;
                    }
                 }

                 }
        if(t == i)
		{
            cout<<"VALIDATE IMPORT DOCUMENTS\n ENTER 1 IF VALID"<<endl;
			cin>> x;
			if(x==1)
			{
			    bike.Searchblacklist(V);
                bike.DataInput();
                        car=bike;

			    cout<<"Give import duty percentage"<<endl;
			    cin>>duty;
				bike.computeKRARevenue(duty);
				bike.generateInvoice();
			}

		}

        vehicledb[i]=&car;
     	break;
}


     case 2:
        {
             int t,V,x;
             double duty;
        ordinary normal;

        cout<<"searching index"<<endl;
        cin>>V;
        i++;
        //vehicledb[i-1]=&car;
        for(t=0;t<i;t++)
{


                 if( (vehicledb[t]->vehicleSearch(V)) ==true )
                 {

                    cout<< "VALIDATE TRANSFER DOCUMENTS\n ENTER 1 IF VALID"<<endl;
                    cin>> x;
                    if(x==1)
                    {
                        //bike.DataInput();
                        car=normal;
                        vehicledb[t]->Transfer();
                        normal.computeKRARevenue();
                        normal.generateInvoice();
                        break;
                    }
                 }

                 }
        if(t == i)
		{
            cout<<"VALIDATE IMPORT DOCUMENTS\n ENTER 1 IF VALID"<<endl;
			cin>> x;
			if(x==1)
			{
			    normal.Searchblacklist(V);
                normal.DataInput();
                        car=normal;

			    cout<<"Give import duty percentage"<<endl;
			    cin>>duty;
				normal.computeKRARevenue(duty);
				normal.generateInvoice();
			}

		}

vehicledb[i]=&car;
     	break;
         }



      case 3:
          {
             int t,V,x;
             double duty;
        truck lorry;

        cout<<"searching index"<<endl;
        cin>>V;
        i++;
        //vehicledb[i-1]=&car;
        for(t=0;t<i;t++)
{


                 if( (vehicledb[t]->vehicleSearch(V)) ==true)
                 {

                    cout<< "VALIDATE TRANSFER DOCUMENTS\n ENTER 1 IF VALID"<<endl;
                    cin>> x;
                    if(x==1)
                    {
                        //bike.DataInput();
                        car=lorry;
                        vehicledb[t]->Transfer();
                        lorry.computeKRARevenue();
                        lorry.generateInvoice();
                        break;
                    }
                 }

                 }
        if(t == i)
		{
            cout<<"VALIDATE IMPORT DOCUMENTS\n ENTER 1 IF VALID"<<endl;
			cin>> x;
			if(x==1)
			{
			    lorry.Searchblacklist(V);
                lorry.DataInput();
                        car=lorry;

			    cout<<"Give import duty percentage"<<endl;
			    cin>>duty;
				lorry.computeKRARevenue(duty);
				lorry.generateInvoice();
			}

		}

vehicledb[i]=&car;

     	break;
         }


     	break;
      case 4:
          {

             vehicle car;
             car.blacklistVehicle();
                break;
          }



       case 5:
        exit(0);
       default:
        cout<<"\nInvalid Choice Entered";
        break;
}
    }

   /* cout << "Hello world!" << endl;
    vehicle car;
    car.display();
    ordinary actros(120,2000,3200,2014,2400000,5025,"BENZ","G WAGON",1,0.11);
    actros.computeKRARevenue();
    actros.generateInvoice();
    motorbike nduthi(120,2000,3200,2014,2400000,5025,"BENZ","G WAGON",1.04);
    nduthi.computeKRARevenue();
    nduthi.generateInvoice();
    nduthi.display();
    */
return 0;
    }
