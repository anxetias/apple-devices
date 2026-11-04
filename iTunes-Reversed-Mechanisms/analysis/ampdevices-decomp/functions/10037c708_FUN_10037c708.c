// name: FUN_10037c708
// address: 10037c708

void FUN_10037c708(long param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  char cVar11;
  long lVar12;
  long lVar13;
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
  cVar11 = FUN_10053941c(param_1 + 0x48);
  if (cVar11 != '\0') {
    FUN_10037bba0(param_1 + 0x38);
  }
  lVar13 = *(long *)(param_1 + 0x88);
  lVar3 = *(long *)(param_1 + 0x90);
  if (lVar13 != lVar3) {
    do {
      local_88 = &PTR_FUN_100855b70;
      local_60 = *(undefined8 *)(lVar13 + 0x28);
      local_80 = *(undefined8 *)(lVar13 + 8);
      uStack_78 = *(undefined8 *)(lVar13 + 0x10);
      local_70 = *(undefined4 *)(lVar13 + 0x18);
      uStack_6c = *(undefined4 *)(lVar13 + 0x1c);
      uStack_68 = *(undefined4 *)(lVar13 + 0x20);
      uStack_64 = *(undefined4 *)(lVar13 + 0x24);
      local_58 = *(undefined8 *)(lVar13 + 0x30);
      plStack_50 = *(long **)(lVar13 + 0x38);
      if (*(long *)(lVar13 + 0x38) != 0) {
        LOCK();
        plVar1 = (long *)(*(long *)(lVar13 + 0x38) + 8);
        *plVar1 = *plVar1 + 1;
        UNLOCK();
      }
      local_48 = *(undefined4 *)(lVar13 + 0x40);
      uStack_44 = *(undefined4 *)(lVar13 + 0x44);
      uStack_40 = *(undefined4 *)(lVar13 + 0x48);
      uStack_3c = *(undefined4 *)(lVar13 + 0x4c);
      if (*(long *)(lVar13 + 0x48) != 0) {
        LOCK();
        plVar1 = (long *)(*(long *)(lVar13 + 0x48) + 8);
        *plVar1 = *plVar1 + 1;
        UNLOCK();
      }
      cVar11 = FUN_10053941c(&uStack_78,param_2);
      if (cVar11 != '\0') {
        FUN_10037bba0(&local_88);
      }
      local_88 = &PTR_FUN_100855b70;
      plVar1 = (long *)CONCAT44(uStack_3c,uStack_40);
      if (plVar1 != (long *)0x0) {
        LOCK();
        plVar2 = plVar1 + 1;
        lVar12 = *plVar2;
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (lVar12 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
          std::__shared_weak_count::__release_weak();
        }
      }
      if (plStack_50 != (long *)0x0) {
        LOCK();
        plVar1 = plStack_50 + 1;
        lVar12 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar12 == 0) {
          (**(code **)(*plStack_50 + 0x10))(plStack_50);
          std::__shared_weak_count::__release_weak();
        }
      }
      lVar13 = lVar13 + 0x50;
    } while (lVar13 != lVar3);
    lVar13 = *(long *)(param_1 + 0x88);
    lVar3 = *(long *)(param_1 + 0x90);
    while ((lVar13 != lVar3 && (cVar11 = FUN_10053941c(lVar13 + 0x10,param_2), cVar11 == '\0'))) {
      lVar13 = lVar13 + 0x50;
    }
    lVar12 = lVar13 + 0x50;
    if (lVar12 != lVar3 && lVar13 != lVar3) {
      do {
        cVar11 = FUN_10053941c(lVar12 + 0x10,param_2);
        if (cVar11 == '\0') {
          *(undefined8 *)(lVar13 + 0x28) = *(undefined8 *)(lVar12 + 0x28);
          uVar4 = *(undefined4 *)(lVar12 + 8);
          uVar5 = *(undefined4 *)(lVar12 + 0xc);
          uVar6 = *(undefined4 *)(lVar12 + 0x10);
          uVar7 = *(undefined4 *)(lVar12 + 0x14);
          uVar8 = *(undefined4 *)(lVar12 + 0x1c);
          uVar9 = *(undefined4 *)(lVar12 + 0x20);
          uVar10 = *(undefined4 *)(lVar12 + 0x24);
          *(undefined4 *)(lVar13 + 0x18) = *(undefined4 *)(lVar12 + 0x18);
          *(undefined4 *)(lVar13 + 0x1c) = uVar8;
          *(undefined4 *)(lVar13 + 0x20) = uVar9;
          *(undefined4 *)(lVar13 + 0x24) = uVar10;
          *(undefined4 *)(lVar13 + 8) = uVar4;
          *(undefined4 *)(lVar13 + 0xc) = uVar5;
          *(undefined4 *)(lVar13 + 0x10) = uVar6;
          *(undefined4 *)(lVar13 + 0x14) = uVar7;
          FUN_100203686(lVar13 + 0x30,lVar12 + 0x30);
          FUN_100238d72(lVar13 + 0x40,*(undefined8 *)(lVar12 + 0x40),*(undefined8 *)(lVar12 + 0x48))
          ;
          lVar13 = lVar13 + 0x50;
        }
        lVar12 = lVar12 + 0x50;
      } while (lVar12 != lVar3);
    }
  }
  FUN_10037c4ac(param_1 + 0x88,lVar13,*(undefined8 *)(param_1 + 0x90));
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

