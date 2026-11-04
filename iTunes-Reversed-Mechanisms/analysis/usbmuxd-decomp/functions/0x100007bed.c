// rea decompile_all
// name: FUN_100007bed
// address: 0x100007bed
// body: available
// range: 0x100007bed-0x100007d8c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_100007bed(long param_1,ushort param_2)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  short sVar8;
  uint uVar9;
  long *plVar10;
  ushort uVar11;
  
  FUN_10000878c(*(undefined8 *)(param_1 + 8));
  plVar3 = (long *)(*(long *)(param_1 + 8) + 8);
  do {
    sVar8 = DAT_100021104 + 2;
    DAT_100021104 = DAT_100021104 + 1;
    plVar10 = plVar3;
    if (DAT_100021104 == 0) {
      DAT_100021104 = sVar8;
    }
    do {
      plVar10 = (long *)*plVar10;
      if (plVar10 == (long *)0x0) {
        *(short *)(param_1 + 0x58) = DAT_100021104;
        *(ushort *)(param_1 + 0x5a) = param_2;
        *(undefined8 *)(param_1 + 0x5c) = 0;
        *(undefined8 *)(param_1 + 100) = 0;
        *(undefined4 *)(param_1 + 0x6c) = 0;
        lVar4 = FUN_100000aa4("MuxTCPInitiateConnect",0x323,1);
        if (lVar4 == 0) {
          iVar2 = -0x1ffffd43;
          if (3 < DAT_100021030) {
            uVar5 = FUN_10000302f(param_1);
            uVar6 = FUN_100008d22(*(undefined8 *)(param_1 + 8));
            FUN_1000008d2(4,0,&cf__sclient_sto_s__d_MuxNextFreeBufferreturnedNULL,
                          "MuxTCPInitiateConnect",uVar5,uVar6,param_2 << 8 | param_2 >> 8);
          }
        }
        else {
          lVar1 = *(long *)(lVar4 + 0x28);
          uVar7 = (ulong)*(uint *)(*(long *)(param_1 + 8) + 0x1a8);
          *(ulong *)(lVar4 + 0x20) = lVar1 + uVar7;
          *(ulong *)(lVar4 + 0x30) = lVar1 + uVar7;
          uVar9 = *(uint *)(lVar1 + 4 + uVar7);
          *(uint *)(lVar4 + 0x38) =
               uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 << 0x18;
          *(undefined4 *)(lVar4 + 0x48) = 0x14;
          *(long *)(lVar4 + 0x40) = param_1;
          *(undefined4 *)(lVar1 + uVar7) = *(undefined4 *)(param_1 + 0x58);
          uVar9 = *(uint *)(param_1 + 0x5c);
          *(uint *)(lVar1 + 4 + uVar7) =
               uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 << 0x18;
          *(undefined4 *)(lVar1 + 8 + uVar7) = 0;
          *(byte *)(lVar1 + 0xc + uVar7) = *(byte *)(lVar1 + 0xc + uVar7) & 0xf | 0x50;
          *(undefined1 *)(lVar1 + 0xd + uVar7) = 2;
          uVar9 = 0x20000 - *(int *)(param_1 + 0xa0);
          uVar11 = (ushort)(uVar9 >> 8);
          *(ushort *)(lVar1 + 0xe + uVar7) = uVar11 << 8 | uVar11 >> 8;
          *(uint *)(param_1 + 0x74) = uVar9 & 0xffff00;
          *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 1;
          iVar2 = FUN_100005435(param_1,lVar4);
          if (iVar2 == 0) {
            iVar2 = 0;
          }
          else {
            *(undefined4 *)(param_1 + 0x54) = 0;
            FUN_100000b8b("MuxTCPInitiateConnect",0x343,lVar4);
          }
        }
        return iVar2;
      }
    } while (*(short *)(plVar10 + 0xb) != DAT_100021104);
  } while( true );
}

