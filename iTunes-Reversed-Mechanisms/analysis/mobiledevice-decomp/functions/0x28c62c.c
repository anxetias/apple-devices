// rea decompile_all
// name: __AMAuthInstallBundleGetValueForReservedKey
// address: 0x28c62c
// body: available
// range: 0x28c62c-0x28c78d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
__AMAuthInstallBundleGetValueForReservedKey(long param_1,long param_2,undefined8 *param_3)

{
  char cVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  if (param_1 == 0) {
    return 1;
  }
  if (param_3 == (undefined8 *)0x0) {
    return 1;
  }
  if (param_2 == 0) {
    return 1;
  }
  if (*(long *)(param_1 + 0x10) == 0) {
    return 1;
  }
  lVar2 = _CFStringCompare(param_2,&cf_ApRawProductionMode,0);
  if (lVar2 == 0) {
    cVar1 = *(char *)(*(long *)(param_1 + 0x10) + 0x14);
  }
  else {
    lVar2 = _CFStringCompare(param_2,&cf_ApRawSecurityMode,0);
    if (lVar2 == 0) {
      cVar1 = *(char *)(*(long *)(param_1 + 0x10) + 0x48);
    }
    else {
      lVar2 = _CFStringCompare(param_2,&cf_ApInRomDFU,0);
      if (lVar2 == 0) {
        cVar1 = *(char *)(*(long *)(param_1 + 0x10) + 0x50);
      }
      else {
        lVar2 = _CFStringCompare(param_2,&cf_ApCurrentSecurityMode,0);
        if (lVar2 == 0) {
          cVar1 = *(char *)(*(long *)(param_1 + 0x10) + 0x52);
        }
        else {
          lVar2 = _CFStringCompare(param_2,&cf_ApCurrentProductionMode,0);
          if (lVar2 == 0) {
            cVar1 = *(char *)(*(long *)(param_1 + 0x10) + 0x51);
          }
          else {
            lVar2 = _CFStringCompare(param_2,&cf_ApRequiresImage4,0);
            if (lVar2 != 0) {
              lVar2 = _CFStringCompare(param_2,&cf_ApDemotionPolicyOverride,0);
              if (lVar2 != 0) {
                return 8;
              }
              uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x58);
              goto LAB_0028c742;
            }
            cVar1 = _AMAuthInstallApIsImg4(param_1);
          }
        }
      }
    }
  }
  puVar3 = (undefined8 *)PTR__kCFBooleanFalse_00441108;
  if (cVar1 != '\0') {
    puVar3 = (undefined8 *)PTR__kCFBooleanTrue_00441110;
  }
  uVar4 = *puVar3;
LAB_0028c742:
  *param_3 = uVar4;
  return 0;
}

