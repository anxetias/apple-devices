// rea decompile_all
// name: _AMRestorableCommitStashBagWithManifest
// address: 0x16c4ab
// body: available
// range: 0x16c4ab-0x16c6d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
_AMRestorableCommitStashBagWithManifest
          (long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long local_50;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  
  if (param_1 == 0) {
    _AMRLog(3,&cf_deviceisNULL);
  }
  else {
    local_50 = param_1;
    _dispatch_sync_f(*(dispatch_queue_t *)(_gRestorableData + 0x18),&local_50,
                     ___thr_AMRestorableDeviceGetState);
    if ((int)local_48 == 4) {
      plVar1 = *(long **)(param_1 + 0x20);
      if (plVar1 == (long *)0x0) {
        _AMRLog(3,&cf_Couldn_tgetproxyfromdevice);
        return 0xe8000001;
      }
      local_38 = 0;
      local_50 = param_1;
      local_48 = param_3;
      local_40 = param_4;
      cVar3 = (**(code **)(*plVar1 + 0x60))(plVar1);
      lVar8 = 0;
      if ((param_2 != 0) && (cVar3 != '\0')) {
        uVar2 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
        iVar4 = _AMSupportCopyURLToNewTempDirectory(uVar2,"PreManifestBundle-XXXXXX",&local_38);
        if ((iVar4 == 0) && (local_38 != 0)) {
          lVar8 = 0;
          _AMRSafeLog(5,&cf_Creatingtemporarybundleneededtocreatepre_manifest___);
          iVar4 = _AMSupportPlatformMakeDirectoryForURL(local_38);
          if (iVar4 == 0) {
            lVar8 = 0;
            lVar6 = _CFURLCreateCopyAppendingPathComponent(uVar2,local_38,&cf_BuildManifest_plist,0)
            ;
            if (lVar6 != 0) {
              iVar4 = _AMSupportWriteDictionarytoFileURL(uVar2,param_2,lVar6);
              if ((iVar4 == 0) && (lVar7 = _CFURLCopyFileSystemPath(local_38,0), lVar7 != 0)) {
                lVar8 = _CFDictionaryCreateMutable
                                  (uVar2,1,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                                   PTR__kCFTypeDictionaryValueCallBacks_004411b8);
                if (lVar8 == 0) {
                  lVar8 = 0;
                }
                else {
                  _CFDictionarySetValue(lVar8,&cf_RestoreBundlePath,lVar7);
                }
                _CFRelease(lVar6);
                lVar6 = lVar7;
              }
              else {
                lVar8 = 0;
              }
              _CFRelease(lVar6);
            }
          }
        }
        else {
          lVar8 = 0;
        }
      }
      uVar5 = __AMRestoreOSDeviceProxyCreateStashBag(plVar1,lVar8,&local_50);
      if (local_38 != 0) {
        _AMSupportPlatformRemoveDirectory();
        _CFRelease(local_38);
      }
      if (lVar8 == 0) {
        return uVar5;
      }
      _CFRelease(lVar8);
      return uVar5;
    }
    _AMRSafeLog(3,&cf_DeviceisnotinthebootedOS__d);
  }
  return 0xe8000007;
}

