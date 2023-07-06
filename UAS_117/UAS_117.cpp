#include <iostream>
using namespace std;

class matakuliah {
private:
	float presensi;
	float activity;
	float exercise;
	float tugasAkhir;

public:
	matakuliah() {
		presensi = 0;
		activity = 0;
		exercise = 0;
		tugasAkhir = 0;
	}
	virtual float hitungNilaiAkhir() { return 0; }
	virtual void cekKelulusan() { return ; }
	virtual void input() { return ; }
	void setpresensi(float p) {
		this->presensi = p;
	}
	float presensi() {
		return presensi;
	}
	void setactivity(float a) {
		this->activity = a;
	}
	float getactivity() {
		return activity;
	}
	void setexercise(float e) {
		this->exercise = e;
	}
	float getexercise() {
		return exercise;
	}
	void settugasakhir(float ua) {
		this->tugasAkhir = ua;
	}
	float gettugasakhir() {
		return tugasAkhir;
	}
};
class pemograman : public matakuliah {
public:
	pemograman() : matakuliah() {}

	float hitungNilaiAkhir() {
		return (presensi * 0.1 ) (activity)
	}