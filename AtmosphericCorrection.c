#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Turkish");

	double D, t, t1, b, no, Ngr, Ko;
	double E, e1, n, K1, Datm;

		// Bilinenlerin isteyelim.
	// D > Atmosferik düzeltme getirilmemiş eğik kenar
	printf("D değerini giriniz: ");
	scanf("%lf", &D);
	// t > Kuru termometre sıcaklığı
	printf("t değerini giriniz: ");
	scanf("%lf", &t);
	// t1 > Islak termometre sıcaklığı
	printf("t1 değerini giriniz: ");
	scanf("%lf", &t1);
	// b > Atmosfer basıncı
	printf("b değerini giriniz: ");
	scanf("%lf", &b);
	// no > Kullanılan aletin kırılma indisi
	printf("no değerini giriniz: ");
	scanf("%lf", &no);
	// Ngr > Grup kırılma indisi
	printf("Ngr değerini giriniz: ");
	scanf("%lf", &Ngr);
	// Ko > Sıfır noktası eki değeri
	printf("Ko değerini giriniz: ");
	scanf("%lf", &Ko);


		// Bilinmeyenlerin hesaplanması;
	printf("\n\t=== Hesap sonuçları! === \n");
	/* Atmosferik düzeltme hesabı;
	E =(10^((7.5 * t1) / (237.2 + t)) + 0.6609);
	e1 = E - 0.5 * (t - t1) * b / 755;
	n = 1 + (((Ngr * b * (10^-6)) / (273.2 + t)) - ((1.5026 * e1 * (10^-5)) / (273.2 + t)));
	K1 = D * (no - n);
	Datm = D + Ko + K1; */
	E =pow(10, (((7.5 * t1) / (237.2 + t)) + 0.6609));
	printf("E değeri: %f\n", E);
	e1 = E - 0.5 * (t - t1) * b / 755;
	printf("e1 değeri: %f\n", e1);
	n = 1 + (((Ngr * b * pow(10, -6)) / (273.2 + t)) - ((1.5026 * e1 * pow(10, -5)) / (273.2 + t)));
	printf("n değeri: %f\n", n);
	K1 = D * (no - n);
	printf("K1 değeri: %f\n", K1);
	Datm = D + Ko + K1;
	printf("Datm değeri: %f\n", Datm);

	return 0;
}
