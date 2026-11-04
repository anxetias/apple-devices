// name: FUN_10043b41c
// address: 10043b41c

int FUN_10043b41c(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 *param_7)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 local_180 [16];
  long *local_170;
  undefined4 local_168;
  undefined8 local_160;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_14c;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  ___bzero(local_180,0x148);
  local_168 = param_3;
  local_160 = param_4;
  local_158 = param_2;
  local_154 = param_5;
  local_150 = param_6;
  iVar3 = FUN_10043a8b3(param_1,0x67706174,local_180);
  if (param_7 != (undefined4 *)0x0) {
    uVar4 = 0;
    if (iVar3 == 0) {
      uVar4 = local_14c;
    }
    *param_7 = uVar4;
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

