// rea decompile_all
// name: _AMAuthInstallBundleFDRBasebandSupported
// address: 0x28d316
// body: available
// range: 0x28d316-0x28d3e1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _AMAuthInstallBundleFDRBasebandSupported
              (long param_1,long param_2,long param_3,undefined1 *param_4)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  long lVar4;
  undefined8 local_30;
  undefined4 local_28;
  undefined1 local_21;
  
  local_30 = 0;
  local_21 = 0;
  iVar3 = 1;
  if ((((param_1 == 0) || (param_4 == (undefined1 *)0x0)) || (param_3 == 0)) ||
     ((param_2 == 0 || (*(long *)(param_1 + 0x80) == 0)))) goto LAB_0028d3a2;
  lVar4 = *(long *)(*(long *)(param_1 + 0x80) + 0x20);
  if (lVar4 == 0) {
    iVar3 = _AMAuthInstallBundleCopyBuildIdentityForVariant(param_1,param_2,param_3,&local_30);
    if (iVar3 != 0) goto LAB_0028d3a2;
    lVar4 = *(long *)(*(long *)(param_1 + 0x80) + 0x20);
    if (lVar4 == 0) {
      iVar3 = 0xe;
      goto LAB_0028d3a2;
    }
  }
  lVar4 = _CFDictionaryGetValue(lVar4,&cf_BbChipID);
  if (lVar4 == 0) {
    uVar2 = 0;
  }
  else {
    cVar1 = __CFStringToUInt32(lVar4,&local_28);
    if (cVar1 == '\0') {
      iVar3 = 3;
      goto LAB_0028d3a2;
    }
    iVar3 = _AMAuthInstallBasebandSupportsFDR(local_28,&local_21);
    uVar2 = local_21;
    if (iVar3 != 0) goto LAB_0028d3a2;
  }
  *param_4 = uVar2;
  iVar3 = 0;
LAB_0028d3a2:
  _SafeRelease(local_30);
  return iVar3;
}

