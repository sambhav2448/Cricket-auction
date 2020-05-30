#include <Windows.h>
#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <cmath>
using namespace std;





class view
{
	private:
	   int num;
   
public:
void maaaiin()
{
	cout<<"\n";
   cout<<"   ";
   cout<<"BATSMEN \n1.VIRAT KOHLI\n2.KL RAHUL\n3.DAVID WARNER\n4.CHRIS GAYLE\n5.SHIKHAR DHAWAN\n6.KEDHAR JHADAV\n7.Kane Williamson\n8.Rohit Sharma"<<endl;
   cout<<"\n";
   cout<<"    ";
   cout<<"BOWLERS \n9.JASPRIT BUMRAH\n10.SUNIL NARINE \n11.KULDEEP YADAV \n12.STUART BROAD\n13.Trent Boult\n14.Mitchelle Starc"<<endl;
    cout<<"\n";
   cout<<"  ";
   cout<<"ALL-ROUNDERS \n15.HARDIK PANDYA \n16.KRUNAL PANDYA \n17.COREY ANDERSON \n18.GLEN MAXWELL\n19.Moeen Ali\n20.Colin Munro"<<endl;
    cout<<"\n";  
   cout<<" ";
    cout<<"WICKET KEEPER \n21.MS DHONI \n22.RISHABH PANT \n23.AB DE VELIERS \n24.TIM PAINE\n" <<endl;
        
        
   cout<<"ENTER YOUR PLAYER CHOICE-";
   cin>>num;

   switch(num) {
      case 1 :
          a1();
         break;
      case 2 : 
	  a2();
         break;
      case 3 :
	   a3();
         break;
       case 4 :
	   a4();
         break;
         case 5 :
	   a5();
         break;
         case 6 :
	   a6();
         break;
         case 7 :
	   a19();
         break;
         case 8 :
	   a20();
         break;
         case 9 :
	   a7();
         break;
         case 10 :
	   a8();
         break;
        
         case 11 :
	   a9();
         break;
         case 12:
	   a10();
         break;
         case 13 :
	   a23();
         break;
         case 14 :
	   a24();
         break;
         case 15:
	   a11();
         break;
         case 16 :
	   a12();
         break;
         case 17 :
	   a13();
         break;
         case 18 :
	   a14();
         break;
         case 19 :
	   a22();
         break;
         case 20 :
	   a21();
         break;
         case 21 :
	   a15();
         break;
         case 22 :
	   a16();
         break;
         case 23 :
	   a17();
         break;
         case 24 :
	   a18();
         break;
        
      default :
         cout << "Invalid player" << endl;
   }
   Sleep(5000);
   
}
 void a1()
 {
 	system("CLS");
 	Sleep (1000);
	cout << "LOADING.....";
	Sleep (500);
	cout << ".....";
	Sleep (100);
	cout << ".....";
	Sleep (500);
	cout << ".....\n";
	cout<<"\n";
 	string output;
    ifstream myfile;
    ofstream myfile2;

    string STRING;
    myfile.open("1.txt");
    while(getline(myfile, STRING))
	{
		cout<<STRING<<endl;
	}

 }
 
  void a2()
 {
 	system("CLS");
 	Sleep (1000);
	cout << "LOADING.....";
	Sleep (500);
	cout << ".....";
	Sleep (100);
	cout << ".....";
	Sleep (500);
	cout << ".....\n";
	cout<<"\n";
 	string output;
    ifstream myfile;
    ofstream myfile2;

    string STRING;
    myfile.open("2.txt");
    while(getline(myfile, STRING))
	{
		cout<<STRING<<endl;
	}

 }
 
