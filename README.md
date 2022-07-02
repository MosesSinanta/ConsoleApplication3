Tiap operasi ada di file header (*.h) baru

Disini node nya ditulis dalam bentuk function

Blank nya '.'



Format node:

	void q0(std::vector<char> vct, int num) {
		display(vct, num);
			if (vct[num - 1] == '[a]') {
			[WRITE]
			[LEFT / RIGHT]
			[NEXT NODE]
		}
	}
	

[a] itu berarti nilai yang saat itu (0, 1 atau .)

	
[WRITE] itu kalau mau overwrite, jadi misal 0 -> 1
	
	vct.at(num - 1) = '1';

	
[LEFT / RIGHT] tape nya bakal gerak ke kanan atau ke kiri
	
	Kalau ke kanan	num = num + 1;
	
	Kalau ke kiri	num = num - 1;

	
[NEXT NODE] itu node berikutnya, jadi misal node berikutnya q1
	
	q1(vct, num);


Penjelasan lanjut
	
Tape nya kutulis dalam bentuk vektor, kalau array susah :T
	
vct disini maksudnya vektor
	
num disini itu buat semacam pointer manual
