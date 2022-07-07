#include <iostream>
using namespace std;
int main()
{
    char startvalue;
    char selectAgain;
    float CONVERTER(void);
    start:
    cout<<"**********WELCOME TO CURRENCY CONVERTER APPLICATION*************"<<endl;
    cout<<"**********PLEASE FOLLOW THE INSTRUCTION**************"<<endl;
    cout<<"You can have currencies dollar, rupees, euro, pound"<<endl;
    cout<<"You can type a,b,c,d respectively for currencies dollar, rupees, euro, pound"<<endl;
    cout<<"Enter currency1 which you want to convert"<<endl;
    cout<<"Enter value for currency1"<<endl;
    cout<<"Enter currency2 in which you want to convert currency1"<<endl;
    cout<<"(a) dollar (b) rupees (c) euro (d) pound"<<endl;
    cout<<"Please press s to start"<<endl;
    selectChoice:
    cin>>startvalue;
    if(startvalue=='s' || startvalue=='S')
    {
        float finalvalue=CONVERTER();
        cout<<"Result is "<<finalvalue<<endl;
        cout<<"Do you want to use the APPLICATION again?y or n"<<endl;
        typeAgain:
        cin>>selectAgain;
        if(selectAgain=='y' || selectAgain=='Y')
        {
            goto start;
        }
        else if (selectAgain=='n' || selectAgain=='N')
        {
            cout<<"Thank You for using our APPLICATION"<<endl;
        }
        else 
        {
             cout<<"You have entered a wrong value, please type s"<<endl;
      goto typeAgain;
        }
        
    }
    else
    {
      cout<<"You have entered a wrong value, please type s"<<endl;
      goto selectChoice;
    }
}
float CONVERTER()
{
    char currName1;
    char currName2;
    float currency1;
    float currency2;
    currlevel:
cout<<"Enter currency1 Name"<<endl;
cin>>currName1;
cout<<"Enter currency1 Value"<<endl;
cin>>currency1;
switch(currName1)
{
    case 'a':
    currlevel1:
    cout<<"Enter currency2 Name"<<endl;
    cin>>currName2;
    if(currName2=='a' || currName2=='A')
    {
        currency2=currency1*1;
    }
    else if (currName2=='b' || currName2=='B')
    {
        currency2=currency1*79.14;
    }
    else if (currName2=='c' || currName2=='C')
    {
        currency2=currency1*0.98;
    }
    else if (currName2=='d' || currName2=='D')
    {
        currency2=currency1*0.83;
    }
    else
    {
        cout<<"you have entered wrong value, please type again"<<endl;
        goto currlevel1;
    }
    break;
    case 'b':
    currlevel2:
    cout<<"Enter currency2 Name"<<endl;
    cin>>currName2;
    if(currName2=='a' || currName2=='A')
    {
        currency2=currency1*0.013;
    }
    else if (currName2=='b' || currName2=='B')
    {
        currency2=currency1*1;
    }
    else if (currName2=='c' || currName2=='C')
    {
        currency2=currency1*0.01;
    }
    else if (currName2=='d' || currName2=='D')
    {
        currency2=currency1*0.009;
    }
    else
    {
        cout<<"you have entered wrong value, please type again"<<endl;
        goto currlevel2;
    }
    break;
       case 'c':
    currlevel3:
    cout<<"Enter currency2 Name"<<endl;
    cin>>currName2;
    if(currName2=='a' || currName2=='A')
    {
        currency2=currency1*1.02;
    }
    else if (currName2=='b' || currName2=='B')
    {
        currency2=currency1*80.71;
    }
    else if (currName2=='c' || currName2=='C')
    {
        currency2=currency1*1;
    }
    else if (currName2=='d' || currName2=='D')
    {
        currency2=currency1*0.85;
    }
    else
    {
        cout<<"you have entered wrong value, please type again"<<endl;
        goto currlevel3;
    }
    break;
       case 'd':
    currlevel4:
    cout<<"Enter currency2 Name"<<endl;
    cin>>currName2;
    if(currName2=='a' || currName2=='A')
    {
        currency2=currency1*1.20;
    }
    else if (currName2=='b' || currName2=='B')
    {
        currency2=currency1*94.99;
    }
    else if (currName2=='c' || currName2=='C')
    {
        currency2=currency1*1.18;
    }
    else if (currName2=='d' || currName2=='D')
    {
        currency2=currency1*1;
    }
    else
    {
        cout<<"you have entered wrong value, please type again"<<endl;
        goto currlevel4;
    }
    break;
    default:
    {
        cout<<"you have entered wrong value, please type again"<<endl;
        goto currlevel;
        break;
    }
}
}

    
 