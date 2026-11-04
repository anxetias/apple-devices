// rea decompile_all
// name: FUN_1000046c7
// address: 0x1000046c7
// body: available
// range: 0x1000046c7-0x100004817 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100004813 to 0x100013425 ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_1000046c7(long param_1,undefined8 param_2)

{
  char cVar1;
  long lVar2;
  long lVar3;
  size_t sVar4;
  undefined8 uVar5;
  char *pcVar6;
  bool bVar7;
  char local_68 [8];
  char local_60;
  char local_5f [47];
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10001c070;
  if (param_1 != 0) {
    lVar2 = _CFGetTypeID();
    lVar3 = _CFStringGetTypeID();
    if (lVar2 == lVar3) {
      lVar2 = _AMDGetPairingRecordDirectoryPath();
      if (lVar2 != 0) {
        cVar1 = _CFEqual(param_1,&cf_SystemConfiguration);
        if (cVar1 != '\0') {
LAB_10000472d:
          lVar2 = _CFStringCreateWithFormat(0,0,&cf_______plist,lVar2,param_1);
          bVar7 = false;
          if (lVar2 != 0) {
            cVar1 = _CFStringGetFileSystemRepresentation(lVar2,param_2,0x400);
            _CFRelease(lVar2);
            bVar7 = cVar1 != '\0';
          }
          goto LAB_1000047f3;
        }
        cVar1 = _CFStringGetCString(param_1,local_68,0x29,0x8000100);
        if (cVar1 != '\0') {
          sVar4 = _strlen(local_68);
          if (sVar4 == 0x18) {
            pcVar6 = local_68;
            uVar5 = 0x18;
          }
          else if (sVar4 == 0x19) {
            cVar1 = FUN_10000e298(local_68,8);
            bVar7 = false;
            if ((cVar1 == '\0') || (bVar7 = false, local_60 != '-')) goto LAB_1000047f3;
            pcVar6 = local_5f;
            uVar5 = 0x10;
          }
          else {
            if (sVar4 != 0x28) goto LAB_1000047f0;
            pcVar6 = local_68;
            uVar5 = 0x28;
          }
          cVar1 = FUN_10000e298(pcVar6,uVar5);
          if (cVar1 != '\0') goto LAB_10000472d;
        }
      }
    }
  }
LAB_1000047f0:
  bVar7 = false;
LAB_1000047f3:
  if (*(long *)PTR____stack_chk_guard_10001c070 == local_30) {
    return bVar7;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

