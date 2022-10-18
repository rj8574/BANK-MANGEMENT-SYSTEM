#include<iostream>
#include<istream>
#include<fstream>
#include<stdlib.h>
#include<string.h>
#include <cctype>
#include <iomanip>
//#include<graphics.h>
//#include<dos.h>
#include<conio.h>
#include<windows.h>
using namespace std;



class customer{
    char  cust_name[1000];
    int mobile;
    char name[50];
    string email;
    void LOGIN();
    void REGISTRATION();

};
class Address{
    public:
    string houseNo;
    string area;
    string city;
    string pin;
    string add;
    Address()
    {
        houseNo = "Nil ";
        area = "Nil ";
        city = "Nil ";
        pin = "Nil ";
        add = houseNo + area + city + pin;
    }
};
class account :public customer,Address
{
  int acno;
  char name[50];
  int deposit;
  char type;
  

public:
account(){
    acno=0;
    deposit=0;
  }
  
  void create_account();    
  void show_account() ; 
  void modify();             
  void dep(int);             
  void draw(int);            
  void report() const;       
  int retacno() const;       
  int retdeposit() const;   
  char rettype() const;      
}; 
void login();
void registr();                          
void account::create_account()
{
        system("cls");
        cout << "\nEnter The account No. :";
        cin >> acno;
        cout << "\nEnter The Name of The account Holder : ";
        cin.ignore();
        cin.getline(name, 50);
        cout << "\nEnter Type of The account (C/S) : ";
        cin >> type;
        type = toupper(type);
        cout << "\nEnter The Initial amount : ";
        cin >> deposit;
        while (deposit<500)
        {
          cout<<" please enter again :";
          cin>>deposit;
        }
        
        cout << "\nEnter House No. =  ";
        cin>>houseNo;
        getline(cin,houseNo);
        cout << "\n Enter Area =  ";
        cin>>area;
        getline(cin,area);
        cout << "\n Enter City =  ";
        cin>>city;
        getline(cin,city);
        cout << "\n Enter PIN Code =  ";
        cin >> pin;
         cout << "\n\n\nAccount Created..";
        
}

void account::show_account() 
{
  
  cout << "\nAccount No. : " << acno;
  cout << "\nAccount Holder Name : ";
  cout << name;
  cout << "\nType of Account : " << type;
  cout << "\nBalance amount : " << deposit;
  


}

void account::modify()
{
  cout << "\nAccount No. : " << acno;
  cout << "\nModify Account Holder Name : ";
  cin.ignore();
  cin.getline(name, 50);
  cout << "\nModify Type of Account : ";
  cin >> type;
  type = toupper(type);
  cout << "\nModify Balance amount : ";
  cin >> deposit;
}

void account::dep(int x)
{
  deposit += x;
}

void account::draw(int x)
{
  deposit -= x;
}

void account::report() const
{
  cout << acno << setw(10) << " " << name << setw(10) << type << setw(6) << deposit <<setw(6)<<houseNo<< setw(6)<<area<< setw(6)<<city<<setw(10)<<pin <<endl;
}

int account::retacno() const
{
  return acno;
}
int account::retdeposit() const
{
  return deposit;
}
char account::rettype() const
{
  return type;
}


void write_account();           
void display_sp(int);            
void modify_account(int);        
void delete_account(int);        
void display_all();              
void deposit_withdraw(int, int); 
void intro();                  


class Database{

	private:
		int EMI_no;
		float principal_EMI;
		float interest_EMI;
		float total_EMI;
		string EMI_date;
		float principal_Remaining;
	public:
		
		Database(){}
		
		Database(int emi_no, float principal_emi, float interest_emi, float total_emi, string emi_date, float principal_remaining){
			EMI_no = emi_no;
			principal_EMI = principal_emi;
			interest_EMI = interest_emi;
			total_EMI = total_emi;
			EMI_date = emi_date;
			principal_Remaining = principal_remaining;
		}
		
		int getEMI(){
			return EMI_no;
		}
		
		float getPrincipalEMI(){
			return principal_EMI;
		}

		float getInterestEMI(){
			return interest_EMI;
		}
		
		float getTotalEMI(){
			return total_EMI;
		}
		
		string getEMIDate(){
			return EMI_date;
		}
		
		float getPrincipalRemaining(){
			return principal_Remaining;
		}
};

class EMICalculator{

	private:
		int EMINo = 1;
		int timet;
		int SlNo = 1;
		int nextMnth = 30;
		float interest = 120;
	public:
		
