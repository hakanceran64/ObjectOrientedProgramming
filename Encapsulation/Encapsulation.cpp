/**
 * @file Encapsulation.cpp
 * @author Hakan CERAN
 * @date 07.12.2022
 * @brief Encapsulation Example Code
 * @note Good
 */

#include <iostream>
#include <string>
#include <clocale>
#include <utility>

using namespace std;

// Person s�n�f� tan�m�.
class Person {
    private:
        // �sim de�i�keni.
        string m_name{};

        // Ya� de�i�keni.
        int m_age{};

    public:
        // �sim de�i�keninin de�erini ayarlayan fonksiyon.
        void setName(string t_name) {
            m_name = std::move(t_name);
        }

        // Ya� de�i�keninin de�erini ayarlayan fonksiyon.
        void setAge(int t_age) {
            // Ya� de�i�keninin de�eri 0'dan b�y�k ve 120'den k���k olmal�d�r.
            if (t_age > 0 && t_age < 120) {
                // E�er ko�ul sa�lan�yorsa ya� de�i�kenine de�er atan�r.
                m_age = t_age;
            } else {
                // Ko�ul sa�lanm�yorsa bir hata mesaj� yazd�r�l�r.
                cout << "Hata: Ge�ersiz ya� de�eri!" << endl;
            }
        }

        // �sim de�i�keninin de�erini d�nd�ren fonksiyon.
        string getName() const {
            return m_name;
        }

        // Ya� de�i�keninin de�erini d�nd�ren fonksiyon.
        int getAge() const {
            return m_age;
        }
};

int main() {
    // T�rk�e karakterlerin kullan�labilmesi i�in dil ayarlar� yap�ld�.
    setlocale(LC_ALL, "turkish");

    // Arkaplan ve yaz� rengi ayarlar� yap�ld�.
    system("color f9");

    // Person nesnesi olu�turulur.
    Person person;

    // �sim de�i�kenine de�er atan�r.
    person.setName("Hakan CERAN");

    // Ya� de�i�kenine de�er atan�r.
    person.setAge(30);

    // �sim de�i�keninin de�eri ekrana yazd�r�l�r.
    cout << "�sim: " << person.getName() << endl;

    // Ya� de�i�keninin de�eri ekrana yazd�r�l�r.
    cout << "Ya�: " << person.getAge() << endl;

    // system("PAUSE");

    return 0;
}

