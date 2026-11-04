// name: FUN_1004227b4
// address: 1004227b4

ulong FUN_1004227b4(undefined8 param_1,long param_2)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 unaff_RBX;
  ulong uVar4;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 != 0) {
    lVar2 = ___dynamic_cast(param_2,&PTR_DAT_100857ed8,&PTR_DAT_100857ef0,0);
    if (lVar2 != 0) {
      uVar4 = CONCAT71((int7)((ulong)unaff_RBX >> 8),*(int *)(lVar2 + 0x1300) == 0xd);
      goto LAB_100422820;
    }
  }
  uVar3 = FUN_1001cc310();
  cVar1 = _os_log_type_enabled(uVar3,0x10);
  if (cVar1 != '\0') {
    local_38 = 0x8220202;
    local_34 = "Assertion failure";
    local_2c = 0x822;
    local_2a = "updateRestoreActionDelegateImp != nullptr";
    __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
  }
  uVar4 = 0;
  FUN_1001782e9(0,0);
LAB_100422820:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return uVar4 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

