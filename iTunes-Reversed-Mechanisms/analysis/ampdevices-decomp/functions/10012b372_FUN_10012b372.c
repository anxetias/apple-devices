// name: FUN_10012b372
// address: 10012b372

void FUN_10012b372(long param_1,undefined8 *param_2,uint param_3)

{
  long *plVar1;
  long lVar2;
  long **pplVar3;
  long *plVar4;
  long lVar5;
  long local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  long *plStack_d0;
  long *local_c8;
  long *local_c0;
  long local_b8;
  undefined8 *local_b0;
  long local_a8 [4];
  long *local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  long *local_68;
  long *plStack_60;
  long **local_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_b0 = param_2;
  std::mutex::lock();
  lVar5 = *(long *)(param_1 + 0x18);
  lVar2 = *(long *)(param_1 + 0x20);
  local_e8 = *(undefined8 *)(param_1 + 0x20);
  uStack_e0 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  local_f0 = lVar5;
  std::mutex::unlock();
  local_b8 = lVar2;
  if (lVar5 != lVar2) {
    do {
      if (((param_3 & 2) == 0) && (((param_3 & 1) != 0 || (*(int *)(lVar5 + 0x30) != 1)))) {
        local_68 = (long *)*local_b0;
        plStack_60 = (long *)local_b0[1];
        if (local_b0[1] != 0) {
          LOCK();
          plVar4 = (long *)(local_b0[1] + 8);
          *plVar4 = *plVar4 + 1;
          UNLOCK();
        }
        local_d8 = 0;
        plStack_d0 = (long *)0x0;
        plVar4 = *(long **)(lVar5 + 0x20);
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_10016bf14();
        }
        (**(code **)(*plVar4 + 0x30))(plVar4,&local_68);
        plVar4 = plStack_d0;
        if (plStack_60 != (long *)0x0) {
          LOCK();
          plVar1 = plStack_60 + 1;
          lVar2 = *plVar1;
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (lVar2 == 0) {
            (**(code **)(*plStack_60 + 0x10))(plStack_60);
            std::__shared_weak_count::__release_weak();
            plVar4 = plStack_d0;
          }
        }
      }
      else {
        lVar2 = FUN_100156d72();
        plVar4 = *(long **)(lVar2 + 200);
        local_c0 = *(long **)(lVar2 + 0xd0);
        if (local_c0 != (long *)0x0) {
          LOCK();
          local_c0[1] = local_c0[1] + 1;
          UNLOCK();
        }
        local_c8 = plVar4;
        FUN_10012d05c(local_a8,lVar5);
        local_78 = *local_b0;
        uStack_70 = (long *)local_b0[1];
        if (local_b0[1] != 0) {
          LOCK();
          plVar1 = (long *)(local_b0[1] + 8);
          *plVar1 = *plVar1 + 1;
          UNLOCK();
        }
        local_48 = (long **)0x0;
        pplVar3 = operator_new(0x50);
        *pplVar3 = (long *)&PTR_FUN_100838da8;
        FUN_10012d05c(pplVar3 + 2,local_a8);
        *(undefined4 *)(pplVar3 + 8) = (undefined4)local_78;
        *(undefined4 *)((long)pplVar3 + 0x44) = local_78._4_4_;
        *(undefined4 *)(pplVar3 + 9) = (undefined4)uStack_70;
        *(undefined4 *)((long)pplVar3 + 0x4c) = uStack_70._4_4_;
        if (uStack_70 != (long *)0x0) {
          LOCK();
          uStack_70[1] = uStack_70[1] + 1;
          UNLOCK();
        }
        local_48 = pplVar3;
        (**(code **)(*plVar4 + 0x10))(plVar4,&local_68);
        if (local_48 == &local_68) {
          lVar2 = 0x20;
LAB_10012b4e8:
          (**(code **)((long)*local_48 + lVar2))();
        }
        else {
          lVar2 = 0x28;
          if (local_48 != (long **)0x0) goto LAB_10012b4e8;
        }
        if (uStack_70 != (long *)0x0) {
          LOCK();
          plVar4 = uStack_70 + 1;
          lVar2 = *plVar4;
          *plVar4 = *plVar4 + -1;
          UNLOCK();
          if (lVar2 == 0) {
            (**(code **)(*uStack_70 + 0x10))(uStack_70);
            std::__shared_weak_count::__release_weak();
          }
        }
        if (local_88 == local_a8) {
          lVar2 = 0x20;
        }
        else {
          lVar2 = 0x28;
          plVar4 = local_c0;
          if (local_88 == (long *)0x0) goto LAB_10012b5bd;
        }
        (**(code **)(*local_88 + lVar2))();
        plVar4 = local_c0;
      }
LAB_10012b5bd:
      if (plVar4 != (long *)0x0) {
        LOCK();
        plVar1 = plVar4 + 1;
        lVar2 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar2 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
          std::__shared_weak_count::__release_weak();
        }
      }
      lVar5 = lVar5 + 0x40;
    } while (lVar5 != local_b8);
  }
  local_68 = &local_f0;
  FUN_10012c5c2();
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

