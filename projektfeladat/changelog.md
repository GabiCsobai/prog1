Az 'alap' nevű program a DE-IK Bsc-MI 2.félév, Programozási nyelvek 1.(INBMM0211E) nevű tárgyához készült félévvégi projektfeladathoz készült dokumentacio.

A program célja:    - Létrehoz egy alap nevű forráskódot a parancsori argumentumként megadott nyelvben.
                    - Legalább 4 nyelvet kell tudnia kezelni, C, Bash, és 2 szabadon választható nyelvet.
                    - Legyen 3 kacsolója, egy help, egy verzió, és egy stdout(nem fájlt generál, hanem terminálba írja ki a forráskódot)
                    - "Ugyanazt a kódot NE ismételjük meg még egyszer! Pl. a C nyelv forráskódját, amit generálni akarunk, ne tároljuk el kétszer!"
                    - "A programunkban tárolt forráskódok legyenek könnyen módosíthatóak! Vagyis nem egyetlenegy sorba kellene belenyomni a komplett forráskódot!"

A program használata: Futtatáskor parancssori argumentumként meg kell adni a nyelvet vagy egy kapcsolót a következő módon: alap "nyelvazonosító" VAGY "kapcsoló".

1.lépés: Megtervezés

    Mivel a forráskódokat a forrásfájlon BELÜL kell eltárolni(nem lehet külön template fajlokat letrehozni), struktúraként szeretném a különböző nyelveket.(egyszerűbb bővítés, átláthatóság, gyorsaság)
    Minden lehetséges hibára külön hibaüzenet kiiratása(átláthatóság, egyszerű debugolás)
    Kapcsolók kezelése, mint parancssori argumentum

2.lépés: Megvalósítás

    1. Verzio 1.0.0 (Forráskódok létrehozása, nyelvek megadása)
        Négy különféle programozási nyelvet kell tudnia kezelni a programnak, én a C-t, a Bash-t, a JavaScript-et, és a Python-t választottam, mivel ezeket ismerem és ezekben már programoztam.
        Létrehoztam egy struktúrát, aminek az elemei a nyelv azonosítója(nyelv_id), a létrehozandó fájl neve(fnev) és a forráskód(sablon).
        Hozzáadtam a struktúra elemeihez tartozó értékeket
        A kiválasztandó nyelvet egy for ciklus segítségével keresem meg a fájlban ami a nyelvek számáig megy (i<4), ha megegyezik valamelyik nyelvvel létrehozza a fájlt.(strcmpvel hasonlítja össze a megadott argumentumot a struktura elemeivel)
    
    2.Verzio 1.0.1(Nyelvekkel kapcsolatos hibauzenetek kiirasa)
        stdlib.h headerállomány használata, azon belül is az stderr használata hibaüzenetekhez
        Ha nem talált megegyező nyelvet, akkor hibát ír.
        Ha az argumentumban nem szerepel érték, hibát ír. *c1
        Ha az argumentumban több mint 1 érték szerepel(a program nevén kívül) hibát ír. *c2
        
        
        
    3. Verzio 1.1.0 (Kapcsolók implementálása)
        A programnak tudnia kell 3 kapcsolót is kezelnie
        A kapcsolókat egy if függvény segítségével tesztelem, hogy a parancssori argumentumban megadott string az megegyezik-e valamelyik kapcsolónevemmel, ha nem, akkor továbbmegy a nyelv keresésére(strcmpvel hasonlítja össze a megadott argumentumot a kapcsolókkal)
        A --help kapcsolónak ki kell írnia egy rövid leírást, ezt egy void help() függvény segítségével oldottam meg
        A --version egy verziószámot írj ki, ezt egy globális változóban tárolom a könnyebb változtatás érdekében
        A --stdout kapcsoló nem hoz létre egy fájlt, hanem a parancsorba irja ki a forráskódot -> ezt tesztelem először
        *c1 A 2.pontban említett 0 argumentumos hívás esetén nem hibát ír mostmár, hanem a help eljárást futtatja.


    3. Verzio 1.1.1(Kapcsolókkal kapcsolatos hibaüzenetek)
        Ha az stdout kapcsolót használjuk az stdout_mode valtozot 1re allitom. Utána tesztelem a nyelveket egy id segítségével. Az id alapértéke -1, amit átállítok a megtalált nyelv indexére, ha talál nyelvet, ha nem, akkor hibaüzenetet dob. Ha talál nyelvet, megnézi az stdout_mode nevu valtozot, ha 1 akkor parancsorba irja a forrasfajlt, ha 0 akkor új fájlt hoz létre
        *c2 Ha az argumentumban 2 érték szerepl, és abból a második az --stdout, akkor nem ad hibát, ha máshogyan szerepl több érték hibát dob. 

    4. Verzio 1.1.2
        Ha a létrehozandó fájl már létezik, nem írja felül, hanem figyelmezteti a felhasználót(valószínüleg már létrehozta egyszer, érdemes átnevezni egyből a létrehozott fájt)
    