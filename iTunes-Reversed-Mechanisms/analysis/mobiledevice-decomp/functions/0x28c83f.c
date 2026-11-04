// rea decompile_all
// name: __AMAuthInstallBundleGetValueForAction
// address: 0x28c83f
// body: available
// range: 0x28c83f-0x28c8ad inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
__AMAuthInstallBundleGetValueForAction
          (long param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 local_30;
  
  local_30 = 0;
  uVar4 = 1;
  if (((param_1 != 0) && (param_2 != 0)) && (param_4 != (undefined8 *)0x0)) {
    lVar2 = _CFGetTypeID(param_3);
    lVar3 = _CFStringGetTypeID();
    if (lVar2 == lVar3) {
      iVar1 = __AMAuthInstallBundleGetValueForReservedKey(param_1,param_3,&local_30);
      if (iVar1 == 0) {
        param_3 = local_30;
      }
    }
    *param_4 = param_3;
    uVar4 = 0;
  }
  return uVar4;
}

