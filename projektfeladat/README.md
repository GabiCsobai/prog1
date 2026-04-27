Az 'alap' nevű program a DE-IK Bsc-MI 2.félév, Programozási nyelvek 1.(INBMM0211E) nevű tárgyához készült félévvégi projektfeladat.

A program célja:    - Létrehoz egy alap nevű forráskódot a parancsori argumentumként megadott nyelvben.
                    - Legalább 4 nyelvet kell tudnia kezelni, C, Bash, és 2 szabadon választható nyelvet.
                    - Legyen 3 kacsolója, egy help, egy verzió, és egy stdout(nem fájlt generál, hanem terminálba írja ki a forráskódot)
                    - "Ugyanazt a kódot NE ismételjük meg még egyszer! Pl. a C nyelv forráskódját, amit generálni akarunk, ne tároljuk el kétszer!"
                    - "A programunkban tárolt forráskódok legyenek könnyen módosíthatóak! Vagyis nem egyetlenegy sorba kellene belenyomni a komplett forráskódot!"

A program használata: Futtatáskor parancssori argumentumként meg kell adni a nyelvet vagy egy kapcsolót a következő módon: alap nyelvazonosító VAGY kapcsoló

Jelenleg támogatott nyelvek:
c  : C forraskod, main.c; 
py : Python forraskod, main.py; 
js : JavaScript forraskod, main.js; 
sh : Bash forraskod, main.sh; 

Használható kapcsolók:
-h, --help    : Rovid leiras a programban megadhato kapcsolokrol es nyelvekrol
-v, --version : Aktualis verzioszam
--stdout      : Fajl letrehozasa nelkul kiirja a sablon forraskodot a konzolra


