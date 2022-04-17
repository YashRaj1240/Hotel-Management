#include<iostream>
using namespace std;

int main(){
    int quant;
    int choice;
    //Quantity
    int Qrooms = 0,Qpasta =0,Qburger =0,Qshake=0,Qchicken =0,Qnoodles=0;
    //food items sold
    int Srooms = 0,Spasta =0,Sburger =0,Sshake=0,Schicken =0,Snoodles=0;
    //total price of items
    int total_room =0, total_pasta =0, total_burger=0,total_shake=0,total_chicken=0,total_noodles=0;

    cout<<"\n\t quantity of item we have";
    cout<<"\n rooms available:";
    cin>>Qrooms;
    cout<<"\n quantity of pasta : ";
    cin>>Qpasta;
    cout<<"\n quantity of burger:";
    cin>>Qburger;
    cout<<"\n quantity of shake:";
    cin>>Qshake;
    cout<<"\n quantity of chicken-roll:";
    cin>>Qchicken;
    cout<<"\n quantity of noodles:";
    cin>>Qnoodles;

    m:
    cout<<"\n\t\t\t please select from the menu option";
    cout<<"\n\n1) rooms";
    cout<<"\n2) pasta";
    cout<<"\n3) burger";
    cout<<"\n4) shake";
    cout<<"\n5) chicken-roll";
    cout<<"\n6) noodles";
    cout<<"\n7) information regarding sales and collection";
    cout<<"\n8) Exit";
    cout<<"\n\n) please enter the choice ";
    cin>>choice;
    switch (choice)
    {
    case 1:
    cout<<"\n\n enter the no of rooms u want";
    cin>>quant;
    if(Qrooms-Srooms>=quant){
        Srooms = Srooms+quant;
        total_room = total_room+quant*1200;
        cout<<"\n\n\t\t"<<quant<<"room/rooms have been alloted to you";
    }
    else
    cout<<"\n\tOnly"<<Qrooms-Srooms<<" rooms are remaining n hotel";
        break;

        case 2:
    cout<<"\n\n enter the pasta qauntity:";
    cin>>quant;
    if(Qpasta-Spasta>=quant){
        Spasta = Spasta+quant;
        total_pasta = total_pasta+quant*250;
        cout<<"\n\n\t\t"<<quant<<" pata is the order";
    }
    else
    cout<<"\n\tOnly"<<Qpasta-Spasta<<" pasta remaining n hotel";
        break;

        case 3:
    cout<<"\n\n enter the burger qauntity:";
    cin>>quant;
    if(Qburger-Sburger>=quant){
        Sburger = Sburger+quant;
        total_burger = total_burger+quant*125;
        cout<<"\n\n\t\t"<<quant<<" burger is the order";
    }
    else
    cout<<"\n\tOnly"<<Qburger-Sburger<<" burger remaining n hotel";
        break;

         case 4:
    cout<<"\n\n enter the shake qauntity:";
    cin>>quant;
    if(Qshake-Sshake>=quant){
        Sshake = Sshake+quant;
        total_shake = total_shake+quant*120;
        cout<<"\n\n\t\t"<<quant<<" shake is the order";
    }
    else
    cout<<"\n\tOnly"<<Qshake-Sshake<<" shake remaining n hotel";
        break;

         case 5:
    cout<<"\n\n enter the chicken-roll qauntity:";
    cin>>quant;
    if(Qchicken-Schicken>=quant){
        Schicken = Schicken+quant;
        total_chicken = total_chicken+quant*150;
        cout<<"\n\n\t\t"<<quant<<" chicken-roll is the order";
    }
    else
    cout<<"\n\tOnly"<<Qchicken-Schicken<<" chicken-roll remaining in the hotel";
        break;

         case 6:
    cout<<"\n\n enter the noodles qauntity:";
    cin>>quant;
    if(Qnoodles-Snoodles >=quant){
        Snoodles= Snoodles+quant;
        total_noodles = total_noodles+quant*220;
        cout<<"\n\n\t\t"<<quant<<" noodle is the order";
    }
    else
    cout<<"\n\tOnly"<<Qnoodles-Snoodles<<" noodles remaining n hotel";
        break;

        case 7:
        cout<<"\n\tdetails of sales and collection ";
        cout<<"\n\n no of rooms we had :"<<Qrooms;
        cout<<"\n\n number of rooms we gave to rent "<<Srooms;
        cout<<"\n\n remaining rooms :"<<Qrooms-Srooms;
        cout<<"\n\n total rooms collection for the day :"<<total_room;

        cout<<"\n\n no of pasta we had :"<<Qpasta;
        cout<<"\n\n number of pasta we gave to rent "<<Spasta;
        cout<<"\n\n remaining pasta :"<<Qpasta-Spasta;
        cout<<"\n\n total pasta collection for the day :"<<total_pasta;

        cout<<"\n\n no of burger we had :"<<Qburger;
        cout<<"\n\n number of burger we gave to rent "<<Sburger;
        cout<<"\n\n remaining burger:"<<Qburger-Sburger;
        cout<<"\n\n total burger collection for the day :"<<total_burger;

        cout<<"\n\n no of shake we had :"<<Qshake;
        cout<<"\n\n number of shake we gave to rent "<<Sshake;
        cout<<"\n\n remaining shake:"<<Qshake-Sshake;
        cout<<"\n\n total shake collection for the day :"<<total_shake;

        cout<<"\n\n no of chicken-rolls we had :"<<Qchicken;
        cout<<"\n\n number of chicken-rolls we gave to rent "<<Schicken;
        cout<<"\n\n remaining chicken-rolls:"<<Qchicken-Schicken;
        cout<<"\n\n total chicken-rolls collection for the day :"<<total_chicken;

        cout<<"\n\n no of noodles we had :"<<Qnoodles;
        cout<<"\n\n number of noodles we gave to rent "<<Snoodles;
        cout<<"\n\n remaining noodles:"<<Qnoodles-Snoodles;
        cout<<"\n\n total noodles collection for the day :"<<total_noodles;

        cout<<"\n\n\n total collection of the day "<<total_room+total_pasta+total_burger+total_noodles+total_shake+total_chicken;
        break;
        case 8:
        exit(0);
        defalt:
        cout<<"\n please select the number mentioned above ";

    }
    goto m;
}