		string returnMonthString(string startmonth){
			if(startmonth == "January" || startmonth == "jan" || startmonth == "january")
				startmonth = "Jan";
			else if(startmonth == "February" || startmonth == "feb" || startmonth == "february")
				startmonth = "Feb";
			else if(startmonth == "March" || startmonth == "mar" || startmonth == "march")
				startmonth = "Mar";
			else if(startmonth == "April" || startmonth == "apr" || startmonth == "april")
				startmonth = "Apr";
			else if(startmonth == "may")
				startmonth = "May";
			else if(startmonth == "June" || startmonth == "jun" || startmonth == "june")\
				startmonth = "June";
			else if(startmonth == "July" || startmonth == "jul" || startmonth == "july")
				startmonth = "Jul";
			else if(startmonth == "August" || startmonth == "aug" || startmonth == "august")
				startmonth = "Aug";
			else if(startmonth == "September" || startmonth == "sept" || startmonth == "september")
				startmonth = "Sept";
			else if(startmonth == "October" || startmonth == "oct" || startmonth == "october")
				startmonth = "Oct";
			else if(startmonth == "November" || startmonth == "nov" || startmonth == "november")
				startmonth = "Nov";
			else
				startmonth = "Dec";
			return startmonth;
		}
	
		string returnMonthStart(string startmonth){
			if(startmonth == "Jan")
				startmonth = "Feb";
			else if(startmonth == "Feb")
				startmonth = "Mar";
			else if(startmonth == "Mar")
				startmonth = "Apr";
			else if(startmonth == "Apr")
				startmonth = "May";
			else if(startmonth == "May")
				startmonth = "Jun";
			else if(startmonth == "Jun")
				startmonth = "Jul";
			else if(startmonth == "Jul")
				startmonth = "Aug";
			else if(startmonth == "Aug")
				startmonth = "Sept";
			else if(startmonth == "Sept")
				startmonth = "Oct";
			else if(startmonth == "Oct")
				startmonth = "Nov";
			else if(startmonth == "Nov")
				startmonth = "Dec";
			else
				startmonth = "Jan";
			return startmonth;
		}
		
		void calculateNETAmount(Database *db, float amount, int timet, float principalemi, float interestemi, int startdate, string startMonth, int startyear){
			
			float totalAmount = amount + interest;
			
			float totalemi = principalemi + interestemi;
		
			string startmonthnew = returnMonthString(startMonth);
		
			cout<<"Loan creation date: "<<startdate<<" "<<startmonthnew<<" "<<startyear<<endl;
			cout<<"Principal Amount : "<<amount<<endl;
			cout<<"No of EMI's: "<<timet<<endl;
			cout<<"Total Payable amount: "<<totalAmount<<endl;
			cout<<"EMI Details: "<<endl;
			float netEMI;

			for(int i = 0; i < timet; i++){
				
				string startmonth = returnMonthStart(startmonthnew);
				if(startmonth == "Dec")
					startyear += 1;
				
				string finaldate = to_string(startdate) + " " + startmonth + " " + to_string(startyear);
				netEMI = totalAmount - totalemi;
				
				db[i] = Database(EMINo++, principalemi, interestemi, totalemi, finaldate, float(netEMI));
				
				startmonthnew = startmonth;
				
				totalAmount = netEMI;
			}
		}
		
		void printDatabase(Database *db, int timet){
			for(int i = 0; i < timet; i++){
				cout<<"EMI No: "<<db[i].getEMI()<<", "<<"Principal EMI: "<<db[i].getPrincipalEMI()<<", "<<"Interest EMI: "<<db[i].getInterestEMI()
				<<", "<<"Total EMI: "<<db[i].getTotalEMI()<<", "<<"EMI Date: "<<db[i].getEMIDate()<<", "<<"Principal remaining: "<<db[i].getPrincipalRemaining()<<endl;
			}
		}
};
void loan()
{
  system("CLS");
  system("color 9");
        EMICalculator a;
	float amount;
	cout<<"Enter the total amount"<<endl;
	cin>>amount;
	int timet;
	cout<<"Enter the time period"<<endl;
	cin>>timet;
	float principalEMI;
	cout<<"Enter the principal EMI"<<endl;
	cin>>principalEMI;
	float interestEMI;
	cout<<"Enter the interest EMI"<<endl;
	cin>>interestEMI;
	int date;
	cout<<"Enter the start date"<<endl;
	cin>>date;
	string month;
	cout<<"Enter the start month"<<endl;
	cin>>month;
	int year;
	cout<<"Enter the start year"<<endl;
	cin>>year;
	Database db[timet];
	a.calculateNETAmount(db, amount, timet, principalEMI, interestEMI, date, month, year);
	a.printDatabase(db, timet);
}

