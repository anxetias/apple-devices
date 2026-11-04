// rea decompile_all
// name: _AMAuthInstallBasebandN92MeasureFirmware
// address: 0x2816cf
// body: available
// range: 0x2816cf-0x281843 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _AMAuthInstallBasebandN92MeasureFirmware(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  char cVar2;
  long lVar3;
  char *pcVar4;
  undefined8 uVar5;
  
  lVar3 = 0;
  uVar5 = 1;
  if (((param_1 != 0) && (param_2 != 0)) && (param_3 != 0)) {
    lVar3 = _BbfwReaderOpen(param_2);
    if (lVar3 == 0) {
      uVar5 = 4;
      pcVar4 = "failed to open bbfw archive for reading";
      lVar3 = 0;
    }
    else {
      cVar2 = _AMAuthInstallBasebandMeasureFirmwareFromBbfw
                        (1,param_1,&cf_ENPRG_mbn,_AMAuthInstallMonetMeasureENandprog,lVar3,param_3);
      uVar1 = 0xf;
      uVar5 = uVar1;
      if (cVar2 == '\0') {
        pcVar4 = "failed to measure: ENPRG.mbn";
      }
      else {
        cVar2 = _AMAuthInstallBasebandMeasureFirmwareFromBbfw
                          (1,param_1,&cf_dbl_mbn,_AMAuthInstallMonetMeasureDbl,lVar3,param_3);
        if (cVar2 == '\0') {
          pcVar4 = "failed to measure: dbl.mbn";
        }
        else {
          cVar2 = _AMAuthInstallBasebandMeasureFirmwareFromBbfw
                            (1,param_1,&cf_osbl_mbn,_AMAuthInstallMonetMeasureOsbl,lVar3,param_3);
          if (cVar2 == '\0') {
            pcVar4 = "failed to measure: osbl.mbn";
          }
          else {
            cVar2 = _AMAuthInstallBasebandMeasureFirmwareFromBbfw
                              (1,param_1,&cf_amss_mbn,_AMAuthInstallMonetMeasureAmss,lVar3,param_3);
            if (cVar2 == '\0') {
              pcVar4 = "failed to measure: amss.mbn";
            }
            else {
              cVar2 = _AMAuthInstallBasebandMeasureFirmwareFromBbfw
                                (1,param_1,&cf_partition_mbn,
                                 _AMAuthInstallMonetMeasurePartitionTable,lVar3,param_3);
              uVar5 = 0;
              if (cVar2 != '\0') goto LAB_002817da;
              pcVar4 = "failed to measure: partition.mbn";
              uVar5 = uVar1;
            }
          }
        }
      }
    }
    _AMAuthInstallLog(3,"AMAuthInstallBasebandN92MeasureFirmware",pcVar4);
  }
LAB_002817da:
  _BbfwReaderClose(lVar3);
  return uVar5;
}

