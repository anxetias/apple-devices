// name: _sqlite3_open_v2
// address: 1006cf032

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _sqlite3_open_v2(char *filename,sqlite3 **ppDb,int flags,char *zVfs)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001006cf032. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*(code *)PTR__sqlite3_open_v2_10082c520)();
  return iVar1;
}

