// name: _CCCryptorUpdate
// address: 1006cd976

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CCCryptorStatus
_CCCryptorUpdate(CCCryptorRef cryptorRef,void *dataIn,size_t dataInLength,void *dataOut,
                size_t dataOutAvailable,size_t *dataOutMoved)

{
  CCCryptorStatus CVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001006cd976. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CVar1 = (*(code *)PTR__CCCryptorUpdate_10082ca78)();
  return CVar1;
}

