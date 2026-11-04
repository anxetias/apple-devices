// rea decompile_all
// name: FUN_100004010
// address: 0x100004010
// body: available
// range: 0x100004010-0x1000041b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100004010(long param_1,ushort *param_2,long param_3,undefined8 param_4)

{
  byte bVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  int iVar10;
  undefined4 local_78;
  undefined4 uStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  long local_60;
  ulong local_58;
  ulong local_50;
  ulong local_48;
  long local_40;
  ulong local_38;
  
  if (param_2 != (ushort *)0x0) {
    local_60 = param_3 - (ulong)((byte)((byte)param_2[6] >> 2) & 0xfffffffc);
    iVar10 = 1;
    if ((*(byte *)((long)param_2 + 0xd) & 2) == 0) {
      iVar10 = (int)local_60;
    }
    if (param_1 == 0) {
      local_38 = 0;
    }
    else {
      local_38 = (ulong)*(uint *)(param_1 + 100);
    }
    uVar5 = *(uint *)(param_2 + 2);
    uVar2 = *(uint *)(param_2 + 4);
    local_68 = param_4;
    local_40 = param_3;
    FUN_10000e18a(&local_78);
    iVar4 = DAT_100022b98;
    lVar3 = CONCAT44(DAT_100022b90._4_4_,(undefined4)DAT_100022b90);
    DAT_100022b90._0_4_ = local_78;
    DAT_100022b90._4_4_ = uStack_74;
    DAT_100022b98 = iStack_70;
    uRam0000000100022b9c = uStack_6c;
    if (6 < DAT_100021030) {
      uVar5 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
      local_58 = (ulong)uVar5;
      local_50 = (ulong)(ushort)(*param_2 << 8 | *param_2 >> 8);
      local_48 = (ulong)(ushort)(param_2[1] << 8 | param_2[1] >> 8);
      bVar1 = *(byte *)((long)param_2 + 0xd);
      pcVar9 = "S";
      if ((bVar1 & 2) == 0) {
        pcVar9 = " ";
      }
      pcVar7 = "A";
      if ((bVar1 & 0x10) == 0) {
        pcVar7 = " ";
      }
      pcVar8 = "R";
      if ((bVar1 & 4) == 0) {
        pcVar8 = " ";
      }
      pcVar6 = "F";
      if ((bVar1 & 1) == 0) {
        pcVar6 = " ";
      }
      FUN_1000008d2(7,0,&
                        cf__s_6lu_4_4x_5d_>__5d_5zd___5zd_s_s_s_sseq___7unext___7uack___7unext___7uwin__u
                    ,local_68,
                    (long)((iStack_70 - iVar4) / 1000) +
                    (CONCAT44(uStack_74,local_78) - lVar3) * 1000,param_2[8] << 8 | param_2[8] >> 8,
                    local_50,local_48,local_60,local_40,pcVar9,pcVar7,pcVar8,pcVar6,local_58,
                    iVar10 + uVar5,
                    uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18,
                    local_38,(ulong)(ushort)(param_2[7] << 8 | param_2[7] >> 8) << 8);
    }
  }
  return;
}

