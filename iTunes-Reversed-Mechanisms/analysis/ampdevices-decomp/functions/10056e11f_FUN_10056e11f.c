// name: FUN_10056e11f
// address: 10056e11f

undefined8 FUN_10056e11f(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar2 = FUN_100170e14(0,param_1,param_2,*(undefined8 *)PTR__kCFAllocatorNull_10082e028);
  if (lVar2 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure (expected to be not NULL)";
      local_3c = 0x822;
      local_3a = "cfData";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    cVar1 = FUN_1001782e9(0,0);
    uVar3 = 0xffffff94;
    if (cVar1 == '\0') goto LAB_10056e1f4;
  }
  lVar4 = FUN_10016a9bd(0,lVar2,1,0);
  FUN_10017060f(lVar2);
  if (lVar4 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure (expected to be not NULL)";
      local_3c = 0x822;
      local_3a = "dict";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    cVar1 = FUN_1001782e9(0,0);
    uVar3 = 0xffffff94;
    if (cVar1 == '\0') goto LAB_10056e1f4;
  }
  FUN_1001667c0(param_3,lVar4);
  FUN_10017060f(lVar4);
  uVar3 = 0;
LAB_10056e1f4:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

