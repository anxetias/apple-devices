// name: FUN_1005ed5a2
// address: 1005ed5a2

void FUN_1005ed5a2(undefined8 param_1,long param_2)

{
  code *pcVar1;
  char cVar2;
  undefined8 uVar3;
  undefined4 local_2b8;
  undefined4 uStack_2b4;
  undefined4 local_2b0;
  undefined2 local_2ac;
  char *local_2aa;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar2 = FUN_1005e937f(param_2);
  if (cVar2 == '\0') {
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      local_2b8 = 0x8220202;
      uStack_2b4 = 0x7a0a90;
      local_2b0 = 1;
      local_2ac = 0x822;
      local_2aa = "RawIPodDeviceRefIsValid(device)";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_2b8,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    FUN_10017899c(*(undefined4 *)(param_2 + 0x6884));
    if (*(char *)(param_2 + 0x68c9) == '\0') {
      if (*(char *)(param_2 + 0x68c8) != '\x01') {
        if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
          FUN_1005e9102(param_1,param_2,1);
          return;
        }
        goto LAB_1005ed712;
      }
      uVar3 = *(undefined8 *)(param_2 + 0x68d0);
      pcVar1 = *(code **)(param_2 + 0x68d8);
      ___bzero(&local_2ac,0x278);
      local_2b8 = 10;
      uStack_2b4 = 9;
      local_2b0 = 0x284;
      (*pcVar1)(uVar3,0x756e7267,&local_2b8);
      *(undefined1 *)(param_2 + 0x68c9) = 1;
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return;
  }
LAB_1005ed712:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

