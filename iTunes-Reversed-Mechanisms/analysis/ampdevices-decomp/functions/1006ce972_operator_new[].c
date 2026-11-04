// name: operator.new[]
// address: 1006ce972

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* operator new[](unsigned long) */

void * operator_new__(ulong param_1)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001006ce972. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = (void *)(*(code *)PTR_operator_new___10082e9c8)();
  return pvVar1;
}

