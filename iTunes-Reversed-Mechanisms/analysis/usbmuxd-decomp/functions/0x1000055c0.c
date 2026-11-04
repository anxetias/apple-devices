// rea decompile_all
// name: FUN_1000055c0
// address: 0x1000055c0
// body: available
// range: 0x1000055c0-0x100005a0b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100005646 to 0x1000008d2 FUN_1000008d2 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x100005802 to 0x100000b8b FUN_100000b8b (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x1000058bb to 0x1000008d2 FUN_1000008d2 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000055c0(long param_1)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  int *piVar9;
  char *pcVar10;
  ulong uVar11;
  long *plVar12;
  
  if ((*(uint *)(param_1 + 0x7c) & 4) != 0) {
    return;
  }
  lVar7 = *(long *)(param_1 + 8);
  if (lVar7 == 0) {
    return;
  }
  if (*(int *)(lVar7 + 0x18) != 2) {
    if (*(int *)(lVar7 + 0x18) == 1) {
      FUN_100010c50(lVar7,param_1);
      return;
    }
    if (DAT_100021030 < 3) {
      return;
    }
    uVar5 = FUN_10000302f(param_1);
    FUN_1000008d2(3,0,&cf__sfailedonClient_sforunknownmietype_d,"MuxTCPSendNextSegment",uVar5,
                  *(undefined4 *)(*(long *)(param_1 + 8) + 0x18));
    return;
  }
  uVar3 = *(uint *)(param_1 + 200);
  if (uVar3 < 0x100000) {
    if ((*(uint *)(param_1 + 0x7c) & 0x10) == 0) {
      do {
        if (*(long *)(param_1 + 0xa8) == 0) {
          if (DAT_100021030 < 3) {
            return;
          }
          uVar5 = FUN_10000302f(param_1);
          uVar1 = *(ushort *)(param_1 + 0x58);
          uVar8 = FUN_100008d22(*(undefined8 *)(param_1 + 8));
          FUN_1000008d2(3,0,&cf__sclient_s__d_>_s__dfailed_Noconnectiontodevice,
                        "MuxTCPSendNextSegmentOverNetwork",uVar5,uVar1 << 8 | uVar1 >> 8,uVar8,
                        *(ushort *)(param_1 + 0x5a) << 8 | *(ushort *)(param_1 + 0x5a) >> 8);
          return;
        }
        plVar6 = (long *)FUN_100000aa4("MuxTCPSendNextSegmentOverNetwork",0x4cd,1);
        if (plVar6 == (long *)0x0) {
          if (DAT_100021030 < 7) {
            return;
          }
          uVar5 = FUN_10000302f(param_1);
          FUN_1000008d2(7,0,&cf__sclient_sdelayed_outofbuffers,"MuxTCPSendNextSegmentOverNetwork",
                        uVar5);
          return;
        }
        uVar3 = *(uint *)((long)plVar6 + 0x4c);
        uVar11 = ((ulong)(uVar3 - (int)plVar6[9]) - plVar6[4]) + plVar6[5];
        if ((long)(ulong)uVar3 <= (long)uVar11) {
          uVar11 = (ulong)uVar3;
        }
        lVar7 = FUN_10000dffa(*(undefined4 *)(param_1 + 0x4c),plVar6[4],uVar11,0,0);
        if (lVar7 < 0) {
          piVar9 = ___error();
          iVar4 = *piVar9;
          if (iVar4 == 0x23) {
            *(uint *)(param_1 + 0x7c) = *(uint *)(param_1 + 0x7c) & 0xfffffffe;
            _CFSocketEnableCallBacks(*(undefined8 *)(param_1 + 0x20),1);
            uVar3 = *(uint *)(param_1 + 200);
            goto LAB_10000571a;
          }
          *(uint *)(param_1 + 0x7c) = *(uint *)(param_1 + 0x7c) | 0x10;
          if (2 < DAT_100021030) {
            uVar5 = FUN_10000302f(param_1);
            uVar1 = *(ushort *)(param_1 + 0x58);
            uVar8 = FUN_100008d22(*(undefined8 *)(param_1 + 8));
            uVar2 = *(ushort *)(param_1 + 0x5a);
            pcVar10 = _strerror(iVar4);
            FUN_1000008d2(3,0,&cf__sUSBMuxRecvWithTimeoutforNETfailedforclient_s__d_>_s__d__d__s,
                          "MuxTCPSendNextSegmentOverNetwork",uVar5,uVar1 << 8 | uVar1 >> 8,uVar8,
                          uVar2 << 8 | uVar2 >> 8,iVar4,pcVar10);
          }
LAB_1000059ec:
          uVar11 = FUN_100005a0c(param_1);
          if ((uVar11 & 0xfffffffd) == 0) {
            FUN_100003084(param_1);
          }
          goto LAB_1000057e5;
        }
        if (lVar7 == 0) {
          if (2 < DAT_100021030) {
            uVar5 = FUN_10000302f(param_1);
            uVar1 = *(ushort *)(param_1 + 0x58);
            uVar8 = FUN_100008d22(*(undefined8 *)(param_1 + 8));
            FUN_1000008d2(3,0,&cf__sUnexpectedEOF_client_s__d_>_s__d,
                          "MuxTCPSendNextSegmentOverNetwork",uVar5,uVar1 << 8 | uVar1 >> 8,uVar8,
                          *(ushort *)(param_1 + 0x5a) << 8 | *(ushort *)(param_1 + 0x5a) >> 8);
          }
          *(byte *)(param_1 + 0x7c) = *(byte *)(param_1 + 0x7c) | 0x10;
          goto LAB_1000059ec;
        }
        *(int *)(plVar6 + 9) = (int)lVar7;
        **(undefined8 **)(param_1 + 0xc0) = plVar6;
        do {
          plVar12 = plVar6;
          plVar6 = (long *)*plVar12;
        } while ((long *)*plVar12 != (long *)0x0);
        *(long **)(param_1 + 0xc0) = plVar12;
        uVar3 = *(int *)(param_1 + 200) + (int)plVar12[9];
        *(uint *)(param_1 + 200) = uVar3;
        *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + 1;
        if (0xfffff < uVar3) goto LAB_100005720;
      } while ((*(byte *)(param_1 + 0x7c) & 0x10) == 0);
    }
    plVar6 = (long *)0x0;
LAB_10000571a:
    if (uVar3 != 0) goto LAB_100005723;
LAB_10000579b:
    if ((*(byte *)(param_1 + 0x7c) & 0x14) == 0) goto LAB_1000057dc;
    if (6 < DAT_100021030) {
      uVar5 = FUN_10000302f(param_1);
      FUN_1000008d2(7,0,&cf__spendingI_Ocomplete_closingclient_s,"MuxTCPSendNextSegmentOverNetwork",
                    uVar5);
    }
  }
  else {
LAB_100005720:
    plVar6 = (long *)0x0;
LAB_100005723:
    iVar4 = FUN_100005a0c(param_1);
    if (iVar4 != 2) goto LAB_10000579b;
    if (2 < DAT_100021030) {
      uVar5 = FUN_10000302f(param_1);
      uVar1 = *(ushort *)(param_1 + 0x58);
      uVar8 = FUN_100008d22(*(undefined8 *)(param_1 + 8));
      FUN_1000008d2(3,0,&cf__sSCEInterfaceSendfailedforclient_s__d_>_s__d,
                    "MuxTCPSendNextSegmentOverNetwork",uVar5,uVar1 << 8 | uVar1 >> 8,uVar8,
                    *(ushort *)(param_1 + 0x5a) << 8 | *(ushort *)(param_1 + 0x5a) >> 8);
    }
  }
  FUN_100003084(param_1);
LAB_1000057dc:
  if (plVar6 == (long *)0x0) {
    return;
  }
LAB_1000057e5:
  FUN_100000b8b("MuxTCPSendNextSegmentOverNetwork",0x52d,plVar6);
  return;
}

