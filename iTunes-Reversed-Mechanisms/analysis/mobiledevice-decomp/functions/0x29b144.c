// rea decompile_all
// name: _AMAuthInstallRembrandtMeasureBootImage
// address: 0x29b144
// body: available
// range: 0x29b144-0x29b23d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _AMAuthInstallRembrandtMeasureBootImage(long param_1,long param_2,long param_3,long param_4)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long local_38;
  
  local_38 = 0;
  iVar2 = 1;
  if (param_1 != 0) {
    lVar4 = 0;
    if ((((param_4 == 0) || (param_3 == 0)) || (param_2 == 0)) ||
       (lVar4 = 0, *(long *)(param_1 + 0x30) == 0)) goto LAB_0029b1fa;
    uVar1 = *(int *)(*(long *)(param_1 + 0x30) + 4) - 0x5e;
    if (10 < uVar1) {
LAB_0029b214:
      lVar4 = 0;
      _AMAuthInstallLog(3,"AMAuthInstallRembrandtMeasureBootImage","Unknown chipid");
      iVar2 = 99;
      goto LAB_0029b1fa;
    }
    if ((0x284U >> (uVar1 & 0x1f) & 1) == 0) {
      if ((0x401U >> (uVar1 & 0x1f) & 1) == 0) goto LAB_0029b214;
      uVar3 = _CFGetAllocator();
      iVar2 = _AMAuthInstallCryptoCreateDigestForData_SHA384(uVar3,param_2,&local_38);
    }
    else {
      uVar3 = _CFGetAllocator();
      iVar2 = _AMAuthInstallCryptoCreateDigestForData_SHA256(uVar3,param_2,&local_38);
    }
    lVar4 = local_38;
    if (iVar2 != 0) goto LAB_0029b1fa;
    iVar2 = 0;
    if (local_38 != 0) {
      _CFDictionarySetValue(param_3,param_4,local_38);
      lVar4 = local_38;
      goto LAB_0029b1fa;
    }
    iVar2 = 2;
  }
  lVar4 = 0;
LAB_0029b1fa:
  _SafeRelease(lVar4);
  return iVar2;
}

