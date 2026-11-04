// rea decompile_all
// name: _AMAuthInstallBasebandJ2StitchFirmware
// address: 0x2803c4
// body: available
// range: 0x2803c4-0x280544 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_AMAuthInstallBasebandJ2StitchFirmware(long param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  undefined8 uStack_40;
  
  lVar1 = 0;
  uStack_40 = 1;
  if ((((param_1 != 0) && (param_2 != 0)) && (param_3 != 0)) && (lVar1 = 0, param_4 != 0)) {
    lVar1 = _BbfwReaderOpen(param_2);
    if (lVar1 == 0) {
      lVar1 = 0;
      _AMAuthInstallLog(3,"AMAuthInstallBasebandJ2StitchFirmware",
                        "failed to open bbfw archive for reading");
      uStack_40 = 4;
    }
    else {
      _AMAuthInstallBasebandStitchFirmwareFromBbfw
                (param_1,&cf_ENPRG_mbn,_AMAuthInstallMonetStitchENandprog,lVar1,param_3,param_4);
      _AMAuthInstallBasebandStitchFirmwareFromBbfw
                (param_1,&cf_dbl_mbn,_AMAuthInstallMonetStitchDbl,lVar1,param_3,param_4);
      _AMAuthInstallBasebandStitchFirmwareFromBbfw
                (param_1,&cf_osbl_mbn,_AMAuthInstallMonetStitchCopyIfPersonalized,lVar1,param_3,
                 param_4);
      _AMAuthInstallBasebandStitchFirmwareFromBbfw
                (param_1,&cf_amss_mbn,_AMAuthInstallMonetStitchCopyIfPersonalized,lVar1,param_3,
                 param_4);
      _AMAuthInstallBasebandStitchFirmwareFromBbfw
                (param_1,&cf_dsp1_mbn,_AMAuthInstallMonetStitchCopyIfPersonalized,lVar1,param_3,
                 param_4);
      _AMAuthInstallBasebandStitchFirmwareFromBbfw
                (param_1,&cf_dsp2_mbn,_AMAuthInstallMonetStitchCopyIfPersonalized,lVar1,param_3,
                 param_4);
      _AMAuthInstallBasebandStitchFirmwareFromBbfw
                (param_1,&cf_partition_mbn,_AMAuthInstallMonetStitchPartitionTable,lVar1,param_3,
                 param_4);
      _AMAuthInstallBasebandStitchFirmwareFromBbfw
                (param_1,&cf_Options_plist,_AMAuthInstallBasebandStitchCopyFile,lVar1,param_3,
                 param_4);
      uStack_40 = 0;
    }
  }
  _BbfwReaderClose(lVar1);
  return uStack_40;
}

