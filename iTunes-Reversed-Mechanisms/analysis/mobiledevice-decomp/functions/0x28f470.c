// rea decompile_all
// name: _AMAuthInstallCryptoCreateDigestForData_SHA256
// address: 0x28f470
// body: available
// range: 0x28f470-0x28f507 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_AMAuthInstallCryptoCreateDigestForData_SHA256(undefined8 param_1,long param_2,undefined8 *param_3)

{
  CC_LONG len;
  long lVar1;
  void *data;
  uchar *md;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_30;
  
  uStack_30 = 1;
  lVar3 = 0;
  if ((param_2 != 0) && (param_3 != (undefined8 *)0x0)) {
    lVar1 = _CFDataCreateMutable(param_1,0x20);
    lVar3 = 0;
    if (lVar1 == 0) {
      uStack_30 = 2;
    }
    else {
      _CFDataSetLength(lVar1,0x20);
      data = (void *)_CFDataGetBytePtr(param_2);
      len = _CFDataGetLength(param_2);
      md = (uchar *)_CFDataGetMutableBytePtr(lVar1);
      _CC_SHA256(data,len,md);
      uVar2 = _CFRetain(lVar1);
      *param_3 = uVar2;
      uStack_30 = 0;
      lVar3 = lVar1;
    }
  }
  _SafeRelease(lVar3);
  return uStack_30;
}

