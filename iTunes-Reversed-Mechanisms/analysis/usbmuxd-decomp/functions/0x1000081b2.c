// rea decompile_all
// name: FUN_1000081b2
// address: 0x1000081b2
// body: available
// range: 0x1000081b2-0x1000086b2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000082d6 to 0x100003084 FUN_100003084 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x1000084bc to 0x1000008d2 FUN_1000008d2 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x100008598 to 0x1000055c0 FUN_1000055c0 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x1000085ae to 0x100005de6 FUN_100005de6 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000081b2(undefined8 param_1,long param_2,undefined8 param_3,int *param_4,long param_5)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char *pcVar7;
  long *plVar8;
  long lVar9;
  int *piVar10;
  uint uVar11;
  cfstringStruct *pcVar12;
  long *plVar13;
  
  if (param_5 == 0) {
    return;
  }
  if ((*(byte *)(param_5 + 0x7c) & 4) == 0) {
    if (*(long *)(param_5 + 8) == 0) {
      return;
    }
    if (param_2 == 1) {
      uVar4 = *(undefined4 *)(*(long *)(param_5 + 8) + 0x188);
      plVar8 = (long *)FUN_100000aa4("SCEDeviceSocketCallback",0xd04,1);
      if (plVar8 != (long *)0x0) {
        uVar11 = *(uint *)(plVar8 + 9);
        while (uVar11 < *(uint *)((long)plVar8 + 0x4c)) {
          uVar4 = _CFSocketGetNative(*(undefined8 *)(param_5 + 0xa8));
          lVar9 = FUN_10000dffa(uVar4,plVar8[4],*(int *)((long)plVar8 + 0x4c) - (int)plVar8[9],0,0);
          if (lVar9 < 0) {
            piVar10 = ___error();
            iVar3 = *piVar10;
            if (iVar3 != 0x23) {
              if (2 < DAT_100021030) {
                uVar5 = FUN_10000302f(param_5);
                uVar1 = *(ushort *)(param_5 + 0x58);
                uVar6 = FUN_100008d22(*(undefined8 *)(param_5 + 8));
                uVar2 = *(ushort *)(param_5 + 0x5a);
                pcVar7 = _strerror(iVar3);
                FUN_1000008d2(3,0,&cf__sUSBMuxRecvWithTimeoutfailedforclient_s__d_>_s__d__d__s,
                              "SCEDeviceSocketCallback",uVar5,uVar1 << 8 | uVar1 >> 8,uVar6,
                              uVar2 << 8 | uVar2 >> 8,iVar3,pcVar7);
              }
              uVar5 = 0xd21;
LAB_10000867b:
              FUN_100000b8b("SCEDeviceSocketCallback",uVar5,plVar8);
              goto LAB_100008683;
            }
            _CFSocketEnableCallBacks(*(undefined8 *)(param_5 + 0xa8),1);
            uVar11 = *(uint *)(plVar8 + 9);
            break;
          }
          if (lVar9 == 0) {
            if (2 < DAT_100021030) {
              uVar5 = FUN_10000302f(param_5);
              FUN_1000008d2(3,0,&cf__sclient_sremotepeerclosedconnection,"SCEDeviceSocketCallback",
                            uVar5);
            }
            uVar5 = 0xd29;
            goto LAB_10000867b;
          }
          uVar11 = (int)plVar8[9] + (int)lVar9;
          *(uint *)(plVar8 + 9) = uVar11;
          plVar8[4] = plVar8[4] + lVar9;
        }
        plVar8[4] = plVar8[5];
        if (uVar11 != 0) {
          **(undefined8 **)(param_5 + 0x98) = plVar8;
          do {
            plVar13 = plVar8;
            plVar8 = (long *)*plVar13;
          } while ((long *)*plVar13 != (long *)0x0);
          *(long **)(param_5 + 0x98) = plVar13;
          iVar3 = *(int *)(param_5 + 0xa0);
          *(int *)(param_5 + 0xa0) = (int)plVar13[9] + iVar3;
          if (iVar3 != 0) {
            return;
          }
          FUN_100005de6(param_5);
          return;
        }
        FUN_100000b8b("SCEDeviceSocketCallback",0xd46,plVar8);
LAB_100008587:
        FUN_1000055c0(param_5);
        return;
      }
      if (DAT_100021030 < 2) goto LAB_1000082c5;
      uVar5 = FUN_10000302f(param_5);
      FUN_1000008d2(2,0,&cf__sClient_sreadingdatafrominterface_dfailed_outofmemory_,
                    "SCEDeviceSocketCallback",uVar5,uVar4);
    }
    else if (param_2 == 8) {
      if (*(int *)(param_5 + 0x54) == 2) goto LAB_100008587;
      if (DAT_100021030 < 3) goto LAB_1000082c5;
      uVar5 = FUN_10000302f(param_5);
      FUN_1000008d2(3,0,&cf__sClient_sunexpectedlygotwriteablecallbackwhilenotconnected__,
                    "SCEDeviceSocketCallback",uVar5);
    }
    else if (param_2 == 4) {
      if ((param_4 == (int *)0x0) || (iVar3 = *param_4, iVar3 == 0)) {
        if (6 < DAT_100021030) {
          uVar5 = FUN_10000302f(param_5);
          FUN_1000008d2(7,0,&cf__sClient_sconnectto__succeeded_,"SCEDeviceSocketCallback",uVar5,
                        *(undefined8 *)(*(long *)(param_5 + 8) + 0x28));
        }
        uVar4 = _CFSocketGetNative(*(undefined8 *)(param_5 + 0xa8));
        iVar3 = FUN_10000de65(uVar4);
        if ((iVar3 != 0) && (2 < DAT_100021030)) {
          uVar4 = _CFSocketGetNative(*(undefined8 *)(param_5 + 0xa8));
          FUN_1000008d2(3,0,&cf_Couldnotembiggenbuffersfornativefd_d,uVar4);
        }
        uVar4 = _CFSocketGetNative(param_1);
        FUN_10000de27(uVar4,0);
        *(undefined4 *)(param_5 + 0x54) = 2;
        iVar3 = FUN_100005497(param_5,0);
        if ((iVar3 != 0) && (2 < DAT_100021030)) {
          FUN_1000008d2(3,0,&cf_Couldnotsendconnectionsuccestoclient);
          return;
        }
        return;
      }
      if (2 < DAT_100021030) {
        uVar5 = FUN_10000302f(param_5);
        uVar6 = FUN_100008d22(*(undefined8 *)(param_5 + 8));
        pcVar7 = _strerror(iVar3);
        FUN_1000008d2(3,0,&cf__sClient_sconnectto_sfailed_connectionfailedwitherror_d__s,
                      "SCEDeviceSocketCallback",uVar5,uVar6,iVar3,pcVar7);
      }
      iVar3 = FUN_100005497(param_5,2);
      if (iVar3 != 0) {
        return;
      }
    }
    else {
      if (DAT_100021030 < 3) goto LAB_1000082c5;
      uVar5 = FUN_10000302f(param_5);
      uVar6 = FUN_100008d22(*(undefined8 *)(param_5 + 8));
      FUN_1000008d2(3,0,&cf__sClient_sgotunexpectedcallbacktype_luprocessingcallbackfordevice_s,
                    "SCEDeviceSocketCallback",uVar5,param_2,uVar6);
    }
LAB_100008683:
    if (DAT_100021030 < 3) goto LAB_1000082c5;
    uVar5 = FUN_10000302f(param_5);
    pcVar12 = &cf__sfailedforclient_s;
    uVar6 = 3;
  }
  else {
    if (DAT_100021030 < 6) goto LAB_1000082c5;
    uVar5 = FUN_10000302f(param_5);
    pcVar12 = &cf__sdeferredI_Ocomplete_closingclient_s;
    uVar6 = 6;
  }
  FUN_1000008d2(uVar6,0,pcVar12,"SCEDeviceSocketCallback",uVar5);
LAB_1000082c5:
  FUN_100003084(param_5);
  return;
}

