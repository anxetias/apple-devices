// rea decompile_all
// name: _AMAuthInstallCryptoCreateDigestForKey_SHA384
// address: 0x28f508
// body: available
// range: 0x28f508-0x28f594 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _AMAuthInstallCryptoCreateDigestForKey_SHA384(long param_1,long param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_30;
  undefined8 local_28;
  
  local_28 = 0;
  uVar2 = 0;
  iVar1 = 1;
  if (((param_1 != 0) && (param_2 != 0)) && (param_3 != (undefined8 *)0x0)) {
    iVar1 = _AMAuthInstallCryptoGetKeyData(param_1,param_2,&local_30);
    if (iVar1 == 0) {
      uVar2 = _CFGetAllocator(param_1);
      iVar1 = _AMAuthInstallCryptoCreateDigestForData_SHA384(uVar2,local_30,&local_28);
      uVar2 = local_28;
      if (iVar1 == 0) {
        uVar2 = _CFRetain(local_28);
        *param_3 = uVar2;
        iVar1 = 0;
        uVar2 = local_28;
      }
    }
    else {
      uVar2 = 0;
    }
  }
  _SafeRelease(uVar2);
  return iVar1;
}

