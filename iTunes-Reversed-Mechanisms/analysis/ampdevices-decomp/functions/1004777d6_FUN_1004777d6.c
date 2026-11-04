// name: FUN_1004777d6
// address: 1004777d6

undefined8 FUN_1004777d6(long param_1,undefined8 param_2)

{
  long lVar1;
  char cVar2;
  undefined8 uVar3;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((param_1 != 0) && (lVar1 = *(long *)(param_1 + 0x10), lVar1 != 0)) {
    uVar3 = FUN_100476f47(param_1,1,lVar1 + 0x2480,lVar1 + 0x1c60,*(undefined4 *)(param_1 + 0xe4),
                          param_2);
    return uVar3;
  }
  uVar3 = FUN_1001cc310();
  cVar2 = _os_log_type_enabled(uVar3,0x10);
  if (cVar2 != '\0') {
    local_38 = 0x8220202;
    local_34 = "Assertion failure";
    local_2c = 0x822;
    local_2a = "TrackInfoIsValid(trackInfo)";
    __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
  }
  FUN_1001782e9(0,0);
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_18) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return 0xffffffce;
}