  void a3()
 {
 	system("CLS");
 	Sleep (1000);
	cout << "LOADING.....";
	Sleep (500);
	cout << ".....";
	Sleep (100);
	cout << ".....";
	Sleep (500);
	cout << ".....\n";
	cout<<"\n";
 	string output;
    ifstream myfile;
    ofstream myfile2;
    
    

    string STRING;
myfile.open("3.txt");
    while(getline(myfile, STRING))
	{
		cout<<STRING<<endl;
	}

 }
  void a4()
 {
 	system("CLS");
 	Sleep (1000);
	cout << "LOADING.....";
	Sleep (500);
	cout << ".....";
	Sleep (100);
	cout << ".....";
	Sleep (500);
	cout << ".....\n";
	cout<<"\n";
 	string output;
    ifstream myfile;
    ofstream myfile2;

    string STRING;
myfile.open("4.txt");    
while(getline(myfile, STRING))
	{
		cout<<STRING<<endl;
	}

 }
  void a5()
 {
 	system("CLS");
 	Sleep (1000);
	cout << "LOADING.....";
	Sleep (500);
	cout << ".....";
	Sleep (100);
	cout << ".....";
	Sleep (500);
	cout << ".....\n";
	cout<<"\n";
 	string output;
    ifstream myfile;
    ofstream myfile2;

    string STRING;
myfile.open("5.txt");
    while(getline(myfile, STRING))
	{
		cout<<STRING<<endl;
	}

 }
  void a6()
 {
 	system("CLS");
 	Sleep (1000);
	cout << "LOADING.....";
	Sleep (500);
	cout << ".....";
	Sleep (100);
	cout << ".....";
	Sleep (500);
	cout << ".....\n";
	cout<<"\n";
 	string output;
    ifstream myfile;
    ofstream myfile2;

    string STRING;
    myfile.open("6.txt");
    while(getline(myfile, STRING))
	{
		cout<<STRING<<endl;
	}

 }
  void a7()
 {
 	system("CLS");
 	Sleep (1000);
	cout << "LOADING.....";
	Sleep (500);
	cout << ".....";
	Sleep (100);
	cout << ".....";
	Sleep (500);
	cout << ".....\n";
	cout<<"\n";
 	string output;
    ifstream myfile;
    ofstream myfile2;

    string STRING;
    myfile.open("7.txt");
    while(getline(myfile, STRING))
	{
		cout<<STRING<<endl;
	}

 }
  void a8()
 {
 	system("CLS");
 	Sleep (1000);
	cout << "LOADING.....";
	Sleep (500);
	cout << ".....";
	Sleep (100);
	cout << ".....";
	Sleep (500);
	cout << ".....\n";
	cout<<"\n";
 	string output;
    ifstream myfile;
    ofstream myfile2;

    string STRING;
        myfile.open("8.txt");
    while(getline(myfile, STRING))
	{
		cout<<STRING<<endl;
	}

 }
  

 
  void a9()
 {
 	system("CLS");
 	Sleep (1000);
	cout << "LOADING.....";
	Sleep (500);
	cout << ".....";
	Sleep (100);
	cout << ".....";
	Sleep (500);
	cout << ".....\n";
	cout<<"\n";
 	string output;
    ifstream myfile;
    ofstream myfile2;

    string STRING;
    myfile.open("9.txt");
    while(getline(myfile, STRING))
	{
		cout<<STRING<<endl;
	}

 }
  void a10()
 {
 	system("CLS");
 	Sleep (1000);
	cout << "LOADING.....";
	Sleep (500);
	cout << ".....";
	Sleep (100);
	cout << ".....";
	Sleep (500);
	cout << ".....\n";
	cout<<"\n";
 	string output;
    ifstream myfile;
    ofstream myfile2;

    string STRING;
    myfile.open("10.txt");
    while(getline(myfile, STRING))
	{
		cout<<STRING<<endl;
	}

 }
  void a11()
 {
 	system("CLS");
 	Sleep (1000);
	cout << "LOADING.....";
	Sleep (500);
	cout << ".....";
	Sleep (100);
	cout << ".....";
	Sleep (500);
	cout << ".....\n";
	cout<<"\n";
 	string output;
    ifstream myfile;
    ofstream myfile2;

    string STRING;
    myfile.open("11.txt");
    while(getline(myfile, STRING))
	{
		cout<<STRING<<endl;
	}

 }
  void a12()
 {
 	system("CLS");
 	Sleep (1000);
	cout << "LOADING.....";
	Sleep (500);
	cout << ".....";
	Sleep (100);
	cout << ".....";
	Sleep (500);
	cout << ".....\n";
	cout<<"\n";
 	string output;
    ifstream myfile;
    ofstream myfile2;

    string STRING;
    myfile.open("12.txt");
    while(getline(myfile, STRING))
	{
		cout<<STRING<<endl;
	}

 }
  void a13()
 {
 	system("CLS");
 	Sleep (1000);
	cout << "LOADING....";
	Sleep (500);
	cout << ".....";
	Sleep (100);
	cout << ".....";
	Sleep (500);
	cout << ".....\n";
	cout<<"\n";
 	string output;
    ifstream myfile;
    ofstream myfile2;

    string STRING;
    myfile.open("13.txt");
    while(getline(myfile, STRING))
	{
		cout<<STRING<<endl;
	}

 }
  void a14()
 {
 	system("CLS");
 	Sleep (1000);
	cout << "LOADING....";
	Sleep (500);
	cout << ".....";
	Sleep (100);
	cout << ".....";
	Sleep (500);
	cout << ".....\n";
	cout<<"\n";
 	string output;
    ifstream myfile;
    ofstream myfile2;

    string STRING;
    myfile.open("14.txt");
    while(getline(myfile, STRING))
	{
		cout<<STRING<<endl;
	}

 }
  void a15()
 {
 	system("CLS");
 	Sleep (1000);
	cout << "LOADING....";
	Sleep (500);
	cout << ".....";
	Sleep (100);
	cout << ".....";
	Sleep (500);
	cout << ".....\n";
	cout<<"\n";
 	string output;
    ifstream myfile;
    ofstream myfile2;

    string STRING;
    myfile.open("15.txt");
    while(getline(myfile, STRING))
	{
		cout<<STRING<<endl;
	}

 }
  void a16()
 {
 	system("CLS");
 	Sleep (1000);
	cout << "LOADING.....";
	Sleep (500);
	cout << ".....";
	Sleep (100);
	cout << ".....";
	Sleep (500);
	cout << ".....\n";
	cout<<"\n";
 	string output;
    ifstream myfile;
    ofstream myfile2;

    string STRING;
    myfile.open("16.txt");
    while(getline(myfile, STRING))
	{
		cout<<STRING<<endl;
	}

 }
  void a17()
 {
 	system("CLS");
 	Sleep (1000);
	cout << "LOADING.....";
	Sleep (500);
	cout << ".....";
	Sleep (100);
	cout << ".....";
	Sleep (500);
	cout << ".....\n";
	cout<<"\n";
 	string output;
    ifstream myfile;
    ofstream myfile2;

    string STRING;
    myfile.open("17.txt");
    while(getline(myfile, STRING))
	{
		cout<<STRING<<endl;
	}

 }
 
