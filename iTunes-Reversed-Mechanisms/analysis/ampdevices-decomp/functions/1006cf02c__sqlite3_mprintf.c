// name: _sqlite3_mprintf
// address: 1006cf02c

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * _sqlite3_mprintf(char *param_1,...)

{
  char *pcVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001006cf02c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pcVar1 = (char *)(*(code *)PTR__sqlite3_mprintf_10082c518)();
  return pcVar1;
}

