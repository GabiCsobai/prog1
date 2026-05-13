#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

//Legujabb verzio

#define VERSION "0.1.4"

typedef struct {
    char *nyelv_id;
    char *leiras;
    char *fnev;
    char *sablon;
} Alap;

const Alap adatbazis[] = {
    {
        "c",
        "C forraskod",
        "main.c",
        "#include <stdio.h>\n"
        "\n"
        "int main() {\n"
        "    printf(\"Hello World\\n\");\n"
        "    return 0;\n"
        "}\n"
    },
    {
        "py",
        "Python forraskod",
        "main.py",
        "def main():\n"
        "    print(\"Hello World\")\n"
        "\n"
        "if __name__ == \"__main__\":\n"
        "    main()\n"
    },
    {
        "js",
        "Javascript forraskod",
        "main.js",
        "console.log('Hello World');\n"
    },
    {
        "sh",
        "Bash forraskod",
        "main.sh",
        "#!/bin/bash\n"
        "\n"
        "echo 'Hello World'\n"
    }
};

int nyelvek_szama = sizeof(adatbazis) / sizeof(adatbazis[0]);

void help() {
    printf("alap v%s\n\nHasznalat: ./a.out <nyelv_id> [--stdout](opcionalis) | [-v | --version] [-h | --help]\n\n", VERSION);
    printf("Hasznalhato kapcsolok:\n");
    printf("  -h, --help      Rovid leiras a programban megadhato kapcsolokrol es nyelvekrol\n");
    printf("  -v, --version   Aktualis verzioszam\n");
    printf("  --stdout        Fajl letrehozasa nelkul kiirja a sablon forraskodot a konzolra\n\n");
    printf("Tamogatott nyelvek:\n");
    for (int i = 0; i < nyelvek_szama; i++) {
        printf("  %-10s - %s [%s]\n", adatbazis[i].nyelv_id, adatbazis[i].leiras, adatbazis[i].fnev);
    }
}

int main(int argc, char *argv[]) {

    if (argc < 2 || strcmp(argv[1], "-h") == 0 || strcmp(argv[1], "--help") == 0) {
        help();
        return 0;
    }

    if (strcmp(argv[1], "-v") == 0 || strcmp(argv[1], "--version") == 0) {
        printf("Az alap program verzioja: %s\n", VERSION);
        return 0;
    }

    int stdout_mode = (argc == 3 && strcmp(argv[2], "--stdout") == 0);
    int id = -1;

    if (argc > 2 && stdout_mode != 1) {
        fprintf(stderr, "Hiba! Maximum 2 argumentumot lehet megadni, es a masodik csak az '--stdout' lehet!");
        exit(1);
    }

    for (int i = 0; i < nyelvek_szama; i++) {
        if (strcmp(argv[1], adatbazis[i].nyelv_id) == 0) {
            id = i;
            break;
        }
    }

    if (id == -1) {
        fprintf(stderr,"Hiba! nem tamogatott nyelv vagy kapcsolo: '%s'. Hasznald a --help vagy -h kapcsolokat a tamogatott nyelvek és kapcsolok listajahoz!\n", argv[1]);
        exit(2);
    }

    if (stdout_mode) {
        printf("%s", adatbazis[id].sablon);
    } else {
        if (access(adatbazis[id].fnev, F_OK) == 0) {
            fprintf(stderr,"Hiba: A fajl mar letezik: '%s'\n", adatbazis[id].fnev);
            exit(3);
        }

        FILE *fajl = fopen(adatbazis[id].fnev, "w");
        if (fajl) {
            fprintf(fajl, "%s", adatbazis[id].sablon);
            fclose(fajl);
            printf("# '%s' sikeresen letrehozva\n", adatbazis[id].fnev);
        } else {
            fprintf(stderr,"Hiba tortent a fajl letrehozasakor!");
            exit(4);
        }
    }

    return 0;
}