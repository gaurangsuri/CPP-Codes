#include<iostream>
#include<string>

using namespace std;

//wedding planner question

int main(){
	
	int cr=0;
	
	cout<<"Hello, i am the wedding planner you booked to plan your wedding. "<<endl;
	cout<<endl;
	
	char c='a';
	
	cout<<"May i question , are you from the bride's side or the groom's side. (B/G) ";    
	//just as an attempt to make it a little interactive.
	
	cin>>c;
	cout<<endl;
	
	while(cr==0){
		if(c=='B'){
		cout<<"Ah i see, my congratulations to the bride then and i wish you a happy married life. "<<endl;
		break;
		}
	
		else if(c=='G'){
			cout<<"Ah i see, my congratulations to the groom then and i wish you a happy married life. "<<endl;
			break;
		}
	
		else{
			cout<<"Please enter a valid input.AH, never mind.. Lets move on..  "<<endl;
			break;
		}
	}
	cout<<endl;
	
	cout<<"Lets attend to the most urgent matter of the venue first. Can you please tell me your budget reserved for the venue booking. ";
	int budget=0;
	cin>>budget;
	string venue="a";
	cout<<endl;
	
	
	while(cr==0){
		if(budget>0 && budget<=90000){
			cout<<"I am afraid i cant help you with the venue whith the budget in that range. My advice would be to look into some local venues close to your area and ask around. "<<endl;
			venue=" *Self Choice* ";
			break;
		}
	
		else if(budget>90000 && budget<=200000){
			cout<<"I understand that you live in the state of Punjab. In that range of budget the best venue possible would be the oasis grand palace."<<endl;
			venue=" *The Oasis Grand Palace* ";
			break;
		}
	
		else if(budget>200000 && budget<=500000){
			cout<<"I understand that you live in the state of Punjab. In that range of budget the best venue possible would be the green-land palace."<<endl;
			venue=" *The Green-land Palace* ";
			break;
		}
	
		else if(budget>500000){
			cout<<"I understand that you live in the state of Punjab. In that range of budget the best venue possible would be the michael marble palace"<<endl;
			venue=" *The Michael Marble Palace* ";
			break;
		}
	
		else{
			cout<<"What you entered was'nt a valid input. In that case i'm afraid that you will have to choose the venue yourself."<<endl;
			venue=" *self-selected* ";
			break;
		}
	}
	
	cout<<endl;
	cout<<"Ok then , with the venue finalised lets discuss how to decorate it. "<<endl;
	cout<<endl;
	
	cout<<"Lets see, Please enter the number in accordance with the decoration you want to choose :- "<<endl;
	cout<<endl;
	cout<<"1) white roses/red roses "<<endl;
	cout<<"2) orange tulips/yellow tulips "<<endl;
	cout<<"3) lotus/vines "<<endl;
	cout<<"4) mixed assortment of flowers "<<endl;
	cout<<endl;
	
	string deco;
	int c2=0;
	cin>>c2;
	
	while(cr==0){
		if(c2==1){
			cout<<"Ok we will decorate the venue with white and red roses. Lets move on.. "<<endl;
			deco=" *white roses/red roses* ";
			break;
		}
	
		else if(c2==2){
			cout<<"Ok we will decorate the venue with orange and yellow tulips. Lets move on.. "<<endl;
			deco=" *red tulips/yellow tulips* ";
			break;
		}
	
		else if(c2==3){
			cout<<"Ok we will decorate the venue with lotuses and vines. Lets move on.. "<<endl;
			deco=" *lotus/vines* ";
			break;
		}
	
		else if(c2==4){
			cout<<"Ok we will decorate the venue with a mixed assortment of flowers. Lets move on.. "<<endl;
			deco=" *mixed assortment of flowers* ";
			break;
		}
		else{
			cout<<"What you entered was'nt a valid input. In that case i'm afraid that you will have to choose the decorations yourself."<<endl;
			deco=" *self-selected* ";
			break;
		}
	}
	
	cout<<endl;
	
	cout<<"Ok then , last but not the least, the date of the wedding. "<<endl;
	cout<<endl;
	cout<<"The year will be default as the current year as we cannot make reservations for as far as the next one."<<endl;
	cout<<"Please enter the month number of the wedding. (1-12) ";
	int month=0;
	cin>>month;
	cout<<endl;
	cout<<"please enter the date. ";
	int date=0;
	cin>>date;
	if(date<1 && date>31){
		cout<<"INVALID INPUT"<<endl;
		date=00;
	}
	cout<<endl;
	string m;
	
	while(cr==0){
		if(month==1){
			cout<<"Ok the wedding will be held on "<<date<<" january. "<<endl;
			m=" january ";
			break;
		}
		else if(month==2){
			cout<<"Ok the wedding will be held on "<<date<<" february. "<<endl;
			m=" february ";
			break;
		}
		else if(month==3){
			cout<<"Ok the wedding will be held on "<<date<<" march. "<<endl;
			m=" march ";
			break;
		}
		else if(month==4){
			cout<<"Ok the wedding will be held on "<<date<<" april. "<<endl;
			m=" april ";
			break;
		}
		else if(month==5){
			cout<<"Ok the wedding will be held on "<<date<<" may. "<<endl;
			m=" may ";
			break;
		}
		else if(month==6){
			cout<<"Ok the wedding will be held on "<<date<<" june. "<<endl;
			m=" june ";
			break;
		}
		else if(month==7){
			cout<<"Ok the wedding will be held on "<<date<<" july. "<<endl;
			m=" july ";
			break;
		}
		else if(month==8){
			cout<<"Ok the wedding will be held on "<<date<<" august. "<<endl;
			m=" august ";
			break;
		}
		else if(month==9){
			cout<<"Ok the wedding will be held on "<<date<<" september. "<<endl;
			m=" september ";
			break;
		}
		else if(month==10){
			cout<<"Ok the wedding will be held on "<<date<<" october. "<<endl;
			m=" october ";
			break;
		}
		else if(month==11){
			cout<<"Ok the wedding will be held on "<<date<<" november. "<<endl;
			m=" november ";
			break;
		}
		else if(month==12){
			cout<<"Ok the wedding will be held on "<<date<<" december. "<<endl;
			m=" decmber ";
			break;
		}
		else{
			cout<<"INVALID INPUT"<<endl;
			m="ERR";
			break;
		}
	}
	
	cout<<endl;
	cout<<"Lets finally see an overview of the total till now."<<endl;
	cout<<endl;
	cout<<"The wedding will be held at"<<venue<<"on "<<date<<" "<<m<<" this year and the chosen venue will be decorated with"<<deco<<"."<<endl;
	cout<<endl;
	cout<<"IS THAT CORRECT? (Y/N)";
	char confirm='a';
	cin>>confirm;
	
	if(confirm=='Y'){
		cout<<"Great i'll take care of all the bookings. Please enjoy and get ready for an amazing wedding night. :) "<<endl;
	}
	else if(confirm=='N'){
		cout<<"I'm afraid you performed an error somewhere along the way then .. I suggest restarting the application and starting again. "<<endl;
	}
	else{
		cout<<"please enter a valid input. "<<endl;
	}
	
	cout<<endl;
	cout<<"END OF THE PROGRAM . THANK YOU FOR BOOKING. ";
}
