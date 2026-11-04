// rea decompile_all
// name: _AMAuthInstallBasebandRembrandtMeasureFirmware
// address: 0x282284
// body: available
// range: 0x282284-0x282d38 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _AMAuthInstallBasebandRembrandtMeasureFirmware(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  char cVar2;
  long lVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar3 = 0;
  uVar6 = 1;
  if (((param_1 == 0) || (param_2 == 0)) || (param_3 == 0)) goto switchD_002822f1_caseD_5f;
  lVar3 = _BbfwReaderOpen(param_2);
  uVar5 = 0;
  if (lVar3 == 0) {
    pcVar4 = "failed to open bbfw archive for reading";
    lVar3 = 0;
    uVar6 = 4;
    goto LAB_00282d20;
  }
  uVar6 = uVar5;
  switch(*(undefined4 *)(*(long *)(param_1 + 0x30) + 4)) {
  case 0x5e:
    cVar2 = _AMAuthInstallBasebandMeasureFirmwareFromBbfw
                      (1,param_1,&cf_psi_ram_bin,_AMAuthInstallRembrandtMeasurePSI,lVar3,param_3);
    uVar6 = 0xf;
    if (((cVar2 == '\0') ||
        (cVar2 = _AMAuthInstallBasebandMeasureFirmwareFromBbfw
                           (1,param_1,&cf_restorepsi_bin,_AMAuthInstallRembrandtMeasureRestorePSI,
                            lVar3,param_3), cVar2 == '\0')) ||
       (cVar2 = _AMAuthInstallBasebandMeasureFirmwareFromBbfw
                          (1,param_1,&cf_ebl_bin,_AMAuthInstallRembrandtMeasureEBL,lVar3,param_3),
       cVar2 == '\0')) goto switchD_002822f1_caseD_5f;
    cVar2 = _AMAuthInstallBasebandMeasureFirmwareFromBbfw
                      (1,param_1,&cf_SYS_SW_elf,_AMAuthInstallRembrandtMeasureSystemSoftware,lVar3,
                       param_3);
    if (cVar2 == '\0') {
LAB_00282c77:
      pcVar4 = "failed to measure: SYS_SW.elf";
      uVar6 = 0xf;
    }
    else {
      cVar2 = _AMAuthInstallBasebandMeasureFirmwareFromBbfw
                        (1,param_1,&cf_TDSFW_elf,_AMAuthInstallRembrandtMeasureTDS,lVar3,param_3);
      if (cVar2 == '\0') {
LAB_00282ca4:
        uVar6 = 0xf;
        pcVar4 = "failed to measure: TDS.elf";
      }
      else {
        cVar2 = _AMAuthInstallBasebandMeasureFirmwareFromBbfw
                          (1,param_1,&cf_LTEFW_elf,_AMAuthInstallRembrandtMeasureLTE,lVar3,param_3);
        if (cVar2 == '\0') goto LAB_00282c8f;
        cVar2 = _AMAuthInstallBasebandMeasureFirmwareFromBbfw
                          (1,param_1,&cf_bbcfg_bin,_AMAuthInstallRembrandtMeasureBBCFG,lVar3,param_3
                          );
        if (cVar2 == '\0') goto LAB_00282c83;
        cVar2 = _AMAuthInstallBasebandMeasureFirmwareFromBbfw
                          (1,param_1,&cf_3GFW_elf,_AMAuthInstallRembrandtMeasure3GFW,lVar3,param_3);
        if (cVar2 == '\0') goto LAB_00282cad;
        cVar2 = _AMAuthInstallBasebandMeasureFirmwareFromBbfw
                          (1,param_1,&cf_2GFW_elf,_AMAuthInstallRembrandtMeasure2GFW,lVar3,param_3);
        if (cVar2 == '\0') {
LAB_00282cc8:
          uVar6 = 0xf;
          pcVar4 = "failed to measure: 2GFW.elf";
        }
        else {
          cVar2 = _AMAuthInstallBasebandMeasureFirmwareFromBbfw
                            (1,param_1,&cf_RFFW_elf,_AMAuthInstallRembrandtMeasureRFFW,lVar3,param_3
                            );
          if (cVar2 == '\0') goto LAB_00282c9b;
          cVar2 = _AMAuthInstallBasebandMeasureFirmwareFromBbfw
                            (1,param_1,&cf_AudioFW_elf,_AMAuthInstallRembrandtMeasureAudioFW,lVar3,
                             param_3);
          if (cVar2 == '\0') goto LAB_00282cb6;
          cVar2 = _AMAuthInstallBasebandMeasureFirmwareFromBbfw
                            (1,param_1,&cf_Debug_info_elf,_AMAuthInstallRembrandtMeasureDebugInfo,
                             lVar3,param_3);
          if (cVar2 == '\0') goto LAB_00282cbf;
          cVar2 = _AMAuthInstallBasebandMeasureFirmwareFromBbfw
                            (1,param_1,&cf_RPCU_elf,_AMAuthInstallRembrandtMeasureRPCU,lVar3,param_3
                            );
          if (cVar2 == '\0') {
            pcVar4 = "failed to measure: RPCU.elf";
          }
          else {
            cVar2 = _AMAuthInstallBasebandMeasureFirmwareFromBbfw
                              (1,param_1,&cf_DPC_elf,_AMAuthInstallRembrandtMeasureDPC,lVar3,param_3
                              );
            if (cVar2 == '\0') {
              pcVar4 = "failed to measure: DPC.elf";
            }
            else {
              cVar2 = _AMAuthInstallBasebandMeasureFirmwareFromBbfw
                                (1,param_1,&cf_CDMA2KFW_elf,_AMAuthInstallRembrandtMeasureC2K,lVar3,
                                 param_3);
              if (cVar2 != '\0') {
                cVar2 = _AMAuthInstallBasebandMeasureFirmwareFromBbfw
                                  (1,param_1,&cf_custpack_elf,_AMAuthInstallRembrandtMeasurecustpack
                                   ,lVar3,param_3);
                uVar6 = uVar5;
                if (cVar2 != '\0') goto switchD_002822f1_caseD_5f;
                goto LAB_00282cd1;
              }
              pcVar4 = "failed to measure: CDMA2KFW.elf";
            }
          }
        }
      }
    }
    break;
  default:
    goto switchD_002822f1_caseD_5f;
  case 0x60:
    cVar2 = _AMAuthInstallBasebandMeasureFirmwareFromBbfw
                      (1,param_1,&cf_psi_ram_bin,_AMAuthInstallRembrandtMeasurePSI,lVar3,param_3);
    uVar6 = 0xf;
    if (((cVar2 == '\0') ||
        (cVar2 = _AMAuthInstallBasebandMeasureFirmwareFromBbfw
                           (1,param_1,&cf_restorepsi_bin,_AMAuthInstallRembrandtMeasureRestorePSI,
                            lVar3,param_3), cVar2 == '\0')) ||
       (cVar2 = _AMAuthInstallBasebandMeasureFirmwareFromBbfw
                          (1,param_1,&cf_ebl_bin,_AMAuthInstallRembrandtMeasureEBL,lVar3,param_3),
       cVar2 == '\0')) goto switchD_002822f1_caseD_5f;
    cVar2 = _AMAuthInstallBasebandMeasureFirmwareFromBbfw
                      (1,param_1,&cf_SYS_SW_elf,_AMAuthInstallRembrandtMeasureSystemSoftware,lVar3,
                       param_3);
    if (cVar2 == '\0') goto LAB_00282c77;
    cVar2 = _AMAuthInstallBasebandMeasureFirmwareFromBbfw
                      (1,param_1,&cf_TDSFW_elf,_AMAuthInstallRembrandtMeasureTDS,lVar3,param_3);
    if (cVar2 == '\0') goto LAB_00282ca4;
    cVar2 = _AMAuthInstallBasebandMeasureFirmwareFromBbfw
                      (1,param_1,&cf_LTEFW_elf,_AMAuthInstallRembrandtMeasureLTE,lVar3,param_3);
    if (cVar2 == '\0') goto LAB_00282c8f;
    cVar2 = _AMAuthInstallBasebandMeasureFirmwareFromBbfw
                      (1,param_1,&cf_bbcfg_bin,_AMAuthInstallRembrandtMeasureBBCFG,lVar3,param_3);
    uVar6 = uVar5;
    if (cVar2 != '\0') goto switchD_002822f1_caseD_5f;
    goto LAB_00282c83;
  case 0x65:
    cVar2 = _AMAuthInstallBasebandMeasureFirmwareFromBbfw
                      (1,param_1,&cf_psi_ram_bin,_AMAuthInstallRembrandtMeasurePSI,lVar3,param_3);
    uVar6 = 0xf;
    if (((cVar2 == '\0') ||
        (cVar2 = _AMAuthInstallBasebandMeasureFirmwareFromBbfw
                           (1,param_1,&cf_restorepsi_bin,_AMAuthInstallRembrandtMeasureRestorePSI,
                            lVar3,param_3), cVar2 == '\0')) ||
       (cVar2 = _AMAuthInstallBasebandMeasureFirmwareFromBbfw
                          (1,param_1,&cf_ebl_bin,_AMAuthInstallRembrandtMeasureEBL,lVar3,param_3),
       cVar2 == '\0')) goto switchD_002822f1_caseD_5f;
    cVar2 = _AMAuthInstallBasebandMeasureFirmwareFromBbfw
                      (1,param_1,&cf_SYS_SW_elf,_AMAuthInstallRembrandtMeasureSystemSoftware,lVar3,
                       param_3);
    if (cVar2 == '\0') goto LAB_00282c77;
    cVar2 = _AMAuthInstallBasebandMeasureFirmwareFromBbfw
                      (1,param_1,&cf_TDSFW_elf,_AMAuthInstallRembrandtMeasureTDS,lVar3,param_3);
    if (cVar2 == '\0') goto LAB_00282ca4;
    cVar2 = _AMAuthInstallBasebandMeasureFirmwareFromBbfw
                      (1,param_1,&cf_LTEFW_elf,_AMAuthInstallRembrandtMeasureLTE,lVar3,param_3);
    if (cVar2 == '\0') goto LAB_00282c8f;
    cVar2 = _AMAuthInstallBasebandMeasureFirmwareFromBbfw
                      (1,param_1,&cf_bbcfg_bin,_AMAuthInstallRembrandtMeasureBBCFG,lVar3,param_3);
    if (cVar2 != '\0') {
      cVar2 = _AMAuthInstallBasebandMeasureFirmwareFromBbfw
                        (1,param_1,&cf_3GFW_elf,_AMAuthInstallRembrandtMeasure3GFW,lVar3,param_3);
      if (cVar2 == '\0') goto LAB_00282cad;
      cVar2 = _AMAuthInstallBasebandMeasureFirmwareFromBbfw
                        (1,param_1,&cf_2GFW_elf,_AMAuthInstallRembrandtMeasure2GFW,lVar3,param_3);
      if (cVar2 == '\0') goto LAB_00282cc8;
      cVar2 = _AMAuthInstallBasebandMeasureFirmwareFromBbfw
                        (1,param_1,&cf_RFFW_elf,_AMAuthInstallRembrandtMeasureRFFW,lVar3,param_3);
      if (cVar2 != '\0') {
        cVar2 = _AMAuthInstallBasebandMeasureFirmwareFromBbfw
                          (1,param_1,&cf_AudioFW_elf,_AMAuthInstallRembrandtMeasureAudioFW,lVar3,
                           param_3);
        if (cVar2 != '\0') {
          cVar2 = _AMAuthInstallBasebandMeasureFirmwareFromBbfw
                            (1,param_1,&cf_Debug_info_elf,_AMAuthInstallRembrandtMeasureDebugInfo,
                             lVar3,param_3);
          uVar6 = uVar5;
          if (cVar2 != '\0') goto switchD_002822f1_caseD_5f;
          goto LAB_00282cbf;
        }
        goto LAB_00282cb6;
      }
      goto LAB_00282c9b;
    }
LAB_00282c83:
    pcVar4 = "failed to measure: bbcfg.bin";
    uVar6 = 0xf;
    break;
  case 0x67:
    cVar2 = _AMAuthInstallBasebandMeasureFirmwareFromBbfw
                      (1,param_1,&cf_psi_ram_bin,_AMAuthInstallRembrandtMeasurePSI,lVar3,param_3);
    uVar1 = 0xf;
    uVar6 = uVar1;
    if (((cVar2 == '\0') ||
        (cVar2 = _AMAuthInstallBasebandMeasureFirmwareFromBbfw
                           (1,param_1,&cf_restorepsi_bin,_AMAuthInstallRembrandtMeasureRestorePSI,
                            lVar3,param_3), cVar2 == '\0')) ||
       (cVar2 = _AMAuthInstallBasebandMeasureFirmwareFromBbfw
                          (1,param_1,&cf_ebl_bin,_AMAuthInstallRembrandtMeasureEBL,lVar3,param_3),
       cVar2 == '\0')) goto switchD_002822f1_caseD_5f;
    cVar2 = _AMAuthInstallBasebandMeasureFirmwareFromBbfw
                      (1,param_1,&cf_SYS_SW_elf,_AMAuthInstallRembrandtMeasureSystemSoftware,lVar3,
                       param_3);
    if (cVar2 == '\0') goto LAB_00282c77;
    cVar2 = _AMAuthInstallBasebandMeasureFirmwareFromBbfw
                      (1,param_1,&cf_LTEFW_elf,_AMAuthInstallRembrandtMeasureLTE,lVar3,param_3);
    if (cVar2 == '\0') {
LAB_00282c8f:
      uVar6 = 0xf;
      pcVar4 = "failed to measure: LTE.elf";
    }
    else {
      cVar2 = _AMAuthInstallBasebandMeasureFirmwareFromBbfw
                        (1,param_1,&cf_bbcfg_bin,_AMAuthInstallRembrandtMeasureBBCFG,lVar3,param_3);
      if (cVar2 == '\0') goto LAB_00282c83;
      cVar2 = _AMAuthInstallBasebandMeasureFirmwareFromBbfw
                        (1,param_1,&cf_3GFW_elf,_AMAuthInstallRembrandtMeasure3GFW,lVar3,param_3);
      if (cVar2 == '\0') {
LAB_00282cad:
        uVar6 = 0xf;
        pcVar4 = "failed to measure: 3GFW.elf";
      }
      else {
        cVar2 = _AMAuthInstallBasebandMeasureFirmwareFromBbfw
                          (1,param_1,&cf_RFFW_elf,_AMAuthInstallRembrandtMeasureRFFW,lVar3,param_3);
        if (cVar2 == '\0') goto LAB_00282c9b;
        cVar2 = _AMAuthInstallBasebandMeasureFirmwareFromBbfw
                          (1,param_1,&cf_AudioFW_elf,_AMAuthInstallRembrandtMeasureAudioFW,lVar3,
                           param_3);
        if (cVar2 == '\0') {
LAB_00282cb6:
          uVar6 = 0xf;
          pcVar4 = "failed to measure: AudioFW.elf";
        }
        else {
          cVar2 = _AMAuthInstallBasebandMeasureFirmwareFromBbfw
                            (1,param_1,&cf_Debug_info_elf,_AMAuthInstallRembrandtMeasureDebugInfo,
                             lVar3,param_3);
          if (cVar2 == '\0') {
LAB_00282cbf:
            uVar6 = 0xf;
            pcVar4 = "failed to measure: Debug_info.elf";
          }
          else {
            cVar2 = _AMAuthInstallBasebandMeasureFirmwareFromBbfw
                              (1,param_1,&cf_GNSS_FW_elf,_AMAuthInstallRembrandtMeasureGNSSFW,lVar3,
                               param_3);
            if (cVar2 == '\0') {
              pcVar4 = "failed to measure: GNSS_FW.elf";
            }
            else {
              cVar2 = _AMAuthInstallBasebandMeasureFirmwareFromBbfw
                                (1,param_1,&cf_irx_coefficient_elf,
                                 _AMAuthInstallRembrandtMeasureIRXCoefficient,lVar3,param_3);
              uVar6 = uVar5;
              if (cVar2 != '\0') goto switchD_002822f1_caseD_5f;
              pcVar4 = "failed to measure: irx_coefficient.elf";
              uVar6 = uVar1;
            }
          }
        }
      }
    }
    break;
  case 0x68:
    cVar2 = _AMAuthInstallBasebandMeasureFirmwareFromBbfw
                      (1,param_1,&cf_psi_ram_bin,_AMAuthInstallRembrandtMeasurePSI,lVar3,param_3);
    uVar6 = 0xf;
    if (((cVar2 == '\0') ||
        (cVar2 = _AMAuthInstallBasebandMeasureFirmwareFromBbfw
                           (1,param_1,&cf_restorepsi_bin,_AMAuthInstallRembrandtMeasureRestorePSI,
                            lVar3,param_3), cVar2 == '\0')) ||
       ((cVar2 = _AMAuthInstallBasebandMeasureFirmwareFromBbfw
                           (0,param_1,&cf_psi_ram2_bin,_AMAuthInstallRembrandtMeasurePSI2,lVar3,
                            param_3), cVar2 == '\0' ||
        ((cVar2 = _AMAuthInstallBasebandMeasureFirmwareFromBbfw
                            (0,param_1,&cf_restorepsi2_bin,_AMAuthInstallRembrandtMeasureRestorePSI2
                             ,lVar3,param_3), cVar2 == '\0' ||
         (cVar2 = _AMAuthInstallBasebandMeasureFirmwareFromBbfw
                            (1,param_1,&cf_ebl_bin,_AMAuthInstallRembrandtMeasureEBL,lVar3,param_3),
         cVar2 == '\0')))))) goto switchD_002822f1_caseD_5f;
    cVar2 = _AMAuthInstallBasebandMeasureFirmwareFromBbfw
                      (1,param_1,&cf_SYS_SW_elf,_AMAuthInstallRembrandtMeasureSystemSoftware,lVar3,
                       param_3);
    uVar5 = 0xf;
    if (cVar2 == '\0') goto LAB_00282c77;
    cVar2 = _AMAuthInstallBasebandMeasureFirmwareFromBbfw
                      (1,param_1,&cf_bbcfg_bin,_AMAuthInstallRembrandtMeasureBBCFG,lVar3,param_3);
    if (cVar2 == '\0') goto LAB_00282c83;
    cVar2 = _AMAuthInstallBasebandMeasureFirmwareFromBbfw
                      (1,param_1,&cf_RFFW_elf,_AMAuthInstallRembrandtMeasureRFFW,lVar3,param_3);
    if (cVar2 == '\0') {
LAB_00282c9b:
      pcVar4 = "failed to measure: RFFW.elf";
      uVar6 = 0xf;
    }
    else {
      cVar2 = _AMAuthInstallBasebandMeasureFirmwareFromBbfw
                        (1,param_1,&cf_custpack_elf,_AMAuthInstallRembrandtMeasurecustpack,lVar3,
                         param_3);
      if (cVar2 == '\0') {
LAB_00282cd1:
        pcVar4 = "failed to measure: custpack.elf";
        uVar6 = 0xf;
      }
      else {
        cVar2 = _AMAuthInstallBasebandMeasureFirmwareFromBbfw
                          (1,param_1,&cf_ant_cfg_data_elf,_AMAuthInstallRembrandtMeasureAntCfg,lVar3
                           ,param_3);
        uVar6 = uVar5;
        if (cVar2 == '\0') {
          pcVar4 = "failed to measure: ant_cfg_data.elf";
        }
        else {
          cVar2 = _AMAuthInstallBasebandMeasureFirmwareFromBbfw
                            (1,param_1,&cf_TPCU_elf,_AMAuthInstallRembrandtMeasureTPCU,lVar3,param_3
                            );
          if (cVar2 == '\0') {
            pcVar4 = "failed to measure: TPCU.elf";
          }
          else {
            cVar2 = _AMAuthInstallBasebandMeasureFirmwareFromBbfw
                              (1,param_1,&cf_upc_elf,_AMAuthInstallRembrandtMeasureUPC,lVar3,param_3
                              );
            if (cVar2 == '\0') {
              pcVar4 = "failed to measure: upc.elf";
            }
            else {
              cVar2 = _AMAuthInstallBasebandMeasureFirmwareFromBbfw
                                (1,param_1,&cf_legacy_rat_fw_elf,
                                 _AMAuthInstallRembrandtMeasureLegacyRat,lVar3,param_3);
              uVar6 = 0;
              if (cVar2 != '\0') goto switchD_002822f1_caseD_5f;
              pcVar4 = "failed to measure: legacy_rat_fw.elf";
              uVar6 = uVar5;
            }
          }
        }
      }
    }
  }
LAB_00282d20:
  _AMAuthInstallLog(3,"AMAuthInstallBasebandRembrandtMeasureFirmware",pcVar4);
switchD_002822f1_caseD_5f:
  _BbfwReaderClose(lVar3);
  return uVar6;
}