  void a18()
 {
 	system("CLS");
 	Sleep (1000);
	cout << "LOADING.....";
	Sleep (500);
	cout << ".....";
	Sleep (100);
	cout << ".....";
	Sleep (500);
	cout << ".....\n";
	cout<<"\n";
 	string output;
    ifstream myfile;
    ofstream myfile2;

    string STRING;
    myfile.open("18.txt");
    while(getline(myfile, STRING))
	{
		cout<<STRING<<endl;
	}

 }
 
 void a19()
 {
 	system("CLS");
 	Sleep (1000);
	cout << "LOADING.....";
	Sleep (500);
	cout << ".....";
	Sleep (100);
	cout << ".....";
	Sleep (500);
	cout << ".....\n";
	cout<<"\n";
 	string output;
    ifstream myfile;
    ofstream myfile2;

    string STRING;
    myfile.open("19.txt");
    while(getline(myfile, STRING))
	{
		cout<<STRING<<endl;
	}

 }
 void a20()
 {
 	system("CLS");
 	Sleep (1000);
	cout << "LOADING.....";
	Sleep (500);
	cout << ".....";
	Sleep (100);
	cout << ".....";
	Sleep (500);
	cout << ".....\n";
	cout<<"\n";
 	string output;
    ifstream myfile;
    ofstream myfile2;

    string STRING;
    myfile.open("20.txt");
    while(getline(myfile, STRING))
	{
		cout<<STRING<<endl;
	}

 }
 void a21()
 {
 	system("CLS");
 	Sleep (1000);
	cout << "LOADING.....";
	Sleep (500);
	cout << ".....";
	Sleep (100);
	cout << ".....";
	Sleep (500);
	cout << ".....\n";
	cout<<"\n";
 	string output;
    ifstream myfile;
    ofstream myfile2;

    string STRING;
    myfile.open("21.txt");
    while(getline(myfile, STRING))
	{
		cout<<STRING<<endl;
	}

 }
 void a22()
 {
 	system("CLS");
 	Sleep (1000);
	cout << "LOADING.....";
	Sleep (500);
	cout << ".....";
	Sleep (100);
	cout << ".....";
	Sleep (500);
	cout << ".....\n";
	cout<<"\n";
 	string output;
    ifstream myfile;
    ofstream myfile2;

    string STRING;
    myfile.open("22.txt");
    while(getline(myfile, STRING))
	{
		cout<<STRING<<endl;
	}

 }
 void a23()
 {
 	system("CLS");
 	Sleep (1000);
	cout << "LOADING.....";
	Sleep (500);
	cout << ".....";
	Sleep (100);
	cout << ".....";
	Sleep (500);
	cout << ".....\n";
	cout<<"\n";
 	string output;
    ifstream myfile;
    ofstream myfile2;

    string STRING;
    myfile.open("23.txt");
    while(getline(myfile, STRING))
	{
		cout<<STRING<<endl;
	}

 }
 void a24()
 {
 	system("CLS");
 	Sleep (1000);
	cout << "LOADING.....";
	Sleep (500);
	cout << ".....";
	Sleep (100);
	cout << ".....";
	Sleep (500);
	cout << ".....\n";
	cout<<"\n";
 	string output;
    ifstream myfile;
    ofstream myfile2;

    string STRING;
    myfile.open("24.txt");
    while(getline(myfile, STRING))
	{
		cout<<STRING<<endl;
	}

 }
 
 
 
 
 
 
 
 



 
   
};











