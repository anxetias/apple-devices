// name: FUN_10049ddbc
// address: 10049ddbc

undefined4 FUN_10049ddbc(long param_1)

{
  long *plVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  undefined1 local_170 [8];
  long *local_168;
  int aiStack_158 [2];
  undefined8 auStack_150 [3];
  undefined4 auStack_138 [66];
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  ___bzero(local_170,0x140);
  *(undefined4 *)(param_1 + 0x4f4) = 0;
  if (*(long *)(param_1 + 0x4e0) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_10043a8b3(*(undefined8 *)(param_1 + 0x4d8),0x73746f70);
    *(undefined8 *)(param_1 + 0x4e0) = 0;
    lVar4 = 0;
    do {
      iVar2 = *(int *)((long)aiStack_158 + lVar4);
      if (iVar2 != 0) {
        *(int *)(param_1 + 0x4f8 + lVar4) = iVar2;
        if (iVar2 - 1U < 2) {
          FUN_10017060f(*(undefined8 *)(param_1 + 0x500 + lVar4));
          *(undefined8 *)(param_1 + 0x500 + lVar4) = *(undefined8 *)((long)auStack_150 + lVar4);
        }
        else {
          if (iVar2 != 3) goto LAB_10049deea;
          FUN_10017060f(*(undefined8 *)(param_1 + 0x508 + lVar4));
          *(undefined4 *)(param_1 + 0x500 + lVar4) = *(undefined4 *)((long)auStack_150 + lVar4);
          *(undefined8 *)(param_1 + 0x508 + lVar4) = *(undefined8 *)((long)auStack_150 + lVar4 + 8);
          *(undefined8 *)(param_1 + 0x510 + lVar4) =
               *(undefined8 *)((long)auStack_150 + lVar4 + 0x10);
          *(undefined4 *)(param_1 + 0x518 + lVar4) = *(undefined4 *)((long)auStack_138 + lVar4);
          *(undefined4 *)(param_1 + 0x51c + lVar4) = *(undefined4 *)((long)auStack_138 + lVar4 + 4);
        }
        *(int *)(param_1 + 0x4f4) = *(int *)(param_1 + 0x4f4) + 1;
      }
LAB_10049deea:
      lVar4 = lVar4 + 0x28;
    } while (lVar4 != 0xa0);
    if (local_168 != (long *)0x0) {
      LOCK();
      plVar1 = local_168 + 1;
      lVar4 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar4 == 0) {
        (**(code **)(*local_168 + 0x10))(local_168);
        std::__shared_weak_count::__release_weak();
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

