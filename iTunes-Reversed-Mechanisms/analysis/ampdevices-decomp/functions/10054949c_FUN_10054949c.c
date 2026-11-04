// name: FUN_10054949c
// address: 10054949c

void FUN_10054949c(long param_1,uint *param_2,uint *param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  ulong local_88;
  uint *local_80;
  ulong local_78;
  long local_70;
  uint local_64;
  ulong local_60;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar2 = 0;
  *(undefined2 *)(param_1 + 0x4c8) = 0;
  *(undefined4 *)(param_1 + 0x708) = 0;
  *(undefined2 *)(param_1 + 0x70c) = 0;
  *(undefined1 *)(param_1 + 0x70f) = 0;
  *(undefined8 *)(param_1 + 0x6c8) = 0;
  *(undefined8 *)(param_1 + 0x6d0) = 0;
  *(undefined8 *)(param_1 + 0x6d8) = 0;
  *(undefined8 *)(param_1 + 0x6e0) = 0;
  *(undefined4 *)(param_1 + 0x6e8) = 0;
  *(undefined8 *)(param_1 + 0x6f0) = 0;
  *(undefined8 *)(param_1 + 0x6f8) = 0;
  uVar7 = *param_2;
  uVar7 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18;
  local_64 = uVar7;
  if (param_3 != (uint *)0x0) {
    uVar2 = *param_3;
    uVar2 = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
    local_64 = uVar2;
  }
  local_60 = 0;
  local_78 = local_78 & 0xffffffff00000000;
  iVar3 = FUN_1000b42a0(param_2,uVar7,3);
  if (iVar3 == 0) {
    lVar4 = FUN_1001dfc0d(local_60);
    lVar9 = param_1 + 0x4c8;
    if (lVar4 + 1U != (local_78 & 0xffffffff)) {
      local_70 = param_1 + 0x4c8;
      uVar5 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar5,0x10);
      if (cVar1 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "CStringLen(sinfUserName) + 1 == sinfUserNameLength";
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
      lVar9 = local_70;
    }
    FUN_1001e4a2e(local_60,lVar9);
    FUN_1000bfd00(local_60);
  }
  iVar3 = FUN_100070b70(param_2,uVar7,1,&local_60);
  if ((iVar3 != -0x80) && (iVar3 != 0)) {
    local_70 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(local_70,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x400;
      local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
      __os_log_error_impl(0x100000000,local_70,0x10,"%{public}s: err == (%d)",&local_58,0x12);
    }
  }
  local_70 = CONCAT44(local_70._4_4_,param_2[1]);
  if (param_2[1] == 0x666e6973) {
    *(ulong *)(param_1 + 0x6c8) = local_60;
    iVar3 = FUN_100070b70(param_2,uVar7,10,&local_60);
    if ((iVar3 != -0x80) && (iVar3 != 0)) {
      local_80 = (uint *)FUN_1001cc310();
      cVar1 = _os_log_type_enabled(local_80,0x10);
      if (cVar1 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x400;
        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
        __os_log_error_impl(0x100000000,local_80,0x10,"%{public}s: err == (%d)",&local_58,0x12);
      }
    }
    *(undefined4 *)(param_1 + 0x6ec) = (undefined4)local_60;
    iVar3 = FUN_100070b70(param_2,uVar7,0xb);
    if ((iVar3 != -0x80) && (iVar3 != 0)) {
      uVar5 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar5,0x10);
      if (cVar1 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x400;
        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_58,0x12);
      }
    }
    uVar8 = local_64;
    if ((local_60 & 0x300) != 0) {
      *(undefined4 *)(param_1 + 0x61e0) = 0x4000;
    }
  }
  else {
    *(ulong *)(param_1 + 0x6d0) = local_60;
    *(undefined4 *)(param_1 + 0x6ec) = 0;
    iVar3 = FUN_100070b70(param_2,uVar7,0x1e,&local_60);
    if (iVar3 == 0) {
      *(bool *)(param_1 + 0x70c) = local_60 != 0;
    }
    iVar3 = FUN_100070b70(param_2,uVar7,0x1f,&local_60);
    uVar8 = local_64;
    if (iVar3 == 0) {
      *(bool *)(param_1 + 0x70d) = local_60 != 0;
    }
    iVar3 = FUN_100070b70(param_2,uVar7,0x2b,&local_60);
    if (iVar3 == 0) {
      *(bool *)(param_1 + 0x70f) = local_60 != 0;
    }
  }
  local_80 = param_3;
  if (param_3 == (uint *)0x0) {
    local_80 = param_2;
  }
  iVar3 = FUN_100070b70(local_80,uVar8,0x23,&local_60);
  if (iVar3 == 0) {
    *(bool *)(param_1 + 0x70e) = local_60 != 0;
  }
  local_78 = 0;
  local_88 = 0;
  if (param_3 != (uint *)0x0) {
    iVar3 = FUN_100070b70(param_3,uVar2,2,&local_78);
    if ((iVar3 != -0x80) && (iVar3 != 0)) {
      uVar5 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar5,0x10);
      if (cVar1 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x400;
        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_58,0x12);
      }
    }
    iVar3 = FUN_100070b70(param_3,uVar2,0x1b,&local_88);
    if ((iVar3 != -0x80) && (iVar3 != 0)) {
      uVar5 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar5,0x10);
      if (cVar1 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x400;
        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_58,0x12);
      }
    }
    if (local_78 != 0) goto LAB_100549852;
  }
  iVar3 = FUN_100070b70(param_2,uVar7,2,&local_78);
  if ((iVar3 != -0x80) && (iVar3 != 0)) {
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x400;
      local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_58,0x12);
    }
  }
