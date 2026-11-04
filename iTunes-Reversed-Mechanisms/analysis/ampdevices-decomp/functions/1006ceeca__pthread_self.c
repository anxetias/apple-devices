// name: _pthread_self
// address: 1006ceeca

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

pthread_t _pthread_self(void)

{
  pthread_t p_Var1;
  
                    /* WARNING: Could not recover jumptable at 0x0001006ceeca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  p_Var1 = (pthread_t)(*(code *)PTR__pthread_self_10082d0b8)();
  return p_Var1;
}

