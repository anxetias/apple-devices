// rea decompile_all
// name: FUN_10000368f
// address: 0x10000368f
// body: available
// range: 0x10000368f-0x10000400f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100003706 to 0x100000b8b FUN_100000b8b (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x100003b3a to 0x100003084 FUN_100003084 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x100003f4b to 0x1000055c0 FUN_1000055c0 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x100003f86 to 0x100005319 FUN_100005319 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10000368f(long param_1,long param_2,uint param_3)

{
  int *piVar1;
  byte bVar2;
  ushort uVar3;
  ushort *puVar4;
  long lVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  uint uVar13;
  ulong uVar14;
  long lVar15;
  long *plVar16;
  char *pcVar17;
  uint uVar18;
  uint uVar19;
  undefined8 in_stack_ffffffffffffff88;
  undefined4 uVar20;
  undefined8 in_stack_ffffffffffffff90;
  undefined4 uVar21;
  undefined8 in_stack_ffffffffffffff98;
  undefined4 uVar22;
  
  uVar22 = (undefined4)((ulong)in_stack_ffffffffffffff98 >> 0x20);
  uVar21 = (undefined4)((ulong)in_stack_ffffffffffffff90 >> 0x20);
  uVar14 = (ulong)param_3;
  if ((param_3 < 0x14) || (*(uint *)(param_2 + 0x48) < 0x14)) {
    if (3 < DAT_100021030) {
      uVar9 = FUN_100008d22(param_1);
      FUN_1000008d2(4,0,&cf_Warning_receivedshortpacketfrom_s__ureceived__luminimum,uVar9,uVar14,
                    0x14);
    }
    uVar9 = 0xc30;
  }
  else {
    puVar4 = *(ushort **)(param_2 + 0x20);
    plVar16 = *(long **)(param_1 + 8);
    bVar6 = true;
    if (plVar16 != (long *)0x0) {
      do {
        if ((*(ushort *)(plVar16 + 0xb) == puVar4[1]) &&
           (*(ushort *)((long)plVar16 + 0x5a) == *puVar4)) {
          bVar6 = false;
          goto LAB_100003745;
        }
        plVar16 = (long *)*plVar16;
      } while (plVar16 != (long *)0x0);
    }
    plVar16 = (long *)0x0;
LAB_100003745:
    if ((DAT_10002128c < 0) && (6 < DAT_100021030)) {
      FUN_100004010(plVar16,puVar4,(long)(int)param_3,"IN ");
    }
    if (!bVar6) {
      lVar5 = *(long *)(param_2 + 0x20);
      if ((((0x16 < param_3) && ((*(byte *)(lVar5 + 0xd) & 4) != 0)) &&
          (*(undefined1 *)(lVar5 + uVar14) = 0, *(char *)(lVar5 + 0x14) != '\0')) &&
         (5 < DAT_100021030)) {
        uVar22 = *(undefined4 *)(plVar16[1] + 0x188);
        uVar20 = *(undefined4 *)(plVar16[1] + 0x18c);
        uVar3 = *(ushort *)((long)plVar16 + 0x5a);
        in_stack_ffffffffffffff88 = FUN_10000302f(plVar16);
        lVar15 = lVar5 + 0x15;
        uVar9 = CONCAT44(uVar21,(uint)(ushort)(*(ushort *)(plVar16 + 0xb) << 8 |
                                              *(ushort *)(plVar16 + 0xb) >> 8));
        FUN_1000008d2(6,0,&cf_receivedRSTdev_d___x__d_>_s__d_message__s,uVar22,uVar20,
                      uVar3 << 8 | uVar3 >> 8,in_stack_ffffffffffffff88,uVar9,lVar15);
        uVar22 = (undefined4)((ulong)lVar15 >> 0x20);
        uVar21 = (undefined4)((ulong)uVar9 >> 0x20);
      }
      uVar20 = (undefined4)((ulong)in_stack_ffffffffffffff88 >> 0x20);
      if (*(int *)((long)plVar16 + 0x54) != 2) {
        if (*(int *)((long)plVar16 + 0x54) == 1) {
          if (((*(uint *)(lVar5 + 0xc) >> 2 & 0x3c) != param_3) ||
             (*(char *)(lVar5 + 0xd) != '\x12')) {
            *(undefined4 *)((long)plVar16 + 0x54) = 0;
            iVar8 = FUN_100005497(plVar16,3);
            if (iVar8 == 0) {
              _CFSocketEnableCallBacks(plVar16[4],1);
              *(undefined4 *)((long)plVar16 + 0x54) = 0;
            }
            pcVar17 = "MuxTCPInputSCE";
            uVar9 = 0x7f2;
            goto LAB_1000036f8;
          }
          *(undefined4 *)((long)plVar16 + 0x54) = 2;
          uVar13 = *(uint *)(plVar16 + 0xc);
          *(undefined4 *)(plVar16 + 0xd) = *(undefined4 *)((long)plVar16 + 100);
          uVar19 = *(uint *)(lVar5 + 4);
          *(uint *)((long)plVar16 + 100) =
               (uVar19 >> 0x18 | (uVar19 & 0xff0000) >> 8 | (uVar19 & 0xff00) << 8 | uVar19 << 0x18)
               + 1;
          iVar8 = (uint)(ushort)(*(ushort *)(lVar5 + 0xe) << 8 | *(ushort *)(lVar5 + 0xe) >> 8) *
                  0x100;
          uVar19 = *(uint *)(lVar5 + 8);
          if (((uVar13 >> 0x18 | (uVar13 & 0xff0000) >> 8 | (uVar13 & 0xff00) << 8 | uVar13 << 0x18)
               != iVar8 + uVar19) && (6 < DAT_100021030)) {
            uVar9 = FUN_10000302f(plVar16);
            iVar8 = (uint)(ushort)(*(ushort *)(lVar5 + 0xe) << 8 | *(ushort *)(lVar5 + 0xe) >> 8) *
                    0x100;
            uVar13 = *(uint *)(lVar5 + 8);
            uVar13 = uVar13 >> 0x18 | (uVar13 & 0xff0000) >> 8 | (uVar13 & 0xff00) << 8 |
                     uVar13 << 0x18;
            uVar14 = (ulong)((uVar13 - *(int *)((long)plVar16 + 0x5c)) + iVar8);
            uVar10 = CONCAT44(uVar20,iVar8 + uVar13);
            FUN_1000008d2(7,0,&cf__sclient_ssendwindow_u_>_d_lu,"MuxTCPInputSCE",uVar9,
                          (int)plVar16[0xc],uVar10,uVar14);
            uVar20 = (undefined4)((ulong)uVar10 >> 0x20);
            uVar21 = (undefined4)(uVar14 >> 0x20);
            uVar19 = *(uint *)(lVar5 + 8);
            iVar8 = (uint)(ushort)(*(ushort *)(lVar5 + 0xe) << 8 | *(ushort *)(lVar5 + 0xe) >> 8) <<
                    8;
          }
          *(uint *)(plVar16 + 0xc) =
               (uVar19 >> 0x18 | (uVar19 & 0xff0000) >> 8 | (uVar19 & 0xff00) << 8 | uVar19 << 0x18)
               + iVar8;
          FUN_100000b8b("MuxTCPInputSCE",0x802,param_2);
          iVar8 = FUN_100005497(plVar16,0);
          if (iVar8 != 0) {
            return;
          }
          _CFSocketEnableCallBacks(plVar16[4],1);
          if (6 < DAT_100021030) {
            uVar9 = FUN_10000302f(plVar16);
            FUN_1000008d2(7,0,&cf__sclientconnected__s__d<_>dev_d___x__d,"MuxTCPInputSCE",uVar9,
                          *(ushort *)(plVar16 + 0xb) << 8 | *(ushort *)(plVar16 + 0xb) >> 8,
                          CONCAT44(uVar20,*(undefined4 *)(plVar16[1] + 0x188)),
                          CONCAT44(uVar21,*(undefined4 *)(plVar16[1] + 0x18c)),
                          CONCAT44(uVar22,(uint)(ushort)(*(ushort *)((long)plVar16 + 0x5a) << 8 |
                                                        *(ushort *)((long)plVar16 + 0x5a) >> 8)));
          }
          goto LAB_100003f3a;
        }
        if ((*(byte *)(lVar5 + 0xd) & 4) == 0) {
          FUN_1000041b4(plVar16[1],lVar5,0);
        }
        pcVar17 = "MuxTCPInputSCE";
        uVar9 = 0x81f;
        goto LAB_1000036f8;
      }
      lVar5 = *(long *)(param_2 + 0x20);
      if ((*(byte *)(lVar5 + 0xd) & 4) != 0) {
        if (5 < DAT_100021030) {
          uVar22 = *(undefined4 *)(plVar16[1] + 0x188);
          uVar20 = *(undefined4 *)(plVar16[1] + 0x18c);
          uVar3 = *(ushort *)((long)plVar16 + 0x5a);
          uVar9 = FUN_10000302f(plVar16);
          FUN_1000008d2(6,0,&cf_receivedRSTdev_d___x__d_>_s__d_disconnecting,uVar22,uVar20,
                        uVar3 << 8 | uVar3 >> 8,uVar9,
                        CONCAT44(uVar21,(uint)(ushort)(*(ushort *)(plVar16 + 0xb) << 8 |
                                                      *(ushort *)(plVar16 + 0xb) >> 8)));
        }
        uVar9 = 0x71e;
LAB_100003b21:
        FUN_100000b8b("MuxTCPInputConnected",uVar9,param_2);
        goto LAB_100003b29;
      }
      if (*(byte *)(lVar5 + 0xd) != 0x10) {
        if (3 < DAT_100021030) {
          uVar9 = FUN_10000302f(plVar16);
          uVar10 = FUN_100008d22(plVar16[1]);
          FUN_1000008d2(4,0,&cf__s__s_TCPpacketwithnoACKfrom_s_ignoring,"MuxTCPInputConnected",uVar9
                        ,uVar10);
        }
        pcVar17 = "MuxTCPInputConnected";
        uVar9 = 0x728;
        goto LAB_1000036f8;
      }
      uVar13 = *(uint *)(lVar5 + 4);
      uVar13 = uVar13 >> 0x18 | (uVar13 & 0xff0000) >> 8 | (uVar13 & 0xff00) << 8 | uVar13 << 0x18;
      if ((int)(uVar13 - *(uint *)((long)plVar16 + 100)) < 0) {
        if (4 < DAT_100021030) {
          uVar9 = FUN_10000302f(plVar16);
          uVar10 = FUN_100008d22(plVar16[1]);
          FUN_1000008d2(5,0,&cf__s_s_duplicatepacket_ufrom_s_ignoring,"MuxTCPInputConnected",uVar9,
                        uVar13,uVar10);
        }
        pcVar17 = "MuxTCPInputConnected";
        uVar9 = 0x735;
        goto LAB_1000036f8;
      }
      bVar2 = *(byte *)(lVar5 + 0xc);
      uVar19 = *(uint *)(lVar5 + 8);
      uVar19 = uVar19 >> 0x18 | (uVar19 & 0xff0000) >> 8 | (uVar19 & 0xff00) << 8 | uVar19 << 0x18;
      lVar15 = plVar16[1];
      if ((*(byte *)(lVar15 + 0x1b4) & 8) == 0) {
        lVar11 = lVar5;
        if (uVar13 != *(uint *)((long)plVar16 + 100)) {
          if (2 < DAT_100021030) {
            uVar9 = FUN_10000302f(plVar16);
            FUN_1000008d2(3,0,&cf__s_s_missingpacket_expected_ugot_u_disconnecting,
                          "MuxTCPInputConnected",uVar9,*(undefined4 *)((long)plVar16 + 100),
                          CONCAT44(uVar20,uVar13));
            lVar15 = plVar16[1];
          }
          FUN_1000041b4(lVar15,lVar5,0);
          uVar9 = 0x780;
          goto LAB_100003b21;
        }
      }
      else {
        if (plVar16[0x1a] != 0) {
          lVar15 = plVar16[0x1a];
          do {
            uVar20 = (undefined4)((ulong)in_stack_ffffffffffffff88 >> 0x20);
            if (-1 < (int)(*(int *)(lVar15 + 0x38) - uVar19)) {
              plVar16[0x1a] = lVar15;
              goto LAB_100003cc7;
            }
            lVar11 = *(long *)(lVar15 + 8);
            *(undefined8 *)(lVar15 + 8) = 0;
            *(undefined1 *)(lVar15 + 0x78) = 0;
            if (*(char *)(lVar15 + 0x7a) == '\0') {
              FUN_100000b8b("ReleaseAckedPackets",0x174);
            }
            uVar20 = (undefined4)((ulong)in_stack_ffffffffffffff88 >> 0x20);
            lVar15 = lVar11;
          } while (lVar11 != 0);
          plVar16[0x1a] = 0;
          plVar16[0x1b] = (long)(plVar16 + 0x1a);
        }
LAB_100003cc7:
        if ((int)(uVar19 - *(int *)((long)plVar16 + 0x5c)) < 0) {
          if (*(uint *)((long)plVar16 + 0x6c) == uVar19) {
            lVar15 = plVar16[0xe];
            *(int *)(plVar16 + 0xe) = (int)lVar15 + 1;
            if (2 < (int)lVar15) {
              if (6 < DAT_100021030) {
                uVar9 = FUN_10000302f(plVar16);
                FUN_1000008d2(7,0,&cf__s_s_Remoterequestsresendof_u,"MuxTCPInputConnected",uVar9,
                              uVar19);
              }
              iVar8 = FUN_100005ba0(plVar16,uVar19);
              if (iVar8 != 0) {
                FUN_1000041b4(plVar16[1],lVar5,0);
                uVar9 = 0x751;
                goto LAB_100003b21;
              }
              goto LAB_100003d51;
            }
          }
          else {
LAB_100003d51:
            *(undefined4 *)(plVar16 + 0xe) = 0;
          }
          *(uint *)((long)plVar16 + 0x6c) = uVar19;
        }
        if (0 < (int)(uVar13 - *(int *)((long)plVar16 + 100))) {
          if (4 < DAT_100021030) {
            uVar9 = FUN_10000302f(plVar16);
            FUN_1000008d2(5,0,&cf__s_s_missingpacketexpected_ugot_u_requestingresend,
                          "MuxTCPInputConnected",uVar9,*(undefined4 *)((long)plVar16 + 100),
                          CONCAT44(uVar20,uVar13));
          }
          *(long *)(param_2 + 0x30) = lVar5;
          *(uint *)(param_2 + 0x38) = uVar13;
          if (param_3 <= (*(uint *)(lVar5 + 0xc) >> 2 & 0x3c)) goto LAB_100003f6d;
          lVar5 = plVar16[0x1c];
          if (lVar5 == 0) {
            *(undefined8 *)(param_2 + 8) = 0;
            plVar12 = (long *)plVar16[0x1d];
          }
          else {
            plVar12 = (long *)plVar16[0x1d];
            if ((int)(uVar13 - (int)plVar12[6]) < 1) {
              if ((int)(uVar13 - *(uint *)(lVar5 + 0x38)) < 1) {
                if (uVar13 != *(uint *)(lVar5 + 0x38)) {
                  *(long *)(param_2 + 8) = lVar5;
                  plVar16[0x1c] = param_2;
                  goto LAB_100003f6d;
                }
              }
              else {
                do {
                  lVar15 = lVar5;
                  lVar5 = *(long *)(lVar15 + 8);
                  if (lVar5 == 0) {
                    *(undefined8 *)(param_2 + 8) = 0;
                    *(long *)(lVar15 + 8) = param_2;
                    goto LAB_100003f66;
                  }
                } while (0 < (int)(uVar13 - *(uint *)(lVar5 + 0x38)));
                if (uVar13 != *(uint *)(lVar5 + 0x38)) {
                  *(long *)(param_2 + 8) = lVar5;
                  *(long *)(lVar15 + 8) = param_2;
                  goto LAB_100003f6d;
                }
              }
              FUN_100000b8b("TcpBufferAdd",0x1e0,param_2);
              goto LAB_100003f6d;
            }
            *(undefined8 *)(param_2 + 8) = 0;
          }
          *plVar12 = param_2;
LAB_100003f66:
          plVar16[0x1d] = param_2 + 8;
LAB_100003f6d:
          FUN_100005319(plVar16);
          FUN_100005319(plVar16);
          return;
        }
        lVar11 = *(long *)(param_2 + 0x20);
        uVar19 = *(uint *)(lVar5 + 8);
        uVar19 = uVar19 >> 0x18 | (uVar19 & 0xff0000) >> 8 | (uVar19 & 0xff00) << 8 | uVar19 << 0x18
        ;
      }
      uVar18 = bVar2 >> 2 & 0xfffffffc;
      *(ulong *)(param_2 + 0x20) = lVar11 + (ulong)uVar18;
      piVar1 = (int *)(param_2 + 0x48);
      *piVar1 = *piVar1 - uVar18;
      iVar8 = *piVar1;
      *(uint *)(plVar16 + 0xc) =
           (uint)(ushort)(*(ushort *)(lVar5 + 0xe) << 8 | *(ushort *)(lVar5 + 0xe) >> 8) * 0x100 +
           uVar19;
      if (iVar8 == 0) {
        FUN_100000b8b("MuxTCPInputConnected",0x7b6,param_2);
      }
      else {
        lVar15 = plVar16[0x14];
        FUN_100005cc0(plVar16,param_2);
        if (0x20000 < *(uint *)(plVar16 + 0x14)) {
          if (2 < DAT_100021030) {
            uVar9 = FUN_100008d22(plVar16[1]);
            FUN_1000008d2(3,0,&cf__sError_device_ssent_d_weadvertised_d,"MuxTCPInputConnected",uVar9
                          ,(int)plVar16[0x14],CONCAT44(uVar20,0x20000));
          }
          FUN_1000041b4(plVar16[1],lVar5,0);
LAB_100003b29:
          FUN_100003084(plVar16);
          return;
        }
        if ((plVar16[0x1c] != 0) &&
           (cVar7 = FUN_100005cfd(plVar16,uVar13,uVar14 - uVar18), cVar7 != '\0')) {
          if (4 < DAT_100021030) {
            uVar9 = FUN_10000302f(plVar16);
            FUN_1000008d2(5,0,&cf__s_s_moremissingpackets_expected_u_have_u_requestingresend,
                          "MuxTCPInputConnected",uVar9,*(undefined4 *)((long)plVar16 + 100),
                          CONCAT44(uVar20,*(undefined4 *)(plVar16[0x1c] + 0x38)));
          }
          FUN_100005319(plVar16);
          FUN_100005319(plVar16);
        }
        if (((int)lVar15 == 0) && (iVar8 = FUN_100005de6(plVar16), iVar8 != 0)) {
          return;
        }
      }
LAB_100003f3a:
      FUN_1000055c0(plVar16);
      return;
    }
    if ((*(byte *)((long)puVar4 + 0xd) & 4) == 0) {
      if (6 < DAT_100021030) {
        uVar9 = FUN_100008d22(param_1);
        FUN_1000008d2(7,0,&cf_Receivedtcppacketfrom_s__d_>_dhasnomatchinglocalclient,uVar9,
                      *puVar4 << 8 | *puVar4 >> 8,puVar4[1] << 8 | puVar4[1] >> 8);
      }
      FUN_1000041b4(param_1,puVar4,0);
    }
    uVar9 = 0xc4b;
  }
  pcVar17 = "MuxTCPInput";
LAB_1000036f8:
  FUN_100000b8b(pcVar17,uVar9,param_2);
  return;
}

