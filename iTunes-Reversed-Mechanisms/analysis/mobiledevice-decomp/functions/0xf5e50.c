// rea decompile_all
// name: __AMRAuthInstallAlignOptionsToPersonalizedBundle
// address: 0xf5e50
// body: available
// range: 0xf5e50-0xf645a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int __AMRAuthInstallAlignOptionsToPersonalizedBundle
              (undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  cfstringStruct *pcVar8;
  long lVar9;
  cfstringStruct *local_78;
  long local_70;
  long local_68;
  undefined8 local_60;
  long local_58;
  undefined8 local_50;
  long local_48;
  undefined4 local_3c;
  undefined8 local_38;
  
  local_38 = 0;
  local_70 = 0;
  local_68 = 0;
  uVar4 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
  uVar3 = _AMAuthInstallBundleGetReceiptComponent();
  iVar2 = _AMAuthInstallSupportCopyURLWithAppendedComponent(uVar4,param_2,uVar3,0,&local_70);
  if (iVar2 == 0) {
    iVar2 = _AMAuthInstallSupportCreateDictionaryFromFileURL(uVar4,&local_68,local_70);
    if (iVar2 == 0) {
      lVar5 = _CFDictionaryGetValue(local_68,&cf_Alignment);
      if (lVar5 == 0) {
        _AMRLog(3,&cf_bundleismissingalignmentinfo);
        iVar2 = 1;
      }
      else {
        lVar6 = _CFDictionaryGetValue(lVar5,&cf_DFUFileType);
        if (lVar6 != 0) {
          _CFDictionarySetValue(param_1,&cf_DFUFileType,lVar6);
        }
        lVar6 = _CFDictionaryGetValue(param_1,&cf_SystemImageType);
        local_3c = param_3;
        if (((lVar6 == 0) && (lVar6 = _CFDictionaryGetValue(param_1,&cf_SystemImage), lVar6 == 0))
           || (lVar6 = _CFDictionaryGetValue(lVar5,&cf_OS), lVar6 == 0)) {
LAB_000f608c:
          local_60 = param_2;
          lVar6 = _CFDictionaryGetValue(lVar5,&cf_KernelCache);
          local_58 = lVar5;
          if (lVar6 == 0) {
            local_48 = 0;
            lVar5 = 0;
            local_50 = param_1;
LAB_000f618b:
            lVar6 = _CFDictionaryGetValue(local_58,&cf_RestoreKernelCache);
            if (lVar6 == 0) {
              lVar7 = 0;
              lVar9 = 0;
            }
            else {
              lVar7 = _CFDictionaryGetValue(local_50,&cf_RestoreKernelCacheFile);
              if (lVar7 == 0) {
                lVar7 = 0;
                lVar9 = 0;
              }
              else {
                lVar7 = _AMAuthInstallSupportCreateURLFromString(uVar4,lVar7);
                iVar2 = 0x1f;
                if (lVar7 == 0) goto LAB_000f63b8;
                lVar6 = _CFURLCopyLastPathComponent(lVar7);
                lVar9 = lVar6;
                if (lVar6 == 0) goto LAB_000f63ba;
              }
              iVar2 = _AMRestoreCreatePathFromURLWithAppendedComponent
                                (uVar4,local_60,lVar6,0,&local_38);
              lVar6 = local_48;
              if (iVar2 != 0) goto LAB_000f5f08;
              _CFDictionarySetValue(local_50,&cf_RestoreKernelCacheFile,local_38);
              _CFRelease(local_38);
              local_38 = 0;
              param_3 = local_3c;
            }
            lVar6 = _CFDictionaryGetValue(local_58,&cf_RestoreRamDisk);
            if (lVar6 != 0) {
              iVar2 = _AMRestoreCreatePathFromURLWithAppendedComponent
                                (uVar4,local_60,lVar6,0,&local_38);
              lVar6 = local_48;
              if (iVar2 != 0) goto LAB_000f5f08;
              _CFDictionarySetValue(local_50,&cf_BootImageFile,local_38);
              _CFRelease(local_38);
              local_38 = 0;
              param_3 = local_3c;
            }
            uVar1 = _CFDictionaryContainsKey(local_50,&cf_FirmwareDirectory);
            local_3c = CONCAT31(local_3c._1_3_,uVar1);
            pcVar8 = &cf_RestoreDeviceTree;
            if ((char)param_3 == '\0') {
              pcVar8 = &cf_DeviceTree;
            }
            lVar6 = _CFDictionaryGetValue(local_58,pcVar8);
            if (lVar6 != 0) {
              iVar2 = _AMRestoreCreatePathFromURLWithAppendedComponent
                                (uVar4,local_60,lVar6,0,&local_38);
              lVar6 = local_48;
              if (iVar2 != 0) goto LAB_000f5f08;
              if ((char)local_3c == '\0') {
                _CFDictionarySetValue(local_50,&cf_DeviceTreeFile,local_38);
              }
              _CFRelease(local_38);
              local_38 = 0;
            }
            lVar6 = _CFDictionaryGetValue(local_58,&cf_AllFlash);
            if (lVar6 != 0) {
              iVar2 = _AMRestoreCreatePathFromURLWithAppendedComponent
                                (uVar4,local_60,lVar6,1,&local_38);
              lVar6 = local_48;
              if (iVar2 != 0) goto LAB_000f5f08;
              if ((char)local_3c == '\0') {
                _CFDictionarySetValue(local_50,&cf_NORImagePath,local_38);
              }
              _CFRelease(local_38);
              local_38 = 0;
            }
            lVar6 = _CFDictionaryGetValue(local_58,&cf_Diags);
            if (lVar6 != 0) {
              iVar2 = _AMRestoreCreatePathFromURLWithAppendedComponent
                                (uVar4,local_60,lVar6,1,&local_38);
              lVar6 = local_48;
              if (iVar2 != 0) goto LAB_000f5f08;
              _CFDictionarySetValue(local_50,&cf_DiagToInstall,local_38);
              _CFRelease(local_38);
              local_38 = 0;
            }
            uVar4 = local_50;
            _CFDictionaryRemoveValue(local_50,&cf_DFUFile);
            _CFDictionaryRemoveValue(uVar4,&cf_BoardConfig);
            _CFDictionaryRemoveValue(uVar4,&cf_SystemImageType);
            _CFDictionaryRemoveValue(uVar4,&cf_KernelCacheType);
            _CFDictionaryRemoveValue(uVar4,&cf_BootImageType);
            iVar2 = 0;
            lVar6 = local_48;
            if ((char)local_3c == '\0') {
              _CFDictionaryRemoveValue(uVar4,&cf_NORImageType);
              lVar6 = local_48;
            }
          }
          else {
            lVar5 = _CFDictionaryGetValue(param_1,&cf_KernelCacheFile);
            if (lVar5 == 0) {
              local_48 = 0;
              lVar5 = 0;
LAB_000f613b:
              lVar7 = 0;
              local_50 = param_1;
              iVar2 = _AMRestoreCreatePathFromURLWithAppendedComponent
                                (uVar4,local_60,lVar6,0,&local_38);
              if (iVar2 == 0) {
                _CFDictionarySetValue(local_50,&cf_KernelCacheFile,local_38);
                _CFRelease(local_38);
                local_38 = 0;
                param_3 = local_3c;
                goto LAB_000f618b;
              }
            }
            else {
              lVar5 = _AMAuthInstallSupportCreateURLFromString(uVar4,lVar5);
              iVar2 = 0x1f;
              if (lVar5 == 0) goto LAB_000f5f00;
              local_48 = lVar5;
              lVar5 = _CFURLCopyLastPathComponent(lVar5);
              lVar6 = lVar5;
              if (lVar5 != 0) goto LAB_000f613b;
              lVar5 = 0;
LAB_000f63b8:
              iVar2 = 0x1f;
              lVar7 = 0;
            }
LAB_000f63ba:
            lVar9 = 0;
            lVar6 = local_48;
          }
          goto LAB_000f5f08;
        }
        local_78 = (cfstringStruct *)0x0;
        iVar2 = _AMRestoreCreatePathFromURLWithAppendedComponent(uVar4,param_2,lVar6,0,&local_38);
        if (iVar2 == 0) {
          local_78 = &cf_ImageFile;
          local_58 = lVar5;
          lVar5 = _CFDictionaryCreate(uVar4,&local_78,&local_38,1,
                                      PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                                      PTR__kCFTypeDictionaryValueCallBacks_004411b8);
          _CFRelease(local_38);
          local_38 = 0;
          if (lVar5 != 0) {
            _CFDictionaryAddValue(param_1,&cf_SystemImage,lVar5);
            _CFRelease(lVar5);
            lVar5 = local_58;
            param_3 = local_3c;
            goto LAB_000f608c;
          }
          iVar2 = 0x12;
        }
      }
    }
    else {
      uVar4 = _CFURLCopyPath(param_2);
      _AMRLogWithFilePath(3,uVar4,&cf_failedtoopenpersonalizationreceipt);
      _CFRelease(uVar4);
      iVar2 = _AMAuthInstallToRestoreError(iVar2);
    }
  }
  else {
    iVar2 = _AMAuthInstallToRestoreError(iVar2);
  }
LAB_000f5f00:
  lVar5 = 0;
  lVar7 = 0;
  lVar9 = 0;
  lVar6 = 0;
LAB_000f5f08:
  if (local_70 != 0) {
    _CFRelease();
  }
  if (local_68 != 0) {
    _CFRelease();
  }
  if (lVar6 != 0) {
    _CFRelease(lVar6);
  }
  if (lVar5 != 0) {
    _CFRelease(lVar5);
  }
  if (lVar7 != 0) {
    _CFRelease(lVar7);
  }
  if (lVar9 != 0) {
    _CFRelease(lVar9);
  }
  return iVar2;
}

