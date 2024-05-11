using System;
using kartoteka;

namespace kartoteka.main
{
    class MainClass
    {
        static void Main(string[] args)
        {
            // Wybór implementacji kartoteki
            kartoteka.Kartoteka kartoteka;
            Console.WriteLine("Wybierz implementację kartoteki:");
            Console.WriteLine("1. Implementacja mockup");
            Console.WriteLine("2. Implementacja rzeczywista");
            Console.Write("Twój wybór: ");
            int wybor = Convert.ToInt32(Console.ReadLine());

            if (wybor == 1)
            {
                kartoteka = new kartoteka.mockup.Kartoteka();
            }
            else if (wybor == 2)
            {
                kartoteka = new kartoteka.impl.Kartoteka();
            }
            else
            {
                Console.WriteLine("Niepoprawny wybór. Wybierz 1 lub 2.");
                return;
            }

            // Menu główne
            bool dzialaj = true;
            while (dzialaj)
            {
                Console.WriteLine();
                Console.WriteLine("Menu:");
                Console.WriteLine("1. Dodaj osobę");
                Console.WriteLine("2. Usuń osobę");
                Console.WriteLine("3. Sprawdź rozmiar kartoteki");
                Console.WriteLine("4. Sprawdź czy kartoteka zawiera daną osobę");
                Console.WriteLine("5. Pobierz pierwszą osobę z kartoteki");
                Console.WriteLine("0. Wyjdź");
                Console.Write("Wybierz opcję: ");
                int opcja = Convert.ToInt32(Console.ReadLine());

                switch (opcja)
                {
                    case 1:
                        Console.Write("Podaj imię: ");
                        string imie = Console.ReadLine();
                        Console.Write("Podaj nazwisko: ");
                        string nazwisko = Console.ReadLine();
                        kartoteka.Dodaj(new Osoba(imie, nazwisko));
                        Console.WriteLine("Osoba dodana do kartoteki.");
                        break;
                    case 2:
                        Console.Write("Podaj imię osoby do usunięcia: ");
                        string imieUsun = Console.ReadLine();
                        Console.Write("Podaj nazwisko osoby do usunięcia: ");
                        string nazwiskoUsun = Console.ReadLine();
                        kartoteka.Usun(new Osoba(imieUsun, nazwiskoUsun));
                        Console.WriteLine("Osoba usunięta z kartoteki.");
                        break;
                    case 3:
                        Console.WriteLine($"Rozmiar kartoteki: {kartoteka.Rozmiar()}");
                        break;
                    case 4:
                        Console.Write("Podaj imię osoby do sprawdzenia: ");
                        string imieSprawdz = Console.ReadLine();
                        Console.Write("Podaj nazwisko osoby do sprawdzenia: ");
                        string nazwiskoSprawdz = Console.ReadLine();
                        Osoba osobaSprawdz = new Osoba(imieSprawdz, nazwiskoSprawdz);
                        if (kartoteka.CzyZawiera(osobaSprawdz))
                        {
                            Console.WriteLine("Kartoteka zawiera daną osobę.");
                        }
                        else
                        {
                            Console.WriteLine("Kartoteka nie zawiera danej osoby.");
                        }
                        break;
                    case 5:
                        Osoba pierwszaOsoba = kartoteka.Pobierz();
                        if (pierwszaOsoba != null)
                        {
                            Console.WriteLine($"Pierwsza osoba z kartoteki: {pierwszaOsoba}");
                        }
                        else
                        {
                            Console.WriteLine("Kartoteka jest pusta.");
                        }
                        break;
                    case 0:
                        dzialaj = false;
                        Console.WriteLine("Koniec programu.");
                        break;
                    default:
                        Console.WriteLine("Niepoprawna opcja. Wybierz ponownie.");
                        break;
                }
            }
        }
    }
}
