// name: FUN_1003bdba9
// address: 1003bdba9

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003bdba9(long param_1,undefined8 param_2,int param_3,int param_4,int param_5)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  long lVar3;
  uint uVar4;
  char cVar5;
  undefined8 uVar6;
  ulong uVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar10 = (long)param_5 * 0x900;
  if (*(long *)(param_1 + 0x4f98) != param_1 + 0x4698 &&
      *(long *)(param_1 + 0x4f98) != param_1 + lVar10 + 0x7164) {
    uVar6 = FUN_1001cc310();
    cVar5 = _os_log_type_enabled(uVar6,0x10);
    if (cVar5 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = 
      "(frame->reorderedPtr == &frame->dequantized[channel]) || (frame->reorderedPtr == &frame->reordered)"
      ;
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  uVar4 = _DAT_100700430;
  if (param_3 <= param_4) {
    uVar7 = (ulong)param_3;
    iVar8 = (param_4 - param_3) + 1;
    lVar3 = (long)param_5 * 0x900;
    lVar9 = param_1 + uVar7 * 0x48 + 0x4fa8;
    do {
      *(undefined4 *)(lVar9 + 0x1200) = *(undefined4 *)(lVar9 + lVar3);
      uVar13 = *(uint *)(lVar9 + 4 + lVar3);
      if ((uVar7 & 1) == 0) {
        *(uint *)(lVar9 + 0x1204) = uVar13;
        puVar1 = (undefined8 *)(lVar9 + 8 + lVar3);
        uVar6 = puVar1[1];
        *(undefined8 *)(lVar9 + 0x1208) = *puVar1;
        *(undefined8 *)(lVar9 + 0x1210) = uVar6;
        puVar1 = (undefined8 *)(lVar9 + 0x18 + lVar3);
        uVar6 = puVar1[1];
        *(undefined8 *)(lVar9 + 0x1218) = *puVar1;
        *(undefined8 *)(lVar9 + 0x1220) = uVar6;
        *(undefined8 *)(lVar9 + 0x1228) = *(undefined8 *)(lVar9 + 0x28 + lVar3);
        uVar13 = *(uint *)(lVar9 + 0x34 + lVar3);
        uVar11 = *(uint *)(lVar9 + 0x3c + lVar3);
        uVar12 = *(uint *)(lVar9 + 0x44 + lVar3);
      }
      else {
        *(uint *)(lVar9 + 0x1204) = uVar13 ^ uVar4;
        *(undefined4 *)(lVar9 + 0x1208) = *(undefined4 *)(lVar9 + 8 + lVar3);
        *(uint *)(lVar9 + 0x120c) = *(uint *)(lVar9 + 0xc + lVar3) ^ uVar4;
        *(undefined4 *)(lVar9 + 0x1210) = *(undefined4 *)(lVar9 + 0x10 + lVar3);
        *(uint *)(lVar9 + 0x1214) = *(uint *)(lVar9 + 0x14 + lVar3) ^ uVar4;
        *(undefined4 *)(lVar9 + 0x1218) = *(undefined4 *)(lVar9 + 0x18 + lVar3);
        *(uint *)(lVar9 + 0x121c) = *(uint *)(lVar9 + 0x1c + lVar3) ^ uVar4;
        *(undefined4 *)(lVar9 + 0x1220) = *(undefined4 *)(lVar9 + 0x20 + lVar3);
        *(uint *)(lVar9 + 0x1224) = *(uint *)(lVar9 + 0x24 + lVar3) ^ uVar4;
        *(undefined4 *)(lVar9 + 0x1228) = *(undefined4 *)(lVar9 + 0x28 + lVar3);
        *(uint *)(lVar9 + 0x122c) = *(uint *)(lVar9 + 0x2c + lVar3) ^ uVar4;
        uVar13 = *(uint *)(lVar9 + 0x34 + lVar3) ^ uVar4;
        uVar11 = *(uint *)(lVar9 + 0x3c + lVar3) ^ uVar4;
        uVar12 = *(uint *)(lVar9 + 0x44 + lVar3) ^ uVar4;
      }
      uVar2 = *(undefined4 *)(lVar9 + 0x38 + lVar3);
      *(undefined4 *)(lVar9 + 0x1230) = *(undefined4 *)(lVar9 + 0x30 + lVar3);
      *(uint *)(lVar9 + 0x1234) = uVar13;
      *(undefined4 *)(lVar9 + 0x1238) = uVar2;
      uVar2 = *(undefined4 *)(lVar9 + 0x40 + lVar3);
      *(uint *)(lVar9 + 0x123c) = uVar11;
      *(undefined4 *)(lVar9 + 0x1240) = uVar2;
      *(uint *)(lVar9 + 0x1244) = uVar12;
      uVar7 = uVar7 + 1;
      lVar9 = lVar9 + 0x48;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
    FUN_1001c62d9(param_1 + 0x4fa8 + lVar10 + (long)(param_3 * 0x12) * 4,
                  (long)((param_4 - param_3) + 1) * 0x48);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

