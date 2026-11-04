// name: FUN_10037aa86
// address: 10037aa86

void FUN_10037aa86(long param_1,int *param_2,int param_3,ulong param_4)

{
  long lVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  code *pcVar9;
  ulong uVar10;
  int iVar11;
  uint uVar12;
  int local_70;
  undefined1 local_6c;
  char local_6b;
  char local_64;
  undefined8 local_60;
  undefined8 local_58;
  uint local_50;
  ushort local_4c;
  undefined2 uStack_4a;
  int iStack_48;
  undefined1 uStack_44;
  undefined1 uStack_43;
  undefined4 local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == (int *)0x0) {
LAB_10037abea:
    uVar6 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar6,0x10);
    if (cVar2 != '\0') {
      local_58._0_4_ = 0x8220202;
      local_58._4_4_ = 0x7a0a90;
      local_50 = 1;
      local_4c = 0x822;
      uStack_4a = 0xd1f6;
      iStack_48 = 0x1007b;
      uStack_44 = 0;
      uStack_43 = 0;
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    goto LAB_10037ad6d;
  }
  uVar12 = (uint)param_4;
  if (*param_2 != 0x706c7374) {
    uVar6 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar6,0x10);
    if (cVar2 != '\0') {
      local_58._0_4_ = 0x8220202;
      local_58._4_4_ = 0x7ab58c;
      local_50 = 1;
      local_4c = 0x822;
      uStack_4a = 0x2d50;
      iStack_48 = 0x1007b;
      uStack_44 = 0;
      uStack_43 = 0;
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_58,0x16);
    }
    cVar2 = FUN_1001782e9(0,1);
    if (cVar2 == '\0') goto LAB_10037abea;
  }
  if ((*(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10) & 0x7fffffff0U) == 0)
  goto LAB_10037ad6d;
  iVar3 = 0x2713;
  if (param_3 != 0x34) {
    iVar3 = param_3;
  }
  iVar11 = 0x2712;
  if (param_3 != 0x35) {
    iVar11 = iVar3;
  }
  if (iVar11 - 0x2afcU < 0xfffffffd) {
    if (iVar11 - 0x2737U < 0xffffffda) {
      lVar7 = FUN_1002ddacc(iVar11);
      if (lVar7 == 0) {
        lVar7 = FUN_1002ddacc(5);
      }
      FUN_10031d3e5(iVar11,&local_70);
      FUN_1001c62d9(&local_58,0x20);
      local_58._0_4_ = (undefined4)lVar7;
      local_58._4_4_ = (undefined4)((ulong)lVar7 >> 0x20);
      local_50 = CONCAT31(local_50._1_3_,local_6c);
      local_4c = (ushort)param_4;
      uStack_4a = (undefined2)(param_4 >> 0x10);
      uVar4 = uVar12;
      if (((param_4 & 1) == 0) && (local_6b != '\0')) {
        uVar4 = uVar12 | 1;
        local_4c = (ushort)uVar4;
      }
      uVar5 = uVar4;
      if (local_64 != '\0') {
        uVar5 = uVar4 | 2;
        local_4c = (ushort)uVar5;
        uStack_4a = (undefined2)(uVar4 >> 0x10);
      }
      if (iVar11 - 0x5bU < 4) {
        if ((param_4 & 1) != 0) {
          local_4c = (ushort)uVar5 | 2;
          uStack_4a = (undefined2)(uVar5 >> 0x10);
        }
      }
      else if (iVar11 - 0x38U < 3) {
        uStack_44 = 1;
        local_40 = 0x2712;
      }
      iStack_48 = iVar11;
      cVar2 = FUN_10048c3a1(param_2);
      if ((cVar2 != '\0') && (local_70 == 0x22)) {
        local_50 = local_50 & 0xffffff00;
      }
      FUN_100490608(param_2);
      lVar7 = *(long *)(param_1 + 0x10);
      uVar10 = (ulong)(*(long *)(param_1 + 0x18) - lVar7) >> 3;
      if ((uVar12 >> 0x1c & 1) == 0) {
        pcVar9 = FUN_10037ae94;
        puVar8 = &local_58;
        goto LAB_10037ad60;
      }
      uVar10 = uVar10 & 0xffffffff;
      lVar1 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      uVar12 = ((uint)lVar1 ^ 0x3f) * 2 ^ 0x7e;
      if (uVar10 == 0) {
        uVar12 = 0;
      }
      local_60 = &local_58;
      FUN_1003820b3(lVar7,lVar7 + uVar10 * 8,&local_60,uVar12,1);
    }
    else {
      local_60 = (undefined8 *)CONCAT44(uVar12,iVar11);
      FUN_10031d3e5(iVar11,&local_70);
      uVar4 = uVar12;
      if (local_6b != '\0') {
        uVar4 = uVar12 | 1;
        local_60 = (undefined8 *)(CONCAT44(uVar12,(undefined4)local_60) | 0x100000000);
      }
      if (local_64 != '\0') {
        local_60 = (undefined8 *)(CONCAT44(uVar4,(undefined4)local_60) | 0x200000000);
      }
      FUN_100490608(param_2);
      lVar7 = *(long *)(param_1 + 0x10);
      uVar10 = (ulong)(*(long *)(param_1 + 0x18) - lVar7) >> 3;
      if ((uVar12 >> 0x1c & 1) == 0) {
        pcVar9 = FUN_10055f730;
        goto LAB_10037acd1;
      }
      uVar10 = uVar10 & 0xffffffff;
      local_58 = &local_60;
      lVar1 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      uVar12 = ((uint)lVar1 ^ 0x3f) * 2 ^ 0x7e;
      if (uVar10 == 0) {
        uVar12 = 0;
      }
      FUN_10038150b(lVar7,lVar7 + uVar10 * 8,&local_58,uVar12,1);
    }
  }
  else {
    local_60 = (undefined8 *)CONCAT44(uVar12,iVar11);
    FUN_10031d3e5(iVar11,&local_70);
    uVar4 = uVar12;
    if (local_6b != '\0') {
      uVar4 = uVar12 | 1;
      local_60 = (undefined8 *)(CONCAT44(uVar12,(undefined4)local_60) | 0x100000000);
    }
    if (local_64 != '\0') {
      local_60 = (undefined8 *)(CONCAT44(uVar4,(undefined4)local_60) | 0x200000000);
    }
    FUN_100490608(param_2);
    lVar7 = *(long *)(param_1 + 0x10);
    uVar10 = (ulong)(*(long *)(param_1 + 0x18) - lVar7) >> 3;
    if ((uVar12 >> 0x1c & 1) == 0) {
      pcVar9 = FUN_100351240;
LAB_10037acd1:
      puVar8 = &local_60;
LAB_10037ad60:
      FUN_1001d26f2(lVar7,uVar10,pcVar9,puVar8);
    }
    else {
      uVar10 = uVar10 & 0xffffffff;
      local_58 = &local_60;
      lVar1 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      uVar12 = ((uint)lVar1 ^ 0x3f) * 2 ^ 0x7e;
      if (uVar10 == 0) {
        uVar12 = 0;
      }
      FUN_100380960(lVar7,lVar7 + uVar10 * 8,&local_58,uVar12,1);
    }
  }
  FUN_100490752(param_2);
LAB_10037ad6d:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