class mmainn
{
	




char x[20][20]={"RCB KKR","RCB CSK","RCB SRH","KKR CSK","KKR SRH","CSK SRH","KKR RCB","CSK RCB","SRH RCB","CSK KKR","SRH KKR","SRH CSK" };
int a[4] ={0,0,0,0};
char e[20][20]={"RCB","KKR","CSK","SRH"};
int f=0;
int i,j;
int q;

public:
void gameplan()
{

cout<<"\n";
for(i=0;i<=11;i++)
{

cout<<"  Game "<<i+1<< " is between the teams - ";

for(j=0;j<=6;j++)
{
cout<<x[i][j];



}
if(x[i][0]=='R')
cout<<" in BANGALORE at 8:00PM\n";

else if(x[i][0]=='C')
cout<<" in CHENNAI at 8:00PM\n";

else if(x[i][0]=='S')
cout<<" in HYDRABAD at 8:00PM\n";

else 
cout<<" in KOLKATA at 8:00PM\n";


cout<<"\n";
}

cout<<"\n\n\n";
Sleep(7000);
system("cls");
for(i=0;i<=11;i++)
{
	cout<<"\n";
cout<<"Who won the game between ";
for(j=0;j<=11;j++)
{
cout<<x[i][j];

}

 cout<<"\nENTER the winner.........RCB-1 , KKR-2 ,CSK-3 , SRH-4 ; Select 5 for draw-   ";
   cin>>q;

   switch(q) {
      case 1 :
         a[0]=a[0]+2;
         break;
      case 2 : 
	  a[1]=a[1]+2;
         break;
      case 3 :
    a[2]=a[2]+2; 
         break;
    case 4 :
    a[3]=a[3]+2; 
         break;    
	case 5:
		{
		
		if(i==0 || i==6)
	{
			a[0]=a[0]+1;
		    a[1]=a[1]+1;}
	
		else if(i==1 || i==7 )
	{
		a[0]=a[0]+1;
		a[2]=a[2]+1;
}
		else if(i==2 || i==8)
	{
			a[0]=a[0]+1;
		    a[3]=a[3]+1;
}
		else if(i==3 || i==9)
	{
			a[1]=a[1]+1;
		    a[2]=a[2]+1;}
		
		else if(i==4 || i==10)
	{
			a[1]=a[1]+1;
		    a[3]=a[3]+1;}
		
		else if(i==5 || i==11)
	{
			a[3]=a[3]+1;
		    a[2]=a[2]+1;}
		
	}
			break;
	default:
		{
			cout<<"enter a valid winner"<<endl;
			
		} exit(0);
	 

}


}
cout<<"\nRCB has "<<a[0]<<" points\n";
cout<<"KKR has "<<a[1]<<" points\n";
cout<<"CSK has "<<a[2]<<" points\n";
cout<<"SRH has "<<a[3]<<" points\n\n";

 
int aq[5],n,min,temp,wow;
aq[0]=a[0];
aq[1]=a[1];
aq[2]=a[2];
aq[3]=a[3];


   for (i=0; i<5; i++)
    {
    
      min = i;
      for (j = i + 1; j < 5; j++)
      {
	  
        if (aq[j] < aq[min])
        {
          min = j;
         temp = aq[i];
         aq[i] = aq[min];
         aq[min] = temp;
         wow=temp;
         wow=e[i][0];
         e[i][0]=e[min][0];
         e[min][0]=wow;
       }
}
}
  cout<<"\t\t POINTS TABLE \n";
   
   for (i=4; i>0; i--)
   {
   	
 
   cout<<"\t\t"<<aq[i]<<" - ";
   
if(e[i][0]=='R')
cout<<" RCB\n";

else if(e[i][0]=='S')
cout<<" SRH\n";

else if(e[i][0]=='C')
cout<<" CSK\n";

else 
cout<<" KKR\n";
   

}



  

cout<<"_________________________________________________________________________________________________________________________________________________________________________________________"<<endl;

}
};
















class auction
{
	private:
	
