// name: FUN_10013459e
// address: 10013459e

void FUN_10013459e(long param_1,long *param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  long lVar6;
  undefined8 *puVar7;
  long local_a8;
  long *plStack_a0;
  undefined **local_98;
  long local_90;
  long *local_88;
  undefined ***local_78;
  undefined8 local_68;
  undefined7 uStack_60;
  undefined4 uStack_59;
  undefined8 local_50;
  undefined8 uStack_48;
  long *local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*param_2 != 0) {
    FUN_1001aab14(&local_98,param_2);
    iVar5 = FUN_1001ba026(&local_98,PTR_s_com_apple_iTunes_errors_store_re_10083b490);
    FUN_1001b7a50(&local_98);
    if ((iVar5 == 0) && (lVar6 = FUN_1001aab4a(param_2), lVar6 == 0x1d54)) {
      FUN_1001aab96(&local_a8,param_2);
      lVar6 = FUN_1001aab4a(&local_a8);
      if ((lVar6 == 0xbba) || (lVar6 = FUN_1001aab4a(&local_a8), lVar6 == 0xbb9)) {
        uVar3 = *(undefined8 *)(param_1 + 0x30);
        uVar4 = *(undefined8 *)(param_1 + 0x1c8);
        FUN_10032f0f2(&local_98,0);
        FUN_100415bb2(uVar4,uVar3,&local_98);
        FUN_10032f104(&local_98);
      }
      FUN_1001aaad2(&local_a8);
    }
    FUN_100415950(*(undefined8 *)(param_1 + 0x1c8));
    goto LAB_1001346a6;
  }
  FUN_10012d403(*(undefined8 *)(param_1 + 0x1c8),param_3);
  FUN_100415950(*(undefined8 *)(param_1 + 0x1c8));
  puVar7 = operator_new(0x30,(nothrow_t *)PTR_nothrow_10082c970);
  if (puVar7 != (undefined8 *)0x0) {
    puVar7[1] = 0;
    puVar7[2] = 0;
    *puVar7 = &PTR_FUN_100839460;
    puVar7[3] = 0;
    puVar7[4] = 0;
    *(undefined1 *)(puVar7 + 5) = 0;
  }
  FUN_100134c88(&local_a8,puVar7);
  plVar1 = plStack_a0;
  local_90 = local_a8;
  *(undefined8 *)(local_a8 + 0x18) = *(undefined8 *)(param_1 + 0x30);
  *(bool *)(local_a8 + 0x28) = *(int *)(param_1 + 0x1b0) == 0;
  local_a8 = 0;
  plStack_a0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    LOCK();
    plVar1[1] = plVar1[1] + 1;
    UNLOCK();
  }
  local_98 = &PTR_FUN_100839570;
  local_88 = plVar1;
  local_68 = 0;
  uStack_60 = 0;
  uStack_59 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_40 = (long *)0x0;
  local_78 = &local_98;
  FUN_10017869a(&local_98);
  if (local_40 != (long *)0x0) {
    LOCK();
    plVar2 = local_40 + 1;
    lVar6 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar6 == 0) {
      (**(code **)(*local_40 + 0x10))(local_40);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_78 == &local_98) {
    lVar6 = 0x20;
LAB_100134806:
    (**(code **)((long)*local_78 + lVar6))();
  }
  else {
    lVar6 = 0x28;
    if (local_78 != (undefined ***)0x0) goto LAB_100134806;
  }
  if (plVar1 != (long *)0x0) {
    LOCK();
    plVar2 = plVar1 + 1;
    lVar6 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar6 == 0) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (plStack_a0 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_a0 + 1;
    lVar6 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar6 == 0) {
      (**(code **)(*plStack_a0 + 0x10))(plStack_a0);
      std::__shared_weak_count::__release_weak();
    }
  }
LAB_1001346a6:
  if (*(long *)(param_4 + 0x20) != 0) {
    FUN_1001348e8(param_4,param_2,0,0);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

