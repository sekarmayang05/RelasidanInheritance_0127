class pelajar : public orang {
    public : 
        string sekolah;

        pelajar (string pNama, string pSekolah) : orang(pNama), sekolah(pSekolah) {
            cout << "pelajar dibuat\n" <<endl;
        }
        ~pelajar() {
            cout << "pelajar dihapus\n" << endl;
        }
        string perkenalan() {
            return "Halo, nama saya " + nama + "dari sekolah" + sekolah + "\n"}
};

int main(){
    pelajar siswa1("andi laksono", "SMAN 1 Bantul");
    cout << siswa1.perkenalan();
    cout <<"Hasil = " << siswa1.jumlah(10, 99) << endl;

    return 0;

}