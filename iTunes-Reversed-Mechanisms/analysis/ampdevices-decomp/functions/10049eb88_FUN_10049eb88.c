// name: FUN_10049eb88
// address: 10049eb88

undefined4
FUN_10049eb88(long param_1,undefined8 param_2,undefined4 param_3,undefined4 *param_4,
             undefined8 *param_5,undefined1 *param_6)

{
  long *plVar1;
  long lVar2;
  undefined4 uVar3;
  undefined8 local_180;
  undefined1 local_178 [8];
  long *local_170;
  undefined8 local_168;
  undefined4 local_160;
  undefined4 local_15c;
  undefined8 local_158;
  undefined1 local_150;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  ___bzero(local_178,0x140);
  local_180 = *(undefined8 *)(param_1 + 0x4e0);
  local_168 = param_2;
  local_160 = param_3;
  uVar3 = FUN_10043a8b3(*(undefined8 *)(param_1 + 0x4d8),0x64636f64,&local_180);
  *param_4 = local_15c;
  *param_5 = local_158;
  if (param_6 != (undefined1 *)0x0) {
    *param_6 = local_150;
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
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

