// rea decompile_all
// name: __CanaryLocalSign
// address: 0x1b74a3
// body: available
// range: 0x1b74a3-0x1b7667 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 __CanaryLocalSign(long param_1,long param_2,long param_3,long *param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  char *pcVar5;
  long lVar6;
  undefined1 local_31;
  
  if (param_1 == 0) {
    pcVar5 = "amai is NULL";
  }
  else if (param_2 == 0) {
    pcVar5 = "updater is NULL";
  }
  else if (param_3 == 0) {
    pcVar5 = "request is NULL";
  }
  else if (param_4 == (long *)0x0) {
    pcVar5 = "response is NULL";
  }
  else {
    _AMAuthInstallLog(8,"_CanaryLocalSign","Test updater requested fake/empty ticket(s)");
    uVar2 = _CFGetAllocator(param_1);
    lVar3 = _CFDictionaryCreateMutable
                      (uVar2,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                       PTR__kCFTypeDictionaryValueCallBacks_004411b8);
    *param_4 = lVar3;
    if (lVar3 == 0) {
      pcVar5 = "Failed to create dictionary for response";
    }
    else {
      lVar3 = _CFDictionaryGetValue(param_3,&cf_QueryLoop0);
      if (lVar3 == 0) {
        pcVar5 = "QueryLoop0 not in request";
      }
      else {
        uVar2 = _CFGetAllocator(param_1);
        lVar4 = _CFDataCreateMutable(uVar2,0);
        if (lVar4 != 0) {
          local_31 = 0;
          if (lVar3 == *(long *)PTR__kCFBooleanTrue_00441110) {
            local_31 = 1;
          }
          else if (lVar3 == *(long *)PTR__kCFBooleanFalse_00441108) {
            local_31 = 2;
          }
          _CFDataAppendBytes(lVar4,&local_31,1);
          _CFDataAppendBytes(lVar4,&local_31,1);
          _CFDataAppendBytes(lVar4,&local_31,1);
          _CFDataAppendBytes(lVar4,&local_31,1);
          lVar3 = _CFArrayGetCount(*(undefined8 *)(param_2 + 0x28));
          if (0 < lVar3) {
            lVar6 = 0;
            do {
              lVar1 = *param_4;
              uVar2 = _CFArrayGetValueAtIndex(*(undefined8 *)(param_2 + 0x28),lVar6);
              _CFDictionarySetValue(lVar1,uVar2,lVar4);
              lVar6 = lVar6 + 1;
            } while (lVar3 != lVar6);
          }
          return 0;
        }
        pcVar5 = "fakeTicket is NULL";
      }
    }
  }
  __CanaryLocalSign_cold_1(pcVar5);
  return 99;
}

