// rea decompile_all
// name: FUN_10000a2ff
// address: 0x10000a2ff
// body: available
// range: 0x10000a2ff-0x10000a425 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_10000a2ff(long param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  char *pcVar6;
  undefined4 uVar7;
  undefined8 local_28;
  
  local_28 = 0;
  uVar7 = 8;
  if (*(int *)(param_1 + 400) == 1) {
    iVar2 = _IORegistryEntryCreateCFProperties
                      (param_2,&local_28,*(undefined8 *)PTR__kCFAllocatorDefault_10001c010,0);
    if (iVar2 == 0) {
      lVar5 = _CFDictionaryGetValue(local_28,&cf_Needcontiguousmemoryforisoch);
      if ((lVar5 == 0) || (cVar1 = _CFBooleanGetValue(lVar5), cVar1 == '\0')) {
        uVar7 = 1;
      }
      _CFRelease(local_28);
    }
    else {
      if (DAT_100021030 < 3) {
        return 8;
      }
      uVar3 = FUN_100008d22(param_1);
      uVar4 = FUN_100000d8c(iVar2);
      FUN_1000008d2(3,0,&cf__scouldn_tcreatepropertieson_s_error_s,"GetMaxOutstandingReads",uVar3,
                    uVar4);
      uVar7 = 8;
    }
  }
  if (6 < DAT_100021030) {
    uVar3 = FUN_100008d22(param_1);
    pcVar6 = "high";
    if (*(int *)(param_1 + 400) == 1) {
      pcVar6 = "full";
    }
    FUN_1000008d2(7,0,&cf__smaxoutstandingreadsfor_srunningat_sspeedis_u,"GetMaxOutstandingReads",
                  uVar3,pcVar6,uVar7);
  }
  return uVar7;
}

