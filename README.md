Projektas: Studentų rūšiavimo sistema versijos aprašymai:

v0.1:
Pagrindinė studentų klasė ir rūšiavimo sistema.
Funkcionalumas leidžia rankiniu būdu įvesti studentų vardus, pavardes, namų darbų ir egzamino pažymius.
Studentai rūšiuojami į dvi kategorijas: „vargšiukai“ ir „kietiakiai“, atsižvelgiant į galutinį balą (vidurkį).
Rezultatai išvedami į atskirus failus.
Naudojamas konteineris: std::vector.

Gauti rezultatai:
Duomenų nuskaitymo, rūšiavimo ir rezultatų rašymo laikas padidėjo proporcingai didėjant duomenų kiekiui, ypač naudojant didesnius failus.


v0.2:
Įtraukta failų nuskaitymo funkcija, kad duomenys galėtų būti nuskaityti iš failų, o ne įvedami rankiniu būdu.
Studentai rūšiuojami į „vargšiukus“ ir „kietiakius“ pagal galutinį balą (vidurkį), kaip ir v0.1 versijoje.
Sukurtas mechanizmas, leidžiantis nuskaityti kelis studentų failus (1000, 10 000, 100 000 ir 1 000 000 įrašų).
Pridėta std::list ir std::deque palaikymas.

Gauti rezultatai:
Našumas naudojant std::vector buvo geriausias, std::list ir std::deque veikė lėčiau dėl iteracijos ir atminties valdymo ypatybių.


v1.0:
Optimizuota studentų rūšiavimo sistema naudojant std::partition algoritmą, kuris greičiau skirsto studentus į „vargšiukus“ ir „kietiakius“ vienu veiksmu.
Sumažintas rūšiavimo laikas, ypač dideliems failams (pvz., su 1 000 000 studentų įrašų).

Gauti rezultatai:
Rūšiavimo laikas naudojant std::partition buvo iki 3 kartų greitesnis nei ankstesnėse versijose.
Rašymo ir nuskaitymo laikas išliko beveik toks pat, nes šie procesai nėra tiesiogiai paveikiami rūšiavimo algoritmo optimizacijos.


Naudojimosi instrukcija

1. Pagrindiniai šaltinio failai:

manobib.h: Bendrosios bibliotekos ir bendri funkcionalumai.
studentas.h: Studentų klasės ir metodų deklaracijos.
studentas.cpp: Studentų klasės metodų įgyvendinimas.
V1.0.cpp: Pagrindinis programos failas, kuriame įgyvendintas optimizuotas rūšiavimo algoritmas.


2. Kompiliavimas ir paleidimas naudojant CMake:
Įsitikinkite, kad jūsų sistemoje įdiegtas CMake.
Sukurkite naują aplanką ir pereikite į jį.
Paleiskite CMake komandą, kad sugeneruotumėte projekto failus.
Sukompiliuokite projektą.
Paleiskite sugeneruotą vykdomąjį failą.

3. Failų įvedimas ir išvedimas:
Programa automatiškai nuskaitys iš nurodytų failų.
Sugeneruota išvestis bus išsaugota atskiruose failuose pagal kategorijas.

4. Našumo analizė:
Programa pateikia laiko matavimus duomenų nuskaitymui, rūšiavimui ir rašymui į failus, leidžiant atlikti našumo stebėjimą, naudojant įvairių dydžių duomenis.
