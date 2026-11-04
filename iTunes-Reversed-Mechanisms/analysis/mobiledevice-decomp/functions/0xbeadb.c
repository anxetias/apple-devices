// rea decompile_all
// name: _MISProvisioningProfileIncludesPlatform
// address: 0xbeadb
// body: available
// range: 0xbeadb-0xbec2f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1
_MISProvisioningProfileIncludesPlatform(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined2 local_48 [8];
  undefined2 local_38 [4];
  
  lVar2 = _MISProfileGetValue(param_1,&cf_Platform);
  if (lVar2 != 0) {
    lVar3 = _CFGetTypeID(lVar2);
    lVar4 = _CFArrayGetTypeID();
    if (lVar3 == lVar4) {
      lVar3 = _CFArrayGetCount(lVar2);
      if (lVar3 < 1) {
        param_3 = 0;
      }
      else {
        param_3 = true;
        lVar4 = 0;
        do {
          lVar5 = _CFArrayGetValueAtIndex(lVar2,lVar4);
          if (lVar5 == 0) {
LAB_000beb7f:
            uVar8 = _MISGetLog();
            cVar1 = _os_log_type_enabled(uVar8,0);
            if (cVar1 != '\0') {
              local_38[0] = 0;
              __os_log_impl(0,uVar8,0,"Encountered a null or non-string platform identifier.",
                            local_38,2);
            }
          }
          else {
            lVar6 = _CFGetTypeID(lVar5);
            lVar7 = _CFStringGetTypeID();
            if (lVar6 != lVar7) goto LAB_000beb7f;
            lVar5 = _CFStringCompare(lVar5,param_2,1);
            if (lVar5 == 0) {
              return (bool)param_3;
            }
          }
          lVar4 = lVar4 + 1;
          param_3 = lVar4 < lVar3;
        } while (lVar4 != lVar3);
      }
    }
    else {
      uVar8 = _MISGetLog();
      param_3 = 0;
      cVar1 = _os_log_type_enabled(uVar8,0);
      if (cVar1 != '\0') {
        local_48[0] = 0;
        param_3 = 0;
        __os_log_impl(0,uVar8,0,"Encountered a non-array value for \'Platforms\'.",local_48,2);
      }
    }
  }
  return param_3;
}

