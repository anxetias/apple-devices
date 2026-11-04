// rea decompile_all
// name: FUN_10000a426
// address: 0x10000a426
// body: available
// range: 0x10000a426-0x10000a61b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10000a617 to 0x100013425 ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10000a426(long param_1)

{
  ushort uVar1;
  int iVar2;
  undefined4 *puVar3;
  cfstringStruct *pcVar4;
  undefined8 uVar5;
  byte *pbVar6;
  uint uVar7;
  ulong uVar8;
  undefined1 auVar9 [16];
  undefined4 local_60;
  byte local_5c;
  byte local_58 [6];
  undefined2 uStack_52;
  undefined8 uStack_50;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10001c070;
  uStack_50 = &local_60;
  local_5c = 0;
  local_60 = 0;
  local_58[0] = 0x80;
  local_58[1] = 6;
  local_58[2] = 0;
  local_58[3] = 0xf;
  local_58[4] = 0;
  local_58[5] = 0;
  uStack_52 = 5;
  iVar2 = (**(code **)(**(long **)(param_1 + 0x158) + 0xc0))(*(long **)(param_1 + 0x158),0);
  if (iVar2 == 0) {
    uVar1 = local_60._2_2_;
    uVar8 = (ulong)local_60._2_2_;
    puVar3 = _malloc(uVar8);
    if (puVar3 == (undefined4 *)0x0) {
      if (DAT_100021030 < 7) goto LAB_10000a5d9;
      pcVar4 = &cf__s__d_outofmemory;
      puVar3 = (undefined4 *)0x0;
      uVar5 = 0x377;
    }
    else {
      local_58[0] = 0x80;
      local_58[1] = 6;
      local_58[2] = 0;
      local_58[3] = 0xf;
      local_58[4] = 0;
      local_58[5] = 0;
      uStack_52 = uVar1;
      uStack_50 = puVar3;
      iVar2 = (**(code **)(**(long **)(param_1 + 0x158) + 0xc0))(*(long **)(param_1 + 0x158),0);
      if (iVar2 == 0) {
        _uuid_parse("5EDBC6C9-1442-4917-86C0-9A76C9DFF098",local_58);
        uVar7 = (uint)local_5c;
        if (local_5c != 0) {
          pbVar6 = (byte *)((long)puVar3 + 5);
          uVar5 = *(undefined8 *)PTR__kCFAllocatorMalloc_10001c018;
          do {
            if ((byte *)(uVar8 + (long)puVar3) < pbVar6 + *pbVar6) break;
            auVar9[0] = -(pbVar6[4] == local_58[0]);
            auVar9[1] = -(pbVar6[5] == local_58[1]);
            auVar9[2] = -(pbVar6[6] == local_58[2]);
            auVar9[3] = -(pbVar6[7] == local_58[3]);
            auVar9[4] = -(pbVar6[8] == local_58[4]);
            auVar9[5] = -(pbVar6[9] == local_58[5]);
            auVar9[6] = -(pbVar6[10] == (byte)uStack_52);
            auVar9[7] = -(pbVar6[0xb] == uStack_52._1_1_);
            auVar9[8] = -(pbVar6[0xc] == (byte)uStack_50);
            auVar9[9] = -(pbVar6[0xd] == uStack_50._1_1_);
            auVar9[10] = -(pbVar6[0xe] == uStack_50._2_1_);
            auVar9[0xb] = -(pbVar6[0xf] == uStack_50._3_1_);
            auVar9[0xc] = -(pbVar6[0x10] == uStack_50._4_1_);
            auVar9[0xd] = -(pbVar6[0x11] == uStack_50._5_1_);
            auVar9[0xe] = -(pbVar6[0x12] == uStack_50._6_1_);
            auVar9[0xf] = -(pbVar6[0x13] == uStack_50._7_1_);
            if ((ushort)((ushort)(SUB161(auVar9 >> 7,0) & 1) |
                         (ushort)(SUB161(auVar9 >> 0xf,0) & 1) << 1 |
                         (ushort)(SUB161(auVar9 >> 0x17,0) & 1) << 2 |
                         (ushort)(SUB161(auVar9 >> 0x1f,0) & 1) << 3 |
                         (ushort)(SUB161(auVar9 >> 0x27,0) & 1) << 4 |
                         (ushort)(SUB161(auVar9 >> 0x2f,0) & 1) << 5 |
                         (ushort)(SUB161(auVar9 >> 0x37,0) & 1) << 6 |
                         (ushort)(SUB161(auVar9 >> 0x3f,0) & 1) << 7 |
                         (ushort)(SUB161(auVar9 >> 0x47,0) & 1) << 8 |
                         (ushort)(SUB161(auVar9 >> 0x4f,0) & 1) << 9 |
                         (ushort)(SUB161(auVar9 >> 0x57,0) & 1) << 10 |
                         (ushort)(SUB161(auVar9 >> 0x5f,0) & 1) << 0xb |
                         (ushort)(SUB161(auVar9 >> 0x67,0) & 1) << 0xc |
                         (ushort)(SUB161(auVar9 >> 0x6f,0) & 1) << 0xd |
                         (ushort)(SUB161(auVar9 >> 0x77,0) & 1) << 0xe |
                        (ushort)(auVar9[0xf] >> 7) << 0xf) == 0xffff) {
              FUN_100010ced((ulong)*pbVar6,pbVar6,uVar5,param_1 + 0x198);
            }
            pbVar6 = pbVar6 + *pbVar6;
            uVar7 = uVar7 - 1;
          } while (uVar7 != 0);
        }
        goto LAB_10000a558;
      }
      if (DAT_100021030 < 7) goto LAB_10000a558;
      pcVar4 = &cf__s__d_failedtoreadUSBBOSdescriptor;
      uVar5 = 0x37e;
    }
  }
  else {
    if (DAT_100021030 < 7) {
LAB_10000a5d9:
      puVar3 = (undefined4 *)0x0;
      goto LAB_10000a558;
    }
    pcVar4 = &cf__s__d_failedtoreadUSBBOSdescriptor;
    puVar3 = (undefined4 *)0x0;
    uVar5 = 0x371;
  }
  FUN_1000008d2(7,0,pcVar4,"GetDeviceMetadata",uVar5);
LAB_10000a558:
  _free(puVar3);
  if (*(long *)PTR____stack_chk_guard_10001c070 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

