# PrintLists
Bu kod, bir bağlı liste (linked list) veri yapısını oluşturur ve bu bağlı listedeki elemanları yazdıran bir fonksiyon içerir.

Bağlı listeler, verilerin birbirine bağlı düğümler halinde saklandığı veri yapılarıdır. Her düğüm, veriyi ve bir sonraki düğümün referansını içerir. Bağlı listeler, veri ekleme ve çıkarma işlemlerinde esneklik sağlar ve dinamik olarak büyüyebilir.

Kodun çalışma mantığı şu şekildedir:

struct Node adında bir düğüm yapısı tanımlanır. Bu yapı, veri ve bir sonraki düğümün referansını (next) içerir.
struct LinkedList adında bir bağlı liste yapısı tanımlanır. Bu yapı, liste başını (head) içerir.
printList fonksiyonu, bağlı listedeki tüm elemanları yazdırmak için kullanılır. Bu fonksiyon, başlangıçta listenin baş düğümünü alır ve son düğüme kadar döngü yaparak her düğümün verisini ekrana yazdırır.
main fonksiyonunda boş bir bağlı liste (list) oluşturulur.
Ardından, struct Node türünde üç yeni düğüm oluşturulur ve her birinin verisi atanır.
Düğümler birbirine bağlanarak bağlı liste oluşturulur. Her düğümün next alanı bir sonraki düğümün adresini gösterir.
printList fonksiyonu çağrılarak bağlı listedeki elemanlar ekrana yazdırılır.
Bu kod, 10, 20 ve 30 değerlerini içeren bir bağlı liste oluşturur ve bu değerleri ekrana yazdırır. Bağlı listelerin temel mantığını anlamak için iyi bir örnek oluşturur.
