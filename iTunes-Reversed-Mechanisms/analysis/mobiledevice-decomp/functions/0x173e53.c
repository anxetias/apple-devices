// rea decompile_all
// name: ___thr_handleLogEvent
// address: 0x173e53
// body: available
// range: 0x173e53-0x1740f9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ___thr_handleLogEvent(long *param_1)

{
  char cVar1;
  long lVar2;
  size_t sVar3;
  void *pvVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  void *pvVar9;
  cfstringStruct *pcVar10;
  undefined1 uVar11;
  undefined8 local_58;
  long *local_50;
  long local_48;
  long local_40;
  void *local_38;
  
  local_58 = 0;
  if (param_1 == (long *)0x0) {
    pcVar10 = &cf_Can_thandlelogmessagewithNULLargs;
LAB_001740a8:
    pvVar9 = (void *)0x0;
    lVar2 = 0;
  }
  else {
    if (param_1[1] == 0) {
      pcVar10 = &cf_Can_thandleNULLlogmessage;
      goto LAB_001740a8;
    }
    pvVar9 = (void *)0x0;
    lVar2 = _CFStringCreateWithFormat(*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,0,&cf___);
    sVar3 = _CFStringGetLength(lVar2);
    pvVar4 = _malloc(sVar3);
    if (pvVar4 == (void *)0x0) {
      pcVar10 = &cf_Failedtoallocatelogbuffer;
    }
    else {
      ___bzero(pvVar4,sVar3);
      uVar5 = _CFStringGetLength(lVar2);
      lVar6 = 0;
      local_38 = pvVar4;
      _CFStringGetBytes(lVar2,0,uVar5,0x8000100,0x3f,0,pvVar4,sVar3,&local_58);
      lVar8 = *param_1;
      local_40 = 0;
      local_48 = lVar2;
      if (lVar8 == 0) {
LAB_00173f4b:
        lVar2 = *(long *)PTR__kCFBooleanTrue_00441110;
        _dispatch_semaphore_wait((dispatch_semaphore_t)*__gHostLogManager,0xffffffffffffffff);
        lVar7 = lVar2;
        if (*param_1 != 0) {
          lVar7 = _CFDictionaryGetValue(__gHostLogManager[2],lVar6);
        }
        local_50 = param_1;
        if (lVar7 == 0) {
          uVar11 = 10;
        }
        else {
          cVar1 = _CFBooleanGetValue(lVar7);
          uVar11 = 10;
          if (cVar1 == '\0') {
            uVar11 = 0;
          }
        }
        pvVar9 = local_38;
        if (lVar8 != 0) {
          if (*(char *)((long)local_38 + (sVar3 - 1)) != '\n') {
            lVar2 = *(long *)PTR__kCFBooleanFalse_00441108;
          }
          _CFDictionarySetValue(__gHostLogManager[2],lVar6,lVar2);
        }
        _dispatch_semaphore_signal((dispatch_semaphore_t)*__gHostLogManager);
        lVar8 = _AMRCopyFormattedLogDataAndScrub(pvVar9,sVar3 & 0xffffffff,uVar11);
        param_1 = local_50;
        (*(code *)__gHostLogManager[3])(*local_50,lVar8,&cf_HostLogType);
        if (local_40 != 0) {
LAB_00174023:
          *(undefined1 *)(local_40 + 0x10) = 1;
        }
        if (lVar6 != 0) {
          _CFRelease(lVar6);
        }
        lVar2 = local_48;
        if (lVar8 != 0) {
          _CFRelease(lVar8);
          lVar2 = local_48;
        }
        goto LAB_00174045;
      }
      lVar6 = *(long *)(lVar8 + 0x20);
      if (lVar6 != 0) {
        *(undefined1 *)(lVar6 + 0x10) = 0;
        local_40 = lVar6;
        lVar6 = __copyECID(*param_1);
        if (lVar6 != 0) goto LAB_00173f4b;
        _AMRSafePrintLogAndRelease(3,&cf_Can_tloghostmessagewithoutECID);
        lVar6 = 0;
        lVar8 = 0;
        pvVar9 = local_38;
        goto LAB_00174023;
      }
      pcVar10 = &cf_Can_tdisableloggingsincetheproxyisNULL;
      pvVar9 = local_38;
    }
  }
  _AMRSafePrintLogAndRelease(3,pcVar10);
LAB_00174045:
  if (lVar2 != 0) {
    _CFRelease(lVar2);
  }
  if (pvVar9 != (void *)0x0) {
    _free(pvVar9);
  }
  if (param_1 != (long *)0x0) {
    if (*param_1 != 0) {
      _CFRelease();
    }
    if (param_1[1] != 0) {
      _CFRelease();
    }
    _free(param_1);
  }
  return;
}

