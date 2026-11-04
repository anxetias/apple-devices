// rea decompile_all
// name: __AMAuthInstallApCopyDeviceEntryFromProvidedDeviceMap
// address: 0x275928
// body: available
// range: 0x275928-0x275ccf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long __AMAuthInstallApCopyDeviceEntryFromProvidedDeviceMap(long param_1,long param_2,long *param_3)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  void *pvVar6;
  void *pvVar7;
  long lStack_70;
  undefined8 local_60;
  long local_58;
  cfstringStruct *local_50;
  void *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  
  local_60 = 0;
  lVar3 = 0;
  local_38 = &cf_SecurityDomain;
  local_40 = &cf_BoardID;
  local_50 = &cf_ChipID;
  lStack_70 = 1;
  if ((param_1 != 0) && (param_2 != 0)) {
    pvVar6 = (void *)0x0;
    pvVar7 = (void *)0x0;
    if (param_3 == (long *)0x0) goto LAB_00275bbc;
    lVar3 = *(long *)(*(long *)(param_1 + 0x10) + 0x90);
    if (lVar3 == 0) {
      local_38 = &cf_SecurityDomain;
      local_40 = &cf_BoardID;
      local_50 = &cf_ChipID;
    }
    else {
      uVar2 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
      local_50 = (cfstringStruct *)_CFStringCreateWithFormat(uVar2,0,&cf______,lVar3,&cf_ChipID);
      if (local_50 == (cfstringStruct *)0x0) {
        _AMAuthInstallLog(3,"_AMAuthInstallApCopyDeviceEntryFromProvidedDeviceMap",
                          "failed chipKey allocation");
        local_38 = &cf_SecurityDomain;
        local_40 = &cf_BoardID;
        lStack_70 = 99;
        pvVar6 = (void *)0x0;
        local_50 = (cfstringStruct *)0x0;
        lVar3 = 0;
        pvVar7 = (void *)0x0;
        goto LAB_00275bbc;
      }
      local_40 = (cfstringStruct *)
                 _CFStringCreateWithFormat
                           (uVar2,0,&cf______,*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x90),
                            &cf_BoardID);
      if (local_40 == (cfstringStruct *)0x0) {
        _AMAuthInstallLog(3,"_AMAuthInstallApCopyDeviceEntryFromProvidedDeviceMap",
                          "failed boardKey allocation");
        local_38 = &cf_SecurityDomain;
        lStack_70 = 99;
        pvVar6 = (void *)0x0;
        local_40 = (cfstringStruct *)0x0;
        lVar3 = 0;
        pvVar7 = (void *)0x0;
        goto LAB_00275bbc;
      }
      local_38 = (cfstringStruct *)
                 _CFStringCreateWithFormat
                           (uVar2,0,&cf______,*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x90),
                            &cf_SecurityDomain);
      if (local_38 == (cfstringStruct *)0x0) {
        _AMAuthInstallLog(3,"_AMAuthInstallApCopyDeviceEntryFromProvidedDeviceMap",
                          "failed secdomKey allocation");
        lStack_70 = 99;
        pvVar6 = (void *)0x0;
        local_38 = (cfstringStruct *)0x0;
        lVar3 = 0;
        pvVar7 = (void *)0x0;
        goto LAB_00275bbc;
      }
    }
    uVar2 = _CFGetAllocator(param_1);
    lVar3 = _CFPropertyListCreateWithData(uVar2,param_2,0,0,&local_60);
    if (lVar3 == 0) {
      lVar3 = 0;
      lStack_70 = 3;
      _AMAuthInstallLog(3,"_AMAuthInstallApCopyDeviceEntryFromProvidedDeviceMap",
                        "failed to create dictionary from device_map (Not plist/xml data?): %@",
                        local_60);
    }
    else {
      lVar4 = _CFDictionaryGetCount(lVar3);
      local_48 = _malloc(lVar4 * 8);
      lStack_70 = 2;
      if (local_48 != (void *)0x0) {
        pvVar6 = _malloc(lVar4 * 8);
        if (pvVar6 == (void *)0x0) {
          pvVar6 = (void *)0x0;
          pvVar7 = local_48;
        }
        else {
          local_58 = lVar3;
          _CFDictionaryGetKeysAndValues(lVar3,local_48,pvVar6);
          if (0 < lVar4) {
            lVar3 = 0;
            do {
              uVar2 = *(undefined8 *)((long)pvVar6 + lVar3 * 8);
              cVar1 = _AMAuthInstallSupportCompareStringToInt32
                                (uVar2,local_50,*(undefined4 *)(*(long *)(param_1 + 0x10) + 8));
              if (((cVar1 != '\0') &&
                  (cVar1 = _AMAuthInstallSupportCompareStringToInt32
                                     (uVar2,local_40,
                                      *(undefined4 *)(*(long *)(param_1 + 0x10) + 0xc)),
                  cVar1 != '\0')) &&
                 (cVar1 = _AMAuthInstallSupportCompareStringToInt32
                                    (uVar2,local_38,
                                     *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x10)),
                 cVar1 != '\0')) {
                lVar3 = _CFDictionaryGetTypeID();
                lVar4 = _CFGetTypeID(uVar2);
                if (lVar3 != lVar4) {
                  lStack_70 = 0xe;
                  lVar3 = local_58;
                  pvVar7 = local_48;
                  goto LAB_00275bbc;
                }
                uVar5 = _CFGetAllocator(param_1);
                lVar3 = _CFDictionaryCreateCopy(uVar5,uVar2);
                *param_3 = lVar3;
                if (lVar3 == 0) {
                  lStack_70 = 0;
                  lVar3 = local_58;
                  pvVar7 = local_48;
                  goto LAB_00275bbc;
                }
                break;
              }
              lVar3 = lVar3 + 1;
            } while (lVar4 != lVar3);
          }
          lStack_70 = (ulong)(*param_3 == 0) << 3;
          lVar3 = local_58;
          pvVar7 = local_48;
        }
        goto LAB_00275bbc;
      }
    }
  }
  pvVar6 = (void *)0x0;
  pvVar7 = (void *)0x0;
LAB_00275bbc:
  _SafeRelease(lVar3);
  _SafeFree(pvVar7);
  _SafeFree(pvVar6);
  _SafeRelease(local_60);
  _SafeRelease(local_50);
  _SafeRelease(local_40);
  _SafeRelease(local_38);
  return lStack_70;
}

