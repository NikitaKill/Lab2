#include <iostream>
#include <exception>
#include <string>
using namespace std;


void Sort(double* values, int count) //2211
{
	double swap;
	for (int i = 0; i < count; i++)
	{
		for (int j = 0; j < count; j++)
		{
			if (values[i] < values[j])
			{
				swap = values[i];
				values[i] = values[j];
				values[j] = swap;
			}
		}
	}
}
void DemoSort() //2212
{
	int count = 5;
	double* values = new double[count] {100.0, 249.0, 12.0, 45.0, 23.5};
	Sort(values, count);
	try {
		count = -1;
		if (count > 0)
			Sort(values, count);
		else
			throw "Can not take sqrt of negative number";
	}
	catch (const char* exception)
	{
		cout << "Error: " << exception << endl;
	}
}
void Task2212() 
{
	DemoSort();
}
struct Priamoygolnik //2221 and 2222
{
	double dlina;
	double shirina;
	string cvet;
};
struct Reis
{
	string vilet;
	string naznach;
	int timepoletmin;
};
struct Film
{
	string name;
	int time;
	int year;
	string janre;
	double rating;
};
struct Time
{
	int hour;
	int minute;
	int second;
};
struct Contact
{
	string name;
	string surname;
	int nomer;
	string opisanie;
};
struct music
{
	string name;
	string janre;
	int yearof_vipuska;
	int time;
};
struct Discipline
{
	string name;
	string teacher;
	int alltime;
};
void WritePriamoygolnik(Priamoygolnik& priamoygolnik);
void Exchange(Priamoygolnik& Priamoygolnik1, Priamoygolnik& Priamoygolnik2);
void DemoPriamoygolnik() //2231-2232 2241-2243
{
	Priamoygolnik per1;
	per1.dlina = 6;
	per1.shirina = 21;
	per1.cvet = "Фиольетовый";
	Priamoygolnik per2;
	cout << endl << "per2.dlina = ";
	cin >> per2.dlina;
	cout << endl << "per2.shirina = ";
	cin >> per2.shirina;
	cout << endl << "per2.cvet = ";
	cin >> per2.cvet;
	Priamoygolnik per3;
	per3.dlina = 19;
	per3.shirina = 22;
	per3.cvet = "Бежевый";
	Priamoygolnik mass[3] = { per1,per2,per3 };
	for (int i = 0; i < 3; i++)
	{
		cout << "Прямоугольник имеет следующие размеры: длина равна - " << mass[i].dlina << " " << "ширина равна - " << mass[i].shirina << " и цвет прямоугольника " << mass[i].cvet << endl;
	}
	Priamoygolnik* ykazatel = new Priamoygolnik;
	ykazatel = &per1;
	cout << ykazatel->dlina << endl;
	cout << ykazatel->shirina << endl;
	cout << ykazatel->cvet << endl;
	ykazatel->cvet = "Оранжевий";
	ykazatel->dlina = 29;
	ykazatel->shirina = 33;
	Priamoygolnik* ykazatel1 = new Priamoygolnik;
	ykazatel1 = &per1;
	cout << &ykazatel->dlina << " " << &ukz1->dlina << endl;
	cout << &ykazatel->shirina << " " << &ukz1->shirina << endl;
	cout << &ykazatel->cvet << " " << &ukz1->color << endl;
	Exchange(per1, per2);

}
void DemoReis()
{
	Reis flight;
	flight.vilet = "Москва";
	flight.pnaz = "Бразилия";
	flight.timepoletmin = 145;
	Reis flight2;
	cout << endl << "flight2.vilet";
	cin >> flight2.vilet;
	cout << endl << "flight2.pnaz";
	cin >> flight2.naznach;
	cout << endl << "flight2.timepoletmin";
	cin >> flight2.timepoletmin;
	Reis flight3;
	flight3.vilet = "Томск";
	flight3.naznach = "Казахстан";
	flight3.timepoletmin = 106;
	Reis mass[3] = { flight, flight2, flight3 };
	for (int i = 0; i < 3; i++)
	{
		cout << "Рейс " << i + 1 << " " << mass[i].vilet << "-" << mass[i].naznach << " летит " << mass[i].timepoletmin << "минут " << endl;
	}
	Reis* ykazatel = new Reis;
	ykazatel = &flight1;
	cout << ykazatel->vilet << endl;
	cout << ykazatel->naznach << endl;
	cout << ykazatel->timepoletmin << endl;
	ykazatel->vilet = "Чернобиль";
	ykazatel->naznach = "Швеция";
	ykazatel->timepoletmin = 79;
	Reis* ykazatel2 = new Reis;
	ykazatel2 = &flight1;
	cout << &ykazatel->vilet << " " << &ykazatel2->vilet << endl;
	cout << &ykazatel->naznach << " " << &ykazatel2->naznach << endl;
	cout << &ykazatel->timepoletmin << " " << &ykazatel2->timepoletmin << endl;
}
void DemoFilm()
{
	Film movie;
	movie.time = 107;
	movie1.name = "Большой стэн";
	movie1.rating = 8.5;
	movie1.year = 2008;
	movie1.genre = "Comedy";
	Film movie2;
	cout << endl << "movie2.time = ";
	cin >> movie2.time;
	cout << endl << "movie2.name = ";
	cin >> movie2.name;
	cout << endl << "movie2.rating = ";
	cin >> movie2.rating;
	cout << endl << "movie2.year = ";
	cin >> movie2.year;
	cout << endl << "movie2.janre = ";
	cin >> movie2.janre;
	Film movie3;
	movie3.time = 120;
	movie3.name = "Идеальный Фильм";
	movie3.rating = 10.0;
	movie3.year = 2077;
	movie3.janre = "ЗАСЕКРЕЧЕНО";
	Film mass[3] = { movie, movie2, movie3 };
	for (int i = 0; i < 3; i++)
	{
		cout << "Фильм " << mass[i].name << ", длинной " << mass[i].time << " минут, с рейтингом " << mass[i].rating << ", и жанром " << mass[i].janre << " и годом создания - " << mass[i].year << endl;
	}
	Film* ykazatel = new Film;
	ykazatel = &movie1;
	cout << ykazatel->name << endl;
	cout << ykazatel->time << endl;
	cout << ykazatel->rating << endl;
	cout << ykazatel->janre << endl;
	cout << ykazatel->year << endl;
	ykazatel ->name = "Американский психопат";
	ykazatel->time = 117;
	ykazatel->rating = 9.4;
	ykazatel->janre = "REZNIA";
	ykazatel->year = 2003;
	Film* ykazatel1 = new Film;
	ykazatel1 = &movie1;
	cout << &ykazatel->name << " " << &ykazatel1->name << endl;
	cout << &ykazatel->time << " " << &ykazatel1->time << endl;
	cout << &ykazatel->rating << " " << &ykazatel1->rating << endl;
	cout << &ykazatel->janre << " " << &ykazatel1->janre << endl;
	cout << &ykazatel->year << " " << &ykazatel1->year << endl;
}
void DemoTime()
{
	Time time1;
	time1.hour = 12;
	time1.minute = 51;
	time1.second = 07;
	Time time2;
	cout << endl << "time2.hour = ";
	cin >> time2.hour;
	cout << endl << "time2.minute = ";
	cin >> time2.minute;
	cout << endl << "time2.second = ";
	cin >> time2.second;
	Time time3;
	time3.hour = 18;
	time3.minute = 59;
	time3.second = 23;
	Time mass[3] = { time1, time2, time3 };
	for (int i = 0; i < 3; i++)
	{
		cout << "Часы " << mass[i].hour << " минуты " << mass[i].minute << " секунды " << mass[i].second << endl;
	}
	Time* ykazatel = new Time;
	ykazatel = &time1;
	cout << ykazatel->hour << endl;
	cout << ykazatel->minute << endl;
	cout << ykazatel->second << endl;
	ykazatel->hour = 16;
	ykazatel->minute = 18;
	ykazatel->second = 39;
	Time* ykazatel1 = new Time;
	ykazatel1 = &time1;
	cout << &ykazatel->hour << " " << &ykazatel1->hour << endl;
	cout << &ykazatel->minute << " " << &ykazatel1->minute << endl;
	cout << &ykazatel->second << " " << &ykazatel1->second << endl;
}
void WrongPointers()//2244
{
	int a;
	cout << "0 or 1: ";
	cin >> a;
	if (a == 0)
	{
		Reis flight;
		Film movie;
		Reis* fly = new Flight;
		Film* filmech = new Film;
		flt = &flight;
		mov = &movie;
	}
	else
	{
		/*Flight flight;
		Movie movie;
		Flight* flt = new Flight;
		Movie* mov = new Movie;
		flt = &movie;
		mov = &flight;*/
	}
}
void WriteRectangle(Priamoygolnik& priamoygolnik) //2251
{
	cout << "Прямоугольник имеет размеры  " << Priamoygolnik.dlina << "х" << Priamoygolnik.shirina << endl;
}
void ReadRectangle(Priamoygolnik& priamoygolnik) //2252
{
	cout << "Введите длину прямоугольника: ";
	cin >> Priamoygolnik.dlina;
	cout << "Введите ширину прямоугольника: ";
	cin >> Priamoygolnik.shirina;
}
void DemoReadAndWriteRectangles() //2253
{
	Priamoygolnik per1, per2, per3, per4, per5;
	Priamoygolnik rectangles[5] = { per1, per2, per3, per4, per5 };
	for (int i = 0; i < 5; i++)
	{
		ReadRectangle(rectangles[i]);
		WriteRectangle(rectangles[i]);
	}
}
void Exchange(Priamoygolnik& priamoygolnik1, Priamoygolnik& priamoygolnik2) //2254
{
	WriteRectangle(priamoygolnik1);
	WriteRectangle(priamoygolnik2);
	double a, b;
	a = priamoygolnik2.dlina;
	b = priamoygolnik2.shirina;
	priamoygolnik2.dlina = priamoygolnik.dlina;
	priamoygolnik1.dlina = a;
	priamoygolnik2.shirina = priamoygolnik.shirina;
	priamoygolnik1.shirina = b;
	WriteRectangle(priamoygolnik1);
	WriteRectangle(priamoygolnik2);
}
void FindRectangle(Priamoygolnik* priamoygolniki, int count) //2255
{
	double a, b;
	a = 0;
	b = 0;
	for (int i = 0; i < count; i++)
	{
		if (a < priamoygolniki[i].dlina)
		{
			a = priamoygolniki[i].dlina;
			b = priamoygolniki[i].shirina;
		}
	}
	cout << "Прямоугольник с максимальной длиной имеет размер " << a << "x" << b;
}
void FindMaxRectangle(Priamoygolnik* priamoygolniki, int count) //2256
{
	double a, b;
	a = 0;
	b = 0;
	for (int i = 0; i < count; i++)
	{
		if ((a * b) < (priamoygolniki[i].dlina * priamoygolniki[i].shirina))
		{
			a = priamoygolniki[i].dlina;
			b = priamoygolniki[i].shirina;
		}
	}
	cout << "Прямоугольник с максимальной площадью имеет размер " << a << "x" << b;

}
void DemoDynamicFlight() //2261
{
	Reis Flt;
	Reis* pFlt = new Flight;
	pFlt = &Flt;
	pFlt->vilet = "Novosib";
	pFlt->naznach = "Tomsk";
	pFlt->poletVmin = 40;
	//Рейс Москва - Санкт-Петербург находится в полете 45 минут
	cout << "Рейс " << pFlt->vilet << "-" << pFlt->naznach << " находится в полете " << pFlt->poletVmin << " минут " << endl;
	pFlt = NULL;
	delete[] pFlt;
}
void DemoDynamicFlights() //2262
{
	Flight flt1, flt2, flt3, flt4;
	Flight flights[4] = { flt1, flt2, flt3, flt4 };
	int count = 4;
	DemoReadAndWriteFlights(flights, count);
	FindShortestFlight(flights, count);
	delete[] flights;
}
void FindShortestFlight(Flight* flights, int count) //2263
{
	int a = 9999;
	string vil;
	string naz;
	for (int i = 0; i < count; i++)
	{
		if (a > flights[i].poletVmin)
		{
			a = flights[i].poletVmin;
			vil = flights[i].vilet;
			naz = flights[i].poletVmin;
		}
	}
	cout << "Самый короткий рейс " << vil << "-" << naz << " находится в полете " << a << " минут " << endl;
}
struct Circle // 2271
{
	double X; // X-координата центра круга
	double Y; // Y-координата центра круга
	double Radius; // Радиус
	string Color; // Цвет
};
Circle* MakeCircle(double X, double Y, double Radius, string Color) {
	Circle* c = new Circle();
	c->X = X;
	c->Y = Y;
	c->Radius = Radius;
	c->Color = Color;
	return c;
}
Circle* CopyCircle(Circle& circle) {
	Circle* copiedCircle = new Circle();
	copiedCircle->X = circle.X;
	copiedCircle->Y = circle.Y;
	copiedCircle->Radius = circle.Radius;
	copiedCircle->Color = circle.Color;
	cout << "Длина круга: " << circle.X << ", " << width << "Ширина круга: " << ", " << " Радиус круга: " << circle.Radius << ", " << " Цвет круга: " << circle.Color << endl;
	return copiedCircle;
}
void DemoCircle() {
	Circle* circle1 = MakeCircle(6.6, 6.1, 12.8, "Фиольетовый");
	Circle* circle2 = MakeCircle(19.0, 7.3, 10.07, "Чорний");
	Circle* circle3 = MakeCircle(7.2, 10.0, 7.8, "Оранжевий");
	Circle* copiedCircle1 = CopyCircle(*circle1);
	Circle* copiedCircle2 = CopyCircle(*circle2);
	Circle* copiedCircle3 = CopyCircle(*circle3);
}

