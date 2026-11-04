// name: FUN_10049e96e
// address: 10049e96e

undefined4
FUN_10049e96e(long *param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5)

{
  long *plVar1;
  long lVar2;
  undefined4 uVar3;
  undefined8 local_180 [2];
  long *local_170;
  undefined4 local_168;
  undefined4 local_164;
  undefined8 local_160;
  undefined8 local_158;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  ___bzero(local_180,0x148);
  local_180[0] = (**(code **)(*param_1 + 0x2c0))(param_1,1);
  local_168 = param_2;
  local_164 = param_3;
  local_160 = param_4;
  local_158 = param_5;
  uVar3 = FUN_10043a8b3(param_1[0x9b],0x616e6c7a);
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
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

