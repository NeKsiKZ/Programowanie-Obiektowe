using System;

namespace kartoteka
{
    public class Osoba
    {
        public string Imie { get; set; }
        public string Nazwisko { get; set; }

        public Osoba(string imie, string nazwisko)
        {
            Imie = imie;
            Nazwisko = nazwisko;
        }

        public override bool Equals(object obj)
        {
            if (obj == null || GetType() != obj.GetType())
            {
                return false;
            }

            Osoba osoba = (Osoba)obj;
            return Imie == osoba.Imie && Nazwisko == osoba.Nazwisko;
        }

        public override int GetHashCode()
        {
            return HashCode.Combine(Imie, Nazwisko);
        }

        public override string ToString()
        {
            return $"Osoba: {Imie} {Nazwisko}";
        }
    }
}
