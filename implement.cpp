#include "classheader.h"
#include<iostream>
#include<string.h>
#include<stdlib.h>

using namespace std;
static int i=0;
vehicle::vehicle()
{
    vehicle::ViD=0;
    vehicle::Vplate=89;
    vehicle::engineCapacity=1000;
    vehicle::YrOfMan=2014;
    vehicle::value=1000000;
    vehicle::OwnerPIN=5005;
    vehicle::manufacturer = "TOYOTA";
    vehicle::bodytype = "SEDAN";
    vehicle::KRARevenue=0;
}

/*ordinary::ordinary(int ViD,int Vplate,int engineCapacity,int YrOfMan,int value,int OwnerPIN, char* manufacturer, char* bodytype, int vtype, double trate):vehicle(ViD,Vplate,engineCapacity,YrOfMan,value,OwnerPIN,manufacturer,bodytype),taxrate(trate),vehicleType(vtype)
{

vtype=1;
trate=0.01;
}*/




void vehicle::display()
{
     cout<<"======================================================"<<endl;
    cout<<"=============       VEHICLE DETAILS       ==========="<<endl;
    cout<<"======================================================"<<endl;
     cout<<"Vehicle ID:\t";
        cout<<ViD<<endl;
         cout<<" Owned By Holder of PIN \t";
        cout<<OwnerPIN<<endl;
        cout<<"Vehicle Number plate \t";
        cout<<Vplate<<endl;
        cout<<"Engine capacity \t";
        cout<<engineCapacity<<endl;
        cout<<"Manufactured by \t";
        cout<<manufacturer<<endl;
        cout<<" In the year\t";
        cout<<YrOfMan<<endl;
        cout<<" Priced at\t";
        cout<<"Ksh "<<value<<endl;

}


