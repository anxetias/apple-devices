// rea decompile_all
// name: FUN_1000107d4
// address: 0x1000107d4
// body: available
// range: 0x1000107d4-0x100010c17 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_1000107d4(long param_1)

{
  undefined4 *puVar1;
  ushort uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int *piVar8;
  undefined8 uVar9;
  char *pcVar10;
  uint uVar11;
  int iVar12;
  ulong uVar13;
  ulong uVar14;
  ushort uVar15;
  ulong uVar16;
  
  uVar9 = 2;
  if ((param_1 != 0) && (*(long *)(param_1 + 8) != 0)) {
    if (*(int *)(*(long *)(param_1 + 8) + 0x1bc) < 0x10) {
      lVar4 = FUN_100000aa4("MuxTCPSendOneSegmentOverUSB",0x555,1);
      if (lVar4 != 0) {
        uVar14 = (ulong)*(uint *)(*(long *)(param_1 + 8) + 0x1a8);
        puVar1 = (undefined4 *)(*(long *)(lVar4 + 0x28) + uVar14);
        *(undefined4 **)(lVar4 + 0x20) = puVar1;
        *(undefined4 **)(lVar4 + 0x30) = puVar1;
        uVar3 = *(uint *)(*(long *)(lVar4 + 0x28) + 4 + uVar14);
        *(uint *)(lVar4 + 0x38) =
             uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
        *(undefined4 *)(lVar4 + 0x48) = 0x14;
        uVar13 = (ulong)(uint)-(*(int *)(param_1 + 0x5c) - *(int *)(param_1 + 0x60));
        uVar16 = 0x7fe8 - uVar14;
        if ((long)uVar13 <= (long)(0x7fe8 - uVar14)) {
          uVar16 = uVar13;
        }
        uVar14 = (*(int *)(lVar4 + 0x4c) - 0x14) - uVar14;
        if ((long)uVar16 < (long)uVar14) {
          uVar14 = uVar16;
        }
        if (((-1 < *(int *)(param_1 + 0x5c) - *(int *)(param_1 + 0x60)) || ((long)uVar14 < 1)) ||
           ((*(byte *)(param_1 + 0x7c) & 1) == 0)) {
          FUN_100000b8b("MuxTCPSendOneSegmentOverUSB",0x570,lVar4);
          if ((*(byte *)(param_1 + 0x7c) & 2) == 0) {
            return 5;
          }
          FUN_100005319(param_1);
          return 5;
        }
        lVar5 = FUN_10000dffa(*(undefined4 *)(param_1 + 0x4c),puVar1 + 5,uVar14,0,0);
        if (lVar5 < 0) {
          piVar8 = ___error();
          iVar12 = *piVar8;
          if (iVar12 == 0x23) {
            *(byte *)(param_1 + 0x7c) = *(byte *)(param_1 + 0x7c) & 0xfe;
            _CFSocketEnableCallBacks(*(undefined8 *)(param_1 + 0x20),1);
            uVar9 = 3;
            if ((*(byte *)(param_1 + 0x7c) & 2) != 0) {
              FUN_100005319(param_1);
            }
          }
          else {
            if (2 < DAT_100021030) {
              uVar9 = FUN_10000302f(param_1);
              uVar15 = *(ushort *)(param_1 + 0x58);
              uVar6 = FUN_100008d22(*(undefined8 *)(param_1 + 8));
              uVar2 = *(ushort *)(param_1 + 0x5a);
              pcVar10 = _strerror(iVar12);
              FUN_1000008d2(3,0,&cf__sUSBMuxRecvWithTimeoutfailedforclient_s__d_>_s__d__d__s,
                            "MuxTCPSendOneSegmentOverUSB",uVar9,uVar15 << 8 | uVar15 >> 8,uVar6,
                            uVar2 << 8 | uVar2 >> 8,iVar12,pcVar10);
            }
            FUN_1000041b4(*(undefined8 *)(param_1 + 8),0,param_1);
            FUN_100003084(param_1);
            uVar9 = 2;
          }
          uVar6 = 0x595;
        }
        else if (lVar5 == 0) {
          if (5 < DAT_100021030) {
            uVar6 = FUN_10000302f(param_1);
            FUN_1000008d2(6,0,&cf_clientdisconnected__s__d<_>dev_d___x__d,uVar6,
                          *(ushort *)(param_1 + 0x58) << 8 | *(ushort *)(param_1 + 0x58) >> 8,
                          *(undefined4 *)(*(long *)(param_1 + 8) + 0x188),
                          *(undefined4 *)(*(long *)(param_1 + 8) + 0x18c),
                          *(ushort *)(param_1 + 0x5a) << 8 | *(ushort *)(param_1 + 0x5a) >> 8);
          }
          FUN_1000041b4(*(undefined8 *)(param_1 + 8),0,param_1);
          FUN_100003084(param_1);
          uVar6 = 0x5a1;
        }
        else {
          *(long *)(lVar4 + 0x40) = param_1;
          *(int *)(lVar4 + 0x48) = (int)lVar5 + 0x14;
          *puVar1 = *(undefined4 *)(param_1 + 0x58);
          uVar3 = *(uint *)(param_1 + 0x5c);
          puVar1[1] = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 |
                      uVar3 << 0x18;
          uVar3 = *(uint *)(param_1 + 100);
          puVar1[2] = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 |
                      uVar3 << 0x18;
          *(byte *)(puVar1 + 3) = *(byte *)(puVar1 + 3) & 0xf | 0x50;
          *(undefined1 *)((long)puVar1 + 0xd) = 0x10;
          uVar11 = 0x20000 - *(int *)(param_1 + 0xa0);
          uVar15 = (ushort)(uVar11 >> 8);
          *(ushort *)((long)puVar1 + 0xe) = uVar15 << 8 | uVar15 >> 8;
          iVar12 = (uVar11 & 0xffff00) + uVar3;
          if (0 < iVar12 - *(int *)(param_1 + 0x74)) {
            *(int *)(param_1 + 0x74) = iVar12;
          }
          *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + (int)lVar5;
          *(undefined8 *)(lVar4 + 0x60) = 0;
          *(undefined8 *)(lVar4 + 0x68) = 0;
          *(undefined8 *)(lVar4 + 0x70) = 0;
          *(undefined8 *)(lVar4 + 0x50) = 0;
          *(undefined8 *)(lVar4 + 0x58) = 0;
          if ((*(byte *)(*(long *)(param_1 + 8) + 0x1b4) & 8) != 0) {
            *(undefined1 *)(lVar4 + 0x78) = 1;
            *(undefined8 *)(lVar4 + 8) = 0;
            **(long **)(param_1 + 0xd8) = lVar4;
            *(long *)(param_1 + 0xd8) = lVar4 + 8;
          }
          iVar12 = FUN_100005435(param_1,lVar4);
          if (iVar12 == 0) {
            *(byte *)(param_1 + 0x7c) = *(byte *)(param_1 + 0x7c) & 0xfd;
            return 1;
          }
          FUN_1000041b4(*(undefined8 *)(param_1 + 8),0,param_1);
          if (2 < DAT_100021030) {
            uVar6 = FUN_10000302f(param_1);
            uVar15 = *(ushort *)(param_1 + 0x58);
            uVar7 = FUN_100008d22(*(undefined8 *)(param_1 + 8));
            FUN_1000008d2(3,0,&cf__sMuxInterfaceSend__failed_client_s__d_>_s__d,
                          "MuxTCPSendOneSegmentOverUSB",uVar6,uVar15 << 8 | uVar15 >> 8,uVar7,
                          *(ushort *)(param_1 + 0x5a) << 8 | *(ushort *)(param_1 + 0x5a) >> 8);
          }
          FUN_100003084(param_1);
          uVar6 = 0x5c8;
        }
        FUN_100000b8b("MuxTCPSendOneSegmentOverUSB",uVar6,lVar4);
        return uVar9;
      }
      if (6 < DAT_100021030) {
        uVar9 = FUN_10000302f(param_1);
        uVar15 = *(ushort *)(param_1 + 0x58);
        uVar6 = FUN_100008d22(*(undefined8 *)(param_1 + 8));
        FUN_1000008d2(7,0,&cf__sclient_s__d_>_s__ddelayed_outofbuffers,"MuxTCPSendOneSegmentOverUSB"
                      ,uVar9,uVar15 << 8 | uVar15 >> 8,uVar6,
                      *(ushort *)(param_1 + 0x5a) << 8 | *(ushort *)(param_1 + 0x5a) >> 8);
      }
    }
    uVar9 = 4;
  }
  return uVar9;
}

