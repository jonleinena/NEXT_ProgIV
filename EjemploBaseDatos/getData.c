#include "./sqlite/sqlite3.h"
#include "createConnection.h"
#include <stdio.h>
#include "getData.h"
#include <string.h>
#include <stdlib.h>

char *getName(char *id)
{

    int rc;
    char *err_msg = 0;
    sqlite3_stmt *res;
    char *nombre;
    nombre = (char *)malloc(5 * sizeof(char));

    char *sql = "SELECT * FROM USUARIO WHERE ID = ?";

    rc = sqlite3_prepare_v2(db, sql, -1, &res, 0);

    if (rc == SQLITE_OK)
    {
        sqlite3_bind_text(res, 1, id, sizeof(*id), SQLITE_STATIC); // Le pasamos el (strlen(id)-1) para que ignore el /0 del id, si no no funciona
    }
    else
    {
        fprintf(stderr, "Failed to execute statement: %s\n", sqlite3_errmsg(db));
    }

    int step = sqlite3_step(res);

    if (step == SQLITE_ROW)
    {

        strcpy(nombre, (const char *)sqlite3_column_text(res, 0));

        // guardamos la información
    }
    else
    {
        printf("No results found");
    }

    return nombre;
}
