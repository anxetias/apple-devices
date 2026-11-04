// name: FUN_100626f3e
// address: 100626f3e

ulong FUN_100626f3e(long param_1,uint param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char cVar9;
  ulong uVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined8 unaff_RBX;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 < 0xfb) {
    bVar2 = *(byte *)(param_1 + 0x91 + (ulong)param_2 * 0x10);
    if (bVar2 == 0) {
      uVar10 = 0;
    }
    else {
      lVar3 = *(long *)(param_1 + 0x30);
      uVar12 = (ulong)*(byte *)((ulong)param_2 * 0x10 + param_1 + 0x90);
      lVar4 = *(long *)(lVar3 + 0x18 + uVar12 * 0x28);
      uVar10 = (ulong)(bVar2 - 1);
      puVar1 = (undefined4 *)(lVar3 + uVar12 * 0x28);
      uVar6 = puVar1[1];
      uVar7 = puVar1[2];
      uVar8 = puVar1[3];
      lVar5 = *(long *)(lVar3 + 8 + uVar12 * 0x28);
      *param_3 = *puVar1;
      param_3[1] = uVar6;
      param_3[2] = uVar7;
      param_3[3] = uVar8;
      *(undefined8 *)(param_3 + 4) = *(undefined8 *)(lVar4 + uVar10 * 0x18);
      param_3[6] = *(undefined4 *)(lVar4 + 0xc + uVar10 * 0x18);
      *(bool *)(param_3 + 7) = *(long *)(lVar3 + 0x10 + uVar12 * 0x28) == 2;
      uVar10 = CONCAT71((int7)((ulong)unaff_RBX >> 8),1);
      if (lVar5 == 0) {
        *(char **)(param_3 + 2) = "pid";
      }
    }
  }
  else {
    uVar11 = FUN_1001cc310();
    cVar9 = _os_log_type_enabled(uVar11,0x10);
    if (cVar9 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "trackField < kITDBTrackField_MaxVirtualValue";
      __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    uVar10 = 0;
    FUN_1001782e9(0,0);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return uVar10 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

