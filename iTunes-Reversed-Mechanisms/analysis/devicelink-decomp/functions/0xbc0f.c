// rea decompile_all
// name: _createRandomBytes
// address: 0xbc0f
// body: available
// range: 0xbc0f-0xbd1d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xbd19 to 0xee55 ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _createRandomBytes(uint param_1)

{
  int iVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  ssize_t sVar5;
  int *piVar6;
  char *pcVar7;
  undefined8 uVar8;
  size_t sVar9;
  undefined8 auStack_50 [3];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_00015070;
  lVar2 = -((ulong)param_1 + 0xf & 0xfffffffffffffff0);
  uVar8 = 0;
  *(undefined8 *)((long)auStack_50 + lVar2 + 0x10) = 0xbc53;
  iVar4 = _open("/dev/random",0);
  if (iVar4 == 0) goto LAB_0000bcf7;
  sVar9 = (size_t)(int)param_1;
  *(undefined8 *)((long)auStack_50 + lVar2 + 0x10) = 0xbc6e;
  sVar5 = _read(iVar4,(void *)((long)&local_38 + lVar2),sVar9);
  if ((long)sVar9 <= sVar5) {
    *(undefined8 *)((long)auStack_50 + lVar2 + 0x10) = 0xbce7;
    _close(iVar4);
    *(undefined8 *)((long)auStack_50 + lVar2 + 0x10) = 0xbcf4;
    uVar8 = _CFDataCreate(0,(void *)((long)&local_38 + lVar2),sVar9);
    goto LAB_0000bcf7;
  }
  *(undefined8 *)((long)auStack_50 + lVar2 + 0x10) = 0xbc80;
  cVar3 = _DLLoggingEnabled(3);
  if (cVar3 == '\0') {
    *(undefined8 *)((long)auStack_50 + lVar2 + 0x10) = 0xbc8e;
    cVar3 = _DLOutputEnabled(3);
    if (cVar3 != '\0') goto LAB_0000bc92;
  }
  else {
LAB_0000bc92:
    *(undefined8 *)((long)auStack_50 + lVar2 + 0x10) = 0xbc97;
    piVar6 = ___error();
    iVar1 = *piVar6;
    *(undefined8 *)((long)auStack_50 + lVar2 + 0x10) = 0xbc9e;
    pcVar7 = _strerror(iVar1);
    *(char **)((long)auStack_50 + lVar2 + 8) = pcVar7;
    *(undefined8 *)((long)auStack_50 + lVar2) = 0xbcce;
    __DLLog("/AppleInternal/Library/BuildRoots/4~CakkugDLiE0SsopHmzCut7SBOwFmVrbK9VUierk/Library/Caches/com.apple.xbs/Sources/DeviceLink/Utility/DeviceLinkUtility.c"
            ,"createRandomBytes",3,
            &cf_Couldnotreadbytesinfrom_dev_random__ldbytesread__dbytesdesired__s,sVar5,param_1);
  }
  *(undefined8 *)((long)auStack_50 + lVar2 + 0x10) = 0xbcda;
  _close(iVar4);
  uVar8 = 0;
LAB_0000bcf7:
  if (*(long *)PTR____stack_chk_guard_00015070 == local_38) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  *(code **)((long)auStack_50 + lVar2 + 0x10) = _createFileAuthBlob;
  ___stack_chk_fail();
}

