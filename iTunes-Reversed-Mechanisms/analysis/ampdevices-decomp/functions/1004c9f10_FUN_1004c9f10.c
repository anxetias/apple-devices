// name: FUN_1004c9f10
// address: 1004c9f10

long * FUN_1004c9f10(long *param_1)

{
  long lVar1;
  char cVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  long *plStack_b0;
  undefined1 local_a8 [16];
  undefined1 local_98 [8];
  long *local_90;
  undefined8 local_88;
  long *local_80;
  long *local_78;
  undefined8 local_68;
  undefined4 local_60;
  undefined2 uStack_5c;
  undefined2 uStack_5a;
  undefined6 uStack_58;
  undefined2 uStack_52;
  long *local_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  *param_1 = 0;
  param_1[1] = 0;
  local_78 = param_1;
  puVar3 = operator_new(0x80,(nothrow_t *)PTR_nothrow_10082c970);
  if (puVar3 != (undefined8 *)0x0) {
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = &PTR_FUN_10085e3b0;
    *(undefined1 *)(puVar3 + 3) = 0;
    FUN_10032f0f2(puVar3 + 4);
    FUN_10032f0f2(puVar3 + 6);
    FUN_10032f0f2(puVar3 + 8);
    puVar3[0xc] = 0;
    puVar3[0xd] = 0;
    puVar3[10] = 0;
    puVar3[0xb] = 0;
    FUN_10032f0f2(puVar3 + 0xe);
  }
  local_68._0_4_ = SUB84(puVar3,0);
  local_68._4_4_ = (undefined4)((ulong)puVar3 >> 0x20);
  plVar4 = operator_new(0x20);
  plVar4[1] = 0;
  plVar4[2] = 0;
  *plVar4 = (long)&PTR_FUN_10085e450;
  plVar4[3] = (long)puVar3;
  local_60 = SUB84(plVar4,0);
  uStack_5c = (undefined2)((ulong)plVar4 >> 0x20);
  uStack_5a = (undefined2)((ulong)plVar4 >> 0x30);
  if (puVar3 != (undefined8 *)0x0) {
    if (puVar3[2] == 0) {
      LOCK();
      plVar4[1] = plVar4[1] + 1;
      UNLOCK();
      LOCK();
      plVar4[2] = plVar4[2] + 1;
      UNLOCK();
      puVar3[1] = puVar3;
      puVar3[2] = plVar4;
    }
    else {
      if (*(long *)(puVar3[2] + 8) != -1) goto LAB_1004ca040;
      LOCK();
      plVar4[1] = plVar4[1] + 1;
      UNLOCK();
      LOCK();
      plVar4[2] = plVar4[2] + 1;
      UNLOCK();
      puVar3[1] = puVar3;
      puVar3[2] = plVar4;
      std::__shared_weak_count::__release_weak();
    }
    plVar5 = plVar4 + 1;
    LOCK();
    lVar1 = *plVar5;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (lVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      std::__shared_weak_count::__release_weak();
    }
  }
LAB_1004ca040:
  FUN_100217418(local_78,&local_68);
  plVar4 = (long *)CONCAT26(uStack_5a,CONCAT24(uStack_5c,local_60));
  if (plVar4 != (long *)0x0) {
    LOCK();
    plVar5 = plVar4 + 1;
    lVar1 = *plVar5;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (lVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      std::__shared_weak_count::__release_weak();
    }
  }
  lVar1 = *local_78;
  if (lVar1 == 0) {
    uVar6 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar6,0x10);
    if (cVar2 != '\0') {
      local_68._0_4_ = 0x8220202;
      local_68._4_4_ = 0x7a0a90;
      local_60 = 1;
      uStack_5c = 0x822;
      uStack_5a = 0xf62;
      uStack_58 = 0x1007b;
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_68,0x16);
    }
    FUN_1001782e9(0,0);
    goto LAB_1004ca2b5;
  }
  *(undefined1 *)(lVar1 + 0x18) = 1;
  FUN_10012bbaa(local_98);
  cVar2 = FUN_10012bbe4(local_98);
  if (cVar2 == '\0') {
    FUN_10012bbaa(&local_88);
    FUN_1004ca604(&local_c8,*(undefined8 *)(lVar1 + 8),*(undefined8 *)(lVar1 + 0x10));
    local_68._0_4_ = 0x85e4a0;
    local_68._4_4_ = 1;
    local_60 = (undefined4)local_c8;
    uStack_5c = (undefined2)((ulong)local_c8 >> 0x20);
    uStack_5a = (undefined2)((ulong)local_c8 >> 0x30);
    uStack_58 = (undefined6)uStack_c0;
    uStack_52 = (undefined2)((ulong)uStack_c0 >> 0x30);
    local_c8 = 0;
    uStack_c0 = 0;
    local_48 = &local_68;
    FUN_10012bbf4(&local_88,&local_68,1);
    if (local_48 == &local_68) {
      lVar7 = 0x20;
LAB_1004ca154:
      (**(code **)(*local_48 + lVar7))();
    }
    else {
      lVar7 = 0x28;
      if (local_48 != (long *)0x0) goto LAB_1004ca154;
    }
    if (local_80 != (long *)0x0) {
      LOCK();
      plVar4 = local_80 + 1;
      lVar7 = *plVar4;
      *plVar4 = *plVar4 + -1;
      UNLOCK();
      if (lVar7 == 0) {
        (**(code **)(*local_80 + 0x10))(local_80);
        std::__shared_weak_count::__release_weak();
      }
    }
  }
  else {
    FUN_1004ca448(lVar1,local_98);
  }
  FUN_1001b5f9c(&local_68);
  lVar7 = CONCAT44(local_68._4_4_,(undefined4)local_68);
  if (lVar7 != 0) {
    if (*(long *)(lVar1 + 0x10) == 0) {
LAB_1004ca32e:
                    /* WARNING: Subroutine does not return */
      FUN_10013bd04();
    }
    uVar6 = *(undefined8 *)(lVar1 + 8);
    local_80 = (long *)std::__shared_weak_count::lock();
    if (local_80 == (long *)0x0) goto LAB_1004ca32e;
    local_b8 = 0;
    plStack_b0 = (long *)0x0;
    local_88 = uVar6;
    FUN_1001b7b04(local_a8,"StoreServicesNotifications.BagChanged");
    FUN_1001b62e2(lVar7,&local_88,local_a8);
    FUN_1001b7a50(local_a8);
    if (local_80 != (long *)0x0) {
      LOCK();
      plVar4 = local_80 + 1;
      lVar1 = *plVar4;
      *plVar4 = *plVar4 + -1;
      UNLOCK();
      if (lVar1 == 0) {
        (**(code **)(*local_80 + 0x10))(local_80);
        std::__shared_weak_count::__release_weak();
      }
    }
    if (plStack_b0 != (long *)0x0) {
      LOCK();
      plVar4 = plStack_b0 + 1;
      lVar1 = *plVar4;
      *plVar4 = *plVar4 + -1;
      UNLOCK();
      if (lVar1 == 0) {
        (**(code **)(*plStack_b0 + 0x10))(plStack_b0);
        std::__shared_weak_count::__release_weak();
      }
    }
  }
  plVar4 = (long *)CONCAT26(uStack_5a,CONCAT24(uStack_5c,local_60));
  if (plVar4 != (long *)0x0) {
    LOCK();
    plVar5 = plVar4 + 1;
    lVar1 = *plVar5;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (lVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_90 != (long *)0x0) {
    LOCK();
    plVar4 = local_90 + 1;
    lVar1 = *plVar4;
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (lVar1 == 0) {
      (**(code **)(*local_90 + 0x10))(local_90);
      std::__shared_weak_count::__release_weak();
    }
  }
LAB_1004ca2b5:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return local_78;
}

