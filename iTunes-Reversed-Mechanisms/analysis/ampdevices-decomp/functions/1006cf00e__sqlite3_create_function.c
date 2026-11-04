// name: _sqlite3_create_function
// address: 1006cf00e

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _sqlite3_create_function
              (sqlite3 *db,char *zFunctionName,int nArg,int eTextRep,void *pApp,xFunc *xFunc,
              xStep *xStep,xFinal *xFinal)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001006cf00e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*(code *)PTR__sqlite3_create_function_10082c4f0)();
  return iVar1;
}

