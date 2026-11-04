// rea decompile_all
// name: _AMAuthInstallCryptoCopyRsaKey
// address: 0x28f09d
// body: available
// range: 0x28f09d-0x28f157 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _AMAuthInstallCryptoCopyRsaKey(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  uint uVar1;
  long lVar2;
  RSA *pRVar3;
  undefined8 uStack_40;
  undefined8 local_38;
  uchar *local_30;
  
  uVar1 = __AMAuthInstallCryptoGetKeyIdType(param_2);
  if (uVar1 < 4) {
    _AMAuthInstallLog(3,"AMAuthInstallCryptoCopyRsaKey","invalid keyid (%@)",param_2);
    uStack_40 = 1;
  }
  else {
    uStack_40 = _AMAuthInstallCryptoGetKeyData(param_1,param_2,&local_38);
    if ((int)uStack_40 == 0) {
      local_30 = (uchar *)_CFDataGetBytePtr(local_38);
      if (uVar1 < 8) {
        if ((uVar1 & 4) == 0) {
          pRVar3 = (RSA *)0x0;
        }
        else {
          lVar2 = _CFDataGetLength();
          pRVar3 = _d2i_RSAPublicKey((RSA **)0x0,&local_30,lVar2);
        }
      }
      else {
        lVar2 = _CFDataGetLength();
        pRVar3 = _d2i_RSAPrivateKey((RSA **)0x0,&local_30,lVar2);
      }
      *param_3 = pRVar3;
      uStack_40 = 0;
    }
  }
  return uStack_40;
}

