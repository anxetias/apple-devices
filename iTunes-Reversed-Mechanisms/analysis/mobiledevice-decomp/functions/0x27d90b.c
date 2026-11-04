// rea decompile_all
// name: _AMAuthInstallBasebandCreateUpdaterStateInfo
// address: 0x27d90b
// body: available
// range: 0x27d90b-0x27dd3c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong _AMAuthInstallBasebandCreateUpdaterStateInfo(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined4 uVar5;
  long lVar6;
  long local_70;
  undefined4 local_68;
  undefined4 local_64;
  long local_60;
  long local_58;
  undefined8 local_50;
  long local_48;
  long local_40;
  undefined8 *local_38;
  
  local_38 = (undefined8 *)CONCAT44(local_38._4_4_,1);
  if (param_1 == 0) {
    local_40 = 0;
LAB_0027dce4:
    lVar3 = 0;
  }
  else {
    local_40 = 0;
    if (param_2 == (undefined8 *)0x0) goto LAB_0027dce4;
    local_70 = 0;
    lVar6 = 0;
    lVar1 = 0;
    uVar2 = 0;
    lVar4 = 0;
    lVar3 = 0;
    if (*(long *)(param_1 + 0x30) == 0) goto LAB_0027dc66;
    local_38 = param_2;
    lVar1 = _CFDictionaryCreateMutable
                      (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,0,
                       PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                       PTR__kCFTypeDictionaryValueCallBacks_004411b8);
    if (lVar1 == 0) {
      local_38 = (undefined8 *)CONCAT44(local_38._4_4_,2);
      local_40 = 0;
      lVar3 = 0;
    }
    else {
      uVar2 = _CFGetAllocator(param_1);
      lVar3 = _CFNumberCreate(uVar2,3,*(undefined8 *)(param_1 + 0x30));
      local_40 = lVar1;
      if (lVar3 == 0) {
        local_38 = (undefined8 *)CONCAT44(local_38._4_4_,2);
        goto LAB_0027dce4;
      }
      uVar2 = _CFGetAllocator(param_1);
      lVar4 = _CFNumberCreate(uVar2,3,*(long *)(param_1 + 0x30) + 4);
      if (lVar4 != 0) {
        uVar2 = _CFGetAllocator(param_1);
        uVar2 = _CFNumberCreate(uVar2,3,*(long *)(param_1 + 0x30) + 8);
        _CFDictionarySetValue(lVar1,&cf_VendorID,lVar3);
        _CFDictionarySetValue(lVar1,&cf_ChipID,lVar4);
        _CFDictionarySetValue(lVar1,&cf_CertID,uVar2);
        lVar6 = *(long *)(param_1 + 0x30);
        if (*(long *)(lVar6 + 0x10) != 0) {
          _CFDictionarySetValue(lVar1,&cf_ChipSerialNo);
          lVar6 = *(long *)(param_1 + 0x30);
        }
        if (*(long *)(lVar6 + 0x18) != 0) {
          _CFDictionarySetValue(lVar1,&cf_Nonce);
        }
        local_60 = lVar3;
        local_58 = lVar4;
        local_50 = uVar2;
        if (*(long *)(param_1 + 0xd0) == 0) {
          local_38 = (undefined8 *)CONCAT44(local_38._4_4_,0xe);
          lVar4 = 0;
          lVar6 = 0;
        }
        else {
          lVar1 = _CFDictionaryGetValue(*(long *)(param_1 + 0xd0),&cf_BbProvisioningManifestKeyHash)
          ;
          lVar3 = _CFDictionaryGetValue
                            (*(undefined8 *)(param_1 + 0xd0),&cf_BbCalibrationManifestKeyHash);
          local_48 = 0;
          if (lVar1 == 0 && lVar3 == 0) {
            local_70 = 0;
            lVar6 = 0;
            lVar1 = local_40;
LAB_0027dc3c:
            uVar2 = _CFRetain(lVar1);
            *local_38 = uVar2;
            local_38 = (undefined8 *)((ulong)local_38 & 0xffffffff00000000);
            lVar1 = local_58;
            uVar2 = local_50;
            lVar4 = local_48;
            lVar3 = local_60;
            goto LAB_0027dc66;
          }
          uVar2 = _CFGetAllocator(param_1);
          lVar6 = _CFDictionaryCreateMutable
                            (uVar2,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                             PTR__kCFTypeDictionaryValueCallBacks_004411b8);
          lVar4 = 0;
          if (lVar6 != 0) {
            if (lVar1 == 0) {
              uVar5 = 3;
              _AMAuthInstallLog(3,"AMAuthInstallBasebandCreateUpdaterStateInfo",
                                "provisioning key hash not found");
            }
            else {
              _CFDictionarySetValue(lVar6,&cf_SKeyHash,lVar1);
              uVar5 = 0;
              _AMAuthInstallLog(6,"AMAuthInstallBasebandCreateUpdaterStateInfo",
                                "provisioning key status=%d",0);
            }
            local_68 = uVar5;
            if (lVar3 == 0) {
              uVar5 = 3;
              _AMAuthInstallLog(3,"AMAuthInstallBasebandCreateUpdaterStateInfo",
                                "calibration key hash not found");
            }
            else {
              _CFDictionarySetValue(lVar6,&cf_CKeyHash,lVar3);
              uVar5 = 0;
              _AMAuthInstallLog(6,"AMAuthInstallBasebandCreateUpdaterStateInfo",
                                "calibration key status=%d",0);
            }
            local_64 = uVar5;
            uVar2 = _CFGetAllocator(param_1);
            local_48 = _CFNumberCreate(uVar2,3,&local_68);
            if (local_48 == 0) {
              lVar4 = 0;
            }
            else {
              _CFDictionarySetValue(lVar6,&cf_SKeyStatus,local_48);
              uVar2 = _CFGetAllocator(param_1);
              local_70 = _CFNumberCreate(uVar2,3,&local_64);
              lVar4 = local_48;
              if (local_70 != 0) {
                _CFDictionarySetValue(lVar6,&cf_CKeyStatus,local_70);
                lVar1 = local_40;
                _CFDictionarySetValue(local_40,&cf_ManifestInfo,lVar6);
                goto LAB_0027dc3c;
              }
            }
          }
          local_38 = (undefined8 *)CONCAT44(local_38._4_4_,2);
        }
        local_70 = 0;
        lVar1 = local_58;
        uVar2 = local_50;
        lVar3 = local_60;
        goto LAB_0027dc66;
      }
      local_38 = (undefined8 *)CONCAT44(local_38._4_4_,2);
    }
  }
  uVar2 = 0;
  lVar1 = 0;
  lVar4 = 0;
  local_70 = 0;
  lVar6 = 0;
LAB_0027dc66:
  local_48 = lVar6;
  _SafeRelease(local_40);
  _SafeRelease(lVar3);
  _SafeRelease(lVar1);
  _SafeRelease(uVar2);
  _SafeRelease(lVar4);
  _SafeRelease(local_70);
  _SafeRelease(local_48);
  return (ulong)local_38 & 0xffffffff;
}

