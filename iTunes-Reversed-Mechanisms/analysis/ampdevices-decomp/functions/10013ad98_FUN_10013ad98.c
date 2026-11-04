// name: FUN_10013ad98
// address: 10013ad98

void FUN_10013ad98(long param_1,undefined8 *param_2,uint param_3)

{
  long *plVar1;
  long *plVar2;
  long **pplVar3;
  long lVar4;
  long lVar5;
  long local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  long *plStack_160;
  long local_150;
  long local_148;
  uint local_13c;
  long local_138 [4];
  long *local_118;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  long *local_e8;
  long *plStack_e0;
  undefined4 local_d8;
  long **local_c8;
  undefined8 local_b8;
  undefined7 uStack_b0;
  undefined4 uStack_a9;
  undefined8 local_a0;
  undefined8 uStack_98;
  long *local_90;
  long local_88 [4];
  long *local_68;
  long *local_58;
  long *plStack_50;
  undefined4 local_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_13c = param_3;
  std::mutex::lock();
  lVar5 = *(long *)(param_1 + 0x20);
  lVar4 = *(long *)(param_1 + 0x28);
  local_178 = *(undefined8 *)(param_1 + 0x28);
  uStack_170 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  local_180 = lVar5;
  local_148 = param_1;
  std::mutex::unlock();
  local_150 = lVar4;
  if (lVar5 != lVar4) {
    do {
      if (((local_13c & 1) == 0) && (*(int *)(lVar5 + 0x30) != 1)) {
        local_e8 = (long *)*param_2;
        plStack_e0 = (long *)param_2[1];
        if (param_2[1] != 0) {
          LOCK();
          plVar1 = (long *)(param_2[1] + 8);
          *plVar1 = *plVar1 + 1;
          UNLOCK();
        }
        local_d8 = *(undefined4 *)(local_148 + 0x7c);
        local_168 = 0;
        plStack_160 = (long *)0x0;
        plVar1 = *(long **)(lVar5 + 0x20);
        if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_10016bf14();
        }
        (**(code **)(*plVar1 + 0x30))(plVar1,&local_e8);
        if (plStack_e0 != (long *)0x0) {
          LOCK();
          plVar1 = plStack_e0 + 1;
          lVar4 = *plVar1;
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (lVar4 == 0) {
            (**(code **)(*plStack_e0 + 0x10))(plStack_e0);
            std::__shared_weak_count::__release_weak();
          }
        }
        if (plStack_160 != (long *)0x0) {
          LOCK();
          plVar1 = plStack_160 + 1;
          lVar4 = *plVar1;
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (lVar4 == 0) {
            (**(code **)(*plStack_160 + 0x10))(plStack_160);
            std::__shared_weak_count::__release_weak();
          }
        }
      }
      else {
        FUN_10013d28e(local_138,lVar5);
        local_108 = *(undefined4 *)param_2;
        uStack_104 = *(undefined4 *)((long)param_2 + 4);
        uStack_100 = *(undefined4 *)(param_2 + 1);
        uStack_fc = *(undefined4 *)((long)param_2 + 0xc);
        if (param_2[1] != 0) {
          LOCK();
          plVar1 = (long *)(param_2[1] + 8);
          *plVar1 = *plVar1 + 1;
          UNLOCK();
        }
        local_f8 = *(undefined4 *)(local_148 + 0x7c);
        if (local_118 == (long *)0x0) {
          local_68 = (long *)0x0;
        }
        else if (local_118 == local_138) {
          local_68 = local_88;
          (**(code **)(*local_118 + 0x18))();
        }
        else {
          local_68 = (long *)(**(code **)(*local_118 + 0x10))();
        }
        local_58 = (long *)CONCAT44(uStack_104,local_108);
        plStack_50 = (long *)CONCAT44(uStack_fc,uStack_100);
        if (CONCAT44(uStack_fc,uStack_100) != 0) {
          LOCK();
          plVar1 = (long *)(CONCAT44(uStack_fc,uStack_100) + 8);
          *plVar1 = *plVar1 + 1;
          UNLOCK();
        }
        local_48 = local_f8;
        local_c8 = (long **)0x0;
        pplVar3 = operator_new(0x60);
        *pplVar3 = (long *)&PTR_FUN_10083a470;
        FUN_10013d28e(pplVar3 + 2,local_88);
        pplVar3[8] = local_58;
        pplVar3[9] = plStack_50;
        local_58 = (long *)0x0;
        plStack_50 = (long *)0x0;
        *(undefined4 *)(pplVar3 + 10) = local_48;
        local_c8 = pplVar3;
        if (local_68 == local_88) {
          lVar4 = 0x20;
LAB_10013aff0:
          (**(code **)(*local_68 + lVar4))();
        }
        else {
          lVar4 = 0x28;
          if (local_68 != (long *)0x0) goto LAB_10013aff0;
        }
        local_b8 = 0;
        uStack_b0 = 0;
        uStack_a9 = 0;
        local_a0 = 0;
        uStack_98 = 0;
        local_90 = (long *)0x0;
        FUN_10017869a(&local_e8);
        if (local_90 != (long *)0x0) {
          LOCK();
          plVar1 = local_90 + 1;
          lVar4 = *plVar1;
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (lVar4 == 0) {
            (**(code **)(*local_90 + 0x10))(local_90);
            std::__shared_weak_count::__release_weak();
          }
        }
        if (local_c8 == &local_e8) {
          lVar4 = 0x20;
LAB_10013b072:
          (**(code **)((long)*local_c8 + lVar4))();
        }
        else {
          lVar4 = 0x28;
          if (local_c8 != (long **)0x0) goto LAB_10013b072;
        }
        plVar1 = (long *)CONCAT44(uStack_fc,uStack_100);
        if (plVar1 != (long *)0x0) {
          LOCK();
          plVar2 = plVar1 + 1;
          lVar4 = *plVar2;
          *plVar2 = *plVar2 + -1;
          UNLOCK();
          if (lVar4 == 0) {
            (**(code **)(*plVar1 + 0x10))(plVar1);
            std::__shared_weak_count::__release_weak();
          }
        }
        if (local_118 == local_138) {
          lVar4 = 0x20;
        }
        else {
          lVar4 = 0x28;
          if (local_118 == (long *)0x0) goto LAB_10013b0d1;
        }
        (**(code **)(*local_118 + lVar4))();
      }
LAB_10013b0d1:
      lVar5 = lVar5 + 0x40;
    } while (lVar5 != local_150);
  }
  local_e8 = &local_180;
  FUN_10012c5c2();
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

