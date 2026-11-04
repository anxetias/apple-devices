// rea decompile_all
// name: _AMAuthInstallCryptoCreateDigestForDataOnlyKeySha384
// address: 0x28f6ba
// body: available
// range: 0x28f6ba-0x28f753 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_AMAuthInstallCryptoCreateDigestForDataOnlyKeySha384
          (undefined8 param_1,long param_2,undefined8 *param_3)

{
  int iVar1;
  long lVar2;
  uchar *md;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_30;
  
  uStack_30 = 1;
  lVar4 = 0;
  if ((param_2 != 0) && (param_3 != (undefined8 *)0x0)) {
    lVar2 = _CFDataCreateMutable(param_1,0x30);
    lVar4 = 0;
    if (lVar2 == 0) {
      uStack_30 = 2;
    }
    else {
      _CFDataSetLength(lVar2,0x30);
      lVar4 = _CFDataGetBytePtr(param_2);
      iVar1 = _CFDataGetLength(param_2);
      md = (uchar *)_CFDataGetMutableBytePtr(lVar2);
      _CC_SHA384((void *)(lVar4 + 0x17),iVar1 - 0x17,md);
      uVar3 = _CFRetain(lVar2);
      *param_3 = uVar3;
      uStack_30 = 0;
      lVar4 = lVar2;
    }
  }
  _SafeRelease(lVar4);
  return uStack_30;
}

