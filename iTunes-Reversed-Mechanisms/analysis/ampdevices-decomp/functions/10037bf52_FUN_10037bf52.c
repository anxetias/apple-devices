// name: FUN_10037bf52
// address: 10037bf52

void FUN_10037bf52(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined **local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 local_58;
  long *plStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  puVar4 = *(undefined8 **)(param_1 + 0x88);
  puVar5 = *(undefined8 **)(param_1 + 0x90);
  if (puVar4 != puVar5) {
    do {
      local_88 = &PTR_FUN_100855b70;
      local_60 = puVar4[5];
      local_80 = puVar4[1];
      uStack_78 = puVar4[2];
      local_70 = *(undefined4 *)(puVar4 + 3);
      uStack_6c = *(undefined4 *)((long)puVar4 + 0x1c);
      uStack_68 = *(undefined4 *)(puVar4 + 4);
      uStack_64 = *(undefined4 *)((long)puVar4 + 0x24);
      local_58 = puVar4[6];
      plStack_50 = (long *)puVar4[7];
      if (puVar4[7] != 0) {
        LOCK();
        plVar1 = (long *)(puVar4[7] + 8);
        *plVar1 = *plVar1 + 1;
        UNLOCK();
      }
      local_48 = *(undefined4 *)(puVar4 + 8);
      uStack_44 = *(undefined4 *)((long)puVar4 + 0x44);
      uStack_40 = *(undefined4 *)(puVar4 + 9);
      uStack_3c = *(undefined4 *)((long)puVar4 + 0x4c);
      if (puVar4[9] != 0) {
        LOCK();
        plVar1 = (long *)(puVar4[9] + 8);
        *plVar1 = *plVar1 + 1;
        UNLOCK();
      }
      FUN_10037bba0(&local_88);
      local_88 = &PTR_FUN_100855b70;
      plVar1 = (long *)CONCAT44(uStack_3c,uStack_40);
      if (plVar1 != (long *)0x0) {
        LOCK();
        plVar2 = plVar1 + 1;
        lVar3 = *plVar2;
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (lVar3 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
          std::__shared_weak_count::__release_weak();
        }
      }
      if (plStack_50 != (long *)0x0) {
        LOCK();
        plVar1 = plStack_50 + 1;
        lVar3 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar3 == 0) {
          (**(code **)(*plStack_50 + 0x10))(plStack_50);
          std::__shared_weak_count::__release_weak();
        }
      }
      puVar4 = puVar4 + 10;
    } while (puVar4 != puVar5);
    puVar4 = *(undefined8 **)(param_1 + 0x88);
    puVar5 = *(undefined8 **)(param_1 + 0x90);
  }
  while (puVar5 != puVar4) {
    puVar5 = puVar5 + -10;
    (**(code **)*puVar5)(puVar5);
  }
  *(undefined8 **)(param_1 + 0x90) = puVar4;
  FUN_10037bba0(param_1 + 0x38);
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