Rectangle* MakeRectangle(int dlina, int shirina, string color) //2272
{
	Rectangle* r = new Rectangle();
	r->dlina = dlina;
	r->shirina = shirina;
	r->color = color;
	return r;
}
Priamoygolnichek* CopyRectangle(Priamoygolnichek& R)
{
	Priamoygolnichek* copy = new Priamoygolnichek();
	copy->dlina = R.dlina;
	copy->shirina = R.shirina;
	copy->cvet = R.cvet;
	cout << "Прямоугольник имеет размеры  " << R.dlina << "x" << R.shirina << " и цвет " << R.color << endl;
	return copy;
}
void Demopriamoygolnichek()
{
	Priamoygolnichek* r1 = MakePriamoygolnichek(25.7, 12.2, "Фиольетовый");
	Priamoygolnichek* r2 = MakePriamoygolnichek(25.0, 17.8, "Чорний");
	Priamoygolnichek* r3 = MakePriamoygolnichek(2.5, 7.7, "Оранжевий");
	Priamoygolnichek* copyr1 = CopyPriamoygolnichek(*r1);
	Priamoygolnichek* copyr2 = CopyPriamoygolnichek(*r2);
	Priamoygolnichek* copyr3 = CopyPriamoygolnichek(*r3);
}

Reis* MakeFly(string vilet, string naznach, int timepoletmin)
{
	Reis* f = new Reis();
	f->vilet = vilet;
	f->naznach = naznach;
	f->timepoletmin = timepoletmin;
	return f;
}
Reis* CopyFly(Reis& F) {
	Reis* copy = new Reis();
	copy->vilet = F.vilet;
	copy->naznach = F.naznach;
	copy->timepoletmin = F.timepoletmin;
	cout << "Рейс " << F.vilet << " - " << F.naznach << " находится в пути " << F.poletVmin << endl;
	return copy;
}
void Demoflight() {
	Reis* f1 = MakeFl("Томск", "Чебоксары", 1007);
	Reis* f2 = MakeFl("Москва", "Берлин", 1945);
	Reis* f3 = MakeFl("Вашингтон", "Нью-Йорк", 825);
	Reis* copyfly1 = CopyFly(*f1);
	Reis* copyfly2 = CopyFly(*f2);
	Reis* copyfly3 = CopyFly(*f3);
}

