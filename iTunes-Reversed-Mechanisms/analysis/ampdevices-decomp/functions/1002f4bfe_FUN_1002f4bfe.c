// name: FUN_1002f4bfe
// address: 1002f4bfe

int FUN_1002f4bfe(long param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(long *)(param_1 + 0x18) == 0) {
    pcVar5 = *(code **)(param_1 + 0x10);
    if (pcVar5 == (code *)0x0) {
      uVar6 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar6,0x10);
      if (cVar1 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "mInitializeProc != nullptr";
        __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
      pcVar5 = *(code **)(param_1 + 0x10);
    }
    iVar2 = (*pcVar5)(param_1 + 0xb8);
  }
  else {
    lVar3 = FUN_1002f4e70(0x3d);
    lVar4 = FUN_1002f4e70(0x3c);
    iVar2 = (**(code **)(param_1 + 0x18))(param_1 + 0xb8,lVar3,lVar4);
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else if (lVar3 != 0 || lVar4 != 0) {
      iVar2 = (**(code **)(param_1 + 0x18))(param_1 + 0xb8,0,0);
    }
    FUN_10017060f(lVar3);
    FUN_10017060f(lVar4);
  }
  if (iVar2 == 0) {
    iVar2 = (**(code **)(param_1 + 0x38))(param_1 + 0xc0);
    if ((iVar2 == 0) &&
       (iVar2 = (**(code **)(param_1 + 0x28))(*(undefined8 *)(param_1 + 0xb8),param_1 + 200),
       iVar2 == 0)) {
      iVar2 = 0;
    }
    else {
      uVar6 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar6,0x10);
      if (cVar1 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "libErr == eVVViTSLSuccess";
        __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
      iVar2 = iVar2 + 0x5dc;
    }
  }
  else {
    uVar6 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar6,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "libErr == eVVViTSLSuccess";
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    iVar2 = iVar2 + 0x5dc;
    *(undefined8 *)(param_1 + 0xb8) = 0;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

