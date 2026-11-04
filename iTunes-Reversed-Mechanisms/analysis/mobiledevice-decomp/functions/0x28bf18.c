// rea decompile_all
// name: __AMAuthInstallBundleApplyMeasurements
// address: 0x28bf18
// body: available
// range: 0x28bf18-0x28c434 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int __AMAuthInstallBundleApplyMeasurements
              (long param_1,long param_2,long param_3,long param_4,undefined8 *param_5)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  size_t sVar6;
  void *pvVar7;
  undefined8 uVar8;
  char *pcVar9;
  undefined8 *puVar10;
  size_t sVar11;
  undefined4 uVar12;
  void *pvVar13;
  long local_68;
  undefined8 *local_60;
  long local_58;
  long local_50;
  long local_48;
  long local_40;
  long local_38;
  
  local_38 = 0;
  local_40 = 0;
  iVar2 = 1;
  local_68 = param_2;
  local_60 = param_5;
  if (((param_1 != 0) && (pvVar7 = (void *)0x0, param_2 != 0)) && (param_3 != 0)) {
    pvVar13 = (void *)0x0;
    local_50 = param_2;
    if (param_5 == (undefined8 *)0x0) goto LAB_0028c26c;
    lVar3 = _CFStringCompare(param_2,&cf_BasebandFirmware,0);
    if (lVar3 == 0) {
      lVar3 = _CFDictionaryGetValue(**(undefined8 **)(param_1 + 0x80),&cf_VinylFirmware);
      if (lVar3 != 0) {
        _AMAuthInstallLog(8,"_AMAuthInstallBundleApplyMeasurements",
                          "using vinyl firmware override: %@ = %@",&cf_VinylFirmware,lVar3);
      }
      iVar2 = _AMAuthInstallBasebandCreateMeasurements(param_1,param_3,lVar3,&local_38);
      if (iVar2 != 0) goto LAB_0028c269;
      lVar3 = *(long *)(param_1 + 0x30);
      if ((lVar3 != 0) && (*(int *)(lVar3 + 4) == 0x68)) {
        cVar1 = _AMAuthInstallIsICE19BBGoldCertIDECDSA(*(undefined4 *)(lVar3 + 8));
        puVar5 = &_kAMAuthInstallTagBbPsi2PartialDigest;
        if (cVar1 == '\0') {
          puVar5 = (undefined8 *)PTR__kAMAuthInstallTagBbPsiPartialDigest_00441040;
        }
        puVar10 = &_kAMAuthInstallTagBbRestorePsi2PartialDigest;
        if (cVar1 == '\0') {
          puVar10 = (undefined8 *)PTR__kAMAuthInstallTagBbRestorePsiPartialDigest_00441048;
        }
        uVar4 = *puVar5;
        _CFDictionaryRemoveValue(local_38,uVar4);
        uVar8 = *puVar10;
        _CFDictionaryRemoveValue(local_38,uVar8);
        puVar5 = local_60;
        _CFDictionaryRemoveValue(*local_60,uVar4);
        _CFDictionaryRemoveValue(*puVar5,uVar8);
      }
      param_4 = 0;
LAB_0028c183:
      if (local_38 != 0) {
LAB_0028c190:
        sVar6 = _CFDictionaryGetCount(local_38);
        if (0 < (long)sVar6) {
          pvVar7 = _calloc(8,sVar6);
          pvVar13 = _calloc(8,sVar6);
          _CFDictionaryGetKeysAndValues(local_38,pvVar7,pvVar13);
          sVar11 = 0;
          do {
            if ((((param_4 == 0) ||
                 (cVar1 = _CFDictionaryContainsKey
                                    (param_4,*(undefined8 *)((long)pvVar7 + sVar11 * 8)),
                 cVar1 != '\0')) ||
                (lVar3 = _CFStringCompare(*(undefined8 *)((long)pvVar7 + sVar11 * 8),&cf_MemoryMap,0
                                         ), lVar3 == 0)) ||
               (lVar3 = _CFStringCompare(*(undefined8 *)((long)pvVar7 + sVar11 * 8),
                                         &cf_RawDataDigest,0), lVar3 == 0)) {
              _CFDictionarySetValue
                        (*local_60,*(undefined8 *)((long)pvVar7 + sVar11 * 8),
                         *(undefined8 *)((long)pvVar13 + sVar11 * 8));
            }
            sVar11 = sVar11 + 1;
          } while (sVar6 != sVar11);
          iVar2 = 0;
          goto LAB_0028c26c;
        }
        iVar2 = 0;
        goto LAB_0028c269;
      }
      iVar2 = 8;
      pcVar9 = "failed find measurementsDict for entry %@";
      lVar3 = local_68;
    }
    else {
      lVar3 = _CFStringCompare(param_2,&cf_eUICC_Main,0);
      if ((lVar3 == 0) || (lVar3 = _CFStringCompare(param_2,&cf_eUICC_Gold,0), lVar3 == 0)) {
        lVar3 = _CFDictionaryGetValue(**(undefined8 **)(param_1 + 0x80),&cf_VinylFirmware);
        if (lVar3 != 0) {
          _AMAuthInstallLog(8,"_AMAuthInstallBundleApplyMeasurements",
                            "using vinyl firmware override: %@ = %@",&cf_VinylFirmware,lVar3);
          param_3 = lVar3;
        }
        iVar2 = _AMAuthInstallVinylCreateMeasurements(param_1,param_3,&local_38,&local_68);
        param_4 = 0;
        pvVar7 = (void *)0x0;
        pvVar13 = (void *)0x0;
        if (iVar2 != 0) goto LAB_0028c26c;
        goto LAB_0028c183;
      }
      uVar4 = _CFGetAllocator(param_1);
      uVar4 = _AMAuthInstallSupportGetValueForKeyWithFormat
                        (uVar4,param_4,&cf______,&cf_Info,&cf_Img4PayloadType);
      cVar1 = _AMAuthInstallApImg4ValidImage(param_3,&local_40);
      if (local_40 != 0) {
        _AMAuthInstallLog(3,"_AMAuthInstallBundleApplyMeasurements",
                          "failed to check file %@ with error: %@",local_50);
        iVar2 = _CFErrorGetCode(local_40);
        goto LAB_0028c269;
      }
      if (cVar1 == '\0') {
        uVar8 = _CFGetAllocator(param_1);
        local_48 = _AMAuthInstallSupportGetValueForKeyWithFormat
                             (uVar8,param_4,&cf______,&cf_Info,&cf_HashMethod);
        uVar12 = 0x100;
        if (local_48 == 0) goto LAB_0028c2ac;
        local_58 = _CFStringGetTypeID();
        lVar3 = _CFGetTypeID(local_48);
        if (local_58 != lVar3) goto LAB_0028c2ac;
        cVar1 = *(char *)(*(long *)(param_1 + 0x10) + 0x60);
        local_58 = param_1;
        lVar3 = _CFStringCompare(local_48,&cf_sha1,0);
        if (lVar3 == 0) {
          uVar12 = 1;
        }
        else {
          lVar3 = _CFStringCompare(local_48,&cf_sha2_256,0);
          if (lVar3 != 0) {
            lVar3 = _CFStringCompare(local_48,&cf_sha2_384,0);
            if (lVar3 != 0) {
              _AMAuthInstallLog(3,"_AMAuthInstallBundleApplyMeasurements",
                                "digest type in the build manifest is not supported");
              iVar2 = 7;
              goto LAB_0028c269;
            }
            uVar12 = 0x180;
          }
        }
        param_1 = local_58;
        if (cVar1 != '\0') goto LAB_0028c2ac;
        local_38 = _AMAuthInstallApMeasureBinary(param_3,0x100000,uVar12,&local_40);
        if (local_38 == 0) {
          iVar2 = _CFErrorGetCode(local_40);
          _AMAuthInstallLog(3,"_AMAuthInstallBundleApplyMeasurements",
                            "failed to measure %@ with error: %@",local_50,local_40);
          goto LAB_0028c269;
        }
        goto LAB_0028c190;
      }
      uVar12 = *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x70);
LAB_0028c2ac:
      iVar2 = _AMAuthInstallApCreateMeasurementsWithTag(param_1,param_3,uVar4,uVar12,0,0,&local_38);
      if (iVar2 == 0) goto LAB_0028c183;
      pcVar9 = "failed to measure %@";
      lVar3 = local_50;
    }
    _AMAuthInstallLog(3,"_AMAuthInstallBundleApplyMeasurements",pcVar9,lVar3);
  }
LAB_0028c269:
  pvVar7 = (void *)0x0;
  pvVar13 = (void *)0x0;
LAB_0028c26c:
  _SafeRelease(local_38);
  _SafeFree(pvVar7);
  _SafeFree(pvVar13);
  _SafeRelease(local_40);
  return iVar2;
}

