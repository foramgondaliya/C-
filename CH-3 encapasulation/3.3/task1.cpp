#include<iostream>
using namespace std;

class Diamond{
	private:
		int id,squantity,import,expd;
		string ceo,name,revenue;
	
	public:
		Diamond(int id,string name,int squantity,string revenue,int import,int expd,string ceo)
		{
			this->id=id;
			this->name=name;
			this->squantity=squantity;
			this->revenue=revenue;
			this->import=import;
			this->expd=expd;
			this->ceo=ceo;
		}
		getData()
		{
			cout<<"company id="<<this->id<<endl;
			cout<<"company name="<<this->name<<endl;
			cout<<"company staff quantity="<<this->squantity<<endl;
			cout<<"company id revenue="<<this->revenue<<endl;
			cout<<"company import raw diamonds="<<this->import<<endl;
			cout<<"company export diamonds="<<this->expd<<endl;
			cout<<"company CEO="<<this->ceo<<endl;
			
			cout<<endl;
		}
};

int main()
{
	Diamond d1(211,"diamondsquare",50,"1000000",5000,4000,"veera"),
			d2(212,"born_pretty",40,"200000",5000,3000,"krupali"),
			d3(213,"glow_it_up",60,"1500000",7000,6000,"krishna"),
			d4(214,"glitter's_world",80,"2000000",9000,7000,"divyanshi"),
			d5(215,"fg_diamond",40,"90000",5000,4400,"foram");
	
	d1.getData();
	d2.getData();
	d3.getData();
	d4.getData();
	d5.getData();
	
	return 0;
}