	int l=0,t=0;
	int z;
	int amount,choice;
	int front1 = - 1, rear1 = - 1,z1=24;
	int front2 = - 1, rear2 = - 1,z2=24;
	int front3 = - 1, rear3 = - 1,z3=24;
	int front4 = - 1, rear4 = - 1,z4=24;
	int front5 = - 1, rear5 = - 1,z5=24;

	char bider1_players[6][20];
	char bider2_players[6][20];
	char bider3_players[6][20];
	char bider4_players[6][20];
	char unsold[6][20];
	
	int init_amt1=800;
	int init_amt2=800;
	int init_amt3=800;
	int init_amt4=800;
	char val[20];
	char players[100][100]={"VIRAT KOHLI","KL RAHUL","DAVID WARNER","CHRIS GAYLE","SHIKHAR DHAWAN","KEDHAR JHADAV","KANE WILLIAMSON","ROHIT SHARMA","JASPRIT BUMRAH","SUNIL NARINE","KULDEEP YADAV","STUART BROAD","TRENT BOULT","MITCHELLE STARC","HARDIK PANDYA","KRUNAL PANDYA","COREY ANDERSON","GLEN MAXWELL","MOEEN ALI","COLIN MUNRO","MS DHONI","RISHABH PANT","AB DE VELIERS","TIM PAINE"};
	int price[100]={120,90,110,100,90,80,100,110,80,60,70,50,90,100,80,60,50,110,70,80,120,90,130,60};
	public:
	void rau()
	{
		int i;
		system("cls");
		Sleep (1000);
		cout<<"THESE ARE THE PLAYERS FOR AUCTION\n";
		
		for(i=0;i<18;i++)
		{
			
			cout<<players[i]<<"\t";
			cout<<price[i]<<"\n";
		}
		Sleep (1000);
		Sleep (1000);
		Sleep (1000);
		system("cls");
		int k=1;
		for(i=0;i<24;i++)
		{
			l=0;
			k=1;
			z=0;
		cout<<"PLAYER IS "<<players[i]<<"\n";
		cout<<"BASE PRICE "<<price[i]<<"\n";
		amount=price[i];
		while(k==1)
		{
		
		
		
		
		
		cout<<"Which Bidder want to Bid?\n";
		cout<<"Enter 1 for Bidder 1"<<"\n";
		cout<<"Enter 2 for bidder 2"<<"\n";
		cout<<"Enter 3 for bidder 3"<<"\n";
		cout<<"Enter 4 for bidder 4"<<"\n";
		cout<<"Enter 5 to exit bidding"<<"\n";
		cin>>choice;
		switch(choice)
		{
		case 1:
			if(init_amt1>amount+30)
			{
			amount=amount+30;
			l=1;
		}
		else
			cout<<"This bidder has no money to bid\n\n";
			break;
		case 2:
			if(init_amt2>amount+30)
			{
			amount=amount+30;
			l=2;
		}
			else
			cout<<"This bidder has no money to bid\n\n";
			break;
		case 3:
			if(init_amt3>amount+30)
			{
			amount+=30;
			l=3;
			}
			else
			cout<<"This bidder has no money to bid\n\n";
			break;
		case 4:
			if(init_amt4>amount+30)
			{
			amount+=30;
			l=4;
			}
			else
			cout<<"This bidder has no money to bid\n\n";
			break;
		case 5:
			k=k+1;
			t=5;
			break;
		default:
			cout<<"\noption does not exist\n";
			break;
			
		}
		z++;
		
		
	}	
	if(z==1&&t==5)
	l=5;
	
	cout<<"\nplayer bought by bidder "<<l; 
	cout<<"  for amount "<<amount<<"\n\n";
	strcpy(val,players[i]);
	if(l==1)
	{
		
	init_amt1-=amount;
	

   if (rear1 == z1 - 1)
      cout<<"Queue Overflow"<<endl;
   else {
      if (front1 == - 1)
      front1 = 0;
      rear1++;
      strcpy(bider1_players[rear1],val);
   
	
	
}
}
	if(l==2)
	{init_amt2-=amount;
	
		

	

   if (rear2 == z2 - 1)
      cout<<"Queue Overflow"<<endl;
   else {
      if (front2 == - 1)
      front2 = 0;
      rear2++;
      strcpy(bider2_players[rear2],val);
   
	}
}
	if(l==3)
	{init_amt3-=amount;
		

	

   if (rear3 == z3 - 1)
      cout<<"Queue Overflow"<<endl;
   else {
      if (front3 == - 1)
      front3 = 0;
      rear3++;
      strcpy(bider3_players[rear3],val);
   
	}
}
	
	if(l==4)
	{	init_amt4-=amount;
		

	

   if (rear4 == z4 - 1)
      cout<<"Queue Overflow"<<endl;
   else {
      if (front4 == - 1)
      front4 = 0;
      rear4++;
      strcpy(bider4_players[rear4],val);
   
	}
}
	if(l==5	)
	{
if (rear5 == z5 - 1)
      cout<<"Queue Overflow"<<endl;
   else {
      if (front5 == - 1)
      front5 = 0;
      rear5++;
      strcpy(unsold[rear5],val);
   
	}
	
   }
   if (front1 == - 1)
   cout<<"Queue is empty"<<endl;
   else {
      cout<<"Bidder 1 Players are : ";
      for (int i = front1; i <= rear1; i++)
         cout<<" "<<bider1_players[i]<<" ";
      cout<<endl;
   }
   if (front2 == - 1)
   cout<<"Queue is empty"<<endl;
   else {
      cout<<"Bidder 2 Players are : ";
      for (int i = front2; i <= rear2; i++)
         cout<<" "<<bider2_players[i]<<" ";
      cout<<endl;
   }
   if (front3 == - 1)
   cout<<"Queue is empty"<<endl;
   else {
      cout<<"Bidder 3 Players are : ";
      for (int i = front3; i <= rear3; i++)
         cout<<" "<<bider3_players[i]<<" ";
      cout<<endl;
   }
   if (front4 == - 1)
   cout<<"Queue is empty"<<endl;
   else {
      cout<<"Bidder 4 Players are : ";
      for (int i = front4; i <= rear4; i++)
         cout<<" "<<bider4_players[i]<<" ";
      cout<<endl;
   }
   if (front5 == - 1)
   cout<<"Queue is empty"<<endl;
   else {
      cout<<"Unsold Players are : ";
      for (int i = front5; i <= rear5; i++)
         cout<<" "<<unsold[i]<<" ";
      cout<<endl;
   }
   
  
	    
   cout<<"Bidder 1 : "<<init_amt1<<"  Bidder 2 : "<<init_amt2<<"  Bidder 3 : "<<init_amt3<<"  Bidder 4 : "<<init_amt4;
Sleep (2000);
	system("cls");
	
	
    
   



}
write_players();
}

void displayplayer1()
{
	ifstream inFile;
    inFile.open("player1.dat", ios::binary);


    auction obj;
    
    
   
    while(inFile.read((char*)&bider1_players, sizeof(bider1_players)))
    {
    	
        cout<<"\nPLAYERS ARE :";
		  	cout<<"\n1."<<bider1_players[0];
	        cout<<"\n2."<<bider1_players[1];
	        cout<<"\n3."<<bider1_players[2];
	        cout<<"\n4."<<bider1_players[3];
	        cout<<"\n5."<<bider1_players[4];
	        cout<<"\n6."<<bider1_players[5]<<"\n\n";
    

}      
inFile.close();  
}

void displayplayer2()
{
	ifstream inFile;
    inFile.open("player2.dat", ios::binary);


    auction obj;
    
    
   
    while(inFile.read((char*)&bider2_players, sizeof(bider2_players)))
    {
    	
        cout<<"\nPLAYERS ARE :";
		  	cout<<"\n1."<<bider2_players[0];
	        cout<<"\n2."<<bider2_players[1];
	        cout<<"\n3."<<bider2_players[2];
	        cout<<"\n4."<<bider2_players[3];
	        cout<<"\n5."<<bider2_players[4];
	        cout<<"\n6."<<bider2_players[5]<<"\n\n";
    

}      
inFile.close();  
}
void displayplayer3()
{
	ifstream inFile;
    inFile.open("player3.dat", ios::binary);


    auction obj;
    
    
   
    while(inFile.read((char*)&bider3_players, sizeof(bider3_players)))
    {
    	
        cout<<"\nPLAYERS ARE :";
		  	cout<<"\n1."<<bider3_players[0];
	        cout<<"\n2."<<bider3_players[1];
	        cout<<"\n3."<<bider3_players[2];
	        cout<<"\n4."<<bider3_players[3];
	        cout<<"\n5."<<bider3_players[4];
	        cout<<"\n6."<<bider3_players[5]<<"\n\n";
    

}      
inFile.close();  
}
void displayplayer4()
{
	ifstream inFile;
    inFile.open("player4.dat", ios::binary);


    auction obj;
    
    
   
    while(inFile.read((char*)&bider4_players, sizeof(bider4_players)))
    {
    	
        cout<<"\nPLAYERS ARE :";
		  	cout<<"\n1."<<bider4_players[0];
	        cout<<"\n2."<<bider4_players[1];
	        cout<<"\n3."<<bider4_players[2];
	        cout<<"\n4."<<bider4_players[3];
	        cout<<"\n5."<<bider4_players[4];
	        cout<<"\n6."<<bider4_players[5]<<"\n\n";
    

}      
inFile.close();  
}
void write_players()
{
	auction obj;
	
	ofstream outFile;
    outFile.open("player1.dat", ios::binary | ios::app);
    outFile.write((char*)&bider1_players, sizeof(bider1_players));
    outFile.close();
    
  
    outFile.open("player2.dat", ios::binary | ios::app);
    outFile.write((char*)&bider2_players, sizeof(bider2_players));
    outFile.close();
    
    
    outFile.open("player3.dat", ios::binary | ios::app);
    outFile.write((char*)&bider3_players, sizeof(bider3_players));
    outFile.close();
    
    
    outFile.open("player4.dat", ios::binary | ios::app);
    outFile.write((char*)&bider4_players, sizeof(bider4_players));
    outFile.close();
}
	
};

















