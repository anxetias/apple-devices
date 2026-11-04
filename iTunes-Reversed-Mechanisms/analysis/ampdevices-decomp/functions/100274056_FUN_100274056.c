// name: FUN_100274056
// address: 100274056

int FUN_100274056(long param_1,long param_2,long param_3,undefined8 *param_4)

{
  uint uVar1;
  undefined4 uVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  undefined4 local_64;
  int local_60;
  int local_5c;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  int local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar5 = *(int *)(param_3 + 0xe0);
  iVar6 = iVar5;
  if (iVar5 == 0) {
    iVar6 = *(int *)(param_3 + 0xdc);
  }
  local_5c = iVar6;
  if (param_2 == param_1) {
    local_64 = *(undefined4 *)(param_3 + 0xe4);
    local_60 = iVar5;
    iVar7 = FUN_1001dcecf(param_1 + 0x1c60);
    if ((iVar7 != -0x80) && (iVar7 != 0)) {
      uVar8 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar8,0x10);
      if (cVar3 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x400;
        local_4a = iVar7;
        __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: err == (%d)",&local_58,0x12);
      }
    }
    iVar6 = FUN_1001dcecf(param_1 + 0x1cb0,iVar6);
    if ((iVar6 != -0x80) && (iVar6 != 0)) {
      uVar8 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar8,0x10);
      if (cVar3 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x400;
        local_4a = iVar6;
        __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: err == (%d)",&local_58,0x12);
      }
    }
    iVar6 = FUN_1001dcecf(param_1 + 0x1cb0,iVar5);
    iVar5 = local_4a;
    if ((iVar6 == -0x80) || (iVar6 == 0)) goto LAB_100274269;
    uVar8 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar8,0x10);
    iVar5 = local_4a;
  }
  else {
    iVar5 = FUN_1001de586(param_2 + 0x1c60,*(undefined4 *)(param_3 + 0xe4),param_1 + 0x1c60,
                          &local_64);
    if ((iVar5 != -0x80) && (iVar5 != 0)) {
      uVar8 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar8,0x10);
      if (cVar3 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x400;
        local_4a = iVar5;
        __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: err == (%d)",&local_58,0x12);
      }
    }
    iVar5 = FUN_1001de586(param_2 + 0x1cb0,iVar6,param_1 + 0x1cb0,&local_5c);
    if ((iVar5 != -0x80) && (iVar5 != 0)) {
      uVar8 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar8,0x10);
      if (cVar3 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x400;
        local_4a = iVar5;
        __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: err == (%d)",&local_58,0x12);
      }
    }
    iVar6 = FUN_1001de586(param_2 + 0x1cb0,*(undefined4 *)(param_3 + 0xe0),param_1 + 0x1cb0,
                          &local_60);
    iVar5 = local_4a;
    if ((iVar6 == -0x80) || (iVar6 == 0)) goto LAB_100274269;
    uVar8 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar8,0x10);
    iVar5 = local_4a;
  }
  local_4a = iVar6;
  if (cVar3 != '\0') {
    local_4c = 0x400;
    local_54 = "Assertion failure";
    local_58 = 0x8220202;
    __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: err == (%d)",&local_58,0x12);
    iVar5 = local_4a;
  }
LAB_100274269:
  local_4a = iVar5;
  iVar6 = local_5c;
  iVar5 = local_60;
  uVar2 = local_64;
  uVar1 = *(uint *)(param_3 + 0xc2);
  uVar4 = FUN_100474865(param_3);
  iVar5 = FUN_1002738dc(param_1,uVar2,iVar6,iVar5,uVar1 >> 10 & 1,0,0,uVar4,param_4);
  if (iVar5 == 0) {
    FUN_1003a2e0a(*param_4,*(undefined8 *)(param_3 + 0x28));
  }
  else {
    uVar8 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar8,0x10);
    if (cVar3 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x400;
      local_4a = iVar5;
      __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: err == (%d)",&local_58,0x12);
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

