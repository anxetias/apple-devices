// name: _usleep
// address: 1006cf158

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _usleep(useconds_t param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001006cf158. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*(code *)PTR__usleep_10082d298)();
  return iVar1;
}

