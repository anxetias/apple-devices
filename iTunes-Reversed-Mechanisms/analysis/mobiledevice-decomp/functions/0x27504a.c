// rea decompile_all
// name: _AMAuthInstallApCreateMeasurementsWithTag
// address: 0x27504a
// body: available
// range: 0x27504a-0x275181 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _AMAuthInstallApCreateMeasurementsWithTag
              (long param_1,long param_2,undefined8 param_3,undefined4 param_4,undefined1 param_5,
              int param_6,long *param_7)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 local_40;
  undefined8 local_38;
  
  local_38 = 0;
  iVar2 = 1;
  if (param_1 != 0) {
    uVar3 = 0;
    if (((param_7 == (long *)0x0) || (param_2 == 0)) || (*(long *)(param_1 + 0x10) == 0))
    goto LAB_00275165;
    if (param_6 == 2) {
      uVar3 = _CFGetAllocator(param_1);
      iVar2 = _AMAuthInstallApFtabCreateMeasurementsWithTag(uVar3,param_2,param_3,param_4,param_7);
    }
    else {
      if (param_6 == 1) {
        local_40 = 0;
        uVar3 = _CFGetAllocator(param_1);
        iVar2 = _AMAuthInstallSupportCopyTagAndFileURL(uVar3,param_2,0,&local_38);
        uVar3 = local_38;
        if (iVar2 == 0) {
          lVar4 = _AMAuthInstallApMeasureBinary(local_38,0x100000,param_4,&local_40);
          *param_7 = lVar4;
          uVar3 = local_38;
          iVar2 = 0;
          if (lVar4 == 0) {
            iVar2 = _CFErrorGetCode(local_40);
            uVar3 = local_38;
          }
        }
        goto LAB_00275165;
      }
      cVar1 = *(char *)(*(long *)(param_1 + 0x10) + 0x60);
      uVar3 = _CFGetAllocator(param_1);
      if (cVar1 == '\0') {
        iVar2 = _AMAuthInstallApImg3CreateMeasurementsFromURL(uVar3,param_2,param_7,param_5);
      }
      else {
        iVar2 = _AMAuthInstallApImg4CreateMeasurementsWithTag(uVar3,param_2,param_3,param_4,param_7)
        ;
      }
    }
  }
  uVar3 = 0;
LAB_00275165:
  _AMSupportSafeRelease(uVar3);
  return iVar2;
}

