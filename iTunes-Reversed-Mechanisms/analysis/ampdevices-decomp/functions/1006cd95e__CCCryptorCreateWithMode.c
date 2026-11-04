// name: _CCCryptorCreateWithMode
// address: 1006cd95e

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CCCryptorStatus
_CCCryptorCreateWithMode
          (CCOperation op,CCMode mode,CCAlgorithm alg,CCPadding padding,void *iv,void *key,
          size_t keyLength,void *tweak,size_t tweakLength,int numRounds,CCModeOptions options,
          CCCryptorRef *cryptorRef)

{
  CCCryptorStatus CVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001006cd95e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CVar1 = (*(code *)PTR__CCCryptorCreateWithMode_10082ca58)();
  return CVar1;
}

