Vytvoř interface (třídu s Pure virtual funkci) VectorAddable, které zaručí že půjdou sečíst dva vektory.

Vytvoř interface VectorScalarable, které zaručí že vektor půjde skalárně vynásobit s jiným.

Vytvoř abstraktní třídu AbstractEuclideanVector, která implementuje obě tato rozhraní.

Díky jistotě, že její potomci implementují výše zmíněné Scalarable, implemtujte do interface definici statické funkce norm(T other), která vrátí float, velikost vektoru.



Vytvoř třídu vektor, která implementuje výše vytvořenou abstraktní třídu, vše potřebné, co říkají rozhraní, navíc výpis a floaty X,Y.



Dále vytvoř interfaces PointAddable a Subtractable.
(pointAddable zajištuje, že se dá k bodu přičíst vektor a vrátí se nový bod posunutý o vektor)
hint: class T, class U



Vytvoř abstraktní třídu AbstractEuclideanPoint, která implementuje výše zmíněné.

Poskytne obecnou definici funkce distance, která zjistí vzdálenost mezi dvěma body (využije k tomu interface Subtractable a statickou metodu z třídy AbstractEuclideanVector::norm)



Vytvoř třídu Point, která implementuje výše zmíněnou Abstraktní třídu.

Navíc bude mít X,Y, výpis.



V mainu:

 // nejprve udelej bod v prostoru a pricti k nemu vektor (2,2)

 // auto vec = Point(2,2).add(Vector(3, 3));

// vysledkem je novy point 5,5, zjisti jeho číslenou vzdalenost od bodu 2,2

    // to same udelej pomoci odečtu dvou bodů 1,1 a 5,7
