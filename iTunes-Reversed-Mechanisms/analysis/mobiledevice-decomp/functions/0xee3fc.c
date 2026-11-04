// rea decompile_all
// name: _AMRecoveryModeGetSoftwareBuildVersion
// address: 0xee3fc
// body: available
// range: 0xee3fc-0xee596 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xee592 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _AMRecoveryModeGetSoftwareBuildVersion(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  char *pcVar5;
  cfstringStruct *pcVar6;
  char *local_68;
  int local_5c;
  char local_58 [40];
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_004412b8;
  local_68 = (char *)0x0;
  lVar4 = _CFStringCreateWithFormat
                    (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,0,&cf_SysCfg___,&cf_SBVr);
  if (lVar4 == 0) {
    iVar2 = 0x12;
LAB_000ee514:
    _AMRLog(3,&cf_errorlookingupsoftwarebuildversion__d,iVar2);
  }
  else {
    iVar2 = __copyEnvironmentVariable(param_1,lVar4,&local_68);
    _CFRelease(lVar4);
    pcVar5 = local_68;
    if (iVar2 == 0x15) {
      iVar2 = 0;
      _AMRLog(4,&cf_softwarebuildversionnotavailable);
      goto LAB_000ee573;
    }
    if (iVar2 != 0) goto LAB_000ee514;
    local_5c = 0;
    local_58[0x10] = '\0';
    local_58[0x11] = '\0';
    local_58[0x12] = '\0';
    local_58[0x13] = '\0';
    local_58[0x14] = '\0';
    local_58[0x15] = '\0';
    local_58[0x16] = '\0';
    local_58[0x17] = '\0';
    local_58[0x18] = '\0';
    local_58[0x19] = '\0';
    local_58[0x1a] = '\0';
    local_58[0x1b] = '\0';
    local_58[0x1c] = '\0';
    local_58[0x1d] = '\0';
    local_58[0x1e] = '\0';
    local_58[0x1f] = '\0';
    local_58[0] = '\0';
    local_58[1] = '\0';
    local_58[2] = '\0';
    local_58[3] = '\0';
    local_58[4] = '\0';
    local_58[5] = '\0';
    local_58[6] = '\0';
    local_58[7] = '\0';
    local_58[8] = '\0';
    local_58[9] = '\0';
    local_58[10] = '\0';
    local_58[0xb] = '\0';
    local_58[0xc] = '\0';
    local_58[0xd] = '\0';
    local_58[0xe] = '\0';
    local_58[0xf] = '\0';
    local_58[0x20] = 0;
    cVar1 = _CFStringGetCString(local_68,local_58,0x21,0x8000100);
    if (cVar1 == '\x01') {
      iVar2 = _sscanf(local_58,"%2x",&local_5c);
      if (iVar2 != 0) {
        pcVar5 = local_58;
        iVar2 = 0;
        do {
          pcVar5 = pcVar5 + 2;
          if (9 < local_5c - 0x30U) {
            if (local_5c == 0) goto LAB_000ee573;
            pcVar6 = &cf_softwarebuildversionstring__s_containsnon_numericcharacters;
            goto LAB_000ee55e;
          }
          iVar2 = (local_5c - 0x30U) + iVar2 * 10;
          iVar3 = _sscanf(pcVar5,"%2x",&local_5c);
        } while (iVar3 != 0);
      }
      pcVar6 = &cf_unabletoparsesoftwarebuildversionstring__s_;
LAB_000ee55e:
      pcVar5 = local_58;
    }
    else {
      pcVar6 = &cf_unabletoconvert____toUTF8string;
    }
    _AMRLog(3,pcVar6,pcVar5);
  }
  iVar2 = -1;
LAB_000ee573:
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_30) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

