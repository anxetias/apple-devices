// name: FUN_10034b6f4
// address: 10034b6f4

void FUN_10034b6f4(long param_1,undefined8 param_2,int param_3,undefined4 param_4)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  cfstringStruct *pcVar5;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (((param_1 == 0) || (*(long *)(param_1 + 8) == 0)) ||
     (*(long *)(*(long *)(param_1 + 8) + 0x10) == 0)) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_4a = "TrackInstanceIsValid(trackInstance)";
LAB_10034b89f:
      local_4c = 0x822;
      local_54 = "Assertion failure";
      local_58 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
  }
  else {
    lVar2 = FUN_1004de449(param_4);
    if (lVar2 != 0) {
      if (param_3 == -0x80) {
        if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
          FUN_100333742(lVar2,2);
          return;
        }
      }
      else {
        uVar3 = FUN_100165701(DAT_1008c4d90,**(undefined8 **)(param_1 + 8));
        pcVar5 = &cf___;
        if (param_3 != 0) {
          pcVar5 = (cfstringStruct *)0x0;
        }
        uVar4 = FUN_10032f3b4(param_3);
        FUN_100346d75(lVar2,0,uVar3,0,pcVar5,0,0,uVar4,0);
        if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
          FUN_10017060f(uVar3);
          return;
        }
      }
      goto LAB_10034b8c9;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_4a = "handlerData != nullptr";
      goto LAB_10034b89f;
    }
  }
  FUN_1001782e9(0,0);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
LAB_10034b8c9:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

