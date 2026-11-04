// name: FUN_1002ae502
// address: 1002ae502

long FUN_1002ae502(long param_1,int param_2,int param_3,long param_4)

{
  long *plVar1;
  char cVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((param_1 == 0) || (plVar1 = *(long **)(param_1 + 0x10), plVar1 == (long *)0x0)) {
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      local_4a = "TrackInfoIsValid(trackInfo)";
LAB_1002ae6c8:
      local_4c = 0x822;
      local_54 = "Assertion failure";
      local_58 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
  }
  else {
    lVar4 = FUN_1001c58d5(plVar1[0x379]);
    if (lVar4 != 0) {
      *(undefined8 *)(lVar4 + 0xb8) = 0;
      *(undefined8 *)(lVar4 + 0xc0) = 0;
      uVar3 = FUN_1001ea5dc();
      *(undefined4 *)(lVar4 + 0x30) = uVar3;
      *(int *)(lVar4 + 0x3c) = param_2;
      uVar5 = FUN_1001c6588();
      *(undefined8 *)(lVar4 + 0x10) = uVar5;
      uVar5 = FUN_1001c6588();
      *(undefined8 *)(lVar4 + 0x18) = uVar5;
      uVar5 = FUN_1001c6588();
      *(undefined8 *)(lVar4 + 0x20) = uVar5;
      uVar5 = FUN_1001c6588();
      *(undefined8 *)(lVar4 + 0x80) = uVar5;
      if (param_2 == 0x44574e4c) {
        FUN_1002ae6f7(lVar4);
      }
      if (param_4 == 0) {
        param_4 = FUN_1002fa216(plVar1);
      }
      *(long *)(lVar4 + 0x28) = param_4;
      FUN_1002accc1(lVar4,param_1,0);
      if (param_3 != 1) {
        if (param_3 == 0) {
          FUN_100177cff(lVar4 + 0x60);
        }
        else {
          *(int *)(lVar4 + 0x60) = param_3;
        }
      }
      if ((*(byte *)(param_1 + 0xc2) & 1) != 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1,0x6174726e,lVar4,0,0);
      }
      goto LAB_1002ae617;
    }
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      local_4a = "allocation != nullptr";
      goto LAB_1002ae6c8;
    }
  }
  lVar4 = 0;
  FUN_1001782e9(0,0);
LAB_1002ae617:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return lVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

