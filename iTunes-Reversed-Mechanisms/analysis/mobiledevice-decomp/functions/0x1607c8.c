// rea decompile_all
// name: __AMRestorableDeviceAddUsedResource
// address: 0x1607c8
// body: available
// range: 0x1607c8-0x1609dc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1609c0 to 0x2a97b0 _CFRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __AMRestorableDeviceAddUsedResource(long param_1,long param_2,uint param_3,char param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  cfstringStruct *pcVar5;
  uint local_34;
  
  local_34 = param_3;
  if (param_1 == 0) {
    pcVar5 = &cf_Can_taddresourcetoNULLdevice;
LAB_00160999:
    _AMRSafeLog(3,&cf___,pcVar5);
    _CFRelease(pcVar5);
    return;
  }
  if (param_2 == 0) {
    pcVar5 = &cf_Can_taddNULLresourcetodevice;
    goto LAB_00160999;
  }
  if (*(long *)(param_1 + 0xd8) == 0) {
    pcVar5 = &cf_Can_tgetresourceswithNULLrestoreinfo;
    goto LAB_00160999;
  }
  _dispatch_semaphore_wait(*(dispatch_semaphore_t *)(param_1 + 0x88),0xffffffffffffffff);
  lVar2 = _CFDictionaryGetValue(*(undefined8 *)(param_1 + 0xd8),&cf_UsedResources);
  uVar1 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
  if (lVar2 == 0) {
    lVar2 = _CFArrayCreateMutable(uVar1,0,PTR__kCFTypeArrayCallBacks_004411a8);
    if (lVar2 != 0) {
      _CFDictionarySetValue(*(undefined8 *)(param_1 + 0xd8),&cf_UsedResources,lVar2);
      _CFRelease(lVar2);
      goto LAB_0016087c;
    }
    pcVar5 = &cf_Failedtoallocateresourcesarray;
  }
  else {
LAB_0016087c:
    lVar3 = _CFDictionaryCreateMutable
                      (uVar1,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                       PTR__kCFTypeDictionaryValueCallBacks_004411b8);
    if (lVar3 != 0) {
      lVar4 = _CFNumberCreate(uVar1,9,&local_34);
      _CFDictionarySetValue(lVar3,&cf_ResourceType,lVar4);
      _CFDictionarySetValue(lVar3,&cf_ResourceURL,param_2);
      if (local_34 == 2) {
        _CFArrayInsertValueAtIndex(lVar2,0,lVar3);
      }
      else {
        _CFArrayAppendValue(lVar2,lVar3);
      }
      if (param_4 != '\0') {
        if (1 < local_34) {
          pcVar5 = (cfstringStruct *)0x0;
          _AMRLog(3,&cf_Can_taddresourceintoresourcemanagerfortype_d_ignoring);
          goto LAB_0016093e;
        }
        __AMRResourceManagerStartedUsingResourceAtURL(param_2);
      }
      pcVar5 = (cfstringStruct *)0x0;
      goto LAB_0016093e;
    }
    pcVar5 = &cf_Failedtoallocatedictionaryforusedresourceinfo;
  }
  lVar4 = 0;
  lVar3 = 0;
LAB_0016093e:
  _AMRSafeLogAndRelease(3,pcVar5);
  _dispatch_semaphore_signal(*(dispatch_semaphore_t *)(param_1 + 0x88));
  if (lVar4 != 0) {
    _CFRelease(lVar4);
  }
  if (lVar3 != 0) {
    _CFRelease(lVar3);
  }
  return;
}

