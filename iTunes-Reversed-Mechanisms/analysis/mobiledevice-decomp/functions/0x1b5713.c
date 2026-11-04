// rea decompile_all
// name: _AMAuthInstallUpdaterEmptyTicket
// address: 0x1b5713
// body: available
// range: 0x1b5713-0x1b5867 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_AMAuthInstallUpdaterEmptyTicket(long param_1,long param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  char *pcVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  
  if (param_1 == 0) {
    pcVar5 = "amai is NULL";
LAB_001b5832:
    lVar8 = 0;
  }
  else {
    if (param_2 == 0) {
      pcVar5 = "updater is NULL";
      goto LAB_001b5832;
    }
    if (param_4 == (long *)0x0) {
      pcVar5 = "response is NULL";
      goto LAB_001b5832;
    }
    lVar8 = 0;
    _AMAuthInstallLog(6,"AMAuthInstallUpdaterEmptyTicket",
                      "Updater library requested fake/empty ticket(s)");
    lVar2 = _CFDataCreate(*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,0,0);
    if (lVar2 == 0) {
      pcVar5 = "Failed to create data for empty manifest";
    }
    else {
      uVar3 = _CFGetAllocator(param_1);
      uVar7 = 0;
      lVar4 = _CFDictionaryCreateMutable
                        (uVar3,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                         PTR__kCFTypeDictionaryValueCallBacks_004411b8);
      *param_4 = lVar4;
      lVar8 = lVar2;
      if (lVar4 != 0) {
        lVar4 = _CFArrayGetCount(*(undefined8 *)(param_2 + 0x28));
        if (0 < lVar4) {
          lVar6 = 0;
          do {
            lVar1 = *param_4;
            uVar3 = _CFArrayGetValueAtIndex(*(undefined8 *)(param_2 + 0x28),lVar6);
            _CFDictionarySetValue(lVar1,uVar3,lVar2);
            lVar6 = lVar6 + 1;
          } while (lVar4 != lVar6);
          uVar7 = 0;
        }
        goto LAB_001b57ff;
      }
      pcVar5 = "Failed to create dictionary for response";
    }
  }
  _AMAuthInstallLog(3,"AMAuthInstallUpdaterEmptyTicket",pcVar5);
  uVar7 = 99;
LAB_001b57ff:
  _AMSupportSafeRelease(lVar8);
  return uVar7;
}

