// name: FUN_1004c3d7c
// address: 1004c3d7c

undefined8 FUN_1004c3d7c(long param_1,undefined8 param_2)

{
  char cVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(long **)(param_1 + 0x550) != (long *)0x0) {
    lVar3 = (**(code **)(**(long **)(param_1 + 0x550) + 0x70))();
    if (lVar3 != 0) {
      uVar2 = FUN_100443b7e(*(undefined8 *)(param_1 + 0x4f0));
      if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
        uVar4 = FUN_1001777a3(lVar3,uVar2,param_2);
        return uVar4;
      }
      goto LAB_1004c3e7b;
    }
  }
  uVar4 = FUN_1001cc310();
  cVar1 = _os_log_type_enabled(uVar4,0x10);
  if (cVar1 != '\0') {
    local_48 = 0x8220202;
    local_44 = "Assertion failure";
    local_3c = 0x822;
    local_3a = "chapterData != __null";
    __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
  }
  FUN_1001782e9(0,0);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return 0xffffffce;
  }
LAB_1004c3e7b:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

