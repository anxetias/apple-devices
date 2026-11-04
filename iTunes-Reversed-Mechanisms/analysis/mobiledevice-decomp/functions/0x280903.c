// rea decompile_all
// name: _AMAuthInstallBasebandMAV10MeasureFirmware
// address: 0x280903
// body: available
// range: 0x280903-0x280c18 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _AMAuthInstallBasebandMAV10MeasureFirmware(long param_1,long param_2,long param_3)

{
  int iVar1;
  char cVar2;
  long lVar3;
  code *pcVar4;
  cfstringStruct *pcVar5;
  undefined8 uStack_30;
  
  lVar3 = 0;
  uStack_30 = 1;
  if (((param_1 == 0) || (param_2 == 0)) || (param_3 == 0)) goto LAB_00280be5;
  lVar3 = _BbfwReaderOpen(param_2);
  if (lVar3 == 0) {
    lVar3 = 0;
    _AMAuthInstallLog(3,"AMAuthInstallBasebandMAV10MeasureFirmware",
                      "failed to open bbfw archive for reading");
    uStack_30 = 4;
    goto LAB_00280be5;
  }
  cVar2 = _AMAuthInstallBasebandMeasureFirmwareFromBbfw
                    (1,param_1,&cf_acdb_mbn,_AMAuthInstallMonetMeasureAcdb,lVar3,param_3);
  if (cVar2 == '\0') {
    _AMAuthInstallLog(4,"AMAuthInstallBasebandMAV10MeasureFirmware",
                      "missing acdb or failed to measure image");
  }
  cVar2 = _AMAuthInstallBasebandMeasureFirmwareFromBbfw
                    (1,param_1,&cf_apps_mbn,_AMAuthInstallMonetMeasureApps,lVar3,param_3);
  uStack_30 = 0xf;
  if (cVar2 == '\0') goto LAB_00280be5;
  iVar1 = *(int *)(*(long *)(param_1 + 0x30) + 4);
  if (((iVar1 != 0x3b0e1) && (iVar1 != 0x7f0e1)) && (iVar1 != 0x9540e1)) {
    cVar2 = _AMAuthInstallBasebandMeasureFirmwareFromBbfw
                      (1,param_1,&cf_dsp3_mbn,_AMAuthInstallMonetMeasureDsp3,lVar3,param_3);
    if (cVar2 == '\0') goto LAB_00280be5;
  }
  cVar2 = _AMAuthInstallBasebandMeasureFirmwareFromBbfw
                    (1,param_1,&cf_mba_mbn,_AMAuthInstallMonetMeasureMba,lVar3,param_3);
  if (cVar2 == '\0') goto LAB_00280be5;
  cVar2 = _AMAuthInstallBasebandMeasureFirmwareFromBbfw
                    (1,param_1,&cf_qdsp6sw_mbn,_AMAuthInstallMonetMeasureQdsp6,lVar3,param_3);
  if (cVar2 == '\0') goto LAB_00280be5;
  iVar1 = *(int *)(*(long *)(param_1 + 0x30) + 4);
  if (((iVar1 == 0x3b0e1) || (iVar1 == 0x9540e1)) || (iVar1 == 0x7f0e1)) {
    cVar2 = _AMAuthInstallBasebandMeasureFirmwareFromBbfw
                      (1,param_1,&cf_restoresbl1_mbn,_AMAuthInstallMonetMeasureRestoreSbl1Elf,lVar3,
                       param_3);
    if (cVar2 == '\0') goto LAB_00280be5;
    pcVar5 = &cf_Info_plist;
    pcVar4 = _AMAuthInstallBasebandGetRestoreSbl1Version;
  }
  else {
    pcVar5 = &cf_restoresbl1_mbn;
    pcVar4 = _AMAuthInstallMonetMeasureRestoreSbl1;
  }
  cVar2 = _AMAuthInstallBasebandMeasureFirmwareFromBbfw(1,param_1,pcVar5,pcVar4,lVar3,param_3);
  if (cVar2 == '\0') goto LAB_00280be5;
  cVar2 = _AMAuthInstallBasebandMeasureFirmwareFromBbfw
                    (1,param_1,&cf_rpm_mbn,_AMAuthInstallMonetMeasureRpmElf,lVar3,param_3);
  if (cVar2 == '\0') goto LAB_00280be5;
  iVar1 = *(int *)(*(long *)(param_1 + 0x30) + 4);
  if (((iVar1 == 0x3b0e1) || (iVar1 == 0x9540e1)) || (iVar1 == 0x7f0e1)) {
    cVar2 = _AMAuthInstallBasebandMeasureFirmwareFromBbfw
                      (1,param_1,&cf_sbl1_mbn,_AMAuthInstallMonetMeasureSbl1Elf,lVar3,param_3);
    if (cVar2 == '\0') goto LAB_00280be5;
    pcVar5 = &cf_Info_plist;
    pcVar4 = _AMAuthInstallBasebandGetSbl1Version;
  }
  else {
    pcVar5 = &cf_sbl1_mbn;
    pcVar4 = _AMAuthInstallMonetMeasureSbl1;
  }
  cVar2 = _AMAuthInstallBasebandMeasureFirmwareFromBbfw(1,param_1,pcVar5,pcVar4,lVar3,param_3);
  if (cVar2 == '\0') goto LAB_00280be5;
  cVar2 = _AMAuthInstallBasebandMeasureFirmwareFromBbfw
                    (1,param_1,&cf_tz_mbn,_AMAuthInstallMonetMeasureTz,lVar3,param_3);
  if (cVar2 == '\0') goto LAB_00280be5;
  iVar1 = *(int *)(*(long *)(param_1 + 0x30) + 4);
  if (iVar1 == 0x7f50e1) {
    pcVar4 = _AMAuthInstallMonetMeasureWdt;
LAB_00280ba7:
    cVar2 = _AMAuthInstallBasebandMeasureFirmwareFromBbfw
                      (1,param_1,&cf_wdt_mbn,pcVar4,lVar3,param_3);
    if (cVar2 == '\0') goto LAB_00280be5;
  }
  else if (iVar1 == 0x9210e1) {
    pcVar4 = _AMAuthInstallMonetMeasureWdtElf;
    goto LAB_00280ba7;
  }
  _AMAuthInstallBasebandMeasureFirmwareFromBbfw
            (1,param_1,&cf_bbcfg_mbn,_AMAuthInstallMonetMeasureBBCFG,lVar3,param_3);
  uStack_30 = 0;
LAB_00280be5:
  _BbfwReaderClose(lVar3);
  return uStack_30;
}

