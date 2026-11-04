// name: FUN_1002c3fff
// address: 1002c3fff

undefined1 FUN_1002c3fff(long param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined1 local_698 [16];
  undefined1 local_688 [16];
  undefined1 local_678 [16];
  undefined1 local_668 [16];
  undefined1 local_658 [512];
  undefined4 local_458;
  char *local_454;
  undefined2 local_44c;
  char *local_44a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
LAB_1002c41b8:
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_458 = 0x8220202;
      local_454 = "Assertion failure";
      local_44c = 0x822;
      local_44a = "DulcimerHandlerDataIsValid(handlerData)";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_458,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    if (*(int *)(param_1 + 8) != 0x64756c63) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_458 = 0x8220202;
        local_454 = "Assertion failure (expected to be true)";
        local_44c = 0x822;
        local_44a = "handlerData->magic == kDulcimerHandlerDataMagic";
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_458,0x16);
      }
      cVar1 = FUN_1001782e9(0,1);
      if (cVar1 == '\0') goto LAB_1002c41b8;
    }
    uVar4 = 1;
    if (*(char *)(param_1 + 0x3ca) == '\0') goto LAB_1002c41dd;
    FUN_1001eb60a(&local_458);
    FUN_1001b7b04(local_658,param_1 + 0x3ca);
    iVar2 = FUN_1001e6c16(&local_458,local_658);
    FUN_1001b7a50(local_658);
    FUN_1001b7a50(&local_458);
    if (-1 < iVar2) goto LAB_1002c41dd;
    uVar3 = FUN_100416f20(*(undefined4 *)(param_1 + 0x66b0),0x10cc01d3);
    FUN_1001b7eb0(local_698,uVar3);
    FUN_10026677e(*(undefined8 *)(param_1 + 0x66d8),&local_458);
    FUN_10017e137(&local_458,0,local_658);
    FUN_1001b8dfc(local_688,local_658);
    FUN_1001b7b04(local_668,param_1 + 0x3ca);
    FUN_1001bbf68(local_678,local_698,local_688,local_668);
    FUN_1001b7a50(local_668);
    FUN_1004fda52(local_668,*(undefined4 *)(param_1 + 0x28));
    FUN_1004508b1(local_678,local_668);
    FUN_1001b7a50(local_668);
    FUN_1001b7a50(local_678);
    FUN_1001b7a50(local_688);
    FUN_1001b7a50(local_698);
  }
  uVar4 = 0;
LAB_1002c41dd:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

