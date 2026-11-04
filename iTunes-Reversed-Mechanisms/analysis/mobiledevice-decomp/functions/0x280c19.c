// rea decompile_all
// name: _AMAuthInstallBasebandMAV20StitchFirmware
// address: 0x280c19
// body: available
// range: 0x280c19-0x280e56 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_AMAuthInstallBasebandMAV20StitchFirmware(long param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  undefined8 uStack_40;
  
  lVar1 = 0;
  uStack_40 = 1;
  if ((((param_1 != 0) && (param_2 != 0)) && (param_3 != 0)) && (lVar1 = 0, param_4 != 0)) {
    lVar1 = _BbfwReaderOpen(param_2);
    if (lVar1 == 0) {
      lVar1 = 0;
      _AMAuthInstallLog(3,"AMAuthInstallBasebandMAV20StitchFirmware",
                        "failed to open bbfw archive for reading");
      uStack_40 = 4;
    }
    else {
      _AMAuthInstallBasebandStitchFirmwareFromBbfw
                (param_1,&cf_acdb_mbn,_AMAuthInstallMonetStitchCopyIfPersonalized,lVar1,param_3,
                 param_4);
      _AMAuthInstallBasebandStitchFirmwareFromBbfw
                (param_1,&cf_aop_mbn,_AMAuthInstallMonetStitchCopyIfPersonalized,lVar1,param_3,
                 param_4);
      _AMAuthInstallBasebandStitchFirmwareFromBbfw
                (param_1,&cf_apdp_mbn,_AMAuthInstallMonetStitchCopyIfPersonalized,lVar1,param_3,
                 param_4);
      _AMAuthInstallBasebandStitchFirmwareFromBbfw
                (param_1,&cf_apps_mbn,_AMAuthInstallMonetStitchCopyIfPersonalized,lVar1,param_3,
                 param_4);
      _AMAuthInstallBasebandStitchFirmwareFromBbfw
                (param_1,&cf_bbcfg_mbn,_AMAuthInstallMonetStitchCopyIfPersonalized,lVar1,param_3,
                 param_4);
      _AMAuthInstallBasebandStitchFirmwareFromBbfw
                (param_1,&cf_devcfg_mbn,_AMAuthInstallMonetStitchCopyIfPersonalized,lVar1,param_3,
                 param_4);
      _AMAuthInstallBasebandStitchFirmwareFromBbfw
                (param_1,&cf_hyp_mbn,_AMAuthInstallMonetStitchCopyIfPersonalized,lVar1,param_3,
                 param_4);
      _AMAuthInstallBasebandStitchFirmwareFromBbfw
                (param_1,&cf_qdsp6sw_mbn,_AMAuthInstallMonetStitchCopyIfPersonalized,lVar1,param_3,
                 param_4);
      _AMAuthInstallBasebandStitchFirmwareFromBbfw
                (param_1,&cf_sec_elf,_AMAuthInstallMonetStitchCopyIfPersonalized,lVar1,param_3,
                 param_4);
      _AMAuthInstallBasebandStitchFirmwareFromBbfw
                (param_1,&cf_restoresbl1_mbn,_AMAuthInstallMonetStitchRestoreSbl1,lVar1,param_3,
                 param_4);
      _AMAuthInstallBasebandStitchFirmwareFromBbfw
                (param_1,&cf_sbl1_mbn,_AMAuthInstallMonetStitchSbl1,lVar1,param_3,param_4);
      _AMAuthInstallBasebandStitchFirmwareFromBbfw
                (param_1,&cf_multi_image_mbn,_AMAuthInstallMonetStitchMisc,lVar1,param_3,param_4);
      _AMAuthInstallBasebandStitchFirmwareFromBbfw
                (param_1,&cf_multi_image_qti_mbn,_AMAuthInstallMonetStitchCopyIfPersonalized,lVar1,
                 param_3,param_4);
      _AMAuthInstallBasebandStitchFirmwareFromBbfw
                (param_1,&cf_tz_mbn,_AMAuthInstallMonetStitchCopyIfPersonalized,lVar1,param_3,
                 param_4);
      _AMAuthInstallBasebandStitchFirmwareFromBbfw
                (param_1,&cf_Info_plist,_AMAuthInstallBasebandStitchCopyFile,lVar1,param_3,param_4);
      uStack_40 = 0;
    }
  }
  _BbfwReaderClose(lVar1);
  return uStack_40;
}

