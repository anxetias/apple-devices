// rea decompile_all
// name: FUN_10000b11a
// address: 0x10000b11a
// body: available
// range: 0x10000b11a-0x10000b3e4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10000b262 to 0x10000368f FUN_10000368f (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10000b302 to 0x100000b8b FUN_100000b8b (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10000b31e to 0x10000a81e FUN_10000a81e (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10000b11a(long param_1,long *param_2,uint param_3)

{
  byte *pbVar1;
  byte bVar2;
  ushort uVar3;
  uint *puVar4;
  long lVar5;
  ushort uVar6;
  undefined8 uVar7;
  ushort uVar8;
  uint uVar9;
  char *pcVar10;
  uint uVar11;
  int iVar12;
  long *plVar13;
  undefined8 in_stack_ffffffffffffffb8;
  undefined4 uVar14;
  
  uVar14 = (undefined4)((ulong)in_stack_ffffffffffffffb8 >> 0x20);
  if (*(uint *)(param_2 + 9) < 0x10) {
    if (3 < DAT_100021030) {
      uVar7 = FUN_100008d22(param_1);
      FUN_1000008d2(4,0,&cf__sdroppingruntfrom_s,"MuxInterfacev2Receive",uVar7);
    }
    pcVar10 = "MuxInterfacev2Receive";
    uVar7 = 0x4a4;
  }
  else {
    puVar4 = (uint *)param_2[4];
    uVar11 = puVar4[1];
    if ((uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 << 0x18) ==
        param_3) {
      if (*puVar4 == 0) {
        FUN_10000a81e(param_1,param_2,param_3);
        return;
      }
      uVar8 = (ushort)puVar4[3];
      uVar6 = uVar8 << 8 | uVar8 >> 8;
      uVar3 = *(ushort *)(param_1 + 0x1a4);
      if (uVar6 != uVar3) {
        if ((short)(uVar6 - uVar3) < 0) {
          if (3 < DAT_100021030) {
            FUN_1000008d2(4,0,&cf_Error_detectedduplicatepacket_Expected_dreceived_d,uVar3,uVar6);
          }
          pcVar10 = "MuxInterfacev2Receive";
          uVar7 = 0x4d4;
          goto LAB_10000b2f1;
        }
        if (3 < DAT_100021030) {
          uVar7 = FUN_100008d22(param_1);
          FUN_1000008d2(4,0,&cf__sexpectedsequence_dgot_dfrom_s,"MuxInterfacev2Receive",uVar3,uVar6,
                        uVar7);
          uVar8 = (ushort)puVar4[3];
        }
        uVar6 = uVar8 << 8 | uVar8 >> 8;
      }
      *(ushort *)(param_1 + 0x1a4) = uVar6 + 1;
      lVar5 = param_2[4];
      pbVar1 = (byte *)(lVar5 + 0x10);
      param_2[4] = (long)pbVar1;
      uVar9 = (int)param_2[9] - 0x10;
      *(uint *)(param_2 + 9) = uVar9;
      uVar11 = *puVar4;
      uVar11 = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 << 0x18;
      if (uVar11 == 1) {
        pbVar1[uVar9] = 0;
        bVar2 = *pbVar1;
        if ((int)(uint)bVar2 <= DAT_100021030) {
          uVar7 = FUN_100008d22(param_1);
          FUN_1000008d2(bVar2,0,&cf_Logfrom_s__s,uVar7,lVar5 + 0x11);
        }
        pcVar10 = "MuxLogInput";
        uVar7 = 0x5bc;
      }
      else {
        if (uVar11 == 6) {
          FUN_10000368f(param_1,param_2,param_3 - 0x10);
          return;
        }
        if (6 < DAT_100021030) {
          uVar7 = FUN_100008d22(param_1);
          FUN_1000008d2(7,0,&cf__sunexpectedprotocol_dfrom_s,"MuxInterfacev2Receive",uVar11,uVar7);
        }
        pcVar10 = "MuxInterfacev2Receive";
        uVar7 = 0x52b;
      }
    }
    else {
      if (2 < DAT_100021030) {
        uVar7 = FUN_100008d22(param_1);
        uVar11 = puVar4[1];
        FUN_1000008d2(3,0,&cf__sDroppingpacketfrom_s_Received_d_expected_dbytes,
                      "MuxInterfacev2Receive",uVar7,param_3,
                      CONCAT44(uVar14,uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 |
                                      (uVar11 & 0xff00) << 8 | uVar11 << 0x18));
      }
      FUN_100008d87(param_1,*(undefined1 *)(param_1 + 0x178));
      if ((DAT_10002128c._3_1_ & 0x40) != 0) {
        iVar12 = 0;
        plVar13 = param_2;
        do {
          FUN_100005174(plVar13[4],(int)plVar13[9],iVar12);
          iVar12 = iVar12 + (int)plVar13[9];
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
      pcVar10 = "MuxInterfacev2Receive";
      uVar7 = 0x4be;
    }
  }
LAB_10000b2f1:
  FUN_100000b8b(pcVar10,uVar7,param_2);
  return;
}