class Register
{
	private:
		int m;
		int inlog;
		int userid;
		int bidder_no;
		char firstname[50];
		char lastname[50];
		char ph_no[10];
		int  budget;
		char a_no[10];
		char t_name[20];
		
		



	public:

	void reg_input(int i)
	{

		system("cls");
		cout << "LOADING...";
		Sleep (1000);
		cout << ".....";
		Sleep (1000);
		cout << ".....";
		Sleep (500);
		cout << ".....";
		cout << "" << endl;
		system("cls");
		cout << "=========================================================================================" << endl;
		cout << "REGISTER BELOW:(TEAMS WILL BE AUTOMATICALLY ASSIGNED IN THE ORDER- RCB KKR CSK SRH):- " << endl;
		cout << "=========================================================================================" << endl;
		cout << "ENTER FIRST NAME: ";
		cin >>firstname;
		cout << "ENTER LAST NAME: ";
		cin >>lastname;
		cout << "ENTER USERNAME (NUMBERS ONLY UPTO 10 DIGITS): ";
		cin >>userid;
	
		if(i==1)
		strcpy(t_name,"RCB");
		
		if(i==2)
		strcpy(t_name,"KKR");
		
		if(i==3)
		strcpy(t_name,"CSK");
		
		if(i==4)
		strcpy(t_name,"DC");
		

		budget=800;
		cout << "ENTER PHONE NUMBER : ";
		cin >>ph_no;
		bidder_no=i;
	

		cout << "==============================================" << endl;
		cout << "" << endl;
		system("cls");
		cout << "PROCESSING...";
		Sleep (1000);
		cout << ".....";
		Sleep (1000);
		cout << ".....";
		Sleep (500);
		cout << "....." << endl;
		system("cls");
		cout << "CONGRATULATIONS! YOU ARE NOW REGISTERED!" << endl;
	}

