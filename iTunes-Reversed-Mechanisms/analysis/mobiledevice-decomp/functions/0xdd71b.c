// rea decompile_all
// name: _sendLargeFile
// address: 0xdd71b
// body: available
// range: 0xdd71b-0xddad4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* _sendLargeFile(AMRestoreMuxedDeviceMessage*, int, char*) */

undefined4 _sendLargeFile(AMRestoreMuxedDeviceMessage *param_1,int param_2,char *param_3)

{
  __AMRestoreModeDevice *p_Var1;
  char cVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  void *pvVar7;
  long lVar8;
  undefined4 uVar9;
  ulong uVar10;
  ulong uVar11;
  cfstringStruct *pcVar12;
  ulong uVar13;
  bool bVar14;
  ulong local_78;
  char *local_70;
  int local_64;
  undefined8 local_60;
  AMRestoreMuxedDeviceMessage *local_58;
  long local_50;
  long local_48;
  undefined8 local_40;
  void *local_38;
  
  lVar5 = *(long *)(param_1 + 0x10);
  p_Var1 = *(__AMRestoreModeDevice **)(lVar5 + 0x10);
  local_78 = 0;
  local_60 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
  lVar4 = _CFStringCreateWithCString(local_60,param_3,0x8000100);
  if (lVar4 == 0) {
    pcVar12 = &cf_FailedtoconvertpathtoCFString_;
    local_40 = CONCAT44(local_40._4_4_,0x1f);
LAB_000dd9ab:
    lVar8 = 0;
    pvVar7 = (void *)0x0;
  }
  else {
    local_64 = param_2;
    lVar5 = _AMRLazyFileOpenFromOptions(*(undefined8 *)(lVar5 + 0x18),lVar4,0);
    if ((lVar5 == 0) && (lVar5 = _AMRLazyFileOpenForPath(param_3), lVar5 == 0)) {
      pcVar12 = &cf_FailedtoopenOSimagefile_;
      local_40 = CONCAT44(local_40._4_4_,0xc);
      goto LAB_000dd9ab;
    }
    local_70 = param_3;
    local_58 = param_1;
    uVar6 = _AMRLazyFileGetSize(lVar5);
    local_78 = uVar6;
    pvVar7 = _malloc(0x2000);
    if (pvVar7 == (void *)0x0) {
      local_40 = CONCAT44(local_40._4_4_,0x12);
      pcVar12 = &cf_Failedtoallocatewritebuffer_;
      lVar8 = 0;
    }
    else {
      uVar11 = 0x2000;
      if (uVar6 < 0x2000) {
        uVar11 = uVar6;
      }
      local_38 = pvVar7;
      cVar2 = _AMRLazyFileRead(lVar5,pvVar7,uVar11);
      if (cVar2 == '\0') {
        lVar8 = 0;
LAB_000dd9d7:
        local_40 = CONCAT44(local_40._4_4_,0xb);
        pcVar12 = &cf_Failedtoreadfromfile_;
        pvVar7 = local_38;
      }
      else {
        local_40 = CONCAT44(local_40._4_4_,0x12);
        local_48 = lVar5;
        lVar8 = _CFDictionaryCreateMutable(local_60,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0);
        if (lVar8 == 0) {
          pcVar12 = &cf_Failedtoallocatereplaydictionary_;
          lVar8 = 0;
          lVar5 = local_48;
          pvVar7 = local_38;
        }
        else {
          local_50 = lVar4;
          lVar5 = _CFNumberCreate(local_60,0xe,&local_78);
          if (lVar5 == 0) {
            pcVar12 = &cf_Failedtoallocatefilesizenumber_;
            lVar5 = local_48;
            pvVar7 = local_38;
            lVar4 = local_50;
          }
          else {
            _CFDictionarySetValue(lVar8,&cf_DataSize,lVar5);
            _CFRelease(lVar5);
            if (uVar6 != 0) {
              local_40 = *(undefined8 *)PTR__kCFAllocatorNull_004410f8;
              uVar13 = 1;
              uVar10 = uVar6 - uVar11;
              do {
                if ((0x3200000 < uVar6) && (uVar13 % (uVar6 / 0xc8000) == 0)) {
                  _AMRestoreModeDeviceProgressAsync
                            (p_Var1,local_64,(int)(uVar13 / (uVar6 / 0xc8000)),(__CFString *)0x0);
                }
                lVar5 = _CFDataCreateWithBytesNoCopy(local_60,local_38,uVar11);
                if (lVar5 == 0) {
                  pcVar12 = &cf_FailedtocreateCFDataBuffer_;
                  local_40 = CONCAT44(local_40._4_4_,0xb);
                  lVar5 = local_48;
                  pvVar7 = local_38;
                  lVar4 = local_50;
                  goto LAB_000dda46;
                }
                _CFDictionarySetValue(lVar8,&cf_FileData,lVar5);
                _CFRelease(lVar5);
                iVar3 = (**(code **)(*(long *)local_58 + 0x10))(local_58,lVar8);
                if (iVar3 != 0) {
                  _AMRLazyFileClose(local_48);
                  uVar9 = 9;
                  pvVar7 = local_38;
                  lVar4 = local_50;
                  goto LAB_000dda6a;
                }
                uVar11 = 0x2000;
                if (uVar10 < 0x2000) {
                  uVar11 = uVar10;
                }
                cVar2 = _AMRLazyFileRead(local_48,local_38,uVar11);
                if (cVar2 == '\0') {
                  lVar5 = local_48;
                  lVar4 = local_50;
                  goto LAB_000dd9d7;
                }
                uVar13 = uVar13 + 1;
                bVar14 = uVar10 != 0;
                uVar10 = uVar10 - uVar11;
              } while (bVar14);
            }
            _CFDictionaryRemoveValue(lVar8,&cf_FileData);
            _CFDictionarySetValue
                      (lVar8,&cf_FileDataDone,*(undefined8 *)PTR__kCFBooleanTrue_00441110);
            iVar3 = (**(code **)(*(long *)local_58 + 0x10))(local_58,lVar8);
            lVar4 = local_50;
            if (iVar3 == 0) {
              _AMRLazyFileClose(local_48);
              uVar9 = 0;
              _AMRLog(6,&cf_Sentimagesuccessfullyfrom__s,local_70);
              pvVar7 = local_38;
              goto LAB_000dda6a;
            }
            local_40 = CONCAT44(local_40._4_4_,9);
            pcVar12 = &cf_Failedtosendfiledonemessagetodevice_;
            lVar5 = local_48;
            pvVar7 = local_38;
          }
        }
      }
    }
LAB_000dda46:
    _AMRLazyFileClose(lVar5);
  }
  _AMRLog(3,&cf___,pcVar12);
  uVar9 = (undefined4)local_40;
LAB_000dda6a:
  if (pvVar7 != (void *)0x0) {
    _free(pvVar7);
  }
  if (lVar8 != 0) {
    _CFRelease(lVar8);
  }
  if (lVar4 != 0) {
    _CFRelease(lVar4);
  }
  return uVar9;
}

