// rea decompile_all
// name: _AMAuthInstallBundleFDRSupported
// address: 0x28d204
// body: available
// range: 0x28d204-0x28d315 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _AMAuthInstallBundleFDRSupported(long param_1,long param_2,long param_3,undefined1 *param_4)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 uVar6;
  undefined8 local_30;
  
  local_30 = 0;
  iVar2 = 1;
  if ((((param_1 != 0) && (param_4 != (undefined1 *)0x0)) && (param_3 != 0)) &&
     ((param_2 != 0 && (*(long *)(param_1 + 0x80) != 0)))) {
    lVar3 = *(long *)(*(long *)(param_1 + 0x80) + 0x20);
    if (lVar3 == 0) {
      iVar2 = _AMAuthInstallBundleCopyBuildIdentityForVariant(param_1,param_2,param_3,&local_30);
      if (iVar2 != 0) goto LAB_0028d2d8;
      lVar3 = *(long *)(*(long *)(param_1 + 0x80) + 0x20);
    }
    lVar3 = _CFDictionaryGetValue(lVar3,&cf_Info);
    iVar2 = 8;
    if ((lVar3 != 0) && (lVar3 = _CFDictionaryGetValue(lVar3,&cf_FDRSupport), lVar3 != 0)) {
      lVar4 = _CFGetTypeID(lVar3);
      lVar5 = _CFBooleanGetTypeID();
      iVar2 = 0;
      uVar6 = 0;
      if (lVar4 == lVar5) {
        cVar1 = _CFBooleanGetValue(lVar3);
        if (cVar1 == '\0') {
          uVar6 = 0;
        }
        else {
          _AMAuthInstallLog(6,"AMAuthInstallBundleFDRSupported","FDR is supported for this device");
          uVar6 = 1;
        }
      }
      *param_4 = uVar6;
    }
  }
LAB_0028d2d8:
  _SafeRelease(local_30);
  return iVar2;
}

