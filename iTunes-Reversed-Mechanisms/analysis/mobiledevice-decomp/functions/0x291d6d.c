// rea decompile_all
// name: _AMAuthInstallMonetSetVersionAndPartialDigest
// address: 0x291d6d
// body: available
// range: 0x291d6d-0x291f69 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x291f65 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_AMAuthInstallMonetSetVersionAndPartialDigest
          (undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,undefined8 param_5,
          uint param_6,int param_7,undefined8 param_8,undefined8 param_9)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  char *pcVar9;
  ulong uVar10;
  undefined4 local_70;
  uint local_6c;
  uint local_68;
  undefined1 local_64 [20];
  uint local_50;
  undefined1 local_4c [20];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  uVar2 = *(undefined4 *)(param_3 + 4 + (ulong)param_6);
  iVar3 = *(int *)(param_3 + 8 + (ulong)param_6);
  local_70 = uVar2;
  uVar4 = _CFDataGetLength(param_4);
  _AMAuthInstallLog(7,"AMAuthInstallMonetSetVersionAndPartialDigest",
                    "fileSize=0x%x, srcOffset=0x%x, codeSize=0x%x",uVar4,param_6,param_7);
  _AMAuthInstallLog(7,"AMAuthInstallMonetSetVersionAndPartialDigest",
                    "version=0x%x, personalizationOffset=0x%x",uVar2,iVar3);
  local_6c = param_7 - iVar3;
  uVar10 = (ulong)local_6c;
  uVar1 = iVar3 + 0x50;
  param_6 = iVar3 + param_6;
  pcVar9 = "NOT 64-BYTE MULTIPLE";
  if ((uVar1 & 0x3f) == 0) {
    pcVar9 = "ok";
  }
  local_68 = uVar1;
  local_50 = param_6;
  _AMAuthInstallLog(7,"AMAuthInstallMonetSetVersionAndPartialDigest",
                    "reservationLength=0x%x, codeBytesHashed=0x%x (%s), downloadBytesHashed=0x%x (%s)"
                    ,local_6c,uVar1,pcVar9,(ulong)param_6);
  lVar5 = _CFDataGetLength(param_4);
  _AMAuthInstallLog(7,"AMAuthInstallMonetSetVersionAndPartialDigest","personalization area=0x%x",
                    lVar5 - (uVar10 + param_6));
  if (((param_6 | uVar1) & 0x3f) == 0) {
    __SHA1Partial(param_5,uVar1,local_64);
    __SHA1Partial(param_3,local_50,local_4c);
    uVar4 = _CFGetAllocator(param_1);
    lVar5 = _CFDataCreate(uVar4,&local_6c,0x34);
    uVar4 = 2;
    if (lVar5 == 0) {
      lVar8 = 0;
      lVar5 = 0;
    }
    else {
      uVar6 = _CFGetAllocator(param_1);
      lVar7 = _CFNumberCreate(uVar6,3,&local_70);
      lVar8 = 0;
      if (lVar7 != 0) {
        _CFDictionarySetValue(param_2,param_8,lVar7);
        _CFDictionarySetValue(param_2,param_9,lVar5);
        uVar4 = 0;
        lVar8 = lVar7;
      }
    }
  }
  else {
    uVar4 = 10;
    lVar5 = 0;
    lVar8 = 0;
  }
  _SafeRelease(lVar8);
  _SafeRelease(lVar5);
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