LAB_100549852:
  if (local_88 == 0) {
    iVar3 = FUN_100070b70(param_2,uVar7,0x1b,&local_88);
    if ((iVar3 != -0x80) && (iVar3 != 0)) {
      uVar5 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar5,0x10);
      if (cVar1 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x400;
        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_58,0x12);
      }
    }
  }
  uVar6 = local_78;
  if (local_88 != local_78 && local_88 != 0) {
    *(ulong *)(param_1 + 0x6e0) = local_78;
    uVar6 = local_88;
  }
  *(ulong *)(param_1 + 0x6d8) = uVar6;
  if (((((int)local_70 == 0x666e6973) && (*(ulong *)(param_1 + 0x6c8) == 0)) &&
      (uVar6 == 0 && *(int *)(param_1 + 0x6ec) == 0)) && (*(long *)(param_1 + 0x6e0) == 0)) {
    *(undefined4 *)(param_1 + 0x6ec) = 0x10000;
  }
  iVar3 = FUN_100070b70(param_2,uVar7,7,param_1 + 0x700);
  if ((iVar3 != -0x80) && (iVar3 != 0)) {
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x400;
      local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_58,0x12);
    }
  }
  iVar3 = FUN_100070b70(param_2,uVar7,6,&local_60);
  if (iVar3 == 0) {
    *(undefined4 *)(param_1 + 0x6e8) = (undefined4)local_60;
  }
  iVar3 = FUN_100070b70(param_2,uVar7,5,&local_60);
  uVar7 = local_64;
  if (iVar3 == 0) {
    *(undefined4 *)(param_1 + 0x708) = (undefined4)local_60;
  }
  if ((int)local_70 == 0x666e6973) {
    iVar3 = FUN_100070b70(local_80,local_64,0x28,param_1 + 0x6f0);
    if ((iVar3 != -0x80) && (iVar3 != 0)) {
      uVar5 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar5,0x10);
      if (cVar1 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x400;
        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_58,0x12);
      }
    }
    iVar3 = FUN_100070b70(local_80,uVar7,0x29,param_1 + 0x6f8);
    if ((iVar3 != -0x80) && (iVar3 != 0)) {
      uVar5 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar5,0x10);
      if (cVar1 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x400;
        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_58,0x12);
      }
    }
  }
  iVar3 = FUN_100070b70(local_80,uVar7,0x2b,&local_60);
  if (iVar3 == 0) {
    *(bool *)(param_1 + 0x70f) = local_60 != 0;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

