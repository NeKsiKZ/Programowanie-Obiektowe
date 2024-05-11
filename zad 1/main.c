#include <stdio.h>
#include <stdlib.h>

/*init - przygotowanie stosu do pracy
destroy - "posprz¹tanie" po stosie
push - po³o¿enie na wierzcho³ku stosu liczby - parametru
pop - zdjêcie z wierzcho³ka stosu liczby (tzn. liczby ostatnio po³o¿onej)
top - odczytanie z wierzcho³ka stosu liczby (tzn. liczby ostatnio po³o¿onej)
empty - sprawdzenie, czy stos jest pusty
full - sprawdzenie, czy stos jest pe³ny*/

struct stos {
    int *zawartosc;
    int index;
    int rozmiar;
};

void init(struct stos *s, unsigned int rozmiar)
{
    s->zawartosc = malloc(rozmiar * sizeof(int));
    s->rozmiar = rozmiar;
    s->index = 0;
}

void destroy(struct stos *s)
{
    free(s->zawartosc);
}

void push(struct stos *s, int v)
{
    if(s->index < s->rozmiar) {
        s->zawartosc[s->index] = v;
        s->index = s->index + 1;
    }
}

void pop(struct stos *s)
{
    if(s->index > 0)
    {
        s->index = s->index - 1;
    }
}

int top(struct stos *s)
{
    if(s->index > 0)
    {
        return s->zawartosc[s->index - 1];
    }
}

int empty(struct stos *s)
{
    if(s->index == 0)
    {
        return 1;
    }
    else
        return 0;
}

int full(struct stos *s)
{
    if(s->index == s->rozmiar)
    {
        return 1;
    }
    else
        return 0;
}

int liczba()
{
    return rand()%10+1;
}

int main()
{
    time_t t;
    srand((unsigned) time(&t));

    struct stos s;
    struct stos *s2;
    init(&s, 5);

    s2 = malloc(sizeof(struct stos));
    init(s2, 7);

    push(&s, 5);
    push(&s, 6);
    push(&s, 7);
    push(&s, 8);
    push(&s, 9);

    pop(&s);
    pop(&s);
    pop(&s);

    /*printf("%d\n", top(&s));

    if(empty(&s))
    {
        printf("stos jest pusty\n");
    } else
        printf("stos jest zajety\n");

    if(full(&s))
    {
        printf("stos jest pełny\n");
    } else
        printf("w stosie jest miejsce\n");*/

    destroy(s2);
    free(s2);
    destroy(&s);


    struct stos *d;
    d = malloc(sizeof(struct stos));
    init(d, liczba());

    for(int i=0; i < d->rozmiar; i++)
    {
        push(d, liczba());
        printf("%d\n", top(d));
    }

    while(!empty(d))
    {
        printf("%d\n", top(d));
        pop(d);
    }

    destroy(d);
    free(d);

    return 0;
}
