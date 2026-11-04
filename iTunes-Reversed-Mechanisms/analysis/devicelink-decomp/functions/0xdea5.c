// rea decompile_all
// name: __AMDeviceNotification
// address: 0xdea5
// body: available
// range: 0xdea5-0xe34f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xe301 to 0xecff _CFRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __AMDeviceNotification(long *param_1,undefined8 *param_2)

{
  long lVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  ulong *puVar8;
  long lVar9;
  undefined4 *puVar10;
  undefined8 uVar11;
  ulong uVar12;
  ulong unaff_R15;
  undefined4 local_44;
  ulong local_40;
  long local_38;
  
  cVar2 = _DLShouldLog(6);
  if (cVar2 != '\0') {
    __DLLog("/AppleInternal/Library/BuildRoots/4~CakkugDLiE0SsopHmzCut7SBOwFmVrbK9VUierk/Library/Caches/com.apple.xbs/Sources/DeviceLink/Utility/DeviceLinkListener.c"
            ,"_AMDeviceNotification",6,&cf_Devicenotificationreceived);
  }
  iVar4 = (int)param_1[1];
  if (iVar4 == 3) {
    if (((param_2 != (undefined8 *)0x0) && (*(char *)(param_2 + 6) == '\0')) &&
       (*(char *)((long)param_2 + 0x31) == '\0')) {
      *(undefined1 *)((long)param_2 + 0x31) = 1;
      _AMDeviceNotificationUnsubscribe(param_2[4]);
      param_2[4] = 0;
      *(undefined1 *)((long)param_2 + 0x31) = 0;
      if ((code *)param_2[2] != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0000e13c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)param_2[2])(param_2,param_2[3]);
        return;
      }
    }
  }
  else {
    lVar1 = *param_1;
    if (iVar4 == 2) {
      lVar6 = _AMDeviceCopyDeviceIdentifier(lVar1);
      if ((param_2[5] != 0) && (uVar5 = _CFArrayGetCount(), 0 < (int)uVar5)) {
        uVar12 = 0;
        do {
          lVar7 = _CFArrayGetValueAtIndex(param_2[5],uVar12);
          if (*(long *)(lVar7 + 0x10) == lVar1) {
            cVar2 = _DLShouldLog(6);
            if (cVar2 != '\0') {
              __DLLog("/AppleInternal/Library/BuildRoots/4~CakkugDLiE0SsopHmzCut7SBOwFmVrbK9VUierk/Library/Caches/com.apple.xbs/Sources/DeviceLink/Utility/DeviceLinkListener.c"
                      ,"_handleDetachedDevice",6,&cf_Devicedetached_deviceid__,lVar6);
            }
            if ((code *)param_2[1] != (code *)0x0) {
              (*(code *)param_2[1])(param_2,lVar7,param_2[3]);
            }
            _CFArrayRemoveValueAtIndex(param_2[5],uVar12);
            goto LAB_0000e2eb;
          }
          uVar12 = uVar12 + 1;
        } while ((uVar5 & 0x7fffffff) != uVar12);
      }
      cVar2 = _DLShouldLog(4);
      if (cVar2 != '\0') {
        __DLLog("/AppleInternal/Library/BuildRoots/4~CakkugDLiE0SsopHmzCut7SBOwFmVrbK9VUierk/Library/Caches/com.apple.xbs/Sources/DeviceLink/Utility/DeviceLinkListener.c"
                ,"_handleDetachedDevice",4,
                &cf_Detacheventreceivedforadevicethatwasn_tintheattachedlist___,lVar6);
      }
LAB_0000e2eb:
      if (lVar6 != 0) {
        _CFRelease(lVar6);
        return;
      }
    }
    else if (iVar4 == 1) {
      lVar6 = _AMDeviceCopyDeviceIdentifier(lVar1);
      if (param_2[5] != 0) {
        unaff_R15 = _CFArrayGetCount();
        if (0 < (int)(uint)unaff_R15) {
          unaff_R15 = (ulong)((uint)unaff_R15 & 0x7fffffff);
          uVar12 = 0;
          do {
            lVar7 = _CFArrayGetValueAtIndex(param_2[5],uVar12);
            if (*(long *)(lVar7 + 0x10) == lVar1) {
              cVar2 = _DLShouldLog(3);
              if (cVar2 != '\0') {
                __DLLog("/AppleInternal/Library/BuildRoots/4~CakkugDLiE0SsopHmzCut7SBOwFmVrbK9VUierk/Library/Caches/com.apple.xbs/Sources/DeviceLink/Utility/DeviceLinkListener.c"
                        ,"_handleAttachedDevice",3,
                        &cf_Gotanattachedcallbackforadevicethatwealreadyknowabout___,lVar6);
              }
              goto LAB_0000e275;
            }
            uVar12 = uVar12 + 1;
          } while (unaff_R15 != uVar12);
        }
      }
      uVar3 = _AMDeviceGetConnectionID(lVar1);
      lVar7 = _CFNumberCreate(0,9);
      local_38 = 0;
      iVar4 = __copyMobileDeviceValue(lVar1,0,&cf_DeviceName,&local_38,1);
      if (iVar4 != 0) {
        if (local_38 != 0) {
          _CFRelease();
          local_38 = 0;
        }
        local_38 = _CFRetain(&cf_iPhone);
      }
      cVar2 = _DLShouldLog(6);
      if (cVar2 != '\0') {
        __DLLog("/AppleInternal/Library/BuildRoots/4~CakkugDLiE0SsopHmzCut7SBOwFmVrbK9VUierk/Library/Caches/com.apple.xbs/Sources/DeviceLink/Utility/DeviceLinkListener.c"
                ,"_handleAttachedDevice",6,&cf_Device____attached_deviceudid___connectionID_d,
                local_38,lVar6,uVar3);
      }
      puVar8 = _malloc(0x20);
      if (puVar8 != (ulong *)0x0) {
        unaff_R15 = _CFDictionaryCreateMutable
                              (*(undefined8 *)PTR__kCFAllocatorDefault_00015008,0,
                               PTR__kCFTypeDictionaryKeyCallBacks_00015050,
                               PTR__kCFTypeDictionaryValueCallBacks_00015058);
        *puVar8 = unaff_R15;
        local_40 = _CFArrayCreateMutable(0,0,0);
        puVar8[1] = local_40;
        *(undefined4 *)(puVar8 + 3) = 0;
      }
      if (lVar1 == 0) {
        uVar12 = 0;
      }
      else {
        uVar12 = _CFRetain(lVar1);
      }
      puVar8[2] = uVar12;
      if (unaff_R15 != 0) {
        _CFDictionarySetValue(unaff_R15,&cf_DLDeviceUDIDKey,lVar6);
      }
      __DLDeviceSetName(puVar8,local_38);
      if (local_38 != 0) {
        _CFRelease();
        local_38 = 0;
      }
      lVar9 = _CFDictionaryCreateMutable
                        (*(undefined8 *)PTR__kCFAllocatorDefault_00015008,0,
                         PTR__kCFTypeDictionaryKeyCallBacks_00015050,
                         PTR__kCFTypeDictionaryValueCallBacks_00015058);
      iVar4 = _AMDeviceGetInterfaceType(lVar1);
      if (iVar4 == 2) {
        local_44 = 2;
      }
      else {
        local_44 = 1;
        if (iVar4 == 1) {
          _CFDictionaryAddValue(lVar9,&cf_DLUSBMuxDeviceIdKey,lVar7);
        }
      }
      if (local_40 == 0) {
        local_40 = _CFArrayCreateMutable(0,0,0);
        puVar8[1] = local_40;
      }
      puVar10 = _malloc(0x10);
      if (puVar10 != (undefined4 *)0x0) {
        *puVar10 = local_44;
        uVar11 = _CFRetain(lVar9);
        *(undefined8 *)(puVar10 + 2) = uVar11;
      }
      _CFArrayAppendValue(local_40,puVar10);
      if (lVar9 != 0) {
        _CFRelease(lVar9);
      }
      _CFArrayAppendValue(param_2[5],puVar8);
      if ((code *)*param_2 != (code *)0x0) {
        (*(code *)*param_2)(param_2,puVar8,param_2[3]);
      }
      if (lVar7 != 0) {
        _CFRelease(lVar7);
      }
LAB_0000e275:
      if (lVar6 != 0) {
        _CFRelease(lVar6);
      }
      if (lVar1 != 0) {
        _CFRelease(lVar1);
      }
    }
  }
  return;
}

