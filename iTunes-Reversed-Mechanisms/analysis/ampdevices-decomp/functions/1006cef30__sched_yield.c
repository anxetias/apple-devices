// name: _sched_yield
// address: 1006cef30

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _sched_yield(void)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001006cef30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*(code *)PTR__sched_yield_10082d140)();
  return iVar1;
}

