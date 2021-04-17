#include <iostream>
using namespace std;
int dr, ar_kr_partq, karj_vark, kr_p_byuje, part_andzn, avand;
int kapital = 200000, ny = 15000, him_mij = 175000, hash_hashiv = 10000, voch_ny_ak = 6000, an_ashx = 4000;
int hashv_1 = 0, hashv_2 = 0;
int dt, kt, vm;

///////////////////////////////////////////
void aktiv_pasiv(int kapital, int ny, int him_mij, int hash_hashiv, int voch_ny_ak, int an_ashx)
{

	cout << " Tntesakan mijocner " << "     " << "gumar" << "    " << " Mijocneri axbyur  " << "     " << "gumar" << endl;
	cout << "----------------------------------------------------------------" << endl;
	cout << " Dramarkx           " << "     " << dr << "    " << " Kapital           " << "     " << kapital << endl;
	cout << " Nyuter             " << "     " << ny << "    " << " Ar. kr. partq     " << "     " << ar_kr_partq << endl;
	cout << " Himnakan mijocner  " << "     " << him_mij << "    " << " Karjajamket vark  " << "     " << karj_vark << endl;
	cout << " Hashvaekayin hashiv" << "     " << hash_hashiv << "    " << " Kr. partq byujein " << "     " << kr_p_byuje << endl;
	cout << " Voch nyut. aktiv   " << "     " << voch_ny_ak << "    " << " Part. andznakazmin" << "     " << part_andzn << endl;
	cout << " Anavart ashxatanq  " << "     " << an_ashx << "    " << " //Avand//         " << "     " << avand << endl;
}
/////////////////////////////////////////

int hashvekshir_1(int ny, int him_mij, int hash_hashiv, int voch_ny_ak, int an_ashx, int hashv_1, int dr)
{
	hashv_1 = dr + ny + him_mij + hash_hashiv + voch_ny_ak + an_ashx;
	return hashv_1;
}
////////////////////////////////////////

int hashvekshir_2(int kapital, int hashv_2, int ar_kr_partq, int karj_vark, int kr_p_byuje, int part_andzn, int avand)
{
	hashv_2 = kapital + ar_kr_partq + karj_vark + kr_p_byuje + part_andzn + avand;
	return hashv_2;
}
///////////////////
void Aktivayin_pop(int aktivayin_pop, int* hash_hashiv, int* dr)
{
	*dr = *dr - aktivayin_pop;

	*hash_hashiv = *hash_hashiv + aktivayin_pop;

}
//////////////////////////

void Pasivayin_pop(int pasivayin_pop, int* kr_p_byuje, int* part_andzn)
{
	*kr_p_byuje = *kr_p_byuje + pasivayin_pop;
	*part_andzn = *part_andzn - pasivayin_pop;
}
////////////////////////////////

void Ak_pas_pop_a(int ak_pas_pop_a, int* dramarkx, int* avand)
{
	*avand = ak_pas_pop_a;
	*dramarkx = *dramarkx + *avand;
}
//////////////////////

void Ak_pas_pop_p(int ak_pas_pop_p, int* hash_hashiv, int* kr_p_byuje)
{
	*hash_hashiv = *hash_hashiv - ak_pas_pop_p;
	*kr_p_byuje = *kr_p_byuje - ak_pas_pop_p;
}

