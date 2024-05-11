using kartoteka;

namespace kartoteka.mockup
{
    public class Kartoteka
    {
        public void Dodaj(Osoba osoba)
        {
            // Pusta implementacja
        }

        public void Usun(Osoba osoba)
        {
            // Pusta implementacja
        }

        public int Rozmiar()
        {
            return 1;
        }

        public bool CzyZawiera(Osoba osoba)
        {
            return true;
        }

        public Osoba Pobierz()
        {
            return new Osoba("Gall", "Anonim");
        }
    }
}
