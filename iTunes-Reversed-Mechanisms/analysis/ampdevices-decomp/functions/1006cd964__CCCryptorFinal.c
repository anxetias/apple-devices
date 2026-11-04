// name: _CCCryptorFinal
// address: 1006cd964

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CCCryptorStatus
_CCCryptorFinal(CCCryptorRef cryptorRef,void *dataOut,size_t dataOutAvailable,size_t *dataOutMoved)

{
  CCCryptorStatus CVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001006cd964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CVar1 = (*(code *)PTR__CCCryptorFinal_10082ca60)();
  return CVar1;
}

