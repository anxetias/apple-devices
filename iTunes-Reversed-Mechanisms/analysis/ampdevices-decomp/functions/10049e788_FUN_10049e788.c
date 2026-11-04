// name: FUN_10049e788
// address: 10049e788

int FUN_10049e788(long *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 *param_5,undefined4 *param_6,undefined8 *param_7,undefined4 *param_8,
                 undefined4 *param_9,undefined4 *param_10)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  long local_180 [2];
  long *local_170;
  undefined4 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 local_14c;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  ___bzero(local_180,0x148);
  local_180[0] = (**(code **)(*param_1 + 0x2c0))(param_1,1);
  if (local_180[0] == 0) {
    iVar3 = -0x1c;
  }
  else {
    local_168 = param_2;
    local_160 = param_3;
    local_158 = param_4;
    iVar3 = FUN_10043a8b3(param_1[0x9b],0x67696e66);
    if (iVar3 == 0) {
      if (param_5 != (undefined4 *)0x0) {
        *param_5 = local_150;
      }
      if (param_6 != (undefined4 *)0x0) {
        *param_6 = local_14c;
      }
      if (param_7 != (undefined8 *)0x0) {
        *param_7 = local_148;
      }
      if (param_8 != (undefined4 *)0x0) {
        *param_8 = local_140;
      }
      if (param_9 != (undefined4 *)0x0) {
        *param_9 = local_13c;
      }
      iVar3 = 0;
      if (param_10 != (undefined4 *)0x0) {
        *param_10 = local_138;
      }
    }
  }
  if (local_170 != (long *)0x0) {
    LOCK();
    plVar1 = local_170 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*local_170 + 0x10))(local_170);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

