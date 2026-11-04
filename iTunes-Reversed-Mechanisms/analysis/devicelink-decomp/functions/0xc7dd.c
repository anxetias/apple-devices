// rea decompile_all
// name: _DLGetFlockForFileWithCancel
// address: 0xc7dd
// body: available
// range: 0xc7dd-0xcb6c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong _DLGetFlockForFileWithCancel
                (float param_1,undefined8 param_2,code *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  ulong uVar6;
  undefined8 uVar7;
  int *piVar8;
  char *pcVar9;
  long lVar10;
  ulong uVar11;
  double dVar12;
  int local_38;
  float local_34;
  
  local_34 = param_1;
  if (__lockFds == 0) {
    __lockFds = _CFDictionaryCreateMutable
                          (*(undefined8 *)PTR__kCFAllocatorDefault_00015008,0,
                           PTR__kCFTypeDictionaryKeyCallBacks_00015050,
                           PTR__kCFTypeDictionaryValueCallBacks_00015058);
  }
  pcVar5 = (char *)_DLCreateCStringFromCFString(param_2);
  if (pcVar5 == (char *)0x0) {
    cVar2 = _DLLoggingEnabled(3);
    if ((cVar2 != '\0') || (cVar2 = _DLOutputEnabled(3), cVar2 != '\0')) {
      uVar11 = 0;
      __DLLog("/AppleInternal/Library/BuildRoots/4~CakkugDLiE0SsopHmzCut7SBOwFmVrbK9VUierk/Library/Caches/com.apple.xbs/Sources/DeviceLink/Utility/DeviceLinkUtility.c"
              ,"DLGetFlockForFileWithCancel",3,&cf_CouldnotgetavalidCstringforthelockfilename);
      goto LAB_0000cb5b;
    }
  }
  else {
    iVar3 = _open(pcVar5,0x200,0x1b6);
    local_38 = iVar3;
    if (iVar3 != -1) {
      dVar12 = (double)_CFAbsoluteTimeGetCurrent();
      uVar6 = _CFRunLoopTimerCreate
                        (dVar12 + (double)(local_34 + local_34),0,0,0,0,__DLGetFlockTimeoutCallback,
                         0);
      uVar7 = _CFRunLoopGetCurrent();
      uVar1 = *(undefined8 *)PTR__kCFRunLoopDefaultMode_00015038;
      _CFRunLoopAddTimer(uVar7,uVar6,uVar1);
      uVar11 = uVar6;
      do {
        cVar2 = _DLLoggingEnabled(5);
        if ((cVar2 != '\0') || (cVar2 = _DLOutputEnabled(5), cVar2 != '\0')) {
          __DLLog("/AppleInternal/Library/BuildRoots/4~CakkugDLiE0SsopHmzCut7SBOwFmVrbK9VUierk/Library/Caches/com.apple.xbs/Sources/DeviceLink/Utility/DeviceLinkUtility.c"
                  ,"DLGetFlockForFileWithCancel",5,&cf_Attemptingtolockdescriptorfor_s,pcVar5);
        }
        piVar8 = ___error();
        *piVar8 = 0;
        iVar4 = _flock(iVar3,6);
        uVar11 = CONCAT71((int7)(uVar11 >> 8),iVar4 == 0);
        if (iVar4 == 0) {
          lVar10 = _CFNumberCreate(0,9,&local_38);
          _CFDictionarySetValue(__lockFds,param_2,lVar10);
          if (lVar10 != 0) {
            _CFRelease(lVar10);
          }
          if (0.0 <= local_34) {
            cVar2 = _DLLoggingEnabled(5);
            if ((cVar2 != '\0') || (cVar2 = _DLOutputEnabled(5), cVar2 != '\0')) {
              __DLLog("/AppleInternal/Library/BuildRoots/4~CakkugDLiE0SsopHmzCut7SBOwFmVrbK9VUierk/Library/Caches/com.apple.xbs/Sources/DeviceLink/Utility/DeviceLinkUtility.c"
                      ,"DLGetFlockForFileWithCancel",5,&cf_Lockobtainedfor_s,pcVar5);
            }
            goto LAB_0000cb43;
          }
          break;
        }
        _CFRunLoopRunInMode(0x3ff0000000000000,uVar1,0);
        local_34 = local_34 + -1.0;
        if ((param_3 != (code *)0x0) && (cVar2 = (*param_3)(param_4), cVar2 != '\0')) {
          cVar2 = _DLLoggingEnabled(5);
          if ((cVar2 != '\0') || (cVar2 = _DLOutputEnabled(5), cVar2 != '\0')) {
            __DLLog("/AppleInternal/Library/BuildRoots/4~CakkugDLiE0SsopHmzCut7SBOwFmVrbK9VUierk/Library/Caches/com.apple.xbs/Sources/DeviceLink/Utility/DeviceLinkUtility.c"
                    ,"DLGetFlockForFileWithCancel",5,&cf_flockwaitcanceledbycancelfunction);
          }
          break;
        }
      } while (0.0 <= local_34);
      cVar2 = _DLLoggingEnabled(4);
      if ((cVar2 != '\0') || (cVar2 = _DLOutputEnabled(4), cVar2 != '\0')) {
        __DLLog("/AppleInternal/Library/BuildRoots/4~CakkugDLiE0SsopHmzCut7SBOwFmVrbK9VUierk/Library/Caches/com.apple.xbs/Sources/DeviceLink/Utility/DeviceLinkUtility.c"
                ,"DLGetFlockForFileWithCancel",4,&cf_Couldnotlock_s,pcVar5);
      }
      _close(local_38);
LAB_0000cb43:
      _CFRunLoopTimerInvalidate(uVar6);
      _CFRelease(uVar6);
      _free(pcVar5);
      goto LAB_0000cb5b;
    }
    cVar2 = _DLLoggingEnabled(5);
    if ((cVar2 != '\0') || (cVar2 = _DLOutputEnabled(5), cVar2 != '\0')) {
      piVar8 = ___error();
      iVar3 = *piVar8;
      piVar8 = ___error();
      pcVar9 = _strerror(*piVar8);
      __DLLog("/AppleInternal/Library/BuildRoots/4~CakkugDLiE0SsopHmzCut7SBOwFmVrbK9VUierk/Library/Caches/com.apple.xbs/Sources/DeviceLink/Utility/DeviceLinkUtility.c"
              ,"DLGetFlockForFileWithCancel",5,&cf_Error_Can_tgetfiledescriptorfor_s___d__s,pcVar5,
              iVar3,pcVar9);
    }
    _free(pcVar5);
  }
  uVar11 = 0;
LAB_0000cb5b:
  return uVar11 & 0xffffffff;
}

