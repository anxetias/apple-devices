// rea decompile_all
// name: _AMAuthInstallBasebandICE3MeasureFirmware
// address: 0x280193
// body: available
// range: 0x280193-0x280316 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _AMAuthInstallBasebandICE3MeasureFirmware(long param_1,long param_2,long param_3)

{
  char cVar1;
  long lVar2;
  char *pcVar3;
  undefined8 uStack_30;
  
  lVar2 = 0;
  uStack_30 = 1;
  if (((param_1 != 0) && (param_2 != 0)) && (param_3 != 0)) {
    lVar2 = _BbfwReaderOpen(param_2);
    if (lVar2 == 0) {
      lVar2 = 0;
      _AMAuthInstallLog(3,"AMAuthInstallBasebandICE3MeasureFirmware",
                        "failed to open bbfw archive for reading");
      uStack_30 = 4;
    }
    else {
      cVar1 = _AMAuthInstallBasebandMeasureFirmwareFromBbfw
                        (1,param_1,&cf_psi_ram_fls,_AMAuthInstallBasebandICE3MeasureRamPsi,lVar2,
                         param_3);
      if (cVar1 == '\0') {
        pcVar3 = "failed to measure: psi_ram.fls";
      }
      else {
        cVar1 = _AMAuthInstallBasebandMeasureFirmwareFromBbfw
                          (1,param_1,&cf_ebl_fls,_AMAuthInstallBasebandICE3MeasureEbl,lVar2,param_3)
        ;
        if (cVar1 == '\0') {
          pcVar3 = "failed to measure: ebl.fls";
        }
        else {
          cVar1 = _AMAuthInstallBasebandMeasureFirmwareFromBbfw
                            (1,param_1,&cf_psi_flash_fls,_AMAuthInstallBasebandICE3MeasureFlashPsi,
                             lVar2,param_3);
          if (cVar1 == '\0') {
            pcVar3 = "failed to measure: psi_flash.fls";
          }
          else {
            cVar1 = _AMAuthInstallBasebandMeasureFirmwareFromBbfw
                              (1,param_1,&cf_stack_fls,_AMAuthInstallBasebandICE3MeasureModemStack,
                               lVar2,param_3);
            if (cVar1 != '\0') {
              _AMAuthInstallBasebandMeasureFirmwareFromBbfw
                        (1,param_1,&cf_world_fls,_AMAuthInstallBasebandICE3MeasureWorld,lVar2,
                         param_3);
              uStack_30 = 0;
              goto LAB_00280297;
            }
            pcVar3 = "failed to measure: stack.fls";
          }
        }
      }
      _AMAuthInstallLog(3,"AMAuthInstallBasebandICE3MeasureFirmware",pcVar3);
      uStack_30 = 0xf;
    }
  }
LAB_00280297:
  _BbfwReaderClose(lVar2);
  return uStack_30;
}

