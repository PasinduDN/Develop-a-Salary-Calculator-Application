/* The faculty board of technological studies decided to develop an application to calculate the salary
for the employees attached to the University of ATP. As a first-year student at the Faculty of
Technological Studies, you are requested to develop a salary calculator application using the
C++ programming language by fulfilling the following objectives.

1. Create a Display Menu () function to display the following Menus.
    1-Employee Details.
    2-Calculate the Total Allowance.
    3-Calculate the Gross Pay.
    4-Calculate the Total Deduction.
    5-Calculate the Net Pay.
    6-Calculate the UPF and ETF Per Month.
    7-calculate the Annual UPF and ETF amount.
    8-Display the Salary Sheet.

2. Create an Employee-Details () function to get the employee’s details from the user, which are shown below.
    ▪ Employee Number
    ▪ Employee Name
    ▪ Designation
    ▪ Department
    ▪ Basic Salary

3. To calculate the total allowance amount and the return amount, create the Total-Allowance () function.
    • Total-allowance = cost-of-living allowance + monthly-allowance + salary arrears.
        o cost-of-living allowance =7800.00
        o monthly-allowance =5000.00
        o salary arrears =2640.00 

4. Create a Gross-Pay () function to calculate the gross pay.
    • Gross-Pay = Basic Salary + Total-allowance. 

5. Create a Total-Deduction () function to compute the total deduction amount.
    • Total-Deduction = Stam Duty + U.P.F Employee.
        o Stam Duty = 25.00
        o U.P.F Employee = 5708.32 

6. Create a Net-Pay () function to compute the net payment.
    • Net-Pay = Gross-Pay - Total-Deduction. 

7. Create a parameterized function to compute the UPF and ETF amount.
    • UPF = Net-Pay * UPF rate.
    • ETF = Net-Pay * ETF rate
        o UPF = 15%.
        o ETF = 3%.
    • Pass the UPF and ETF rate as arguments in to the function. 

8. Create another function to calculate the annual UPF and ETF amount.

9. Create a Salary-Sheet () method to display salary details for a particular employee as shown the Figure 1. 

10. Get the user input to select the operation that is mentioned in the Display Menu () function.

11. If a user’s selection is wrong, then the program needs to show an error message to the user.

12. Iterate the program according to the user’s desire for the question “Do you want to run the program again?”
    • If the user types “Y”, it iterates for another time from the Display Menu () function, else terminate the program.

*/

#include <iostream>
using namespace std;

//1-Employee Details.
int empnum;
int bsalary = 0;
string ename, designation, Department;

void employee_details(){
    cout<<"Enter The Employee Number:";
    cin>>empnum;
    cout<<"Enter The Employee Name:";
    cin>>ename;
    cout<<"Enter The Employee designation:";
    cin>>designation;
    cout<<"Enter The Department:";
    cin>>Department;
    cout<<"Enter The Basic Salary:";
    cin>>bsalary;
}

//2-Calculate the Total Allowance.
int cost_of_living_allowance=7800;
int monthly_allowance=5000;
int salary_arrears=2640;
int Total_allowance= 0;

void total_Allowance(){
    Total_allowance= cost_of_living_allowance+monthly_allowance+Total_allowance;
    cout<<" The Total Allowance of "<< ename << "is" << Total_allowance << endl;
}


//3-Calculate the Gross Pay
int gpay=0;

void gross_pay(){
    gpay= bsalary+Total_allowance;
    cout<<" The Gross Pay of "<< ename << "is" << gpay << endl;
}


//4-Calculate the Total Deduction.
float tdeducation=0;

void total_deducation(){
    int stam_duty=25;
    float upf_employee=5708.32;
    tdeducation= stam_duty + upf_employee;
    cout<<" The Total Deducation of "<< ename << "is" << tdeducation << endl;
}


//5-Calculate the Net Pay.
int npay=0;

void net_pay(){
    npay = gpay+tdeducation;
    cout<<" The Net Pay of "<< ename << "is" << npay << endl;
}


//6-Calculate the UPF and ETF Per Month.
int upf=0;
int etf=0;

void upf_etf(){
    int upf_rate=15/100;
    int etf_rate=3/100;
    upf = npay*upf_rate;
    etf = npay*etf_rate;
    cout<<" The UPF Amount of "<< ename << "is" << upf << endl;
    cout<<" The ETF Amount of "<< ename << "is" << etf << endl;
}


//7-calculate the Annual UPF and ETF amount
int aupf=0;
int aetf=0;

void aupf_aetf(){
    aupf = upf*12;
    aetf = etf*12;
    cout<<" The Annual UPF Amount of "<< ename << "is" << aupf << endl;
    cout<<" The Annual ETF Amount of "<< ename << "is" << aetf << endl;
}

//8-Display the Salary Sheet.
void salary_sheet(){
    cout<<"Salary Sheet"<<endl;
    cout<<" University Of Vavuniya Feb'23 "<<endl;
    cout<<" Emp.Number "<< empnum << endl;
    cout<<" Name: "<< ename << endl;
    cout<<" Designation: "<< designation << endl;
    cout<<" Department: "<< Department << endl;
    cout<<" Basic Salary:"<< bsalary << endl;
    cout<<" Gross Pay:"<< gpay << endl;
    cout<<" Deducation: "<< tdeducation << endl;
    cout<<" Net Pay:"<< npay << endl;
    cout<<" UPF Amount:"<< upf << endl;
    cout<<" ETF Amount:"<< npay << endl;
    cout<<" Annual UPF Amount:"<< aupf << endl;
    cout<<" Annual ETF Amount:"<< aetf << endl;
}

int main(){

    section : {

            cout<<"--Select Number--"<<endl;
            cout<< " 1-Employee Details. " <<endl;
            cout<< " 2-Calculate the Total Allowance. " <<endl;
            cout<< " 3-Calculate the Gross Pay. " <<endl;
            cout<< " 4-Calculate the Total Deduction. " <<endl;
            cout<< " 5-Calculate the Net Pay. " <<endl;
            cout<< " 6-Calculate the UPF and ETF Per Month. " <<endl;
            cout<< " 7-calculate the Annual UPF and ETF amount. " <<endl;
            cout<< " 8-Display the Salary Sheet." <<endl;


            int num;
            cout<< "Enter The Number Do You Want:";
            cin>>num;
            switch(num){
                case 1:
                    employee_details();
                    break;

                case 2:
                    total_Allowance();
                    break;

                case 3:
                    gross_pay();
                    break;

                case 4:
                    total_deducation();
                    break;

                case 5:
                    net_pay();
                    break;
                
                case 6:
                    upf_etf();
                    break;

                case 7:
                    aupf_aetf();
                    break;

                case 8:
                    salary_sheet();
                    break;

                default:
                    cout << "Wrong Selection, Please ASelect a Correct Number Do You Want to run this program again:";
            }

    string ans;
    cout<<"Do You Want to run this Program Again:";
    cin>> ans;

        if ( ans=="Y" || ans=="y" ){
            goto section;
        }
        else{
            cout<<"--Thank You Have a Nice day --";
        }

    }
    return 0;    
}