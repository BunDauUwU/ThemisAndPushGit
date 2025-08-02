#include <bits/stdc++.h>

using namespace std;

#define           Elaina  signed main()
#define             FAST  cin.tie(nullptr) -> ios_base::sync_with_stdio(false);


/////////////////////////
///.........../\__/\..///
///..........(=o_o= ).///
///.....[Blackcat!]<\.///
/////////////////////////

void PushToGit(string NAME){
	if(NAME == "") return cout << "Enter the name\n", void(); 

    ifstream inp ("main.cpp");
    ifstream file;
    file.open("C:/Users/BunDauMamTom/Documents/Code/LuyenCode2025/" + NAME + ".cpp");

    if(!file){
    	ofstream outCase ("C:/Users/BunDauMamTom/Documents/Code/LuyenCode2025/" + NAME + ".cpp");
    	stringstream ss;
    	ss << inp.rdbuf();
    	outCase << ss.str();
    	cout << "Push sucessfully\n";

    	ifstream reset ("PushToGit.cpp");
	   	stringstream resetFile;
	   	resetFile << reset.rdbuf();
	   	string content = resetFile.str();

	    string delString = NAME;
	   	delString = '"' + delString + '"';
	   	int pos = content.find(delString);
	   	content.erase(pos + 1, 	delString.size() - 2);
	   	
	   	ofstream Reset ("PushToGit.cpp");
	   	Reset << content;
	}else{
		cout << "Change the name \n";
	}
}

Elaina {
    FAST

    PushToGit(""); 

    return 0;
}

