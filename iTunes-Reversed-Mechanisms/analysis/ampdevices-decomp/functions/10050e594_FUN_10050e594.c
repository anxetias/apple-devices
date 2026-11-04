// name: FUN_10050e594
// address: 10050e594

void FUN_10050e594(long param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined **local_78;
  code *local_70;
  long local_68;
  undefined ***local_58;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
LAB_10050e675:
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "DulcimerHandlerDataIsValid(handlerData)";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
    goto LAB_10050e6b8;
  }
  if (*(int *)(param_1 + 8) != 0x64756c63) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure (expected to be true)";
      local_3c = 0x822;
      local_3a = "handlerData->magic == kDulcimerHandlerDataMagic";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    cVar1 = FUN_1001782e9(0,1);
    if (cVar1 == '\0') goto LAB_10050e675;
  }
  if (*(int *)(param_1 + 0x6b08) != 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "handlerData->setupFiberID == kInvalidFiberID";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
  }
  local_78 = &PTR_FUN_100854778;
  local_70 = FUN_10051471d;
  local_68 = param_1;
  local_58 = &local_78;
  iVar2 = FUN_1001b1a89(&local_78,"SetupDeviceFiber",param_1 + 0x6b08,0);
  if (local_58 == &local_78) {
    lVar4 = 0x20;
LAB_10050e69e:
    (**(code **)((long)*local_58 + lVar4))();
  }
  else {
    lVar4 = 0x28;
    if (local_58 != (undefined ***)0x0) goto LAB_10050e69e;
  }
  if (iVar2 != 0) {
    FUN_1004dd69c(param_1,"");
  }
LAB_10050e6b8:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

