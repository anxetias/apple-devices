// rea decompile_all
// name: _AMAuthInstallBasebandN41MeasureFirmware
// address: 0x2813da
// body: available
// range: 0x2813da-0x281583 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _AMAuthInstallBasebandN41MeasureFirmware(long param_1,long param_2,long param_3)

{
  char cVar1;
  long lVar2;
  undefined8 uStack_30;
  
  lVar2 = 0;
  uStack_30 = 1;
  if (((param_1 != 0) && (param_2 != 0)) && (param_3 != 0)) {
    lVar2 = _BbfwReaderOpen(param_2);
    if (lVar2 == 0) {
      lVar2 = 0;
      _AMAuthInstallLog(3,"AMAuthInstallBasebandN41MeasureFirmware",
                        "failed to open bbfw archive for reading");
      uStack_30 = 4;
    }
    else {
      cVar1 = _AMAuthInstallBasebandMeasureFirmwareFromBbfw
                        (1,param_1,&cf_sbl1_mbn,_AMAuthInstallMonetMeasureSbl1,lVar2,param_3);
      uStack_30 = 0xf;
      if (cVar1 != '\0') {
        cVar1 = _AMAuthInstallBasebandMeasureFirmwareFromBbfw
                          (1,param_1,&cf_sbl2_mbn,_AMAuthInstallMonetMeasureSbl2,lVar2,param_3);
        if (cVar1 != '\0') {
          cVar1 = _AMAuthInstallBasebandMeasureFirmwareFromBbfw
                            (1,param_1,&cf_rpm_mbn,_AMAuthInstallMonetMeasureRPM,lVar2,param_3);
          if (cVar1 != '\0') {
            cVar1 = _AMAuthInstallBasebandMeasureFirmwareFromBbfw
                              (1,param_1,&cf_apps_mbn,_AMAuthInstallMonetMeasureApps,lVar2,param_3);
            if (cVar1 != '\0') {
              cVar1 = _AMAuthInstallBasebandMeasureFirmwareFromBbfw
                                (1,param_1,&cf_dsp1_mbn,_AMAuthInstallMonetMeasureDsp1,lVar2,param_3
                                );
              if (cVar1 != '\0') {
                cVar1 = _AMAuthInstallBasebandMeasureFirmwareFromBbfw
                                  (1,param_1,&cf_dsp2_mbn,_AMAuthInstallMonetMeasureDsp2,lVar2,
                                   param_3);
                if (cVar1 != '\0') {
                  cVar1 = _AMAuthInstallBasebandMeasureFirmwareFromBbfw
                                    (1,param_1,&cf_dsp3_mbn,_AMAuthInstallMonetMeasureDsp3,lVar2,
                                     param_3);
                  if (cVar1 != '\0') {
                    cVar1 = _AMAuthInstallBasebandMeasureFirmwareFromBbfw
                                      (1,param_1,&cf_restoresbl1_mbn,
                                       _AMAuthInstallMonetMeasureRestoreSbl1,lVar2,param_3);
                    uStack_30 = 0xf;
                    if (cVar1 != '\0') {
                      uStack_30 = 0;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  _BbfwReaderClose(lVar2);
  return uStack_30;
}

