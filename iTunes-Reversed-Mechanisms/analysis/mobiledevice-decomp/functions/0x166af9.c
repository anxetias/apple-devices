// rea decompile_all
// name: ___thr_AMRestorableDeviceCopyAPIAvailability
// address: 0x166af9
// body: available
// range: 0x166af9-0x166d3a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x166cbc to 0x2aa374 _free (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ___thr_AMRestorableDeviceCopyAPIAvailability(long *param_1)

{
  uint uVar1;
  void *pvVar2;
  void *pvVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  cfstringStruct *pcVar7;
  ulong uVar8;
  
  if (param_1 == (long *)0x0) {
    pcVar7 = &cf_Can_tcopyAPIavailabilitywithNULLargs;
    iVar6 = 4000;
  }
  else if (*param_1 == 0) {
    pcVar7 = &cf_Can_tcopyAPIavailabilitywithNULLrestorabledevice;
    iVar6 = 0xfa1;
  }
  else {
    if (_gRestorableData != 0) {
      _dispatch_semaphore_wait
                (*(dispatch_semaphore_t *)(_gRestorableData + 0x20),0xffffffffffffffff);
      uVar1 = _CFDictionaryGetCount(*(undefined8 *)(_gRestorableData + 0x38));
      pvVar2 = _calloc(1,(long)(int)uVar1 << 3);
      pvVar3 = _calloc(1,(long)(int)uVar1 << 3);
      iVar6 = 0xfa2;
      if (pvVar2 == (void *)0x0) {
        pcVar7 = &cf_Failedtoallocateroomfordevicekeys;
      }
      else if (pvVar3 == (void *)0x0) {
        pcVar7 = &cf_Failedtoallocateroomfordevicerefs;
      }
      else {
        _CFDictionaryGetKeysAndValues(*(undefined8 *)(_gRestorableData + 0x38),pvVar2,pvVar3);
        if (0 < (int)uVar1) {
          uVar8 = 0;
          do {
            lVar4 = *(long *)((long)pvVar3 + uVar8 * 8);
            if (lVar4 == 0) {
              _AMRLog(3,&cf_NULLdevicefoundinrestorabledictionary_thisisbad);
            }
            else if (lVar4 == *param_1) {
              if (param_1[1] == 0) {
                pcVar7 = (cfstringStruct *)0x0;
                iVar6 = 0;
              }
              else {
                lVar4 = _CFDictionaryCreateCopy
                                  (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,
                                   *(undefined8 *)(*param_1 + 0x128));
                if (lVar4 == 0) {
                  pcVar7 = &cf_FailedtocopyAPIavailabilitydictionary;
                  iVar6 = 0xfa2;
                }
                else {
                  *(long *)param_1[1] = lVar4;
                  pcVar7 = (cfstringStruct *)0x0;
                  iVar6 = 0;
                }
              }
              goto LAB_00166c43;
            }
            uVar8 = uVar8 + 1;
          } while ((uVar1 & 0x7fffffff) != uVar8);
        }
        iVar6 = 0xfa1;
        pcVar7 = &cf_Can_tcopyAPIavailabilityforadevicethatisnotcurrentlyavailable;
      }
LAB_00166c43:
      _dispatch_semaphore_signal(*(dispatch_semaphore_t *)(_gRestorableData + 0x20));
      goto LAB_00166c53;
    }
    pcVar7 = &cf_Failedtoinitilizeglobaldata;
    iVar6 = 0xfa3;
  }
  pvVar3 = (void *)0x0;
  pvVar2 = (void *)0x0;
LAB_00166c53:
  if ((undefined8 *)param_1[2] != (undefined8 *)0x0) {
    if (iVar6 == 0) {
      *(undefined8 *)param_1[2] = 0;
    }
    else {
      uVar5 = _CFErrorCreate(*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,
                             &cf_com_apple_MobileDevice_MobileRestore,iVar6,0);
      *(undefined8 *)param_1[2] = uVar5;
    }
  }
  _AMRSafeLogAndRelease(3,pcVar7);
  if (pvVar2 != (void *)0x0) {
    _free(pvVar2);
  }
  if (pvVar3 == (void *)0x0) {
    return;
  }
  _free(pvVar3);
  return;
}

