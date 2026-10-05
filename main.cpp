#include &lt;iostream&gt;
using namespace std;

void penjumlahan(int a, int b); {
int c = a + b;
cout &lt;&lt; &quot;Hasil penjumlahan: &quot; &lt;&lt; c &lt;&lt;endl;
}
void pengurangan() {
int c = 10 - 20;
cout &lt;&lt; &quot;Hasil pengurangan: &quot; &lt;&lt; c &lt;&lt;endl;
}
int pembagian(int a, int b) {
int c = a / b;
return c;
}
int perkalian() {
int c = 10 * 20;
return c;
}
int main() {
penjumlahan(10,20);
pengurangan();
perkalian();
cout &lt;&lt; &quot;Hasil perkalian: &quot; &lt;&lt; perkalian() &lt;&lt;endl;
int d = pembagian(100,20);
cout &lt;&lt; &quot;Hasil pembagian: &quot; &lt;&lt; d;
return 0;
}
