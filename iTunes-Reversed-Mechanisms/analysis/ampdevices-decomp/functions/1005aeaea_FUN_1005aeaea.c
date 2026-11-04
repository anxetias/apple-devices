// name: FUN_1005aeaea
// address: 1005aeaea

undefined1 * FUN_1005aeaea(long param_1)

{
  char cVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 local_458 [1056];
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_10017060f(*(undefined8 *)(param_1 + 0x15e0));
  *(undefined8 *)(param_1 + 0x15e0) = 0;
  puVar2 = (undefined1 *)FUN_1001888ba(param_1 + 0x4f0,"CacheInfo.plist",local_458,0);
  if ((int)puVar2 == 0) {
    lVar3 = FUN_10016aa24(DAT_1008c4d90,local_458,0,0);
    *(long *)(param_1 + 0x15e0) = lVar3;
    puVar2 = (undefined1 *)0x0;
    if (lVar3 == 0) {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        local_38 = 0x8220202;
        local_34 = "Assertion failure";
        local_2c = 0x822;
        local_2a = "mCachedInfoDict != nullptr";
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
      }
      FUN_1001782e9(0,0);
      puVar2 = &DAT_ffffff30;
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

