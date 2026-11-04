// name: FUN_100238484
// address: 100238484

void FUN_100238484(long param_1,char param_2)

{
  undefined4 uVar1;
  long *plVar2;
  char cVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 local_f0;
  long local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_ac;
  long *local_a8;
  long *plStack_a0;
  undefined4 local_98;
  undefined8 local_94;
  undefined2 local_8c;
  undefined8 local_8a;
  undefined1 local_57;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar4 = _objc_autoreleasePoolPush();
  if (*(int *)(param_1 + 0xa0) == -1) {
    if (*(long *)(param_1 + 0xa8) == 0) {
LAB_1002387cd:
      uVar6 = FUN_100235e52();
      uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
      cVar3 = _os_log_type_enabled(uVar6,0x10);
      if (cVar3 != '\0') {
        local_94 = FUN_1001b83ae(param_1 + 0x28);
        local_98 = 0x8220102;
        __os_log_impl(0x100000000,uVar6,0x10,
                      "**ERROR**: CommandAction has no ActionCommandData! ccp:%{public}s",&local_98,
                      0xc);
      }
      (*(code *)PTR__objc_release_10082c7b0)(uVar6);
      goto LAB_100238836;
    }
    lVar8 = ___dynamic_cast(*(long *)(param_1 + 0xa8),&PTR_DAT_10083e678,&PTR_DAT_10083e858,0);
    if (lVar8 == 0) goto LAB_1002387cd;
    plVar5 = *(long **)(param_1 + 0xb0);
    if (plVar5 != (long *)0x0) {
      LOCK();
      plVar5[1] = plVar5[1] + 1;
      UNLOCK();
    }
    if (*(long **)(lVar8 + 0x40) == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_10016bf14();
    }
    (**(code **)(**(long **)(lVar8 + 0x40) + 0x30))();
    if (plVar5 == (long *)0x0) goto LAB_100238836;
    LOCK();
    plVar2 = plVar5 + 1;
    lVar8 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar8 != 0) goto LAB_100238836;
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
  else {
    local_a8 = (long *)0x0;
    plStack_a0 = (long *)0x0;
    if (*(long *)(param_1 + 0x20) == 0) {
LAB_10023869a:
      plVar5 = (long *)0x0;
LAB_10023869d:
      uVar6 = FUN_100235e52();
      uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
      cVar3 = _os_log_type_enabled(uVar6,0x10);
      if (cVar3 != '\0') {
        uVar7 = FUN_100237792(param_1,*(undefined4 *)(param_1 + 0xa0));
        local_8a = FUN_1001b83ae(param_1 + 0x28);
        local_98 = 0x8220202;
        local_8c = 0x822;
        local_94 = uVar7;
        __os_log_impl(0x100000000,uVar6,0x10,
                      "**ERROR**: Command(%{public}s) no execution delegate! ccp:%{public}s",
                      &local_98,0x16);
      }
      (*(code *)PTR__objc_release_10082c7b0)(uVar6);
LAB_100238723:
      if (plVar5 == (long *)0x0) goto LAB_100238836;
    }
    else {
      plVar5 = (long *)std::__shared_weak_count::lock();
      plStack_a0 = plVar5;
      if (plVar5 == (long *)0x0) goto LAB_10023869a;
      plVar2 = *(long **)(param_1 + 0x18);
      local_a8 = plVar2;
      if (plVar2 == (long *)0x0) goto LAB_10023869d;
      if ((*(int *)(param_1 + 0xfc) != 0) && (*(int *)(param_1 + 0xfc) != 5)) {
        uVar6 = FUN_100235e52();
        uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
        cVar3 = _os_log_type_enabled(uVar6,1);
        if (cVar3 != '\0') {
          local_e0 = FUN_100237792(param_1,*(undefined4 *)(param_1 + 0xa0));
          local_8a = FUN_1001b83ae(param_1 + 0x28);
          local_98 = 0x8220202;
          local_94 = local_e0;
          local_8c = 0x822;
          __os_log_impl(0x100000000,uVar6,1,"Starting executing (%{public}s command. ccp:%{public}s"
                        ,&local_98,0x16);
        }
        (*(code *)PTR__objc_release_10082c7b0)(uVar6);
        uVar1 = *(undefined4 *)(param_1 + 0xa0);
        local_d8 = *(undefined4 *)(param_1 + 0xa8);
        uStack_d4 = *(undefined4 *)(param_1 + 0xac);
        uStack_d0 = *(undefined4 *)(param_1 + 0xb0);
        uStack_cc = *(undefined4 *)(param_1 + 0xb4);
        if (*(long *)(param_1 + 0xb0) != 0) {
          LOCK();
          plVar5 = (long *)(*(long *)(param_1 + 0xb0) + 8);
          *plVar5 = *plVar5 + 1;
          UNLOCK();
        }
        local_ac = (**(code **)*plVar2)(plVar2,uVar1,&local_d8);
        plVar5 = (long *)CONCAT44(uStack_cc,uStack_d0);
        if (plVar5 != (long *)0x0) {
          LOCK();
          plVar2 = plVar5 + 1;
          lVar8 = *plVar2;
          *plVar2 = *plVar2 + -1;
          UNLOCK();
          if (lVar8 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
            std::__shared_weak_count::__release_weak();
          }
        }
        if (((*(int *)(param_1 + 0xfc) != 0) && (*(int *)(param_1 + 0xfc) != 5)) &&
           ((*(byte *)(param_1 + 0xbc) & 0x40) == 0)) {
          if (param_2 == '\0') {
            if (*(long *)(param_1 + 0x10) == 0) {
LAB_10023890e:
                    /* WARNING: Subroutine does not return */
              FUN_10013bd04();
            }
            uVar6 = *(undefined8 *)(param_1 + 8);
            local_e8 = std::__shared_weak_count::lock();
            if (local_e8 == 0) goto LAB_10023890e;
            local_f0 = uVar6;
            FUN_100239138(&local_98,FUN_100238264,0,&local_f0,&local_a8,&local_ac);
            FUN_100205d70(&local_f0);
            if ((*(byte *)(param_1 + 0xbc) & 0x80) != 0) {
              local_57 = 1;
            }
            FUN_100237e8a(param_1,&local_98);
            FUN_100133f06(&local_98);
          }
          else {
            uVar1 = *(undefined4 *)(param_1 + 0xa0);
            local_c8 = *(undefined4 *)(param_1 + 0xa8);
            uStack_c4 = *(undefined4 *)(param_1 + 0xac);
            uStack_c0 = *(undefined4 *)(param_1 + 0xb0);
            uStack_bc = *(undefined4 *)(param_1 + 0xb4);
            if (*(long *)(param_1 + 0xb0) != 0) {
              LOCK();
              plVar5 = (long *)(*(long *)(param_1 + 0xb0) + 8);
              *plVar5 = *plVar5 + 1;
              UNLOCK();
            }
            (**(code **)(*local_a8 + 8))(local_a8,uVar1,&local_c8,local_ac);
            FUN_100205d70(&local_c8);
          }
        }
        (**(code **)(*local_a8 + 0x18))();
        plVar5 = plStack_a0;
        goto LAB_100238723;
      }
    }
    LOCK();
    plVar2 = plVar5 + 1;
    lVar8 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar8 != 0) goto LAB_100238836;
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
  std::__shared_weak_count::__release_weak();
LAB_100238836:
  _objc_autoreleasePoolPop(uVar4);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