fun()
{
        int choice;
        //animation();
        cout<<"----------------------------------------------------------------------\n";
        cout<<"|                      Welcome to                                    | \n";
        cout<<"|                          to                                        | \n";
        cout<<"|                      Login Page                                    | \n";
        cout<<"|--------------------------------------------------------------------|\n";
        cout<<"\t\t1.LOGIN"<<endl;
        cout<<"\t\t2.REGISTER"<<endl;
       cout<<"\t\t3. loan calculator:"<<endl;
        cout<<"\t\t4.Exit"<<endl;
        cout<<"\t\t\nEnter your choice :";
        cin>>choice;
        cout<<endl;
        switch(choice)
        {
                case 1:
                        login();
                        break;
                case 2:
                        registr();
                        break;
                
                case 3:
                        loan();
                        break;
                
                case 4:
                        cout<<"Thanks for using this program.\nThis program is created by @InhaleCode(rxn)\n\n";
                        break;
                default:
                        system("cls");
                        cout<<"You've made a mistake , Try again..\n"<<endl;
                        fun();
        }

}
void choice()
{
        char ch;
  int num;
    do
    {
        system("color 9");
    cout  <<"\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
    cout << "\n\n\t  MAIN MENU                                  ";
    cout << "\n\n\t  01. NEW ACCOUNT                            ";
    cout << "\n\n\t  02. DEPOSIT AMOUNT                         ";
    cout << "\n\n\t  03. WITHDRAW AMOUNT                        ";
    cout << "\n\n\t  04. BALANCE ENQUIRY                        ";
    cout << "\n\n\t  05. ALL ACCOUNT HOLDER LIST                ";
    cout << "\n\n\t  06. CLOSE AN ACCOUNT                       ";
   cout <<  "\n\n\t   07. MODIFY AN ACCOUNT                      ";
    cout << "\n\n\t   08. EXIT                                   \n\n\t";
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
    cout << "\n\n\tSelect Your Option (1-8) ";
    cin >> ch;
    system("cls");
    switch (ch)
    {
    case '1':
      write_account();
      break;
    case '2':
      cout << "\n\n\tEnter The account No. : ";
      cin >> num;
      deposit_withdraw(num, 1);
      break;
    case '3':
      cout << "\n\n\tEnter The account No. : ";
      cin >> num;
      deposit_withdraw(num, 2);
      break;
    case '4':
      cout << "\n\n\tEnter The account No. : ";
      cin >> num;
      display_sp(num);
      break;
    case '5':
      display_all();
      break;
    case '6':
      cout << "\n\n\tEnter The account No. : ";
      cin >> num;
      delete_account(num);
      break;
    case '7':
      cout << "\n\n\tEnter The account No. : ";
      cin >> num;
      modify_account(num);
      break;
    case '8':
      cout << "\n\n\tThanks for using bank managemnt system";
      break;
    default:
      cout << "\a";
    }
    cin.ignore();
    cin.get();
  } while (ch != '8');

}
int  main()
{
  
  system("cls");
  system("color 02");
  intro();
 
    system("cls");
    fun();
   return 0;
}


void write_account()
{
  account ac;
  ofstream outFile;
  outFile.open("account.dat", ios::binary | ios::app);
  ac.create_account();
  outFile.write(reinterpret_cast<char *>(&ac), sizeof(account));
  outFile.close();
}

void display_sp(int n)
{
  account ac;
  bool flag = false;
  ifstream inFile;
  inFile.open("account.dat", ios::binary);
  if (!inFile)
  {
    cout << "File could not be open !! Press any Key...";
    return;
  }
  cout << "\nBALANCE DETAILS\n";
  while (inFile.read(reinterpret_cast<char *>(&ac), sizeof(account)))
  {
    if (ac.retacno() == n)
    {
      ac.show_account();
      flag = true;
    }
  }
  inFile.close();
  if (flag == false)

    cout << "\n\nAccount number does not exist";
}

void modify_account(int n)
{
  bool found = false;
  account ac;
  fstream File;
  File.open("account.dat", ios::binary | ios::in | ios::out);
  if (!File)
  {
    cout << "File could not be open !! Press any Key...";
    return;
  }
  while (!File.eof() && found == false)
  {
    File.read(reinterpret_cast<char *>(&ac), sizeof(account));
    if (ac.retacno() == n)
    {
      ac.show_account();
      cout << "\n\nEnter The New Details of account" << endl;
      ac.modify();
      int pos = (-1) * static_cast<int>(sizeof(account));
      File.seekp(pos, ios::cur);
      File.write(reinterpret_cast<char *>(&ac), sizeof(account));
      cout << "\n\n\t Record Updated";
      found = true;
    }
  }
  File.close();
  if (found == false)
    cout << "\n\n Record Not Found ";
}


