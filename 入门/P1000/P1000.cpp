#include<iostream>
using namespace std;

int main()
{
	string a = "###",  b = "#...#", c = "#.#.#";
	string d = "          ",e="#----------#";
	cout << string(16, ' ') << string(8, '*') << endl;
	cout << string(15, ' ') << string(12, '*') << endl;
	cout << string(15, ' ') << "####....#." << endl;
	cout << string(13, ' ') << "#..###.....##...." << endl;
	cout << string(13, ' ') << "###.......######" << string(14, ' ') << a << string(12, ' ') << a << endl;
	cout << string(16, ' ') << "..........." << string(15, ' ') << b << d << b << endl;
	cout << string(15, ' ') << "##*" << string(7, '#') << string(17, ' ') << c << d << c << endl;
	cout << string(12, ' ') << "####" << string(7, '*') << string(6, '#') << string(13, ' ') << c << d << c << endl;
	cout << string(11, ' ') << "...#***.****.*###...." << d << b << d << b << endl;
	cout << string(11, ' ') << "....**********##....." << string(11, ' ') << a << string(12, ' ') << a << endl;
	cout << string(11, ' ') << "....****    *****...." << endl;
	cout << string(13, ' ') << "####" << string(8, ' ') << "####" << endl;
	cout << string(11, ' ') << "######" << string(8, ' ') << "######" << endl;
	cout << string(62, '#') << endl;
	cout << "#...#......#.##...#......#.##...#......#.##" << string(18, '-') << "#" << endl;
	cout << string(43, '#') << string(18, '-') << "#" << endl;
	cout << "#..#....#....##..#....#....##..#....#...." << string(21, '#') << endl;
	cout << string(42, '#') << "    " << e<<endl;
	cout << "#.....#......##.....#......##.....#......#    " << e << endl;
	cout << string(42, '#') << "    " << e << endl;
	cout << "#.#..#....#..##.#..#....#..##.#..#....#..#    " << e << endl;
	cout << string(42, '#') << "    " << string(12, '#');

	return 0;
}