#include <iostream>
#include <string>

int main() {
    std::string name;
    int student_id;

    std::cout << "이름을 입력하세요: ";
    std::getline(std::cin, name);

    std::cout << "학번을 입력하세요: ";
    std::cin >> student_id;

    std::cout << "반갑습니다. " << name << "님" << std::endl << std::endl;
    std::cout << "학점 입력을 시작합니다." << std::endl << std::endl;
    std::cout << "================= SWING 31 =================" << std::endl;

    std::cout << "C프로그래밍(3학점): ";
    double grade1;
    std::cin >> grade1;

    std::cout << "경제학원론(3학점): ";
    double grade2;
    std::cin >> grade2;

    std::cout << "바롬인성교육1(1학점): ";
    double grade3;
    std::cin >> grade3;

    std::cout << "헬스피트니스(2학점): ";
    double grade4;
    std::cin >> grade4;

    double avg_grade = (grade1 * 3 + grade2 * 3 + grade3 * 1 + grade4 * 2) / 9;

    std::cout << "============================================" << std::endl << std::endl;
    std::cout << name << "(" << student_id << ")님의 전체 학점은 " << avg_grade << "입니다." << std::endl;

    return 0;
}
