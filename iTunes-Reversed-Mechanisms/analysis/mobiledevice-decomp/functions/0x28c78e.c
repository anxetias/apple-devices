// rea decompile_all
// name: __AMAuthInstallBundleGetValueForCondition
// address: 0x28c78e
// body: available
// range: 0x28c78e-0x28c83e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
__AMAuthInstallBundleGetValueForCondition
          (long param_1,long param_2,long param_3,undefined8 *param_4)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  long local_28;
  
  local_28 = 0;
  if (param_1 == 0) {
    return 1;
  }
  if (param_2 == 0) {
    return 1;
  }
  if (param_4 == (undefined8 *)0x0) {
    return 1;
  }
  iVar1 = __AMAuthInstallBundleGetValueForReservedKey(param_1,param_2,&local_28);
  if (iVar1 != 0) {
    uVar2 = __AMAuthInstallBundleGetDefaultResult(param_3);
    goto LAB_0028c82f;
  }
  lVar3 = _CFGetTypeID(local_28);
  lVar4 = _CFBooleanGetTypeID();
  if (lVar3 == lVar4) {
    puVar5 = (undefined8 *)PTR__kCFBooleanFalse_00441108;
    if (local_28 == param_3) {
LAB_0028c7f3:
      puVar5 = (undefined8 *)PTR__kCFBooleanTrue_00441110;
    }
  }
  else {
    lVar3 = _CFGetTypeID();
    lVar4 = _CFStringGetTypeID();
    if (lVar3 != lVar4) {
      uVar2 = 0;
      goto LAB_0028c82f;
    }
    lVar3 = _CFStringCompare(local_28,param_3,0);
    puVar5 = (undefined8 *)PTR__kCFBooleanFalse_00441108;
    if (lVar3 == 0) goto LAB_0028c7f3;
  }
  uVar2 = *puVar5;
LAB_0028c82f:
  *param_4 = uVar2;
  return 0;
}

