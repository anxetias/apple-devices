// name: operator.new
// address: 1006ce97e

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* operator new(unsigned long) */

void * operator_new(ulong param_1)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001006ce97e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = (void *)(*(code *)PTR_operator_new_10082e9d8)();
  return pvVar1;
}

