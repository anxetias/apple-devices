// name: FUN_1003a499c
// address: 1003a499c

undefined8 FUN_1003a499c(undefined8 param_1,long param_2)

{
  char cVar1;
  long lVar2;
  undefined **local_58;
  undefined8 local_50;
  undefined ***local_38;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1001b7a5c(param_1,param_2 + 0x88);
  cVar1 = FUN_1001b8428(param_1);
  if (cVar1 != '\0') {
    local_58 = &PTR_FUN_100856d40;
    local_50 = param_1;
    local_38 = &local_58;
    FUN_1003a0178(param_2,1,&local_58);
    if (local_38 == &local_58) {
      lVar2 = 0x20;
    }
    else {
      lVar2 = 0x28;
      if (local_38 == (undefined ***)0x0) goto LAB_1003a4a1b;
    }
    (**(code **)((long)*local_38 + lVar2))();
  }
LAB_1003a4a1b:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return param_1;
}

