// name: FUN_1003bcd27
// address: 1003bcd27

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003bcd27(long param_1,undefined8 param_2,int param_3,int param_4,int param_5)

{
  undefined8 *puVar1;
  uint uVar2;
  char cVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined4 *puVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar9 = (long)param_5 * 0x900;
  if (*(long *)(param_1 + 0x4f98) != param_1 + 0x4698 &&
      *(long *)(param_1 + 0x4f98) != param_1 + lVar9 + 0x7164) {
    uVar4 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar4,0x10);
    if (cVar3 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = 
      "(frame->reorderedPtr == &frame->dequantized[channel]) || (frame->reorderedPtr == &frame->reordered)"
      ;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  uVar2 = _DAT_100700430;
  if (param_3 <= param_4) {
    uVar5 = (ulong)param_3;
    iVar8 = (param_4 - param_3) + 1;
    lVar6 = param_1 + uVar5 * 0x48;
    lVar10 = lVar9 + 0x4fec;
    do {
      *(undefined4 *)(lVar6 + 25000) = *(undefined4 *)(lVar6 + -0x44 + lVar10);
      *(undefined4 *)(lVar6 + -0x44 + lVar10) = 0;
      uVar11 = *(uint *)(lVar6 + -0x40 + lVar10);
      if ((uVar5 & 1) == 0) {
        *(uint *)(lVar6 + 0x61ac) = uVar11;
        puVar7 = (undefined4 *)(lVar6 + lVar10);
        puVar1 = (undefined8 *)(lVar6 + -0x3c + lVar10);
        uVar4 = puVar1[1];
        *(undefined8 *)(lVar6 + 0x61b0) = *puVar1;
        *(undefined8 *)(lVar6 + 0x61b8) = uVar4;
        puVar1 = (undefined8 *)(lVar6 + -0x40 + lVar10);
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1 = (undefined8 *)(lVar6 + -0x2c + lVar10);
        uVar4 = puVar1[1];
        *(undefined8 *)(lVar6 + 0x61c0) = *puVar1;
        *(undefined8 *)(lVar6 + 0x61c8) = uVar4;
        puVar1 = (undefined8 *)(lVar6 + -0x30 + lVar10);
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1 = (undefined8 *)(lVar6 + -0x1c + lVar10);
        uVar4 = puVar1[1];
        *(undefined8 *)(lVar6 + 0x61d0) = *puVar1;
        *(undefined8 *)(lVar6 + 0x61d8) = uVar4;
        puVar1 = (undefined8 *)(lVar6 + -0x20 + lVar10);
        *puVar1 = 0;
        puVar1[1] = 0;
        *(undefined8 *)(lVar6 + 0x61e0) = *(undefined8 *)(lVar6 + -0xc + lVar10);
        *(undefined4 *)(lVar6 + 0x61e8) = *(undefined4 *)(lVar6 + -4 + lVar10);
        puVar1 = (undefined8 *)(lVar6 + -0x10 + lVar10);
        *puVar1 = 0;
        puVar1[1] = 0;
        uVar11 = *(uint *)(lVar6 + lVar10);
      }
      else {
        *(uint *)(lVar6 + 0x61ac) = uVar11 ^ uVar2;
        *(undefined4 *)(lVar6 + 0x61b0) = *(undefined4 *)(lVar6 + -0x3c + lVar10);
        *(uint *)(lVar6 + 0x61b4) = *(uint *)(lVar6 + -0x38 + lVar10) ^ uVar2;
        *(undefined4 *)(lVar6 + 0x61b8) = *(undefined4 *)(lVar6 + -0x34 + lVar10);
        puVar1 = (undefined8 *)(lVar6 + -0x40 + lVar10);
        *puVar1 = 0;
        puVar1[1] = 0;
        *(uint *)(lVar6 + 0x61bc) = *(uint *)(lVar6 + -0x30 + lVar10) ^ uVar2;
        *(undefined4 *)(lVar6 + 0x61c0) = *(undefined4 *)(lVar6 + -0x2c + lVar10);
        *(uint *)(lVar6 + 0x61c4) = *(uint *)(lVar6 + -0x28 + lVar10) ^ uVar2;
        *(undefined4 *)(lVar6 + 0x61c8) = *(undefined4 *)(lVar6 + -0x24 + lVar10);
        puVar1 = (undefined8 *)(lVar6 + -0x30 + lVar10);
        *puVar1 = 0;
        puVar1[1] = 0;
        *(uint *)(lVar6 + 0x61cc) = *(uint *)(lVar6 + -0x20 + lVar10) ^ uVar2;
        *(undefined4 *)(lVar6 + 0x61d0) = *(undefined4 *)(lVar6 + -0x1c + lVar10);
        *(uint *)(lVar6 + 0x61d4) = *(uint *)(lVar6 + -0x18 + lVar10) ^ uVar2;
        *(undefined4 *)(lVar6 + 0x61d8) = *(undefined4 *)(lVar6 + -0x14 + lVar10);
        puVar1 = (undefined8 *)(lVar6 + -0x20 + lVar10);
        *puVar1 = 0;
        puVar1[1] = 0;
        *(uint *)(lVar6 + 0x61dc) = *(uint *)(lVar6 + -0x10 + lVar10) ^ uVar2;
        *(undefined4 *)(lVar6 + 0x61e0) = *(undefined4 *)(lVar6 + -0xc + lVar10);
        *(uint *)(lVar6 + 0x61e4) = *(uint *)(lVar6 + -8 + lVar10) ^ uVar2;
        *(undefined4 *)(lVar6 + 0x61e8) = *(undefined4 *)(lVar6 + -4 + lVar10);
        puVar7 = (undefined4 *)(param_1 + lVar9 + uVar5 * 0x48 + 0x4fec);
        puVar1 = (undefined8 *)(lVar6 + -0x10 + lVar10);
        *puVar1 = 0;
        puVar1[1] = 0;
        uVar11 = *(uint *)(lVar6 + lVar10) ^ uVar2;
      }
      *(uint *)(lVar6 + 0x61ec) = uVar11;
      *puVar7 = 0;
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 0x48;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

