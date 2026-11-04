// rea decompile_all
// name: __sendiBootFirmwareToDevice
// address: 0xf0637
// body: available
// range: 0xf0637-0xf08e9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong __sendiBootFirmwareToDevice(long param_1,undefined8 param_2,void *param_3)

{
  undefined8 uVar1;
  void *pvVar2;
  char cVar3;
  undefined1 uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  void *pvVar11;
  void *pvVar12;
  cfstringStruct *pcVar13;
  ulong uVar14;
  ulong uVar15;
  long local_48;
  void *local_40;
  void *local_38;
  
  lVar6 = _CFDictionaryGetValue(param_2,&cf_DisableiBootFirmware);
  if (lVar6 != 0) {
    lVar7 = _CFBooleanGetTypeID();
    lVar8 = _CFGetTypeID(lVar6);
    if ((lVar7 == lVar8) && (cVar3 = _CFBooleanGetValue(lVar6), cVar3 != '\0')) {
      _AMRLog(3,&cf__sendiBootFirmwareToDevicedisabledbyconfiguration);
      return 0;
    }
  }
  uVar9 = _CFDictionaryGetCount(param_3);
  local_48 = 0;
  uVar4 = _AMRestoreDeviceIsBootstrapOnly(param_2,param_1 + 0x58);
  local_40 = (void *)CONCAT71(local_40._1_7_,uVar4);
  uVar5 = __pushAndPopFromDict(param_1,param_3,&cf_RestoreANS,&local_48,uVar9,param_2);
  if (uVar5 == 0) {
    local_38 = param_3;
    if ((((char)local_40 == '\0') &&
        (uVar5 = _AMRecoveryModeDeviceSetAutoBoot(param_1,0), uVar5 != 0)) ||
       (uVar5 = __setArgs(param_1,param_2), pvVar2 = local_38, uVar5 != 0)) {
      return (ulong)uVar5;
    }
    uVar5 = __pushAndPopFromDict(param_1,local_38,&cf_iBootData,&local_48,uVar9,param_2);
    if (uVar5 == 0) {
      cVar3 = _CFDictionaryContainsKey(pvVar2,&cf_RestoreDCP);
      uVar5 = __pushAndPopFromDict(param_1,pvVar2,&cf_RestoreDCP,&local_48,uVar9,param_2);
      if (uVar5 == 0) {
        if ((cVar3 == '\0') || (uVar5 = __AMRestorePushBootLogo(param_1,param_2), uVar5 == 0)) {
          pvVar2 = local_38;
          uVar10 = _CFDictionaryGetCount(local_38);
          pvVar11 = _malloc(uVar10 * 8);
          pvVar12 = _malloc(uVar10 * 8);
          if (pvVar12 == (void *)0x0 || pvVar11 == (void *)0x0) {
            uVar14 = 0x12;
            if (pvVar11 == (void *)0x0) goto LAB_000f08d4;
          }
          else {
            local_40 = pvVar11;
            local_38 = pvVar12;
            _CFDictionaryGetKeysAndValues(pvVar2,pvVar11,pvVar12);
            uVar14 = 0;
            if ((long)uVar10 < 1) {
              uVar10 = uVar14;
            }
            lVar6 = local_48 + 1;
            uVar15 = 0;
            do {
              pvVar11 = local_40;
              pvVar12 = local_38;
              if (uVar10 == uVar15) goto LAB_000f08cc;
              lVar7 = uVar15 * 8;
              uVar1 = *(undefined8 *)((long)local_38 + uVar15 * 8);
              lVar8 = lVar6 + uVar15;
              uVar15 = uVar15 + 1;
              _AMRLog(6,&cf_Sending__todevice___ldof_ld_,*(undefined8 *)((long)local_40 + lVar7),
                      lVar8,uVar9);
              uVar5 = __pushFWToiBoot(param_1,uVar1,param_2);
            } while (uVar5 == 0);
            _AMRLog(3,&cf__sendiBootFirmwareToDevicefailedwith_d,uVar5);
            uVar14 = (ulong)uVar5;
            pvVar11 = local_40;
            pvVar12 = local_38;
          }
LAB_000f08cc:
          _free(pvVar11);
LAB_000f08d4:
          if (pvVar12 == (void *)0x0) {
            return uVar14;
          }
          _free(pvVar12);
          return uVar14;
        }
        pcVar13 = &cf__AMRestorePushBootLogofailedwith_d;
        goto LAB_000f06f6;
      }
    }
  }
  pcVar13 = &cf__sendiBootFirmwareToDevicefailedwith_d;
LAB_000f06f6:
  _AMRLog(3,pcVar13,(ulong)uVar5);
  return (ulong)uVar5;
}