	void showmyData()
	{	
	
		auction objv;
			cout <<"\nUSERID IS :"<<userid;
	        cout <<"\nTEAM OWNER NAME IS :"<<firstname<<" "<<lastname;
	        cout <<"\nTEAM NAME IS :"<<t_name;
	        cout <<"\nBUDGET IS :"<<budget;
	        cout <<"\nPHONE NUMBER IS :"<<ph_no;
	        cout <<"\nBIDDER NUMBER IS :"<<bidder_no<<"\n";
	        if(bidder_no==1)
	        objv.displayplayer1();
	         if(bidder_no==2)
	        objv.displayplayer2();
	         if(bidder_no==3)
	        objv.displayplayer3();
	         if(bidder_no==4)
	        objv.displayplayer4();
	        
	        
	     
	      
	       
	}
	void showData()
	{	

	        cout <<"\nTEAM NAME IS :"<<t_name;
	        cout <<"\nBUDGET IS :"<<budget;
	        cout <<"\nPHONE NUMBER IS :"<<ph_no;
	        cout <<"\nBIDDER NUMBER IS :"<<bidder_no<<"\n";
	       
	      
	      
	       
	}
	
	
	int retuserid()
	{
		return userid;
	}

	void display()
	{
	
	int ctrr=0;
		system("cls");
		cout<<"\nTEAMS AND BIDDER DETAILS\n\n";
    ifstream inFile;
    inFile.open("Bidder.dat", ios::binary);


    Register obj;
    auction objv;
   
    while(inFile.read((char*)&obj, sizeof(obj)))
    {
    	
        obj.showData();
        if(ctrr==0)
		objv.displayplayer1();
		
		if(ctrr==1)
		objv.displayplayer2();
		
		if(ctrr==2)
		objv.displayplayer3();
		
		if(ctrr==3)
		objv.displayplayer4();
    
ctrr++;
}        
     cout<<"\n\nPRESS ENTER 1 TO CONTINUE";
	cin>>m;
    inFile.close();
	}

