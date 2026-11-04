// name: FUN_100512f72
// address: 100512f72

void FUN_100512f72(long param_1,undefined1 param_2)

{
  int iVar1;
  char cVar2;
  undefined2 uVar3;
  undefined8 uVar4;
  undefined1 local_258 [16];
  undefined1 local_248 [512];
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1001b7a44(local_258);
  if (param_1 == 0) {
LAB_10051303b:
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "DulcimerHandlerDataIsValid(handlerData)";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    if (*(int *)(param_1 + 8) != 0x64756c63) {
      uVar4 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar4,0x10);
      if (cVar2 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure (expected to be true)";
        local_3c = 0x822;
        local_3a = "handlerData->magic == kDulcimerHandlerDataMagic";
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      cVar2 = FUN_1001782e9(0,1);
      if (cVar2 == '\0') goto LAB_10051303b;
    }
    FUN_1004f0e83(param_1,local_248);
    FUN_1004fda52(&local_48,*(undefined4 *)(param_1 + 0x28));
    FUN_1001b80b2(local_258,&local_48);
    FUN_1001b7a50(&local_48);
    iVar1 = *(int *)(param_1 + 0x66b0);
    if (iVar1 == 0x69506164) {
      uVar3 = 0x1128;
    }
    else if (iVar1 == 0x6950686e) {
      uVar3 = 0x1127;
    }
    else {
      uVar3 = 0x1126;
      if (iVar1 != 0x69506f74) goto LAB_100513082;
    }
    FUN_100243ece(uVar3,local_248,param_2,local_258);
  }
LAB_100513082:
  FUN_1001b7a50(local_258);
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

