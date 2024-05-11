using System.Collections.Generic;
using kartoteka;

namespace kartoteka.impl
{
    public class Kartoteka
    {
        private List<Osoba> listaOsob;

        public Kartoteka()
        {
            listaOsob = new List<Osoba>();
        }

        public void Dodaj(Osoba osoba)
        {
            listaOsob.Add(osoba);
        }

        public void Usun(Osoba osoba)
        {
            listaOsob.Remove(osoba);
        }

        public int Rozmiar()
        {
            return listaOsob.Count;
        }

        public bool CzyZawiera(Osoba osoba)
        {
            return listaOsob.Contains(osoba);
        }

        public Osoba Pobierz()
        {
            if (listaOsob.Count > 0)
                return listaOsob[0];
            else
                return null;
        }
    }
}