	void write_record(int i)
	{
	    ofstream outFile;
	    outFile.open("Bidder.dat", ios::binary | ios::app);
	
	    Register obj;
	    obj.reg_input(i);
	    
	    outFile.write((char*)&obj, sizeof(obj));
	    
	    outFile.close();
	}

	void search(int n)
	{
    ifstream inFile;
    inFile.open("Bidder.dat", ios::binary);
    
    Register obj;
    system("cls");
	cout<<"\nMy TEAM\n\n";
    while(inFile.read((char*)&obj, sizeof(obj)))
    {
        if(obj.retuserid() == n)
        {
            obj.showmyData();
        }
    }
    cout<<"\n\nPRESS ENTER 1 TO CONTINUE";
	cin>>m;
    
    inFile.close();
	}


};







 mmainn obj8;





class Mainmenu
{
private:
int n;
int choice;

public:
void menu()
{

n=1;
int id;

while(n>=0)
{

cout<<"\n";
cout<<"\t";
cout<<"---------------------------------------------------------------------\n";
cout<<"\t";
cout<<"|                  REAL-TIME IPL AUCTIONING SYSTEM                  |\n";
cout<<"\t";
cout<<"---------------------------------------------------------------------\n";
cout<<"\t";
cout<<"---------------------------------------------------------------------\n";
cout<<"\t";
cout<<"*                                    			            *\n";
cout<<"\t";
cout<<"*            	          ~ Main Menu ~            	            *\n";
cout<<"\t";
cout<<"*                                    			            *\n";
cout<<"\t";
cout<<"---------------------------------------------------------------------\n";
cout<<"\t";
cout<<"*                         1.To Register                             *\n";
cout<<"\t";
cout<<"---------------------------------------------------------------------\n";
cout<<"\t";
cout<<"*                         2.To View Players and their Stats         *\n";
cout<<"\t";
cout<<"---------------------------------------------------------------------\n";
cout<<"\t";
cout<<"*                         3.Auction           	                    *\n";
cout<<"\t";
cout<<"---------------------------------------------------------------------\n";
cout<<"\t";
cout<<"*                         4.View Your Team                          *\n";
cout<<"\t";
cout<<"---------------------------------------------------------------------\n";
cout<<"\t";
cout<<"*                         5.View All Teams                          *\n";
cout<<"\t";
cout<<"---------------------------------------------------------------------\n";

cout<<"\t";
cout<<"*                         6.Fixtures                                *\n";
cout<<"\t";
cout<<"---------------------------------------------------------------------\n";
cout<<"\t";
cout<<"*                         7.Exit                                    *\n";
cout<<"\t";
cout<<"---------------------------------------------------------------------\n";
cout<<"\t";
cout<<"*                                                                   *\n";
cout<<"\t";
cout<<"---------------------------------------------------------------------\n";
cout<<"\n";


cout<<"\t";
cout<<"Enter Your Choice (1 TO 7) :- ";
cin>>choice;


cout<<"\n";
auction a;
view v;
while(choice>6||choice<1)
{

cout<<"\t";
cout<<"Invalid Option Entered So Please Enter Again (1 TO 6)\n";
cout<<"\t";
cin>>choice;



}

switch(choice)
{

     case 1:
	    Register obj;
	    for(int i = 1; i <= 4; i++)
	    obj.write_record(i);
		    break;

    case 2:
	    cout << "u have selected option 2\n";
	    v.maaaiin();
	    
	    break;

    case 3:
	    cout << "u have selected option 3\n";
	   //	Auction a;
		a.rau();
	    break;

    case 4:
        cout <<"u have selected option 4\n";
        Register obj1;
cout<<"\t";
cout<<"* Enter your userid *\n";
        cin>>id;

cout<<"\n*\tSearch result\n";
	    obj.search(id);
        break;
	case 5:
        cout <<"u have selected option 5\n";
	Register obj2;
	cout<<"\n--------------------------------\n";
    cout << "*\tList of records\t       *";
    	cout<<"\n--------------------------------\n";
    obj2.display();
    
	
        break;
    case 6:
        cout <<"u have selected option 6\n";
        obj8.gameplan();
        break;
	case 7:
		exit(1);
		break;

}

}
}


};

int main()
{

Mainmenu obj;
obj.menu();

return 0;

}