void vehicle::computeKRARevenue()
{

    if((2017-YrOfMan)<4)
    {

     if(engineCapacity<=1000)
        {
            vehicle::KRARevenue=1160;
        }
        else if(vehicle::engineCapacity>1000 && vehicle::engineCapacity<=1200)
        {
            vehicle::KRARevenue=1890;
        }
        else if ( vehicle::engineCapacity>1200 && vehicle::engineCapacity<=1500)
        {
            vehicle::KRARevenue=2065;

        }
        else if (vehicle::engineCapacity>1500 && vehicle::engineCapacity<=1700)
        {
            vehicle::KRARevenue=2410;
        }

         else if (vehicle::engineCapacity>1700 && vehicle::engineCapacity<=2000)
        {
            vehicle::KRARevenue=2695;
        }
         else if (vehicle::engineCapacity>2000 && vehicle::engineCapacity<=2500)
        {
            vehicle::KRARevenue=3845;
        }

         else if (vehicle::engineCapacity>2500 && vehicle::engineCapacity<=3000)
        {
            vehicle::KRARevenue=5055;
        }
        else if (vehicle::engineCapacity>3000)
        {
            vehicle::KRARevenue=5915;
        }

    }

    else

    {

     if(engineCapacity<=1000)
        {
            vehicle::KRARevenue=1160;
        }
        else if(vehicle::engineCapacity>1000 && vehicle::engineCapacity<=1200)
        {
            vehicle::KRARevenue=1890;
        }
        else if ( vehicle::engineCapacity>1200 && vehicle::engineCapacity<=1500)
        {
            vehicle::KRARevenue=2065;

        }
        else if (vehicle::engineCapacity>1500 && vehicle::engineCapacity<=1700)
        {
            vehicle::KRARevenue=2410;
        }

         else if (vehicle::engineCapacity>1700 && vehicle::engineCapacity<=2000)
        {
            vehicle::KRARevenue=2695;
        }
         else if (vehicle::engineCapacity>2000 && vehicle::engineCapacity<=2500)
        {
            vehicle::KRARevenue=3845;
        }

         else if (vehicle::engineCapacity>2500 && vehicle::engineCapacity<=3000)
        {
            vehicle::KRARevenue=5055;
        }
        else if (vehicle::engineCapacity>3000)
        {
            vehicle::KRARevenue=5915;
        }

}
}
void vehicle::computeKRARevenue(double importduty)
{
    int delta;
    if((2017-YrOfMan)<4)
    {
      delta=0.0 +importduty;
if(engineCapacity<=1000)
        {
            vehicle::KRARevenue=vehicle::value*(delta)+1660;
        }
        else if(vehicle::engineCapacity>1000 && vehicle::engineCapacity<=1200)
        {
            vehicle::KRARevenue=vehicle::value*(delta)+1890;
        }
        else if ( vehicle::engineCapacity>1200 && vehicle::engineCapacity<=1500)
        {
            vehicle::KRARevenue=vehicle::value*(delta)+2065;

        }
        else if (vehicle::engineCapacity>1500 && vehicle::engineCapacity<=1700)
        {
            vehicle::KRARevenue=vehicle::value*(delta)+2410;
        }

        else if (vehicle::engineCapacity>1700 && vehicle::engineCapacity<=2000)
        {
            vehicle::KRARevenue=vehicle::value*(delta)+2695;
        }

        else if (vehicle::engineCapacity>2000 && vehicle::engineCapacity<=2500)
        {
            vehicle::KRARevenue=vehicle::value*(delta)+3485;
        }

        else if (vehicle::engineCapacity>2500 && vehicle::engineCapacity<=3000)
        {
            vehicle::KRARevenue=vehicle::value*(delta)+5055;
        }


        else if (vehicle::engineCapacity>3000)
        {
            vehicle::KRARevenue=vehicle::value*(delta)+5915;
        }
    }

    else

    {
        delta=0.0 +importduty;
if(engineCapacity<=1000)
        {
            vehicle::KRARevenue=vehicle::value*(delta)+1660;
        }
        else if(vehicle::engineCapacity>1000 && vehicle::engineCapacity<=1200)
        {
            vehicle::KRARevenue=vehicle::value*(delta)+1890;
        }
        else if ( vehicle::engineCapacity>1200 && vehicle::engineCapacity<=1500)
        {
            vehicle::KRARevenue=vehicle::value*(delta)+2065;

        }
        else if (vehicle::engineCapacity>1500 && vehicle::engineCapacity<=1700)
        {
            vehicle::KRARevenue=vehicle::value*(delta)+2410;
        }

        else if (vehicle::engineCapacity>1700 && vehicle::engineCapacity<=2000)
        {
            vehicle::KRARevenue=vehicle::value*(delta)+2695;
        }

        else if (vehicle::engineCapacity>2000 && vehicle::engineCapacity<=2500)
        {
            vehicle::KRARevenue=vehicle::value*(delta)+3485;
        }

        else if (vehicle::engineCapacity>2500 && vehicle::engineCapacity<=3000)
        {
            vehicle::KRARevenue=vehicle::value*(delta)+5055;
        }


        else if (vehicle::engineCapacity>3000)
        {
            vehicle::KRARevenue=vehicle::value*(delta)+5915;
        }
   }
}


void vehicle::DataInput()

{
	  cout<<"Enter Vehicle IDentifier";
    cin>>ViD;
    cout<<"Enter Vehicle Number plate";
    cin>>Vplate;
    cout<<"Enter Vehicle Engine capacity";
    cin>>engineCapacity;
     cout<<"Enter Vehicle year of manufacture";
    cin>>YrOfMan;
    if( (2017-YrOfMan)>8)
    {
        cout<<"CANT REGISTER A VEHICLE ABOVE 8 YRS OF AGE"<<endl;
        exit(0);
    }
    cout<<"Enter Vehicle Value";
    cin>>value;
	cout<<"Enter Vehicle Owner's PIN";
    cin>> OwnerPIN ;
    cout<<"Enter Vehicle Manufacturer";
    cin>>manufacturer;
    cout<<"Enter Vehicle BODY TYPE";
    cin>>bodytype;
}

void motorbike::DataInput()
{
	vehicle::DataInput();
	 cout<<"Enter Motorbike Tax Rate";
    cin>>taxrate;


}


void ordinary::DataInput()
{
	vehicle::DataInput();
	 cout<<"Enter Vehicle TYpe";
    cin>>vehicleType;


}

