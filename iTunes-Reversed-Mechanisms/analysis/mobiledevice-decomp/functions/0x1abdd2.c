// rea decompile_all
// name: _AMAuthInstallLog
// address: 0x1abdd2
// body: available
// range: 0x1abdd2-0x1abfeb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1abfe7 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _AMAuthInstallLog(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                      undefined4 param_9,char *param_10,undefined8 param_11,undefined8 param_12,
                      undefined8 param_13,undefined8 param_14)

{
  undefined8 uVar1;
  char in_AL;
  char cVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  long lVar9;
  int iVar10;
  char *pcVar11;
  undefined1 local_1128 [24];
  undefined8 local_1110;
  undefined8 local_1108;
  undefined8 local_1100;
  undefined8 local_10f8;
  undefined8 local_10e8;
  undefined8 local_10d8;
  undefined8 local_10c8;
  undefined8 local_10b8;
  undefined8 local_10a8;
  undefined8 local_1098;
  undefined8 local_1088;
  ulong local_1078;
  char *local_1070;
  ulong local_1068;
  undefined4 local_105c;
  char local_1058 [4096];
  undefined8 local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  long local_38;
  
  if (in_AL != '\0') {
    local_10f8 = param_1;
    local_10e8 = param_2;
    local_10d8 = param_3;
    local_10c8 = param_4;
    local_10b8 = param_5;
    local_10a8 = param_6;
    local_1098 = param_7;
    local_1088 = param_8;
  }
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  pcVar11 = "";
  if (param_10 != (char *)0x0) {
    pcVar11 = param_10;
  }
  pcVar7 = (char *)0x0;
  local_1110 = param_12;
  local_1108 = param_13;
  local_1100 = param_14;
  local_105c = param_9;
  uVar3 = _snprintf(local_1058,0x1000,"%s: ",pcVar11);
  local_58 = 0x3000000018;
  local_50 = &stack0x00000008;
  uVar1 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
  local_48 = local_1128;
  lVar4 = _CFStringCreateWithCStringNoCopy
                    (uVar1,param_11,0x8000100,*(undefined8 *)PTR__kCFAllocatorNull_004410f8);
  if (lVar4 == 0) {
    pcVar11 = (char *)0x0;
    lVar9 = 0;
    goto LAB_001abf93;
  }
  local_1078 = (ulong)uVar3;
  local_1070 = local_1058;
  lVar5 = _CFStringCreateWithFormatAndArguments(uVar1,0,lVar4,&local_58);
  pcVar11 = (char *)0x0;
  pcVar7 = (char *)0x0;
  lVar9 = 0;
  if (lVar5 == 0) goto LAB_001abf93;
  iVar10 = (int)local_1078;
  local_1068 = local_1078 & 0xffffffff;
  uVar6 = 0x1000 - iVar10;
  uVar3 = _CFStringGetLength(lVar5);
  if (uVar6 < uVar3) {
    pcVar11 = _malloc((ulong)(uVar3 + iVar10 + 1));
    if (pcVar11 == (char *)0x0) goto LAB_001abf68;
    uVar6 = uVar3 + 1;
    _memcpy(pcVar11,local_1058,local_1068);
    local_1070 = pcVar11;
  }
  else {
LAB_001abf68:
    pcVar11 = (char *)0x0;
  }
  pcVar8 = local_1070;
  cVar2 = _CFStringGetCString(lVar5,local_1070 + local_1068,uVar6,0x8000100);
  pcVar7 = (char *)0x0;
  lVar9 = lVar5;
  if (cVar2 != '\0') {
    pcVar7 = pcVar8;
  }
LAB_001abf93:
  pcVar8 = "failed to format log message";
  if (pcVar7 != (char *)0x0) {
    pcVar8 = pcVar7;
  }
  (*__logHandler)(local_105c,pcVar8);
  _SafeRelease(lVar4);
  _SafeRelease(lVar9);
  _SafeFree(pcVar11);
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

