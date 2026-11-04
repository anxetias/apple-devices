// name: FUN_10039b97e
// address: 10039b97e

bool FUN_10039b97e(long param_1,char param_2,undefined8 *param_3,long param_4,undefined8 *param_5)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar4 = *(int *)(param_1 + 0xaa8) - 1;
  if (uVar4 < 2) {
    if (param_3 != (undefined8 *)0x0) {
      *param_3 = 0x69506f6400000001;
      FUN_1001b8dfc(&local_58,param_1 + 0x466);
      FUN_1001b80b2(param_3 + 2,&local_58);
      FUN_1001b7a50(&local_58);
      uVar2 = FUN_1004ddbd3(0x69506f64,*(undefined8 *)(param_1 + 0x440));
      *(undefined4 *)(param_3 + 1) = uVar2;
    }
    if (param_4 != 0) {
      *(bool *)param_4 = *(int *)(param_1 + 0xaa8) == 2;
    }
    if (param_5 != (undefined8 *)0x0) {
      *param_5 = 0;
    }
    if (param_2 != '\0') {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "isRestoreOrUpdateInProgress == false || quitting == false";
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar4 < 2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