Film* MakeFilm(string name, int time, int year, string janre, double rating)
{
	Film* m = new Film();
	m->name = name;
	m->time = time;
	m->year = year;
	m->janre = janre;
	m->rating = rating;
	return m;
}
Film* CopyFilm(Film& M)
{
	Film* copy = new Film();
	copy->name = M.name;
	copy->time = M.time;
	copy->year = M.year;
	copy->janre = M.janre;
	copy->rating = M.rating;
	cout << "Название фильма: " << M.name << endl << "Длительность: " << M.time << endl << "Год выхода фильма: " << M.year << endl << "Жанр фильма: " << M.janre << endl << "Рейтинг фильма: " << M.rating << endl;
	return copy;
}
void DemoFilm()
{
	Film* m1 = MakeFilm("Моя жизнь", 9460800 , 2003, "Драма", 0.1);
	Film* m2 = MakeFilm("Бегущий по лезвию", 126, 2014, "Драма", 10.0);
	Film* m3 = MakeFilm("Драйв", 135, 2016, "Драма", 10.0);
	Film* copym1 = CopyFilm(*m1);
	Film* copym2 = CopyFilm(*m2);
	Film* copym3 = CopyFilm(*m3);
}

Time* MakeTime(int hour, int min, int sec) {
	Time* t = new Time();
	t->hour = hour;
	t->min = min;
	t->sec = sec;
	return t;
}
Time* CopyTime(Time& T) {
	Time* copy = new Time();
	copy->hour = T.hour;
	copy->min = T.min;
	copy->sec = T.sec;
	cout << "Time: " << endl << T.hour << ":" << T.min << ":" << T.sec << endl;
	return copy;
}
void Demotimes() {
	Time* t1 = MakeTime(23, 14, 23);
	Time* t2 = MakeTime(21, 54, 34);
	Time* t3 = MakeTime(12, 56, 32);
	Time* copyt1 = CopyTime(*t1);
	Time* copyt2 = CopyTime(*t2);
	Time* copyt3 = CopyTime(*t3);
}
void Task2272_2273() {
	int choice;
	cout << "rectangle - 1; reis - 2; movie - 3; time - 4" << endl;
	cin >> choice;
	switch (choice) {
	case 1:
		Demorectangle();
		break;
	case 2:
		Demoflight();
		break;
	case 3:
		Demomovie();
		break;
	case 4:
		Demotimes();
		break;
	}
}
//Задание 2.2.8.1
enum Color { Red, Orange, Yellow, Green, Sky, Blue, Purple };
enum Week { Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday };
enum Genre { Comedy, Drama, Thriller, Action, Horror, blockbuster };
//Задание 2.2.8.2
enum Study { Full, Part, Evening, Distance };
enum Smartphone { Samsung, Lenovo, Rocco, Apple };
enum year { Winter, Summer, Autumn, Spring };
//Задание 2.2.8.3
void DemoEnums() {
	enum class Color { Red = 0, Orange, Yellow, Green, Sky, Blue, Purple };
	enum class Week { Monday = 0, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday };
	enum class Genre { Comedy = 0, Drama, Thriller, Action, Horror, blockbuster };
	enum class Study { Full = 0, Part, Evening, Distance };
	enum class Smartphone { Samsung = 0, Lenovo, Rocco, Apple };
	enum class year { Winter = 0, Summer, Autumn, Spring };
}
//Задание 2.2.8.5
void WriteColor(Color color) {
	switch (color)
	{
	case Red:
		cout << "Red color" << endl;
		break;
	case Orange:
		cout << "Orange color" << endl;
		break;
	case Yellow:
		cout << "Yellow color" << endl;
		break;
	case Green:
		cout << "Green color" << endl;
		break;
	case Sky:
		cout << "Sky color" << endl;
		break;
	case Blue:
		cout << "Blue color" << endl;
		break;
	case Purple:
		cout << "Purple color" << endl;
		break;
	}
}
void Task2285()
{
	Color color1 = Red;
	WriteColor(color1);
	Color color2 = Green;
	WriteColor(color2);
	Color color3 = Blue;
	WriteColor(color3);
}
//Задание 2.2.8.6
Color ReadColor() {
	int n;
	cout << "Введите число от 0 до 6 (0 - красный, 1 - оранжевый, 2 - желтый, 3 - зеленый, 4 - голубой, 5 - синий, 6 - фиолетовый" << endl;
	cin >> n;
	switch (n) {
	case 0: {
		Color color = Red;
		return color; }
		  break;
	case 1: {
		Color color = Orange;
		return color; }
		  break;
	case 2: {
		Color color = Yellow;
		return color; }
		  break;
	case 3: {
		Color color = Green;
		return color; }
		  break;
	case 4: {
		Color color = Sky;
		return color; }
		  break;
	case 5: {
		Color color = Blue;
		return color; }
		  break;
	case 6: {
		Color color = Purple;
		return color; }
		  break;
	}
}
void Task2286() {
	WriteColor(ReadColor());
}
//Задание 2.2.8.7
int CountRed(Color* colors, int count) {
	int a = 0;
	for (int i = 0; i < count; i++) {
		if (colors[i] == 0)
			a++;
	}
	return a;
}
void Task2287() {
	Color color[6] = { Red, Blue, Red, Red, Purple, Green };
	int n = 6;
	cout << CountRed(color, n);
}
//Задание 2.2.8.8
int CountColor(Color* colors, int count, Color findedColor) {
	int a = 0;
	for (int i = 0; i < count; i++) {
		if (findedColor == colors[i])
			a++;
	}
	return a;
}
void Task2288() {
	Color color[6] = { Red, Blue, Red, Red, Purple, Green };
	int count = 6;
	Color findedColor = ReadColor();
	cout << CountColor(color, count, findedColor);
}
//Задание 2.2.9.1
struct Movie1 {
	string name;
	int dlinaVmim;
	int year;
	enum genre { Comedy, Drama, Thriller, Action, Horror, blockbuster };
	double rating;
};
//Задание 2.2.9.2
void DemoMovieWithGenre() {
	Movie1 movie;
	int n;
	cout << "Vvedite nazvanie filma" << endl;
	cin >> movie.name;
	cout << "Vvedite dlitelnost filma" << endl;
	cin >> movie.dlinaVmim;
	cout << "Vvedite daty vixoda" << endl;
	cin >> movie.year;
	cout << "Vvedite genre filma (0 - Comedy, 1 - Drama, 2 - Thriller, 3 - Action, 4 - Horror, 5 - blockbuster" << endl;
	cin >> n;
	switch (n) {
	case 0:
		cout << "Comedy" << endl;
		break;
	case 1:
		cout << "Drama" << endl;
		break;
	case 2:
		cout << "Thriller" << endl;
		break;
	case 3:
		cout << "Action" << endl;
		break;
	case 4:
		cout << "Horror" << endl;
		break;
	case 5:
		cout << "Blockbuster" << endl;
		break;
	}
	cout << "Vvedite rating filma" << endl;
	cin >> movie.rating;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	int choice;
	cout << "Введите номер задания: " << endl;
	cin >> choice;
	switch (choice) {
	case 1://221
	{
		DemoSort();
		break;
	}
	case 2://222
	{
		cout << "в  блоке 2.2.2 ничего выводить не надо....";
		break;
	}
	case 3://2231-2233
	{
		DemoRectangle();
		DemoFlight();
		DemoMovie();
		DemoTime();
		break;
	}
	case 4://2241
	{
		DemoRectangle();
		DemoFlight();
		DemoMovie();
		DemoTime();
		break;
	}
	case 5://2251
	{
		Rectangle rectangle1;
		rectangle1.dlina = 15.0;
		rectangle1.shirina = 20.0;
		WriteRectangle(rectangle1);
		Rectangle rectangle2;
		ReadRectangle(rectangle2);
		break;
	}
	case 6://2253
	{
		DemoReadAndWriteRectangles();
		break;
	}
	case 7://2254
	{
		DemoRectangle();
		break;
	}
	case 8://2255
	{
		Rectangle rec1, rec2, rec3;
		Rectangle rectangles[3] = { rec1, rec2, rec3 };
		int count = 3;
		for (int i = 0; i < 3; i++)
		{
			ReadRectangle(rectangles[i]);
			WriteRectangle(rectangles[i]);
		}
		FindRectangle(rectangles, count);
		break;
	}
	case 9://2256
	{
		Rectangle rec1, rec2, rec3;
		Rectangle rectangles[3] = { rec1, rec2, rec3 };
		int count = 3;
		for (int i = 0; i < 3; i++)
		{
			ReadRectangle(rectangles[i]);
			WriteRectangle(rectangles[i]);
		}
		FindMaxRectangle(rectangles, count);
		break;
	}
	case 10://2261
	{
		DemoDynamicFlight();
		break;
	}
	case 11://2262-3
	{
		DemoDynamicFlights();
		break;
	}
	case 12://227
	{
		Task2272_2273();
		break;
	}
	case 13://2285
	{
		Task2285();
		break;
	}
	case 14://2286
	{
		Task2286();
		break;
	}
	case 15://2287
	{
		Task2287();
		break;
	}
	case 16://2288
	{
		Task2288();
		break;
	}
	case 17://2292
	{
		DemoMovieWithGenre();
		break;
	}
	}
}
