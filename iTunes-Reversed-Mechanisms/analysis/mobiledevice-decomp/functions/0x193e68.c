// rea decompile_all
// name: _LogMsg
// address: 0x193e68
// body: available
// range: 0x193e68-0x194296 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x194292 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _LogMsg(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,uint param_9
            ,long param_10,undefined8 param_11,undefined4 param_12,undefined8 param_13,long param_14
            ,undefined8 param_15)

{
  long lVar1;
  char in_AL;
  char cVar2;
  pid_t pVar3;
  long lVar4;
  size_t sVar5;
  long lVar6;
  undefined8 uVar7;
  char *pcVar8;
  ulong uVar9;
  uint uVar10;
  char *pcVar11;
  code *pcVar12;
  uint uVar13;
  undefined1 local_1f8 [48];
  undefined4 local_1c8;
  undefined8 local_1b8;
  undefined8 local_1a8;
  undefined8 local_198;
  undefined8 local_188;
  undefined8 local_178;
  undefined8 local_168;
  undefined8 local_158;
  tm local_148;
  time_t local_108;
  long local_100;
  long local_f8;
  long local_f0;
  long local_e8;
  char *local_e0;
  long local_d8;
  long local_d0;
  char local_c8 [112];
  undefined8 local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  long local_38;
  
  if (in_AL != '\0') {
    local_1c8 = param_1;
    local_1b8 = param_2;
    local_1a8 = param_3;
    local_198 = param_4;
    local_188 = param_5;
    local_178 = param_6;
    local_168 = param_7;
    local_158 = param_8;
  }
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  local_e8 = param_11;
  local_e0 = _getprogname();
  local_f8 = 0;
  local_d8 = _CFArrayCreateMutable(0,0,PTR__kCFTypeArrayCallBacks_004411a8);
  local_48 = local_1f8;
  local_50 = &stack0x00000010;
  local_58 = 0x3000000030;
  lVar4 = 0;
  local_f0 = param_10;
  if (*(long *)(param_10 + 0x20) != 0) {
    local_d0 = CONCAT44(local_d0._4_4_,param_12);
    local_108 = _time((time_t *)0x0);
    local_148.tm_isdst = 0;
    local_148._36_4_ = 0;
    local_148.tm_gmtoff = 0;
    local_148.tm_mon = 0;
    local_148.tm_year = 0;
    local_148.tm_wday = 0;
    local_148.tm_yday = 0;
    local_148.tm_sec = 0;
    local_148.tm_min = 0;
    local_148.tm_hour = 0;
    local_148.tm_mday = 0;
    local_148.tm_zone = (char *)0x0;
    _localtime_r(&local_108,&local_148);
    sVar5 = _strftime(local_c8,99,"%b %d %H:%M:%S ",&local_148);
    lVar4 = 0;
    if (sVar5 != 0) {
      lVar6 = _CFStringCreateWithCString(0,local_c8,0x8000100);
      lVar4 = 0;
      if (lVar6 != 0) {
        _CFArrayAppendValue(local_d8,lVar6);
        lVar4 = lVar6;
      }
    }
    local_f8 = lVar4;
    pVar3 = _getpid();
    if (param_9 == 0xffffffff) {
      uVar9 = 5;
    }
    else if ((int)param_9 < 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = 7;
      if (param_9 < 7) {
        uVar9 = (ulong)param_9;
      }
    }
    param_12 = (undefined4)local_d0;
    lVar4 = _CFStringCreateWithFormat
                      (0,0,&cf__s__d_<_s>_,local_e0,pVar3,(&_LevelString_levelName)[uVar9]);
    if (lVar4 != 0) {
      _CFArrayAppendValue(local_d8,lVar4);
    }
  }
  local_e0 = (char *)lVar4;
  lVar6 = _CFStringCreateWithFormat(0,0,&cf__s__d__s__,local_e8,param_12,param_13);
  lVar4 = local_d8;
  if (lVar6 != 0) {
    _CFArrayAppendValue(local_d8,lVar6);
  }
  local_d0 = lVar6;
  local_100 = _CFStringCreateWithFormatAndArguments(0,0,param_15,&local_58);
  if (local_100 != 0) {
    _CFArrayAppendValue(lVar4,local_100);
  }
  if (param_14 != 0) {
    _CFArrayAppendValue(lVar4,&cf__);
    _CFArrayAppendValue(lVar4,param_14);
  }
  pcVar8 = (char *)0x0;
  local_e8 = param_14;
  lVar4 = _CFStringCreateByCombiningStrings(0,lVar4,&cf___);
  if (lVar4 == 0) {
    pcVar11 = "failed to convert string\n";
  }
  else {
    uVar7 = _CFStringGetLength(lVar4);
    lVar6 = _CFStringGetMaximumSizeForEncoding(uVar7,0x8000100);
    pcVar8 = _malloc(lVar6 + 2U);
    cVar2 = _CFStringGetCString(lVar4,pcVar8,lVar6 + 2U,0x8000100);
    pcVar11 = "failed to convert string\n";
    if (cVar2 != '\0') {
      pcVar11 = pcVar8;
    }
  }
  if (param_9 == 0xffffffff) {
    uVar13 = 5;
  }
  else if ((int)param_9 < 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = 7;
    if (param_9 < 7) {
      uVar13 = param_9;
    }
  }
  pcVar12 = *(code **)(local_f0 + 0x20);
  if (pcVar12 == (code *)0x0) {
    uVar10 = 5;
    if (uVar13 < 5) {
      uVar10 = uVar13;
    }
    _asl_log(0,0,uVar10,"%s",pcVar11);
  }
  else {
    sVar5 = _strlen(pcVar11);
    if (pcVar11[sVar5 - 1] != '\n') {
      (pcVar11 + sVar5)[0] = '\n';
      (pcVar11 + sVar5)[1] = '\0';
      pcVar12 = *(code **)(local_f0 + 0x20);
    }
    (*pcVar12)(uVar13,*(undefined8 *)(local_f0 + 0x18),pcVar11);
  }
  lVar6 = local_d8;
  if (pcVar8 != (char *)0x0) {
    _free(pcVar8);
  }
  if (local_f8 != 0) {
    _CFRelease();
  }
  lVar1 = local_e8;
  if (local_e0 != (char *)0x0) {
    _CFRelease();
  }
  if (local_d0 != 0) {
    _CFRelease();
  }
  if (local_100 != 0) {
    _CFRelease();
  }
  if (lVar4 != 0) {
    _CFRelease(lVar4);
  }
  if (lVar6 != 0) {
    _CFRelease(lVar6);
  }
  if (lVar1 != 0) {
    _CFRelease(lVar1);
  }
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

