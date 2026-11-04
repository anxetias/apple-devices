// name: _rand
// address: 1006ceeee

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _rand(void)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001006ceeee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*(code *)PTR__rand_10082d0e8)();
  return iVar1;
}

