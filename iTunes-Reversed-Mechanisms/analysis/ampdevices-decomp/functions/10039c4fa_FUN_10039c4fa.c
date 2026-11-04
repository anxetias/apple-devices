// name: FUN_10039c4fa
// address: 10039c4fa

undefined8
FUN_10039c4fa(undefined8 param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined **local_58;
  undefined1 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined ***local_38;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_58 = &PTR_FUN_1008564c8;
  local_50 = param_2;
  local_48 = param_3;
  local_40 = param_4;
  local_38 = &local_58;
  uVar1 = FUN_10039c40c(param_1,&local_58);
  if (local_38 == &local_58) {
    lVar2 = 0x20;
  }
  else {
    lVar2 = 0x28;
    if (local_38 == (undefined ***)0x0) goto LAB_10039c55c;
  }
  (**(code **)((long)*local_38 + lVar2))();
LAB_10039c55c:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_20) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar1;
}

