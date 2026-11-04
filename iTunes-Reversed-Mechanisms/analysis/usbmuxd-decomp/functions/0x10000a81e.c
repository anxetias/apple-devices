// rea decompile_all
// name: FUN_10000a81e
// address: 0x10000a81e
// body: available
// range: 0x10000a81e-0x10000aaf9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10000a8b7 to 0x100000b8b FUN_100000b8b (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10000a81e(long param_1,long *param_2,uint param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint *puVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  cfstringStruct *pcVar8;
  
  if ((*param_2 == 0) && (*(uint *)(param_2 + 9) == param_3)) {
    if (0x13 < param_3) {
      puVar4 = (uint *)param_2[4];
      uVar1 = *puVar4;
      if (uVar1 != 0) {
        if (3 < DAT_100021030) {
          uVar6 = FUN_100008d22(param_1);
          FUN_1000008d2(4,0,&cf__snon_versionpacketreceived__d_from_s,"MuxVersionInput",
                        uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 |
                        uVar1 << 0x18,uVar6);
        }
        goto LAB_10000a89a;
      }
      uVar1 = puVar4[2];
      *(uint *)(param_1 + 0x1b0) =
           uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
      uVar1 = puVar4[3];
      *(uint *)(param_1 + 0x1b4) =
           uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
      if ((4 < DAT_100021030 & (byte)(uVar1 >> 0x1b)) == 1) {
        FUN_1000008d2(5,0,&cf_device_d___xsupportsTCPresend,*(undefined4 *)(param_1 + 0x188),
                      *(undefined4 *)(param_1 + 0x18c));
      }
      if (6 < DAT_100021030) {
        uVar2 = *(undefined4 *)(param_1 + 0x1b0);
        uVar3 = *(undefined4 *)(param_1 + 0x1b4);
        uVar6 = FUN_100008d22(param_1);
        FUN_1000008d2(7,0,&cf__sDetectedversion_ufeatures_xoninterface_s,"MuxVersionInput",uVar2,
                      uVar3,uVar6);
      }
      if ((DAT_10002128c._3_1_ & 0x20) == 0) {
        if (*(int *)(param_1 + 0x1b0) == 2) {
          *(code **)(param_1 + 0x168) = FUN_10000b11a;
          *(code **)(param_1 + 0x170) = FUN_10000b3e5;
          *(undefined4 *)(param_1 + 0x1ac) = 4;
          *(undefined8 *)(param_1 + 0x1a4) = 0x1000000000;
        }
        else {
          if (*(int *)(param_1 + 0x1b0) != 1) goto LAB_10000aa12;
          *(code **)(param_1 + 0x168) = FUN_10000aef3;
          *(code **)(param_1 + 0x170) = FUN_10000b0af;
          *(undefined8 *)(param_1 + 0x1a8) = 0x400000008;
        }
      }
      else {
        if (2 < DAT_100021030) {
          FUN_1000008d2(3,0,&cf__skDebugFlag_TestTooNewset_simulatingtoonew,"MuxVersionInput");
LAB_10000aa12:
          if (3 < DAT_100021030) {
            uVar6 = FUN_100008d22(param_1);
            FUN_1000008d2(4,0,&cf__sDevice_sreportedversion_uwhichistoonew,"MuxVersionInput",uVar6,
                          *(undefined4 *)(param_1 + 0x1b0));
          }
        }
        *(undefined4 *)(param_1 + 0x1ac) = 3;
        *(undefined8 *)(param_1 + 0x168) = 0;
        *(undefined8 *)(param_1 + 0x170) = 0;
      }
      FUN_100002274(param_1);
      iVar5 = FUN_10000a173(param_1);
      if ((iVar5 != 0) && (2 < DAT_100021030)) {
        uVar6 = FUN_100008d22(param_1);
        uVar7 = FUN_100000d8c(iVar5);
        FUN_1000008d2(3,0,&cf__scouldn_tsendloglevelpacketto_s_error__s,"MuxVersionInput",uVar6,
                      uVar7);
      }
      goto LAB_10000a89a;
    }
    if (2 < DAT_100021030) {
      uVar6 = FUN_100008d22(param_1);
      pcVar8 = &cf__sversionpacketfrom_stoosmall;
      goto LAB_10000a87a;
    }
  }
  else if (2 < DAT_100021030) {
    uVar6 = FUN_100008d22(param_1);
    pcVar8 = &cf__sError_versionmessagefrom_sspannedmorethanonebuffer;
LAB_10000a87a:
    FUN_1000008d2(3,0,pcVar8,"MuxVersionInput",uVar6);
  }
  FUN_100008fdb(param_1);
LAB_10000a89a:
  FUN_100000b8b("MuxVersionInput",0x618,param_2);
  return;
}

