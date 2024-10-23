# SP-SD1

V1.0
Išvados apie konteinerių našumą:
std::vector:

Greičiausias duomenų nuskaitymui, rūšiavimui ir išvedimui. Jis efektyviai valdo didelius duomenų kiekius ir turi gerą našumą, kai elementai dažniausiai pridedami arba pašalinami gale.
Trūkumas: Prastai tinka dažniems įterpimams ar pašalinimams iš vidurio ar pradžios.
std::list:

Lėtesnis už vector dėl lėtos iteracijos per sąrašą ir didesnės atminties sąnaudų.
Geriau tinka, kai reikia dažnai pridėti/šalinti elementus bet kurioje sąrašo vietoje, tačiau rūšiavimas bus lėtesnis.
std::deque:

Kompromisas tarp vector ir list. Greitas pridėjimas/prieiga prie pradžios ir galo, bet vidurinė prieiga ir rūšiavimas yra lėtesni nei vector.
Tinkamas pasirinkimas, kai reikia efektyviai valdyti elementus abiejuose galuose, bet ne viduryje.
Rezultatas: std::vector yra optimalus sprendimas greitam duomenų valdymui ir rūšiavimui jūsų scenarijuje.
