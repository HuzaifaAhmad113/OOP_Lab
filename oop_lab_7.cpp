//#include "stdafx.h"
#include <iostream>

using namespace std;

class Music
{
protected:
	//string band_name;
	int count;
public:
	virtual int bandCount()=0;
};




class metal:public Music
{
private:
	int p_tech;
	int add;
	int members;
	int total;
	int remov1;
public:
	metal();



	int bandCount()
	{
		count=count+total;
		return count;
	}

	int addmem()
	{
		this->members++;
		this->total++;
		//this->add++;
		//count=count+total;
		return this->members;
	}

	int rem_mem()
	{
		//this->members=this->members-1;
		this->total=this->total-1;
		this->remov1++;
		//count=count-1;
		return this->remov1;
	}

	int add_pyro()
	{
		this->p_tech++;
		this->total++;
		return this->p_tech;
	}




};


metal::metal()
{
		this->members=0;
		this->p_tech=0;
		this->total=0;
		this->remov1=0;
		this->count=0;
}







class march:public Music
{

	private:
	int member2;
	int total2;
	//int remov;
public:

	march();



	int bandCount()
	{
		count=count+total2;
		return count;
	}

	int addmem()
	{
		this->member2++;
		this->total2++;
		return this->member2;
	}







};

march::march()
{
		this->member2=0;
		this->total2=0;
		//this->remov=0;
		this->count=0;
}




////////////////////////




class symphoney:public Music
{
private:
	int cond;
	int member1;
	int total1;
	int remov1;
public:

	symphoney();



	int bandCount()
	{
		count=count+total1;
		return count;
	}

	int addmem()
	{
		this->member1++;
		this->total1++;
		//count=count+total;
		return this->member1;
	}

	int rem_mem()
	{
		this->total1--;
		this->remov1++;
		return this->remov1;
	}

	int add_cond()
	{
		this->cond++;
		this->total1++;
		return this->cond;

	}



};

symphoney::symphoney()
{
		this->member1=0;
		this->cond=0;
		this->total1=0;
		this->remov1=0;
		this->count=0;
}


///////////////////////////////

class jazz:public Music
{
private:
	int cond;
	int member3;
	int total3;
	int remov3;
public:

	jazz();



	int bandCount()
	{
		count=count+total3;
		return count;
	}


	int addmem()
	{
		this->member3++;
		this->total3++;
		return this->member3;
	}



};







jazz::jazz()
{
		this->member3=0;
//		this->cond=0;
		this->total3=0;
		this->remov3=0;
		this->count=0;
}










int main(void)
{

	metal metal1;
	metal1.addmem();
	metal1.addmem();
	metal1.addmem();
	metal1.addmem();
	metal1.addmem();
	metal1.addmem();
	metal1.addmem();
	metal1.addmem();
	metal1.addmem();
	metal1.addmem();
	metal1.addmem();
	metal1.addmem();
	metal1.rem_mem();
	metal1.rem_mem();
	metal1.rem_mem();
	metal1.rem_mem();
	int total_mem=metal1.bandCount();
	int mem = metal1.addmem();
	int pyro=metal1.add_pyro();
	int rem1=metal1.rem_mem();
	cout<<"************************METAL BAND*****************************"<<endl;
	cout<<"Total Members : "<<mem<<endl;
	cout<<"PyroTechnicians among members are : "<<pyro<<endl;
	cout<<"Removed Members : "<<rem1<<endl;
	cout<<"total members of Metal band = "<<total_mem<<endl;
	cout<<endl<<endl<<endl;

	symphoney symp;
	symp.addmem();
	symp.addmem();
	symp.addmem();
	symp.addmem();
	symp.addmem();
	symp.addmem();
	symp.addmem();
	symp.rem_mem();
	symp.rem_mem();



	int total_mem1=symp.bandCount();
	int mem1 = symp.addmem();
	int remov=symp.rem_mem();
	int con=symp.add_cond();
	cout<<"************************Symphoney Band*****************************"<<endl;
	cout<<"Total Members : "<<mem1<<endl;
	cout<<"Conductors in members are : "<<con<<endl;
	cout<<"Removed Members : "<<remov<<endl;
	cout<<"total members of Symphoney band = "<<total_mem1<<endl;
	cout<<endl<<endl<<endl;




	/////////
	jazz j;
	j.addmem();
	j.addmem();
	j.addmem();
	j.addmem();
	j.addmem();
	j.addmem();
	j.addmem();
	j.addmem();
	

	int total_mem2=j.bandCount();
	cout<<"************************Jazz Band*****************************"<<endl;
	//cout<<"Total added Members : "<<mem2<<endl;
	//cout<<"Removed Members : "<<remo2-1<<endl;
	cout<<"total members of jazz band = "<<total_mem2<<endl;
	cout<<endl<<endl<<endl;







	march m;
	m.addmem();
	m.addmem();
	m.addmem();
	m.addmem();
	m.addmem();
	m.addmem();

	int total_mem3=m.bandCount();
	cout<<"************************March Band*****************************"<<endl;
	//cout<<"Total added Members : "<<mem3<<endl;
	//cout<<"Removed Members : "<<remo3-1<<endl;
	cout<<"total members of March band = "<<total_mem3<<endl;
	cout<<endl<<endl<<endl;



















	int a;
	cin>>a;

	return 0;
}

