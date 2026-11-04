// name: _sqlite3_exec
// address: 1006cf014

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _sqlite3_exec(sqlite3 *param_1,char *sql,callback *callback,void *param_4,char **errmsg)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001006cf014. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*(code *)PTR__sqlite3_exec_10082c4f8)();
  return iVar1;
}

