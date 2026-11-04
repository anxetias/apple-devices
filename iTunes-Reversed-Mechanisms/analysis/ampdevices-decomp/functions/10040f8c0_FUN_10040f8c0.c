// name: FUN_10040f8c0
// address: 10040f8c0

/* WARNING: Removing unreachable block (ram,0x00010040fa55) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10040f8c0(undefined8 param_1,int *param_2,long param_3)

{
  double dVar1;
  double dVar2;
  char cVar3;
  undefined8 uVar4;
  int iVar5;
  ulong uVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  double dVar10;
  undefined1 auVar11 [16];
  double dVar12;
  undefined1 auVar13 [16];
  double dVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined1 uStack_70;
  undefined1 uStack_6f;
  undefined2 uStack_6e;
  undefined2 local_6c;
  char *local_6a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar5 = (int)param_1;
  if (iVar5 == 0x64656c66) {
    if ((*(byte *)(param_3 + 0x1bb0) & 1) != 0) {
      uVar4 = FUN_100535102(param_3,0,*(undefined8 *)param_2,0);
      return uVar4;
    }
    param_1 = 0x64656c66;
    goto LAB_10040fa90;
  }
  if (iVar5 == 0x6e616d65) {
    FUN_1001c62d9(&local_78,0x38);
    local_78 = (undefined4)*(undefined8 *)(param_2 + 4);
    uStack_74 = (undefined4)((ulong)*(undefined8 *)(param_2 + 4) >> 0x20);
    uStack_70 = (undefined1)param_2[2];
    uStack_6f = *(undefined1 *)((long)param_2 + 9);
    FUN_1002fc1ae(param_3,0x74647666,&local_78);
  }
  else {
    if (iVar5 != 0x70726f67) {
LAB_10040fa90:
      uVar4 = FUN_100182c9b(param_1,param_2);
      return uVar4;
    }
    if (*param_2 != 1) {
      param_1 = 0x70726f67;
      goto LAB_10040fa90;
    }
    uVar7 = *(uint *)(param_3 + 0x2c08);
    if (uVar7 == 0) {
      uVar4 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar4,0x10);
      if (cVar3 != '\0') {
        local_78 = 0x8220202;
        uStack_74 = 0x7a0a90;
        uStack_70 = 1;
        uStack_6f = 0;
        uStack_6e = 0;
        local_6c = 0x822;
        local_6a = "copyVolumeBlockSize != 0";
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_78,0x16);
      }
      FUN_1001782e9(0,0);
      uVar7 = 0x200;
    }
    uVar6 = *(ulong *)(param_3 + 0x2bf0);
    if (uVar6 == 0) {
      uVar4 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar4,0x10);
      if (cVar3 != '\0') {
        local_78 = 0x8220202;
        uStack_74 = 0x7a0a90;
        uStack_70 = 1;
        uStack_6f = 0;
        uStack_6e = 0;
        local_6c = 0x822;
        local_6a = "totalCopyBlocks != 0";
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_78,0x16);
      }
      FUN_1001782e9(0,0);
      uVar6 = 1;
    }
    lVar8 = (*(long *)(param_2 + 2) / (long)(ulong)uVar7) / 2;
    *(long *)(param_3 + 0x2c00) = lVar8;
    uVar9 = lVar8 + *(long *)(param_3 + 0x2bf8);
    if (uVar6 < uVar9) {
      uVar4 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar4,0x10);
      if (cVar3 != '\0') {
        local_78 = 0x8220202;
        uStack_74 = 0x7a0a90;
        uStack_70 = 1;
        uStack_6f = 0;
        uStack_6e = 0;
        local_6c = 0x822;
        local_6a = "completedBlocks <= totalCopyBlocks";
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_78,0x16);
      }
      FUN_1001782e9(0,0);
    }
    dVar2 = _UNK_10070d3d8;
    dVar1 = _DAT_10070d3d0;
    if (*(long *)(param_2 + 4) == 0) {
      dVar10 = 0.0;
    }
    else {
      dVar10 = (double)*(long *)(param_2 + 2) / (double)*(long *)(param_2 + 4);
    }
    uVar16 = (undefined4)((ulong)DAT_10070d3c0 >> 0x20);
    auVar13._8_4_ = (int)(uVar9 >> 0x20);
    auVar13._0_8_ = uVar9;
    auVar13._12_4_ = uVar16;
    uVar15 = (undefined4)DAT_10070d3c0;
    dVar12 = (double)CONCAT44(uVar15,(int)uVar9) - _DAT_10070d3d0;
    dVar14 = auVar13._8_8_ - _UNK_10070d3d8;
    *(double *)(param_3 + 0x2c68) = dVar10;
    auVar11._8_4_ = (int)(uVar6 >> 0x20);
    auVar11._0_8_ = uVar6;
    auVar11._12_4_ = uVar16;
    *(double *)(param_3 + 0x2c70) =
         (dVar12 + dVar14) /
         (((double)CONCAT44(uVar15,(int)uVar6) - dVar1) + (auVar11._8_8_ - dVar2));
    uVar7 = *(uint *)(param_3 + 0x2be0);
    *(uint *)(param_3 + 0x2be0) = uVar7 | 0x40000;
    uVar4 = 0xffffff80;
    if ((uVar7 & 0xc0) != 0) goto LAB_10040fb0d;
    FUN_1001b1464();
  }
  uVar4 = 0;
LAB_10040fb0d:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

