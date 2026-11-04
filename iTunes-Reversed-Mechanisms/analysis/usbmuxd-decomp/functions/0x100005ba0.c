// rea decompile_all
// name: FUN_100005ba0
// address: 0x100005ba0
// body: available
// range: 0x100005ba0-0x100005cbf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_100005ba0(long param_1,uint param_2)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  ushort uVar4;
  int iVar5;
  cfstringStruct *pcVar6;
  long lVar7;
  undefined8 uVar8;
  
  lVar7 = *(long *)(param_1 + 0xd0);
  do {
    if (lVar7 == 0) {
      iVar5 = -0x1ffffd10;
      if (2 < DAT_100021030) {
        uVar3 = FUN_10000302f(param_1);
        pcVar6 = &cf__s_s_Remoterequestedpacket_unotfound;
LAB_100005bf4:
        uVar8 = 3;
LAB_100005c00:
        FUN_1000008d2(uVar8,0,pcVar6,"ResendPacket",uVar3,param_2);
      }
      return iVar5;
    }
    lVar2 = *(long *)(lVar7 + 0x30);
    if ((lVar2 != 0) &&
       (uVar1 = *(uint *)(lVar2 + 4),
       (uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18) == param_2)
       ) {
      if (*(char *)(lVar7 + 0x7a) == '\x01') {
        if (DAT_100021030 < 7) {
          return 0;
        }
        uVar3 = FUN_10000302f(param_1);
        pcVar6 = &cf__s_s_Packet_ustillintransit_cancelresend;
        iVar5 = 0;
        uVar8 = 7;
        goto LAB_100005c00;
      }
      iVar5 = (int)lVar2 - (int)*(long *)(lVar7 + 0x20);
      *(long *)(lVar7 + 0x20) = *(long *)(lVar7 + 0x20) + (long)iVar5;
      *(int *)(lVar7 + 0x48) = *(int *)(lVar7 + 0x48) - iVar5;
      uVar1 = *(uint *)(param_1 + 100);
      *(uint *)(lVar2 + 8) =
           uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
      uVar4 = (ushort)((uint)(0x20000 - *(int *)(param_1 + 0xa0)) >> 8);
      *(ushort *)(lVar2 + 0xe) = uVar4 << 8 | uVar4 >> 8;
      iVar5 = FUN_100005435(param_1);
      if (iVar5 == 0) {
        return 0;
      }
      if (DAT_100021030 < 3) {
        return iVar5;
      }
      uVar3 = FUN_10000302f(param_1);
      pcVar6 = &cf__s_s_Failedtoresendpacket_u;
      goto LAB_100005bf4;
    }
    lVar7 = *(long *)(lVar7 + 8);
  } while( true );
}

