// name: _CCCryptorReset
// address: 1006cd970

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CCCryptorStatus _CCCryptorReset(CCCryptorRef cryptorRef,void *iv)

{
  CCCryptorStatus CVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001006cd970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CVar1 = (*(code *)PTR__CCCryptorReset_10082ca70)();
  return CVar1;
}

