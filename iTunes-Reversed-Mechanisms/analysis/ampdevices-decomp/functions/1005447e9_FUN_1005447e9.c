// name: FUN_1005447e9
// address: 1005447e9

undefined1 FUN_1005447e9(long param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 local_268 [16];
  undefined1 local_258 [16];
  undefined1 local_248 [16];
  undefined4 local_238;
  char *local_234;
  undefined2 local_22c;
  char *local_22a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
LAB_10054495d:
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      local_238 = 0x8220202;
      local_234 = "Assertion failure";
      local_22c = 0x822;
      local_22a = "DulcimerHandlerDataIsValid(handlerData)";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_238,0x16);
    }
    FUN_1001782e9(0,0);
    uVar3 = 0;
  }
  else {
    if (*(int *)(param_1 + 8) != 0x64756c63) {
      uVar5 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar5,0x10);
      if (cVar2 != '\0') {
        local_238 = 0x8220202;
        local_234 = "Assertion failure (expected to be true)";
        local_22c = 0x822;
        local_22a = "handlerData->magic == kDulcimerHandlerDataMagic";
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_238,0x16);
      }
      cVar2 = FUN_1001782e9(0,1);
      if (cVar2 == '\0') goto LAB_10054495d;
    }
    uVar1 = *(undefined4 *)(param_1 + 0x66b0);
    FUN_1004fda52(local_268,*(undefined4 *)(param_1 + 0x28));
    FUN_1004f0e83(param_1,&local_238);
    FUN_1001b8dfc(local_258,&local_238);
    FUN_1001b7a44(local_248);
    iVar4 = FUN_1002c0e84(param_2);
    if (iVar4 == 1) {
      lVar6 = FUN_100300729(*(undefined8 *)(param_1 + 0x30),*(undefined8 *)*param_2);
      if (lVar6 == 0) {
        uVar5 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar5,0x10);
        if (cVar2 != '\0') {
          local_238 = 0x8220202;
          local_234 = "Assertion failure";
          local_22c = 0x822;
          local_22a = "trackInfo != nullptr";
          __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_238,0x16);
        }
        FUN_1001782e9(0,0);
      }
      FUN_100476ac1(&local_238,lVar6);
      FUN_1001b80b2(local_248,&local_238);
      FUN_1001b7a50(&local_238);
    }
    uVar3 = FUN_1002c216c(local_268,uVar1,local_258,local_248,param_3);
    FUN_1001b7a50(local_248);
    FUN_1001b7a50(local_258);
    FUN_1001b7a50(local_268);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

