// rea decompile_all
// name: _handlePersonalizedDataRequest
// address: 0xd6875
// body: available
// range: 0xd6875-0xd6d15 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* _handlePersonalizedDataRequest(AMRestoreMuxedDeviceMessage*, __CFDictionary const*, unsigned
   char) */

undefined4
_handlePersonalizedDataRequest
          (AMRestoreMuxedDeviceMessage *param_1,__CFDictionary *param_2,uchar param_3)

{
  pthread_mutex_t *ppVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  void *pvVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined7 in_register_00000011;
  cfstringStruct *pcVar14;
  long local_58;
  long local_50;
  long local_48;
  long local_40;
  void *local_38;
  
  local_40 = CONCAT44(local_40._4_4_,(int)CONCAT71(in_register_00000011,param_3));
  lVar8 = *(long *)(param_1 + 0x10);
  lVar9 = *(long *)(lVar8 + 0x10);
  local_48 = 0;
  local_58 = 0;
  ppVar1 = (pthread_mutex_t *)(lVar9 + 0x158);
  bVar2 = true;
  _pthread_mutex_lock(ppVar1);
  lVar6 = _CFDictionaryGetValue(*(undefined8 *)(lVar8 + 0x18),&cf_PersonalizedRestoreBundlePath);
  if (lVar6 == 0) {
    uVar5 = 6;
  }
  else {
    uVar7 = _CFGetAllocator(lVar9);
    local_50 = _CFURLCreateWithFileSystemPath(uVar7,lVar6,0,1);
    if (local_50 != 0) {
      lVar8 = _AMRAuthInstallCopyVariant
                        (*(undefined8 *)(lVar9 + 0x150),*(undefined8 *)(lVar8 + 0x18));
      if (lVar8 == 0) {
        lVar6 = 0;
        _AMRLog(3,&cf_Can_thandlerequestwithoutvariant);
        uVar5 = 0x13;
      }
      else {
        uVar7 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
        lVar6 = _CFDictionaryCreateMutable
                          (uVar7,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                           PTR__kCFTypeDictionaryValueCallBacks_004411b8);
        if (lVar6 == 0) {
          uVar5 = 0x12;
          lVar6 = 0;
        }
        else if (param_2 == (__CFDictionary *)0x0) {
          pcVar14 = &cf_ClientdidnotpassargsDict;
LAB_000d6cbb:
          uVar5 = 1;
          _AMRLog(3,pcVar14);
        }
        else {
          if ((char)local_40 == '\0') {
            pcVar14 = (cfstringStruct *)_CFDictionaryGetValue(param_2,&cf_ImageType);
            if (pcVar14 == (cfstringStruct *)0x0) {
              pcVar14 = &cf_ClientdidnotspecifyImageType;
              goto LAB_000d6cbb;
            }
          }
          else {
            pcVar14 = &cf_IsEarlyAccessFirmware;
          }
          iVar4 = _AMAuthInstallBundleCopyPersonalizedURLsMatchingType
                            (*(undefined8 *)(lVar9 + 0x150),local_50,lVar8,pcVar14,&local_48);
          if (iVar4 == 0) {
            cVar3 = _CFDictionaryContainsKey(param_2,&cf_EANImageList);
            if (cVar3 == '\0') {
              cVar3 = _CFDictionaryContainsKey(param_2,&cf_ImageList);
              if (cVar3 != '\0') goto LAB_000d6a0d;
              cVar3 = _CFDictionaryContainsKey(param_2,&cf_ImageName);
              if (cVar3 != '\0') {
                uVar11 = _CFDictionaryGetValue(param_2,&cf_ImageName);
                cVar3 = _CFDictionaryContainsKey(local_48,uVar11);
                if (cVar3 == '\0') {
                  uVar5 = 0xb;
                  _AMRLog(3,&cf_Hostaskedfor__whichisnotpresent_,uVar11);
                }
                else {
                  _CFDictionarySetValue(lVar6,&cf_ImageName,uVar11);
                  uVar12 = _CFDictionaryGetValue(local_48,uVar11);
                  iVar4 = _AMSupportCreateDataFromMappedFileURL(uVar7,&local_58,uVar12);
                  if (iVar4 == 0) {
                    puVar13 = &_RESTORED_IMAGE_DATA;
                    if ((char)local_40 != '\0') {
                      puVar13 = &_RESTORED_EAN_IMAGE_DATA;
                    }
                    _CFDictionarySetValue(lVar6,*puVar13,local_58);
                    goto LAB_000d6be5;
                  }
                  uVar5 = 0xb;
                  _AMRLog(3,&cf_failedtocopyfile___error__d,uVar11,iVar4);
                }
                goto LAB_000d6aed;
              }
LAB_000d6be5:
              lVar9 = 0;
              local_38 = (void *)0x0;
              pvVar10 = (void *)0x0;
LAB_000d6a9c:
              local_40 = lVar9;
              _pthread_mutex_unlock(ppVar1);
              bVar2 = false;
              iVar4 = (**(code **)(*(long *)param_1 + 0x10))(param_1,lVar6);
              uVar5 = 0;
              if (iVar4 != 0) {
                uVar5 = 9;
                _AMRLog(3,&cf_restored_send_messagefailed_msgstatus__d,iVar4);
              }
              if (local_38 != (void *)0x0) {
LAB_000d6acd:
                _free(local_38);
              }
              if (pvVar10 != (void *)0x0) {
                _free(pvVar10);
              }
              if (local_40 != 0) {
                _CFRelease();
              }
            }
            else {
LAB_000d6a0d:
              lVar9 = _CFDictionaryGetCount(local_48);
              local_38 = _malloc(lVar9 * 8);
              if (local_38 != (void *)0x0) {
                pvVar10 = _malloc(lVar9 * 8);
                if (pvVar10 == (void *)0x0) {
                  pvVar10 = (void *)0x0;
                  _AMRLog(3,&cf_FailedtoallocatecontentsValuesBuffer);
                }
                else {
                  _CFDictionaryGetKeysAndValues(local_48,local_38,pvVar10);
                  lVar9 = _CFArrayCreate(uVar7,local_38,lVar9,PTR__kCFTypeArrayCallBacks_004411a8);
                  if (lVar9 != 0) {
                    pcVar14 = &cf_EANImageList;
                    if ((char)local_40 == '\0') {
                      pcVar14 = &cf_ImageList;
                    }
                    _CFDictionarySetValue(lVar6,pcVar14,lVar9);
                    goto LAB_000d6a9c;
                  }
                  _AMRLog(3,&cf_Failedtocreatelistarray);
                }
                local_40 = 0;
                uVar5 = 0xffffffff;
                goto LAB_000d6acd;
              }
              uVar5 = 0xffffffff;
              _AMRLog(3,&cf_FailedtoallocatecontentsKeysBuffer);
            }
          }
          else {
            uVar5 = _AMAuthInstallToRestoreError(iVar4);
            _AMRLog(3,&cf_failedtocopypersonalizedimages_error__d,iVar4);
          }
        }
      }
LAB_000d6aed:
      _CFRelease(local_50);
      goto LAB_000d6af6;
    }
    uVar5 = 0x12;
  }
  lVar8 = 0;
  lVar6 = 0;
LAB_000d6af6:
  if (local_58 != 0) {
    _CFRelease();
  }
  if (lVar8 != 0) {
    _CFRelease(lVar8);
  }
  if (lVar6 != 0) {
    _CFRelease(lVar6);
  }
  if (local_48 != 0) {
    _CFRelease();
  }
  if (bVar2) {
    _pthread_mutex_unlock(ppVar1);
  }
  return uVar5;
}