void T_ak(int h, int* aktivayin_pop, int dsh, int ksh, int* vm, int* avand)
{
	dsh = 0, ksh = 0, * vm = 0;
	if (h == 200000)
	{
		cout << endl;
		ksh = *aktivayin_pop;
		dsh = *avand;
		*vm = 200000 + dsh - ksh;
		cout << "\tDt\t" << "Dramarkx\t" << "Kt\t" << endl;
		cout << "-----------------------------------" << endl;
		cout << "\t" << 200000 << "\t  " << endl;
		cout << "\t" << *avand << "\t  " << "\t" << *aktivayin_pop << endl;
		cout << "\tdsh=" << dsh << "  " << "\tksh=" << ksh << endl;
		cout << "\tvm=" << *vm << endl;
	}
	if (h == 15000)
	{

		cout << endl;
		*vm = 15000 + dsh - ksh;
		cout << "\tDt\t" << "Nyuter\t" << "Kt\t" << endl;
		cout << "-----------------------------------" << endl;
		cout << "\t" << 15000 << "\t  " << endl;
		cout << "\t" << "\t  " << endl;
		cout << "\tdsh=" << dsh << "  " << "\tksh=" << ksh << endl;
		cout << "\tvm=" << *vm << endl;
	}
	if (h == 15000)
	{
		cout << endl;

		*vm = 175000 + dsh - ksh;
		cout << "\tDt\t" << "Himn. mij.\t" << "Kt\t" << endl;
		cout << "-----------------------------------" << endl;
		cout << "\t" << 175000 << "\t  " << endl;
		cout << "\t" << "\t  " << endl;
		cout << "\tdsh=" << dsh << "  " << "\tksh=" << ksh << endl;
		cout << "\tvm=" << *vm << endl;
	}
	if (h == 10000)
	{
		cout << endl;

		ksh = *avand;
		dsh = *aktivayin_pop;
		*vm = 10000 + dsh - ksh;
		cout << "\tDt\t" << "Hashv. hash.\t" << "Kt\t" << endl;
		cout << "-----------------------------------" << endl;
		cout << "\t" << 10000 << "\t  " << endl;
		cout << "\t" << *aktivayin_pop << "\t  " << *avand << endl;
		cout << "\tdsh=" << dsh << "  " << "\tksh=" << ksh << endl;
		cout << "\tvm=" << *vm << endl;
	}
	if (h == 6000)
	{
		cout << endl;
		*vm = 6000 + dsh - ksh;
		cout << "\tDt\t" << "Hashv. hash.\t" << "Kt\t" << endl;
		cout << "-----------------------------------" << endl;
		cout << "\t" << 6000 << "\t  " << endl;
		cout << "\t" << "\t  " << endl;
		cout << "\tdsh=" << dsh << "  " << "\tksh=" << ksh << endl;
		cout << "\tvm=" << *vm << endl;
	}
	if (h == 4000)
	{
		cout << endl;
		*vm = 4000 + dsh - ksh;
		cout << "\tDt\t" << "Hashv. hash.\t" << "Kt\t" << endl;
		cout << "-----------------------------------" << endl;
		cout << "\t" << 4000 << "\t " << endl;
		cout << "\t" << "\t  " << endl;
		cout << "\tdsh=" << dsh << "  " << "\tksh=" << ksh << endl;
		cout << "\tvm=" << *vm << endl;
	}

}
void T_pa(int h, int* aktivayin_pop, int dsh, int ksh, int* vm, int* ak_pas_pop_a, int* pasivayin_pop, int* ak_pas_pop_p)
{
	dsh = 0, ksh = 0, * vm = 0;
	if (h == 200000)//7
	{
		cout << endl;	cout << endl;
		*vm = 200000 - dsh + ksh;
		cout << "\tDt\t" << "Kapital\t" << "Kt\t" << endl;
		cout << "-----------------------------------" << endl;
		cout << "\t" << "\t  " << "\t" << 200000 << endl;
		cout << "\t" << "\t  " << endl;
		cout << "\tdsh=" << dsh << "    " << "\tksh=" << ksh << endl;
		cout << "\t" << "\t   " << "\tvm=" << *vm << endl;
	}
	if (h == 190000)//8
	{
		cout << endl;	cout << endl;
		*vm = 190000 - dsh + ksh;
		cout << "\tDt\t" << "Ar. kt. partq\t" << "Kt\t" << endl;
		cout << "-----------------------------------" << endl;
		cout << "\t" << "\t  " << "\t" << 190000 << endl;
		cout << "\t" << "\t  " << endl;
		cout << "\tdsh=" << dsh << "    " << "\tksh=" << ksh << endl;
		cout << "\t" << "\t   " << "\tvm=" << *vm << endl;
	}
	if (h == 10000)//9
	{
		cout << endl;	cout << endl;
		*vm = 10000 - dsh + ksh;
		cout << "\tDt\t" << "Karj. vark\t" << "Kt\t" << endl;
		cout << "-----------------------------------" << endl;
		cout << "\t" << "\t  " << "\t" << 10000 << endl;
		cout << "\t" << "\t  " << endl;
		cout << "\tdsh=" << dsh << "    " << "\tksh=" << ksh << endl;
		cout << "\t" << "\t   " << "\tvm=" << *vm << endl;
	}
	if (h == 6000)//10
	{
		cout << endl;	cout << endl;
		dsh = *ak_pas_pop_p;
		ksh = *pasivayin_pop;
		*vm = 6000 - dsh + ksh;
		cout << "\tDt\t" << "Kt. p. b.\t" << "Kt\t" << endl;
		cout << "-----------------------------------" << endl;
		cout << "\t" << "\t  " << "\t" << 6000 << endl;
		cout << "\t" << *ak_pas_pop_p << "\t  " << "\t" << *pasivayin_pop << endl;
		cout << "\tdsh=" << dsh << "   " << "\tksh=" << ksh << endl;
		cout << "\t" << "\t  " << "\tvm=" << *vm << endl;
	}
	if (h == 4000)//11
	{
		cout << endl;	cout << endl;
		dsh = *pasivayin_pop;

		*vm = 4000 - dsh + ksh;
		cout << "\tDt\t" << "partq andzn.\t" << "Kt\t" << endl;
		cout << "-----------------------------------" << endl;
		cout << "\t" << "\t  " << "\t" << 4000 << endl;
		cout << "\t" << *pasivayin_pop << "\t  " << "\t" << endl;
		cout << "\tdsh=" << dsh << "   " << "\tksh=" << ksh << endl;
		cout << "\t" << "\t   " << "\tvm=" << *vm << endl;
	}
	if (h == 2000)//12
	{
		cout << endl;	cout << endl;
		ksh = *ak_pas_pop_a;
		*vm = 0 - dsh + ksh;
		cout << "\tDt\t" << "Avand\t" << "Kt\t" << endl;
		cout << "-----------------------------------" << endl;
		cout << "\t" << "\t  " << "\t" << 0 << endl;
		cout << "\t" << "\t  " << "\t" << *ak_pas_pop_a << endl;
		cout << "\tdsh=" << dsh << "    " << "\tksh=" << ksh << endl;
		cout << "\t" << "\t   " << "\tvm=" << *vm << endl;
	}

}
int main()
{
	dr = kapital;
	ar_kr_partq = ny + him_mij;
	karj_vark = hash_hashiv;
	kr_p_byuje = voch_ny_ak;
	part_andzn = an_ashx;

	cout << "        //////// Skzbnakan hashvekshir \\\\\\\\\\          " << endl;
	cout << endl;
	aktiv_pasiv(kapital, ny, him_mij, hash_hashiv, voch_ny_ak, an_ashx);
	cout << "  Hashvekshir    " << "     " << hashvekshir_1(ny, him_mij, hash_hashiv, voch_ny_ak, an_ashx, hashv_1, dr) << "     ";
	cout << " Hashvekshir    " << "     " << hashvekshir_2(kapital, hashv_2, ar_kr_partq, karj_vark, kr_p_byuje, part_andzn, avand) << endl;
	cout << endl;
	cout << endl;
	cout << endl;

	int aktivayin_pop;
	cout << "Aktivayin popoxutyun=";
	cin >> aktivayin_pop;
	/*Aktivayin_pop(aktivayin_pop, &hash_hashiv, &dr);
	cout << "        //////// Aktivayin pop hashvekshir \\\\\\\\\\          " << endl;
	cout << endl;
	aktiv_pasiv(kapital, ny, him_mij, hash_hashiv, voch_ny_ak, an_ashx);
	cout << "  Hashvekshir    " << "     " << hashvekshir_1(ny, him_mij, hash_hashiv, voch_ny_ak, an_ashx, hashv_1, dr) << "     ";
	cout << " Hashvekshir    " << "     " << hashvekshir_2(kapital, hashv_2, ar_kr_partq, karj_vark, kr_p_byuje, part_andzn, avand) << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	hashvekshir_1(ny, him_mij, hash_hashiv, voch_ny_ak, an_ashx, hashv_1, dr);
	hashvekshir_2(kapital, hashv_2,ar_kr_partq, karj_vark, kr_p_byuje, part_andzn, avand);
	*/
	int pasivayin_pop;
	cout << "Pasivayin popoxutyun=";
	cin >> pasivayin_pop;
	/*Pasivayin_pop(pasivayin_pop, &kr_p_byuje, &part_andzn);
	cout << endl;
	cout << "        //////// Pasivayin pop hashvekshir \\\\\\\\\\          " << endl;
	cout << endl;
	aktiv_pasiv(kapital, ny, him_mij, hash_hashiv, voch_ny_ak, an_ashx);
	cout << "  Hashvekshir    " << "     " << hashvekshir_1(ny, him_mij, hash_hashiv, voch_ny_ak, an_ashx, hashv_1, dr) << "     ";
	cout << " Hashvekshir    " << "     " << hashvekshir_2(kapital, hashv_2, ar_kr_partq, karj_vark, kr_p_byuje, part_andzn, avand) << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	*/
	int ak_pas_pop_a;
	cout << "Aktiva pasivayin popoxutyun avelacumov(avand)=";
	cin >> ak_pas_pop_a;
	/*	Ak_pas_pop_a(ak_pas_pop_a, &dr, &avand);
		cout << endl;
		cout << "        //////// Aktiva pasivayin popoxutyun avelacumov hashvekshir \\\\\\\\\\          " << endl;
		cout << endl;
		aktiv_pasiv(kapital, ny, him_mij, hash_hashiv, voch_ny_ak, an_ashx);
		cout << "  Hashvekshir    " << "     " << hashvekshir_1(ny, him_mij, hash_hashiv, voch_ny_ak, an_ashx, hashv_1, dr) << "     ";
		cout << " Hashvekshir    " << "     " << hashvekshir_2(kapital, hashv_2, ar_kr_partq, karj_vark, kr_p_byuje, part_andzn, avand) << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		*/

	int ak_pas_pop_p;
	cout << "Aktiva pasivayin popoxutyun nvazecumov=";
	cin >> ak_pas_pop_p;
	/*Ak_pas_pop_p(ak_pas_pop_p, &hash_hashiv, &kr_p_byuje);
	cout << endl;
	cout << "        //////// Aktiva pasivayin popoxutyun nvazecumov hashvekshir \\\\\\\\\\          " << endl;
	cout << "        ////////////////////////Verjnakan hashvekshir         " << endl;

	cout << endl;
	aktiv_pasiv(kapital, ny, him_mij, hash_hashiv, voch_ny_ak, an_ashx);
	cout << "  Hashvekshir    " << "     " << hashvekshir_1(ny, him_mij, hash_hashiv, voch_ny_ak, an_ashx, hashv_1, dr) << "     ";
	cout << " Hashvekshir    " << "     " << hashvekshir_2(kapital, hashv_2, ar_kr_partq, karj_vark, kr_p_byuje, part_andzn, avand) << endl;
	cout << endl;*/
	cout << endl;
	T_ak(dr, &aktivayin_pop, dt, kt, &vm, &ak_pas_pop_a);//1
	cout << endl;
	T_ak(ny, &aktivayin_pop, dt, kt, &vm, &ak_pas_pop_a);//2
	cout << endl;
	T_ak(him_mij, &aktivayin_pop, dt, kt, &vm, &ak_pas_pop_a);//3
	cout << endl;
	T_ak(hash_hashiv, &aktivayin_pop, dt, kt, &vm, &ak_pas_pop_p);//4 
	cout << endl;
	T_ak(voch_ny_ak, &aktivayin_pop, dt, kt, &vm, &ak_pas_pop_a);//5
	cout << endl;
	T_ak(an_ashx, &aktivayin_pop, dt, kt, &vm, &ak_pas_pop_a);//6
	cout << endl;
	cout << "888888888888888888888888888888888888888" << endl;
	T_pa(kapital, &aktivayin_pop, dt, kt, &vm, &ak_pas_pop_a, &pasivayin_pop, &ak_pas_pop_p);//7
	cout << endl;
	T_pa(ar_kr_partq, &aktivayin_pop, dt, kt, &vm, &ak_pas_pop_a, &pasivayin_pop, &ak_pas_pop_p);//8
	cout << endl;
	T_pa(karj_vark, &aktivayin_pop, dt, kt, &vm, &ak_pas_pop_a, &pasivayin_pop, &ak_pas_pop_p);//9
	cout << endl;
	T_pa(kr_p_byuje, &aktivayin_pop, dt, kt, &vm, &ak_pas_pop_a, &pasivayin_pop, &ak_pas_pop_p);//10
	cout << endl;
	T_pa(part_andzn, &aktivayin_pop, dt, kt, &vm, &ak_pas_pop_a, &pasivayin_pop, &ak_pas_pop_p);//11
	cout << endl;
	T_pa(ak_pas_pop_a, &aktivayin_pop, dt, kt, &vm, &ak_pas_pop_a, &pasivayin_pop, &ak_pas_pop_p);//12
	cout << endl;
	cout << endl;
	cout << endl;
	Aktivayin_pop(aktivayin_pop, &hash_hashiv, &dr);
	Pasivayin_pop(pasivayin_pop, &kr_p_byuje, &part_andzn);
	Ak_pas_pop_a(ak_pas_pop_a, &dr, &avand);
	Ak_pas_pop_p(ak_pas_pop_p, &hash_hashiv, &kr_p_byuje);
	cout << "        ////////////////////////Verjnakan hashvekshir\\\\\\\\\\\\\\\\\\\\\\         " << endl;
	cout << endl;
	aktiv_pasiv(kapital, ny, him_mij, hash_hashiv, voch_ny_ak, an_ashx);
	cout << "  Hashvekshir    " << "     " << hashvekshir_1(ny, him_mij, hash_hashiv, voch_ny_ak, an_ashx, hashv_1, dr) << "     ";
	cout << " Hashvekshir    " << "     " << hashvekshir_2(kapital, hashv_2, ar_kr_partq, karj_vark, kr_p_byuje, part_andzn, avand) << endl;

	system("pause");
	return 0;
}
