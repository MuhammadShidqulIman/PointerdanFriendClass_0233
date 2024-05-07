#include <iostream>
#include <string>
using namespace std;

class mahasiswa 
{
public:
	int nim;

	void showNim()
	{
		cout << "No Induk" << nim << endl;
	}
};

int main()
{
	mahasiswa mhs(1); // Object mhs
	mhs.showNim(); 

	mahasiswa& refMhs = mhs;
	refMhs.nim = 2;
	mhs.showNim();

	mahasiswa* pMhs = &mhs;
	pMhs->nim = 3: 
	pMhs->shownim();
	return 0;
}
int main()
{
	orang joko;
	joko.setNama("Joko Susilo");
	siswa joko_siswa;
	joko_siswa.setId(1);
	joko_siswa.displayall(joko);
	return 0;
}