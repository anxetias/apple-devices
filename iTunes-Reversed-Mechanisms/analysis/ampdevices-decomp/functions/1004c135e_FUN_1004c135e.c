// name: FUN_1004c135e
// address: 1004c135e

undefined8
FUN_1004c135e(long *param_1,uint param_2,undefined8 *param_3,undefined1 *param_4,long param_5)

{
  long *plVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 local_60 [8];
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar4 = 0xffffffce;
  if (*(int *)((long)param_1 + 0x1c) == 0x46494c45) {
    FUN_1001c62d9(local_60,8);
    (**(code **)(*param_1 + 0x310))(param_1,0);
    plVar1 = (long *)param_1[0xaa];
    if (plVar1 == (long *)0x0) {
      uVar3 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar3,0x10);
      if (cVar2 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "mMetaDataHandler != __null";
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
    }
    else {
      uVar3 = (**(code **)(*plVar1 + 0x60))
                        (plVar1,(param_2 & 0x40) >> 6,param_2 >> 0xd & 1,param_2 >> 8 & 1,local_60);
      if (param_4 != (undefined1 *)0x0) {
        *param_4 = 1;
      }
      if (param_5 != 0) {
        FUN_1001c631b(local_60,param_5,8);
      }
      uVar4 = 0;
      if (param_3 != (undefined8 *)0x0) {
        *param_3 = uVar3;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

