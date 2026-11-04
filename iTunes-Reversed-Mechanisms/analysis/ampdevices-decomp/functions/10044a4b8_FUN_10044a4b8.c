// name: FUN_10044a4b8
// address: 10044a4b8

void FUN_10044a4b8(int *param_1)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 local_78;
  char *local_74;
  undefined2 local_6c;
  char *local_6a;
  code *local_30;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == (int *)0x0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_6a = "params != __null";
LAB_10044a62c:
      local_6c = 0x822;
      local_74 = "Assertion failure";
      local_78 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_78,0x16);
    }
  }
  else if (*param_1 == 0x6361726c) {
    lVar2 = _CFRunLoopGetCurrent();
    *(long *)(param_1 + 4) = lVar2;
    if (*(long *)(param_1 + 2) != 0) {
      FUN_1001e8f15();
    }
    if (lVar2 != 0) {
      FUN_1001c62d9(&local_78,0x50);
      local_30 = FUN_10044a678;
      uVar3 = FUN_100172c7d(0,0,&local_78);
      FUN_1001728e7(lVar2,uVar3,*(undefined8 *)PTR__kCFRunLoopDefaultMode_10082e118);
      FUN_1001727aa();
      FUN_100172cc1(uVar3);
      FUN_10017060f(uVar3);
      goto LAB_10044a65a;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_6a = "runLoop != __null";
      goto LAB_10044a62c;
    }
  }
  else {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_6a = "params->magic == \'carl\'";
      goto LAB_10044a62c;
    }
  }
  FUN_1001782e9(0,0);
LAB_10044a65a:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