void truck::DataInput()
{
	vehicle::DataInput();
	 cout<<"Enter Truck Tax Rate";
    cin>>taxrate;
 cout<<"Enter Axle Count";
    cin>>axleNum;
	 cout<<"Enter Trailer Plate";
    cin>>TrailerPlate;

}

void vehicle::generateInvoice()
{
     cout<<"======================================================"<<endl;
    cout<<"=============       VEHICLE INVOICE       ==========="<<endl;
    cout<<"======================================================"<<endl;
    cout<<"\t You are required to pay the below amount to KRA"<<endl;
     cout<<"Vehicle ID:\t";
        cout<<ViD<<endl;
         cout<<" Owned By Holder of PIN \t";
        cout<<OwnerPIN<<endl;
        cout<<"Vehicle Number plate \t";
        cout<<Vplate<<endl;
         cout<<" Priced at\t";
        cout<<"Ksh "<<KRARevenue<<endl;
         cout<<"=================================================="<<endl;
    cout<<"=============       END OF INVOICE       ==========="<<endl;
    cout<<"======================================================"<<endl;


}


void ordinary::display()
{	 cout<<"======================================================"<<endl;
    cout<<"=============       LOGBOOK       ==========="<<endl;
    cout<<"======================================================"<<endl;
    cout<<"=====================ORDINARY CATEGORY================="<<endl;
    cout<<"======================================================"<<endl;
    cout<<"=========================VEHICLE TYPE=============="<<endl;
    cout<<"============"<<ordinary::vehicleType<<"===============";


     vehicle::display();

}


void motorbike::display()
{ cout<<"======================================================"<<endl;
    cout<<"=============       LOGBOOK       ==========="<<endl;
    cout<<"======================================================"<<endl;
    cout<<"=====================MOTOR CYCLE CATEGORY================="<<endl;
    cout<<"====================BODY TYPE: 2 WHEELER============="<<endl;
         vehicle::display();

}


void truck::display()
{
	 cout<<"======================================================"<<endl;
    cout<<"=============       LOGBOOK       ==========="<<endl;
  cout<<"======================================================"<<endl;
    cout<<"=============       VEHICLE DETAILS       ==========="<<endl;
    cout<<"======================================================"<<endl;
    cout<<"=====================TRUCK CATEGORY================="<<endl;
    cout<<"===============BODY TYPE: COMMERCIAL TRUCK============="<<endl;

    vehicle::display();
    cout<<"Number of axles \t";
        cout<<axleNum<<endl;
        cout<<"TRAILER Number plate \t ZX ";
        cout<<TrailerPlate<<endl;

}

void motorbike::computeKRARevenue()
{
    taxrate=0.18;
    KRARevenue=taxrate*value;
}

void motorbike::computeKRARevenue(double importduty)
{
    taxrate=0.18+importduty;
    KRARevenue=taxrate*value;
}


void truck::computeKRARevenue()
{
    if(axleNum == 2)
    KRARevenue= 1030;
    else if(axleNum > 2)
    {
        KRARevenue=1890;
    }
}

void truck::computeKRARevenue(double importduty)
{
    if(axleNum == 2)
    KRARevenue= 1030+(value*importduty);
    else if(axleNum > 2)
    {
        KRARevenue=1890+(value*importduty);
    }
}


bool vehicle::vehicleSearch(int V)
{
	if(ViD == V)
	{
		return true;
	}
	else {
		return false;
	}
}



void vehicle::blacklistVehicle()

{
int x;
cout<<" Enter Vehicle International Identifier"<<endl;
cin>> x;
	blacklist[i]=x;
	i++;
}


void vehicle::Searchblacklist(int plate)

{
	int x;
	for(x=0;x<i;x++)
	{
		if(plate == blacklist[x])
		{
			cout<<"CANT REGISTER BLACKLISTED VEHICLE"<<endl;
            exit(0);
		}
	}




}


void vehicle::Transfer()
{
    int pin;
    cout<<"Enter new Owners KRA PIN"<<endl;
    cin>> pin;
    OwnerPIN=pin;
    cout<<"Transfer Complete"<<endl;
}
