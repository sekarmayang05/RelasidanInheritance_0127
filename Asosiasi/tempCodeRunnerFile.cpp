int main() {
     dokter* varDokter1 = new dokter("dr.Budi");
     dokter* varDokter2 = new dokter("dr.Tono");
     pasien* varPasien1 = new pasien ("andi");
     pasien* varPasien2 = new pasien ("meilan");

     varDokter1->tambahPasien(varPasien1);
     varDokter1->tambahPasien(varPasien2);
     varDokter2->tambahPasien(varPasien1);

     varPasien1->tambahDokter(varDokter1);
     varPasien2->tambahDokter(varDokter1);
     varPasien1->tambahDokter(varDokter2);

     varDokter1->cetakPasien();
     varDokter2->cetakPasien();
     varPasien1->cetakDokter();
     varPasien2->cetakDokter();

     delete varPasien1;
     delete varPasien2;
     delete varDokter1;
     delete varDokter2;

     return 0;
}