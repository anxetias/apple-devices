// rea decompile_all
// name: __DLLog
// address: 0xa79e
// body: available
// range: 0xa79e-0xa9d0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xa9cc to 0xee55 ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __DLLog(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
            char *param_9,char *param_10,ulong param_11,undefined8 param_12,undefined8 param_13,
            undefined8 param_14)

{
  ulong uVar1;
  char in_AL;
  char cVar2;
  uint uVar3;
  pid_t pVar4;
  undefined8 uVar5;
  size_t sVar6;
  long lVar7;
  long lVar8;
  pthread_t p_Var9;
  void *pvVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  undefined1 local_118 [32];
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_d8;
  undefined8 local_c8;
  undefined8 local_b8;
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 local_78;
  ulong local_68;
  undefined4 local_5c;
  undefined8 local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  long local_38;
  
  if (in_AL != '\0') {
    local_e8 = param_1;
    local_d8 = param_2;
    local_c8 = param_3;
    local_b8 = param_4;
    local_a8 = param_5;
    local_98 = param_6;
    local_88 = param_7;
    local_78 = param_8;
  }
  local_38 = *(long *)PTR____stack_chk_guard_00015070;
  local_f8 = param_13;
  local_f0 = param_14;
  local_68 = param_11;
  if (_sLogMutex == 0) {
    _sLogMutex = _DLCreateMutex();
    if (_sLogMutex == 0) {
      local_5c = 0;
      goto LAB_0000a842;
    }
  }
  uVar5 = _DLLock(_sLogMutex);
  local_5c = (undefined4)CONCAT71((int7)((ulong)uVar5 >> 8),(char)uVar5 == '\x01');
LAB_0000a842:
  pcVar11 = "UNKNOWN";
  if (param_9 == (char *)0x0) {
    param_9 = "UNKNOWN";
  }
  if (param_10 == (char *)0x0) {
    param_10 = "UNKNOWN";
  }
  sVar6 = _strlen(param_9);
  uVar1 = local_68;
  lVar8 = sVar6 - 2;
  pcVar13 = param_9 + (sVar6 - 2);
  do {
    pcVar12 = pcVar13;
    lVar7 = lVar8;
    if (pcVar12 + 1 <= param_9) break;
    lVar8 = lVar7 + -1;
    pcVar13 = pcVar12 + -1;
  } while (*pcVar12 != '/');
  pcVar13 = pcVar12 + 1;
  if (lVar7 == 0) {
    pcVar13 = pcVar12;
  }
  uVar3 = (int)local_68 - 3;
  if (uVar3 < 5) {
    pcVar11 = &DAT_0000f860 + *(int *)(&DAT_0000f860 + (ulong)uVar3 * 4);
  }
  local_48 = local_118;
  local_50 = &stack0x00000008;
  local_58 = 0x3000000020;
  lVar8 = _CFStringCreateWithFormatAndArguments
                    (*(undefined8 *)PTR__kCFAllocatorDefault_00015008,0,param_12);
  cVar2 = _DLLoggingEnabled(uVar1 & 0xffffffff);
  if (cVar2 == '\0') {
    _DLOutputEnabled(uVar1 & 0xffffffff);
  }
  cVar2 = _DLOutputEnabled(uVar1 & 0xffffffff);
  if (cVar2 != '\0') {
    pVar4 = _getpid();
    p_Var9 = _pthread_self();
    uVar5 = _CFStringCreateWithFormat
                      (0,0,&cf__ld__lu__s__s__s___,(long)pVar4,p_Var9,pcVar13,param_10,pcVar11,lVar8
                      );
    pvVar10 = (void *)_DLCreateCStringFromCFString(uVar5);
    if (pvVar10 != (void *)0x0) {
      _syslog(local_68,"%s",pvVar10);
      _free(pvVar10);
    }
    _CFRelease(uVar5);
  }
  _CFRelease(&cf_Logerror);
  if (lVar8 != 0) {
    _CFRelease(lVar8);
  }
  if ((char)local_5c != '\0') {
    _DLUnlock(_sLogMutex);
  }
  if (*(long *)PTR____stack_chk_guard_00015070 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