void delete_account(int n)
{
  account ac;
  ifstream inFile;
  ofstream outFile;
  inFile.open("account.dat", ios::binary);
  if (!inFile)
  {
    cout << "File could not be open !! Press any Key...";
    return;
  }
  outFile.open("Temp.dat", ios::binary);
  inFile.seekg(0, ios::beg);
  while (inFile.read(reinterpret_cast<char *>(&ac), sizeof(account)))
  {
    if (ac.retacno() != n)
    {
      outFile.write(reinterpret_cast<char *>(&ac), sizeof(account));
    }
  }
  inFile.close();
  outFile.close();
  remove("account.dat");
  rename("Temp.dat", "account.dat");
  cout << "\n\n\tRecord Deleted ..";
}

void display_all()
{
  account ac;
  ifstream inFile;
  inFile.open("account.dat", ios::binary);
  if (!inFile)
  {
    cout << "File could not be open !! Press any Key...";
    return;
  }
  cout << "\n\n\t\tACCOUNT HOLDER LIST\n\n";
  cout << "====================================================================\n";
  cout << "A/c no.      NAME           Type  Balance   Address    PinCode\n";
  cout << "====================================================================\n";
  while (inFile.read(reinterpret_cast<char *>(&ac), sizeof(account)))
  {
    ac.report();
  }
  inFile.close();
}

void deposit_withdraw(int n, int option)
{
  int amt;
  bool found = false;
  account ac;
  fstream File;
  File.open("account.dat", ios::binary | ios::in | ios::out);
  if (!File)
  {
    cout << "File could not be open !! Press any Key...";
    return;
  }
  while (!File.eof() && found == false)
  {
    File.read(reinterpret_cast<char *>(&ac), sizeof(account));
    if (ac.retacno() == n)
    {
      ac.show_account();
      if (option == 1)
      {
        cout << "\n\n\tTO DEPOSITE AMOUNT ";
        cout << "\n\nEnter The amount to be deposited";
        cin >> amt;
        ac.dep(amt);
      }
      if (option == 2)
      {
        cout << "\n\n\tTO WITHDRAW AMOUNT ";
        cout << "\n\nEnter The amount to be withdraw";
        cin >> amt;
        int bal = ac.retdeposit() - amt;
        if ((bal < 500 && ac.rettype() == 'S') || (bal < 1000 && ac.rettype() == 'C'))
          cout << "Insufficience balance";
        else
          ac.draw(amt);

      
      }
      int pos = (-1) * static_cast<int>(sizeof(ac));
      File.seekp(pos, ios::cur);
      File.write(reinterpret_cast<char *>(&ac), sizeof(account));
      cout << "\n\n\t Record Updated";
      found = true;
    }
  }
  File.close();
  if (found == false)
    cout << "\n\n Record Not Found ";
}




void intro()
{
  system("CLS");
	char arrshow[]={'B','A','N','K',' ','M','A','N','A','G','E','M','E','N','T',' ','S','Y','S','T','E','M'};
	cout<<"\n\n\n\n\n\n\t\t\t";
	for(int i=0;i<25;i++)
	{
		cout<<arrshow[i];
		Sleep(500);
		
	}
	system("CLS");
}




void login()
{
        int count;
        string user,pass,u,p;
        system("cls");
        cout<<"please enter the following details"<<endl;
        cout<<"USERNAME :";
        cin>>user;
        cout<<"PASSWORD :";
        cin>>pass;

        ifstream input("database.txt");
        while(input>>u>>p)
        {
                if(u==user && p==pass)

                {
                        count=1;
                        system("cls");
                }
        }
        input.close();
        if(count==1)
        {
                cout<<"\nHello  "<<user<<"\n<LOGIN SUCCESSFUL>\nThanks for logging in..\n";
                cin.get();
                cin.get();
                choice();
        }
        else
        {
                cout<<"\nLOGIN ERROR\nPlease check your username and password\n";
                fun();
        }
}

void registr()
{

        string reguser,regpass,ru,rp;
      
        system("cls");
        cout<<"Enter the username :";
        cin>>reguser;
        cout<<"\nEnter the password :";
        cin>>regpass;

        ofstream reg("database.txt",ios::app);
        reg<<reguser<<' '<<regpass<<endl;
        system("cls");
        cout<<"\nRegistration Sucessful\n";
        fun();


}

