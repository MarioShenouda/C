#include <iostream>
#include <windows.h>
#include <string>
#include <sql.h>
#include <sqltypes.h>
#include <sqlext.h>
using namespace std;

int main()
{
    clock_t start = clock();

    SQLHANDLE sqlevent, sqlconnection, sqlstatement;

    if(SQL_SUCCESS != SQLAllocHandle(SQL_HANDLE_ENV, SQL_NULL_HANDLE, &sqlevent))
    {
        cout<<"The sqlevent has failed to be created."<<endl;
        system("pause");
        return;
    }


    if(SQL_SUCCESS != SQLSetEnvAttr(sqlevent, SQL_ATTR_ODBC_VERSION, (SQLPOINTER)SQL_OV_ODBC3, 0))
    {
        cout<<"The sqlevent has failed to be initialized."<<endl;
        system("pause");
       return;
    }

    if(SQL_SUCCESS != SQLAllocHandle(SQL_HANDLE_DBC, sqlevent, &sqlconnection))
    {
        cout<<"The sqlconnection has failed to be created."<<endl;
        system("pause");
        return;
    }

    SQLCHAR retstring[10000];
    SQLDriverConnect(sqlconnection, NULL, (SQLCHAR*)("DRIVER={SQL Server Native Client 10.0};SERVER=DATASERVER;DATABASE=DATABASE;UID=CrystalReports;PWD=PASSWORD"), SQL_NTS, retstring, 10000, NULL, SQL_DRIVER_NOPROMPT);

    if(SQL_SUCCESS != SQLAllocHandle(SQL_HANDLE_STMT, sqlconnection, &sqlstatement))
    {
        cout<<"The sqlstatement has failed to be created."<<endl;
        system("pause");
        return;
    }

    string commandline;

    commandline = "CREATE TABLE NEW_TABLE ( ID VARCHAR(10), AGE FLOAT) GO ";

    if(SQL_SUCCESS != SQLExecDirect(sqlstatement, (SQLCHAR*)(commandline.c_str()), SQL_NTS))
    {
        cout<<"The create table sql command has failed to excute."<<endl;
        system("pause");
        return;
    }

    commandline = "BULK INSERT NEW_TABLE FROM 'C:/temp/datafile.csv' WITH ( FIELDTERMINATOR = ',', ROWTERMINATOR = '\n') GO";

    if(SQL_SUCCESS != SQLExecDirect(sqlstatement, (SQLCHAR*)(commandline.c_str()), SQL_NTS))
    {
        cout<<"The import sql command has failed to excute."<<endl;
        system("pause");
        return;
    }

    clock_t end = clock();

    cout<<"Import from .csv file to SQL Server costs "<<((end-start)/double(CLOCKS_PER_SEC))<<" seconds."<<endl;

    system("pause");

    return 0;

}
