// rea decompile_all
// name: _AMAuthInstallBasebandRembrandtStitchFirmware
// address: 0x281b1e
// body: available
// range: 0x281b1e-0x282257 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_AMAuthInstallBasebandRembrandtStitchFirmware(long param_1,long param_2,long param_3,long param_4)

{
  char cVar1;
  long lVar2;
  code *pcVar3;
  cfstringStruct *pcVar4;
  undefined8 uStack_40;
  
  lVar2 = 0;
  uStack_40 = 1;
  if ((((param_1 == 0) || (param_2 == 0)) || (param_3 == 0)) || (lVar2 = 0, param_4 == 0))
  goto switchD_00281b97_caseD_5f;
  lVar2 = _BbfwReaderOpen(param_2);
  if (lVar2 == 0) {
    lVar2 = 0;
    _AMAuthInstallLog(3,"AMAuthInstallBasebandRembrandtStitchFirmware",
                      "failed to open bbfw archive for reading");
    uStack_40 = 4;
    goto switchD_00281b97_caseD_5f;
  }
  uStack_40 = 0;
  switch(*(undefined4 *)(*(long *)(param_1 + 0x30) + 4)) {
  case 0x5e:
    _AMAuthInstallBasebandStitchFirmwareFromBbfw
              (param_1,&cf_psi_ram_bin,_AMAuthInstallRembrandtCreateStitchedPSI,lVar2,param_3,
               param_4);
    _AMAuthInstallBasebandStitchFirmwareFromBbfw
              (param_1,&cf_restorepsi_bin,_AMAuthInstallRembrandtCreateStitchedRestorePSI,lVar2,
               param_3,param_4);
    _AMAuthInstallBasebandStitchFirmwareFromBbfw
              (param_1,&cf_ebl_bin,_AMAuthInstallBasebandStitchCopyFile,lVar2,param_3,param_4);
    _AMAuthInstallBasebandStitchFirmwareFromBbfw
              (param_1,&cf_SYS_SW_elf,_AMAuthInstallBasebandStitchCopyFile,lVar2,param_3,param_4);
    _AMAuthInstallBasebandStitchFirmwareFromBbfw
              (param_1,&cf_TDSFW_elf,_AMAuthInstallBasebandStitchCopyFile,lVar2,param_3,param_4);
    _AMAuthInstallBasebandStitchFirmwareFromBbfw
              (param_1,&cf_LTEFW_elf,_AMAuthInstallBasebandStitchCopyFile,lVar2,param_3,param_4);
    _AMAuthInstallBasebandStitchFirmwareFromBbfw
              (param_1,&cf_bbcfg_bin,_AMAuthInstallBasebandStitchCopyFile,lVar2,param_3,param_4);
    _AMAuthInstallBasebandStitchFirmwareFromBbfw
              (param_1,&cf_3GFW_elf,_AMAuthInstallBasebandStitchCopyFile,lVar2,param_3,param_4);
    _AMAuthInstallBasebandStitchFirmwareFromBbfw
              (param_1,&cf_2GFW_elf,_AMAuthInstallBasebandStitchCopyFile,lVar2,param_3,param_4);
    _AMAuthInstallBasebandStitchFirmwareFromBbfw
              (param_1,&cf_RFFW_elf,_AMAuthInstallBasebandStitchCopyFile,lVar2,param_3,param_4);
    _AMAuthInstallBasebandStitchFirmwareFromBbfw
              (param_1,&cf_AudioFW_elf,_AMAuthInstallBasebandStitchCopyFile,lVar2,param_3,param_4);
    _AMAuthInstallBasebandStitchFirmwareFromBbfw
              (param_1,&cf_Debug_info_elf,_AMAuthInstallBasebandStitchCopyFile,lVar2,param_3,param_4
              );
    _AMAuthInstallBasebandStitchFirmwareFromBbfw
              (param_1,&cf_RPCU_elf,_AMAuthInstallBasebandStitchCopyFile,lVar2,param_3,param_4);
    _AMAuthInstallBasebandStitchFirmwareFromBbfw
              (param_1,&cf_DPC_elf,_AMAuthInstallBasebandStitchCopyFile,lVar2,param_3,param_4);
    _AMAuthInstallBasebandStitchFirmwareFromBbfw
              (param_1,&cf_CDMA2KFW_elf,_AMAuthInstallBasebandStitchCopyFile,lVar2,param_3,param_4);
    pcVar4 = &cf_custpack_elf;
    break;
  default:
    goto switchD_00281b97_caseD_5f;
  case 0x60:
    _AMAuthInstallBasebandStitchFirmwareFromBbfw
              (param_1,&cf_psi_ram_bin,_AMAuthInstallRembrandtCreateStitchedPSI,lVar2,param_3,
               param_4);
    _AMAuthInstallBasebandStitchFirmwareFromBbfw
              (param_1,&cf_restorepsi_bin,_AMAuthInstallRembrandtCreateStitchedRestorePSI,lVar2,
               param_3,param_4);
    _AMAuthInstallBasebandStitchFirmwareFromBbfw
              (param_1,&cf_ebl_bin,_AMAuthInstallBasebandStitchCopyFile,lVar2,param_3,param_4);
    _AMAuthInstallBasebandStitchFirmwareFromBbfw
              (param_1,&cf_SYS_SW_elf,_AMAuthInstallBasebandStitchCopyFile,lVar2,param_3,param_4);
    _AMAuthInstallBasebandStitchFirmwareFromBbfw
              (param_1,&cf_TDSFW_elf,_AMAuthInstallBasebandStitchCopyFile,lVar2,param_3,param_4);
    _AMAuthInstallBasebandStitchFirmwareFromBbfw
              (param_1,&cf_LTEFW_elf,_AMAuthInstallBasebandStitchCopyFile,lVar2,param_3,param_4);
    pcVar4 = &cf_bbcfg_bin;
    break;
  case 0x65:
    _AMAuthInstallBasebandStitchFirmwareFromBbfw
              (param_1,&cf_psi_ram_bin,_AMAuthInstallRembrandtCreateStitchedPSI,lVar2,param_3,
               param_4);
    _AMAuthInstallBasebandStitchFirmwareFromBbfw
              (param_1,&cf_restorepsi_bin,_AMAuthInstallRembrandtCreateStitchedRestorePSI,lVar2,
               param_3,param_4);
    _AMAuthInstallBasebandStitchFirmwareFromBbfw
              (param_1,&cf_ebl_bin,_AMAuthInstallBasebandStitchCopyFile,lVar2,param_3,param_4);
    _AMAuthInstallBasebandStitchFirmwareFromBbfw
              (param_1,&cf_SYS_SW_elf,_AMAuthInstallBasebandStitchCopyFile,lVar2,param_3,param_4);
    _AMAuthInstallBasebandStitchFirmwareFromBbfw
              (param_1,&cf_TDSFW_elf,_AMAuthInstallBasebandStitchCopyFile,lVar2,param_3,param_4);
    _AMAuthInstallBasebandStitchFirmwareFromBbfw
              (param_1,&cf_LTEFW_elf,_AMAuthInstallBasebandStitchCopyFile,lVar2,param_3,param_4);
    _AMAuthInstallBasebandStitchFirmwareFromBbfw
              (param_1,&cf_bbcfg_bin,_AMAuthInstallBasebandStitchCopyFile,lVar2,param_3,param_4);
    _AMAuthInstallBasebandStitchFirmwareFromBbfw
              (param_1,&cf_3GFW_elf,_AMAuthInstallBasebandStitchCopyFile,lVar2,param_3,param_4);
    _AMAuthInstallBasebandStitchFirmwareFromBbfw
              (param_1,&cf_2GFW_elf,_AMAuthInstallBasebandStitchCopyFile,lVar2,param_3,param_4);
    _AMAuthInstallBasebandStitchFirmwareFromBbfw
              (param_1,&cf_RFFW_elf,_AMAuthInstallBasebandStitchCopyFile,lVar2,param_3,param_4);
    _AMAuthInstallBasebandStitchFirmwareFromBbfw
              (param_1,&cf_AudioFW_elf,_AMAuthInstallBasebandStitchCopyFile,lVar2,param_3,param_4);
    pcVar4 = &cf_Debug_info_elf;
    break;
  case 0x67:
    _AMAuthInstallBasebandStitchFirmwareFromBbfw
              (param_1,&cf_psi_ram_bin,_AMAuthInstallRembrandtCreateStitchedPSI,lVar2,param_3,
               param_4);
    _AMAuthInstallBasebandStitchFirmwareFromBbfw
              (param_1,&cf_restorepsi_bin,_AMAuthInstallRembrandtCreateStitchedRestorePSI,lVar2,
               param_3,param_4);
    _AMAuthInstallBasebandStitchFirmwareFromBbfw
              (param_1,&cf_ebl_bin,_AMAuthInstallBasebandStitchCopyFile,lVar2,param_3,param_4);
    _AMAuthInstallBasebandStitchFirmwareFromBbfw
              (param_1,&cf_SYS_SW_elf,_AMAuthInstallBasebandStitchCopyFile,lVar2,param_3,param_4);
    _AMAuthInstallBasebandStitchFirmwareFromBbfw
              (param_1,&cf_LTEFW_elf,_AMAuthInstallBasebandStitchCopyFile,lVar2,param_3,param_4);
    _AMAuthInstallBasebandStitchFirmwareFromBbfw
              (param_1,&cf_bbcfg_bin,_AMAuthInstallBasebandStitchCopyFile,lVar2,param_3,param_4);
    _AMAuthInstallBasebandStitchFirmwareFromBbfw
              (param_1,&cf_3GFW_elf,_AMAuthInstallBasebandStitchCopyFile,lVar2,param_3,param_4);
    _AMAuthInstallBasebandStitchFirmwareFromBbfw
              (param_1,&cf_RFFW_elf,_AMAuthInstallBasebandStitchCopyFile,lVar2,param_3,param_4);
    _AMAuthInstallBasebandStitchFirmwareFromBbfw
              (param_1,&cf_AudioFW_elf,_AMAuthInstallBasebandStitchCopyFile,lVar2,param_3,param_4);
    _AMAuthInstallBasebandStitchFirmwareFromBbfw
              (param_1,&cf_Debug_info_elf,_AMAuthInstallBasebandStitchCopyFile,lVar2,param_3,param_4
              );
    _AMAuthInstallBasebandStitchFirmwareFromBbfw
              (param_1,&cf_GNSS_FW_elf,_AMAuthInstallBasebandStitchCopyFile,lVar2,param_3,param_4);
    pcVar4 = &cf_irx_coefficient_elf;
    break;
  case 0x68:
    cVar1 = _AMAuthInstallIsICE19BBGoldCertIDECDSA(*(undefined4 *)(*(long *)(param_1 + 0x30) + 8));
    if (cVar1 == '\0') {
      _AMAuthInstallBasebandStitchFirmwareFromBbfw
                (param_1,&cf_psi_ram2_bin,_AMAuthInstallRembrandtCreateStitchedPSI2,lVar2,param_3,
                 param_4);
      pcVar4 = &cf_restorepsi2_bin;
      pcVar3 = _AMAuthInstallRembrandtCreateStitchedRestorePSI2;
    }
    else {
      _AMAuthInstallBasebandStitchFirmwareFromBbfw
                (param_1,&cf_psi_ram_bin,_AMAuthInstallRembrandtCreateStitchedPSI,lVar2,param_3,
                 param_4);
      pcVar4 = &cf_restorepsi_bin;
      pcVar3 = _AMAuthInstallRembrandtCreateStitchedRestorePSI;
    }
    _AMAuthInstallBasebandStitchFirmwareFromBbfw(param_1,pcVar4,pcVar3,lVar2,param_3,param_4);
    _AMAuthInstallBasebandStitchFirmwareFromBbfw
              (param_1,&cf_ebl_bin,_AMAuthInstallBasebandStitchCopyFile,lVar2,param_3,param_4);
    _AMAuthInstallBasebandStitchFirmwareFromBbfw
              (param_1,&cf_SYS_SW_elf,_AMAuthInstallBasebandStitchCopyFile,lVar2,param_3,param_4);
    _AMAuthInstallBasebandStitchFirmwareFromBbfw
              (param_1,&cf_bbcfg_bin,_AMAuthInstallBasebandStitchCopyFile,lVar2,param_3,param_4);
    _AMAuthInstallBasebandStitchFirmwareFromBbfw
              (param_1,&cf_RFFW_elf,_AMAuthInstallBasebandStitchCopyFile,lVar2,param_3,param_4);
    _AMAuthInstallBasebandStitchFirmwareFromBbfw
              (param_1,&cf_custpack_elf,_AMAuthInstallBasebandStitchCopyFile,lVar2,param_3,param_4);
    _AMAuthInstallBasebandStitchFirmwareFromBbfw
              (param_1,&cf_TPCU_elf,_AMAuthInstallBasebandStitchCopyFile,lVar2,param_3,param_4);
    _AMAuthInstallBasebandStitchFirmwareFromBbfw
              (param_1,&cf_upc_elf,_AMAuthInstallBasebandStitchCopyFile,lVar2,param_3,param_4);
    _AMAuthInstallBasebandStitchFirmwareFromBbfw
              (param_1,&cf_legacy_rat_fw_elf,_AMAuthInstallBasebandStitchCopyFile,lVar2,param_3,
               param_4);
    _AMAuthInstallBasebandStitchFirmwareFromBbfw
              (param_1,&cf_ant_cfg_data_elf,_AMAuthInstallBasebandStitchCopyFile,lVar2,param_3,
               param_4);
    uStack_40 = 0;
    goto switchD_00281b97_caseD_5f;
  }
  uStack_40 = 0;
  _AMAuthInstallBasebandStitchFirmwareFromBbfw
            (param_1,pcVar4,_AMAuthInstallBasebandStitchCopyFile,lVar2,param_3,param_4);
switchD_00281b97_caseD_5f:
  _BbfwReaderClose(lVar2);
  return uStack_40;
}

