// name: operator.new[]
// address: 1006ce978

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* operator new[](unsigned long, std::nothrow_t const&) */

void * operator_new__(ulong param_1,nothrow_t *param_2)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001006ce978. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = (void *)(*(code *)PTR_operator_new___10082e9d0)();
  return pvVar1;
}

