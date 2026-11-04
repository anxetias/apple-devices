// rea decompile_all
// name: _AMRCopyFormattedLogDataAndScrub
// address: 0x16f743
// body: available
// range: 0x16f743-0x16f90c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x16f908 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _AMRCopyFormattedLogDataAndScrub(long param_1,uint param_2,char param_3)

{
  int iVar1;
  size_t sVar2;
  undefined8 uVar3;
  char *pcVar4;
  cfstringStruct *pcVar5;
  ulong uVar6;
  tm local_b8;
  timeval local_80;
  long local_70;
  long local_68;
  char local_5a;
  char local_59;
  char local_58 [32];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  local_5a = ' ';
  local_59 = '\0';
  local_70 = param_1;
  iVar1 = _gettimeofday(&local_80,(void *)0x0);
  if (iVar1 == 0) {
    _localtime_r(&local_80.tv_sec,&local_b8);
    iVar1 = _snprintf(local_58,0x19,"[%02d:%02d:%07.4f]",
                      (double)((float)local_80.tv_usec / 1e+06 + (float)local_b8.tm_sec),
                      (ulong)(uint)local_b8.tm_hour,(ulong)(uint)local_b8.tm_min);
    if (iVar1 < 1) {
      pcVar5 = &cf_Failedtocreatetimestamp;
    }
    else {
      pcVar5 = (cfstringStruct *)0x0;
    }
  }
  else {
    pcVar5 = &cf_Failedtogetcurrenttime;
  }
  _AMRSafeLogAndRelease(3,pcVar5);
  sVar2 = _strlen(local_58);
  iVar1 = (int)sVar2;
  if (iVar1 == 0) {
    pcVar5 = &cf_Failedtogettimestamp;
    uVar3 = 0;
  }
  else {
    uVar3 = _CFDataCreateMutable(*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,0);
    if (param_3 == '\n') {
      _CFDataAppendBytes(uVar3,local_58,(long)iVar1);
      _CFDataAppendBytes(uVar3,&local_5a,1);
    }
    if (0 < (int)param_2) {
      local_68 = (long)iVar1;
      uVar6 = 0;
      do {
        local_59 = *(char *)(local_70 + uVar6);
        pcVar4 = &local_59;
        if (param_2 - 1 != uVar6 && local_59 == '\n') {
          _CFDataAppendBytes(uVar3,"\n",1);
          _CFDataAppendBytes(uVar3,local_58,local_68);
          pcVar4 = &local_5a;
        }
        _CFDataAppendBytes(uVar3,pcVar4,1);
        uVar6 = uVar6 + 1;
      } while (param_2 != uVar6);
    }
    pcVar5 = (cfstringStruct *)0x0;
  }
  _AMRSafePrintLogAndRelease(3,pcVar5);
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

