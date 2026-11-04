// rea decompile_all
// name: FUN_100008968
// address: 0x100008968
// body: available
// range: 0x100008968-0x100008d21 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100008a21 to 0x10000907c FUN_10000907c (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x100008cb5 to 0x100008fdb FUN_100008fdb (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x100008d1d to 0x100010cb5 FUN_100010cb5 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100008968(long *param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int *piVar7;
  
  if (*param_1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_100010cb5();
  }
  lVar3 = param_1[8];
  if (*(char *)((long)param_1 + 0x7b) == '\x01') {
    FUN_100000cc6("MuxReceivedUSBData",0x3bc,"!db->db_free",param_1);
  }
  if (*(char *)((long)param_1 + 0x79) == '\0') {
    FUN_100000cc6("MuxReceivedUSBData",0x3bd,"db->db_reading",param_1);
  }
  *(undefined1 *)((long)param_1 + 0x79) = 0;
  *(int *)(param_1 + 9) = param_3;
  param_1[4] = param_1[5];
  iVar4 = *(int *)(lVar3 + 0x1b8) + -1;
  *(int *)(lVar3 + 0x1b8) = iVar4;
  if ((iVar4 == 0 & *(byte *)(lVar3 + 0x1c0)) == 1) {
    FUN_100000b8b("MuxReceivedUSBData",0x3c8,param_1);
    FUN_10000907c(lVar3);
    return;
  }
  if (param_2 != 0) {
    if (param_2 == -0x1ffffd15) {
      if (param_3 == 0) {
        FUN_100000b8b("MuxReceivedUSBData",0x3d3,param_1);
        goto LAB_100008b06;
      }
    }
    else {
      if (6 < DAT_100021030) {
        uVar5 = FUN_100008d22(lVar3);
        uVar6 = FUN_100000d8c(param_2);
        FUN_1000008d2(7,0,&cf__sUSBreaderroron_s__s,"MuxReceivedUSBData",uVar5,uVar6);
        param_3 = (int)param_1[9];
      }
      if ((param_3 != 0) && (2 < DAT_100021030)) {
        uVar5 = FUN_100008d22(lVar3);
        FUN_1000008d2(3,0,&cf__slostdataon_s,"MuxReceivedUSBData",uVar5);
      }
      FUN_100000b8b("MuxReceivedUSBData",0x3e2,param_1);
      if (param_2 == -0x1fffbfb1) {
        iVar4 = FUN_100008d87(lVar3,*(undefined1 *)(lVar3 + 0x178));
        if (iVar4 != 0) goto LAB_100008c76;
      }
      else if (param_2 == -0x1ffffd13) {
LAB_100008c76:
        if (4 < DAT_100021030) {
          uVar5 = FUN_100008d22(lVar3);
          FUN_1000008d2(5,0,&cf__sdevicedisconnected__s,"MuxReceivedUSBData",uVar5);
        }
        goto LAB_100008ca4;
      }
LAB_100008b06:
      param_1 = (long *)0x0;
    }
  }
  iVar4 = FUN_10000878c(lVar3);
  if (iVar4 == 0) {
    if (param_1 != (long *)0x0) {
      if ((DAT_1000212a0 < 1) ||
         (iVar4 = *(int *)(lVar3 + 0x1e0), *(int *)(lVar3 + 0x1e0) = iVar4 + -1, 1 < iVar4)) {
        uVar1 = *(uint *)(param_1 + 9);
        uVar2 = *(uint *)((long)param_1 + 0x4c);
        *(long *)(lVar3 + 0x1c8) = *(long *)(lVar3 + 0x1c8) + (ulong)uVar1;
        if ((ulong)uVar1 == 0) {
          FUN_100000b8b("MuxReceivedUSBData",0x431,param_1);
        }
        else {
          **(undefined8 **)(lVar3 + 0x1d8) = param_1;
          *(long **)(lVar3 + 0x1d8) = param_1;
        }
        if ((uVar1 < uVar2) && (*(long *)(lVar3 + 0x1d0) != 0)) {
          if (*(code **)(lVar3 + 0x168) != (code *)0x0) {
            (**(code **)(lVar3 + 0x168))
                      (lVar3,*(long *)(lVar3 + 0x1d0),*(undefined4 *)(lVar3 + 0x1c8));
          }
          *(long *)(lVar3 + 0x1d8) = lVar3 + 0x1d0;
          *(undefined8 *)(lVar3 + 0x1c8) = 0;
          *(undefined8 *)(lVar3 + 0x1d0) = 0;
        }
      }
      else {
        if (4 < DAT_100021030) {
          uVar1 = *(uint *)param_1[4];
          FUN_1000008d2(5,0,&cf__s__TESTDroppinginputpacket_proto__d,"MuxReceivedUSBData",
                        uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 |
                        uVar1 << 0x18);
        }
        if (*(int *)param_1[4] == 0x6000000) {
          piVar7 = (int *)param_1[4] + 4;
          param_1[4] = (long)piVar7;
          iVar4 = (int)param_1[9] + -0x10;
          *(int *)(param_1 + 9) = iVar4;
          FUN_100004010(0,piVar7,iVar4,"xxx");
          param_1[4] = param_1[4] + -0x10;
          *(int *)(param_1 + 9) = (int)param_1[9] + 0x10;
        }
        FUN_100000b8b("MuxReceivedUSBData",0x419,param_1);
        *(int *)(lVar3 + 0x1e0) = DAT_1000212a0;
      }
    }
    return;
  }
  if (6 < DAT_100021030) {
    uVar5 = FUN_100008d22(lVar3);
    uVar6 = FUN_100000d8c(iVar4);
    FUN_1000008d2(7,0,&cf__sStartReadson_sfailed__s,"MuxReceivedUSBData",uVar5,uVar6);
  }
  if (param_1 != (long *)0x0) {
    FUN_100000b8b("MuxReceivedUSBData",0x404,param_1);
  }
LAB_100008ca4:
  FUN_100008fdb(lVar3);
  return;
}

