#include<iostream>
#include<string>
#include<fstream>
#include<sstream>
#include<vector>
using namespace std;

class ReservationStation{
private:
	string name;
	bool busy;
	string op;
	string Vj;
	string Vk;
	string Qj;
	string Qk;
	long addr;
public:
	string setName(string nam){
		name = nam;
	}
	bool setBusy(bool bus){
		busy = bus;
	}
	string setOp(string Op){
		op = Op;
	}
	string setVj(string vj){
		Vj = vj;
	}
	string setVk(string vk){
		Vk = vk;
	}
	string setQj(string qj){
		Qj = qj;
	}
	string setQk(string qk){
		Qk = qk;
	}
	long setAddr(string add){
		addr = add;
	}
	void getName(){return name;}
	void getBusy(){return busy;}
	void getOp(){return op;}
	void getVj(){return Vj;}
	void getVk(){return Vk;}
	void getQj(){return Qj;}
	void getQk(){return Qk;}
	void getAddr(){return addr;}
	
};

class RegisterStat{
private:
	vector<pair<string, string> > regStat;
public:
	
};

int main(int argC, char **argv) {
/*
	vector<string> inst_arr;
	ifstream infile;
	infile.open(argv[1], ios::in);
	
	int i = 0;
       string instruction;
        while (!infile.eof()){
            getline(infile, instruction);
            inst_arr.push_back(instruction);
            i++;
        }
       
       for (int i = 0; i < inst_arr.size(); i++){
       		cout << inst_arr[i] << endl;
       } 
 
 
 2D vector
 {
 {lw, r1, 0(r0)},
 {add, r2, r1, r0}
 
 }
 
 */
 
 
 
 
 /*** START READ instructions ***/
		 vector <vector <string>> my_inst;
  		 ifstream instruction_file; //keywords
			instruction_file.open(argv[1]);
		  while (instruction_file)
		  {
			string s;
			if (!getline( instruction_file, s )) break;

			stringstream ss(s);
			vector <string> inst_params;

			while (ss)
			{
			  string s;
			  if (!getline( ss, s, ' ' )) break;
			  inst_params.push_back(s);
			}

			my_inst.push_back(inst_params);
		  }
		  if (!instruction_file.eof())
		  {
			cerr << "\n";
		  }
		  
		  for (int i = 0; i < my_inst.size(); i++){
		  	for (int j = 0; j < my_inst[i].size(); j++) {
		  		cout << my_inst[i][j] << " ";
		  	}
		  	cout << endl;
		  }
	
	
	int cycles_counter = 1;
	
		  
	/*** END READ instructions ***/
  	
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 	
       
}
