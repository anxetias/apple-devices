// name: FUN_10049e346
// address: 10049e346

undefined4
FUN_10049e346(undefined4 param_1,undefined4 param_2,undefined4 param_3,long *param_4,
             undefined1 param_5)

{
  long *plVar1;
  long lVar2;
  undefined4 uVar3;
  undefined8 local_168 [2];
  long *local_158;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined1 local_144;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  ___bzero(local_168,0x148);
  local_168[0] = (**(code **)(*param_4 + 0x2c0))(param_4,1);
  local_150 = param_1;
  local_14c = param_2;
  local_148 = param_3;
  local_144 = param_5;
  uVar3 = FUN_10043a8b3(param_4[0x9b],0x73766f6c);
  if (local_158 != (long *)0x0) {
    LOCK();
    plVar1 = local_158 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*local_158 + 0x10))(local_158);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

