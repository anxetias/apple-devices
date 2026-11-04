// name: FUN_1002f379e
// address: 1002f379e

undefined4 FUN_1002f379e(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar3 = FUN_100170651(param_2);
  lVar4 = FUN_1001726ca(uVar3,param_2);
  if (lVar4 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "dataRef != nullptr";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
    if (*(long *)PTR____stack_chk_guard_10082cb58 != local_28) goto LAB_1002f38b0;
    uVar2 = 0xffffffce;
  }
  else {
    uVar3 = FUN_100170f3b(lVar4);
    uVar2 = FUN_100170ef7(lVar4);
    uVar2 = FUN_1002f43c7(param_1,"iTunesMetadata.plist",uVar3,uVar2);
    FUN_10017060f(lVar4);
    if (*(long *)PTR____stack_chk_guard_10082cb58 != local_28) {
LAB_1002f38b0:
                    /* WARNING: Subroutine does not return */
      ___stack_chk_fail();
    }
  }
  return uVar2;
}

