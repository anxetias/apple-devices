// rea decompile_all
// name: _StoreCommands
// address: 0x1e164e
// body: available
// range: 0x1e164e-0x1e1aec inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1e1ae8 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _StoreCommands(long param_1,byte *param_2,long param_3,long param_4,long param_5,ulong *param_6
                   ,long param_7)

{
  undefined1 uVar1;
  byte bVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  int local_1208;
  undefined8 local_1204;
  int local_1108 [20];
  int local_10b8;
  undefined8 local_1008;
  undefined8 uStack_1000;
  undefined8 local_ff8;
  undefined8 uStack_ff0;
  undefined4 local_fe8;
  undefined4 uStack_fe4;
  undefined4 uStack_fe0;
  undefined4 uStack_fdc;
  undefined8 local_fd8;
  undefined8 uStack_fd0;
  undefined4 local_fc8;
  undefined4 uStack_fc4;
  undefined4 uStack_fc0;
  undefined4 uStack_fbc;
  undefined4 local_fb8;
  undefined4 uStack_fb4;
  undefined4 uStack_fb0;
  undefined4 uStack_fac;
  undefined8 local_fa8;
  undefined8 uStack_fa0;
  undefined8 local_f98;
  undefined8 uStack_f90;
  undefined8 local_f88;
  undefined8 uStack_f80;
  undefined8 local_f78;
  undefined8 uStack_f70;
  undefined8 local_f68;
  undefined8 uStack_f60;
  undefined8 local_f58;
  undefined8 uStack_f50;
  undefined8 local_f48;
  undefined8 uStack_f40;
  undefined8 local_f38;
  undefined8 uStack_f30;
  undefined8 local_f28;
  undefined8 uStack_f20;
  undefined8 local_f18;
  undefined8 uStack_f10;
  undefined8 local_f08;
  undefined8 uStack_f00;
  undefined8 local_ef8;
  undefined8 uStack_ef0;
  undefined8 local_ee8;
  undefined8 uStack_ee0;
  undefined8 local_ed8;
  undefined8 uStack_ed0;
  undefined8 local_ec8;
  undefined8 uStack_ec0;
  undefined8 local_eb8;
  undefined8 uStack_eb0;
  undefined8 local_ea8;
  undefined8 uStack_ea0;
  undefined8 local_e98;
  undefined8 uStack_e90;
  int local_e88 [256];
  ushort local_a88 [256];
  byte local_888 [256];
  undefined8 local_788;
  undefined8 uStack_780;
  undefined4 local_778;
  undefined4 uStack_774;
  undefined4 uStack_770;
  undefined4 uStack_76c;
  undefined4 local_768;
  undefined4 uStack_764;
  undefined4 uStack_760;
  undefined4 uStack_75c;
  undefined8 local_758;
  undefined8 uStack_750;
  undefined8 local_748;
  undefined8 uStack_740;
  undefined8 local_738;
  undefined8 uStack_730;
  undefined8 local_728;
  undefined8 uStack_720;
  undefined4 local_718;
  undefined4 uStack_714;
  undefined4 uStack_710;
  undefined4 uStack_70c;
  undefined8 local_708;
  undefined8 uStack_700;
  undefined8 local_6f8;
  undefined8 uStack_6f0;
  undefined8 local_6e8;
  undefined8 uStack_6e0;
  undefined8 local_6d8;
  undefined8 uStack_6d0;
  undefined8 local_6c8 [8];
  undefined8 local_688 [8];
  undefined8 local_648 [8];
  undefined1 auStack_608 [64];
  undefined1 auStack_5c8 [64];
  undefined8 local_588;
  undefined1 auStack_548 [64];
  undefined1 auStack_508 [192];
  undefined1 local_448 [1040];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  ___bzero(local_e88,0x400);
  local_e98 = 0;
  uStack_e90 = 0;
  local_ea8 = 0;
  uStack_ea0 = 0;
  local_eb8 = 0;
  uStack_eb0 = 0;
  local_ec8 = 0;
  uStack_ec0 = 0;
  local_ed8 = 0;
  uStack_ed0 = 0;
  local_ee8 = 0;
  uStack_ee0 = 0;
  local_ef8 = 0;
  uStack_ef0 = 0;
  local_f08 = 0;
  uStack_f00 = 0;
  local_f18 = 0;
  uStack_f10 = 0;
  local_f28 = 0;
  uStack_f20 = 0;
  local_f38 = 0;
  uStack_f30 = 0;
  local_f48 = 0;
  uStack_f40 = 0;
  local_f58 = 0;
  uStack_f50 = 0;
  local_f68 = 0;
  uStack_f60 = 0;
  local_f78 = 0;
  uStack_f70 = 0;
  local_f88 = 0;
  uStack_f80 = 0;
  ___bzero(&local_1208,0x200);
  if (param_3 != 0) {
    lVar4 = 0;
    do {
      local_e88[param_2[lVar4]] = local_e88[param_2[lVar4]] + 1;
      lVar4 = lVar4 + 1;
    } while (param_3 != lVar4);
  }
  _BrotliBuildAndStoreHuffmanTreeFast
            (param_1,local_e88,param_3,8,local_888,local_a88,param_6,param_7);
  if (*(int *)(param_1 + 0x18) == 0) {
    if (param_5 == 0) {
      local_1204 = 0x100000001;
      local_10b8 = 1;
      local_1108[0] = 1;
    }
    else {
      lVar4 = 0;
      do {
        (&local_1208)[*(byte *)(param_4 + lVar4 * 4)] =
             (&local_1208)[*(byte *)(param_4 + lVar4 * 4)] + 1;
        lVar4 = lVar4 + 1;
      } while (param_5 != lVar4);
      local_1204 = CONCAT44((int)((ulong)local_1204 >> 0x20) + 1,(int)local_1204 + 1);
      local_1108[0] = local_1108[0] + 1;
      local_10b8 = local_10b8 + 1;
    }
    ___bzero(local_6c8,0x280);
    _BrotliCreateHuffmanTree(&local_1208,0x40,0xf,local_448,&local_f08);
    _BrotliCreateHuffmanTree(local_1108,0x40,0xe,local_448);
    local_6f8 = uStack_ee0;
    local_708 = uStack_ef0;
    uStack_700 = local_ee8;
    uStack_6f0 = local_f08;
    local_6e8 = local_ed8;
    uStack_6e0 = uStack_f00;
    local_6d8 = uStack_ed0;
    uStack_6d0 = local_ef8;
    _BrotliConvertBitDepthsToSymbols(&local_708,0x40,&local_788);
    local_1008 = local_758;
    uStack_1000 = uStack_750;
    local_ff8 = local_738;
    uStack_ff0 = uStack_730;
    local_fe8 = local_718;
    uStack_fe4 = uStack_714;
    uStack_fe0 = uStack_710;
    uStack_fdc = uStack_70c;
    local_fd8 = local_788;
    uStack_fd0 = uStack_780;
    local_fc8 = local_778;
    uStack_fc4 = uStack_774;
    uStack_fc0 = uStack_770;
    uStack_fbc = uStack_76c;
    local_fb8 = local_768;
    uStack_fb4 = uStack_764;
    uStack_fb0 = uStack_760;
    uStack_fac = uStack_75c;
    local_fa8 = local_748;
    uStack_fa0 = uStack_740;
    local_f98 = local_728;
    uStack_f90 = uStack_720;
    _BrotliConvertBitDepthsToSymbols(&local_ec8,0x40,&local_f88);
    uStack_700 = 0;
    local_6d8 = 0;
    uStack_6d0 = 0;
    local_6e8 = 0;
    uStack_6e0 = 0;
    local_6f8 = 0;
    uStack_6f0 = 0;
    local_708 = uStack_ef0;
    local_6c8[0] = local_ee8;
    local_688[0] = uStack_ee0;
    local_648[0] = local_ed8;
    local_588 = uStack_ed0;
    lVar4 = -8;
    do {
      uVar1 = *(undefined1 *)((long)&local_ef8 + lVar4);
      *(undefined1 *)(local_648 + lVar4) = *(undefined1 *)((long)&uStack_f00 + lVar4);
      auStack_5c8[lVar4 * 8] = uVar1;
      auStack_508[lVar4 * 8] = *(undefined1 *)((long)&uStack_ef0 + lVar4);
      lVar4 = lVar4 + 1;
    } while (lVar4 != 0);
    _BrotliStoreHuffmanTree(&local_708,0x2c0,local_448,param_6,param_7);
    _BrotliStoreHuffmanTree(&local_ec8,0x40,local_448,param_6,param_7);
    if (param_5 != 0) {
      uVar5 = *param_6;
      lVar4 = 0;
      do {
        uVar6 = *(uint *)(param_4 + lVar4 * 4);
        uVar8 = uVar6 & 0xff;
        uVar6 = uVar6 >> 8;
        uVar9 = *(byte *)((long)&local_f08 + (ulong)uVar8) + uVar5;
        *(ulong *)(param_7 + (uVar5 >> 3)) =
             (ulong)*(ushort *)((long)&local_1008 + (ulong)uVar8 * 2) << ((byte)uVar5 & 7) |
             (ulong)*(byte *)(param_7 + (uVar5 >> 3));
        *param_6 = uVar9;
        uVar3 = *(uint *)(&_StoreCommands_kNumExtraBits + (ulong)uVar8 * 4);
        *(ulong *)(param_7 + (uVar9 >> 3)) =
             (ulong)uVar6 << ((byte)uVar9 & 7) | (ulong)*(byte *)(param_7 + (uVar9 >> 3));
        uVar5 = uVar3 + uVar9;
        *param_6 = uVar5;
        if (uVar8 < 0x18) {
          for (iVar7 = uVar6 + *(int *)(&_StoreCommands_kInsertOffset + (ulong)uVar8 * 4);
              iVar7 != 0; iVar7 = iVar7 + -1) {
            bVar2 = local_888[*param_2];
            *(ulong *)(param_7 + (uVar5 >> 3)) =
                 (ulong)local_a88[*param_2] << ((byte)uVar5 & 7) |
                 (ulong)*(byte *)(param_7 + (uVar5 >> 3));
            uVar5 = uVar5 + bVar2;
            *param_6 = uVar5;
            param_2 = param_2 + 1;
          }
        }
        lVar4 = lVar4 + 1;
      } while (lVar4 != param_5);
    }
  }
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

