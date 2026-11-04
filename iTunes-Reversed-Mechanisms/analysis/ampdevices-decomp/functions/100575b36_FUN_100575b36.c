// name: FUN_100575b36
// address: 100575b36

int FUN_100575b36(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  undefined4 local_4f8;
  undefined4 uStack_4f4;
  undefined4 uStack_4f0;
  undefined4 uStack_4ec;
  long local_4e0;
  long *local_4d8;
  undefined4 local_4d0 [282];
  undefined1 local_67;
  undefined8 local_60;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined2 uStack_3c;
  undefined2 uStack_3a;
  undefined2 uStack_38;
  undefined4 uStack_36;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  ___bzero(local_4d0,0x488);
  local_4d0[0] = 0x4d425546;
  local_67 = 1;
  local_60 = param_2;
  FUN_100531852(&local_48,local_4d0);
  plVar3 = param_1 + 3;
  FUN_100217418(plVar3,&local_48);
  plVar2 = (long *)CONCAT26(uStack_3a,CONCAT24(uStack_3c,uStack_40));
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    lVar6 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar6 == 0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      std::__shared_weak_count::__release_weak();
    }
  }
  lVar6 = *plVar3;
  if (lVar6 == 0) {
    uVar7 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar7,0x10);
    if (cVar4 != '\0') {
      local_48 = 0x8220202;
      local_44 = 0x7a0a90;
      uStack_40 = 1;
      uStack_3c = 0x822;
      uStack_3a = 0x96a0;
      uStack_38 = 0x7e;
      uStack_36 = 1;
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
    iVar5 = 0x20c0;
  }
  else {
    local_4f8 = (undefined4)param_1[1];
    uStack_4f4 = *(undefined4 *)((long)param_1 + 0xc);
    uStack_4f0 = (undefined4)param_1[2];
    uStack_4ec = *(undefined4 *)((long)param_1 + 0x14);
    if (param_1[2] != 0) {
      LOCK();
      plVar2 = (long *)(param_1[2] + 8);
      *plVar2 = *plVar2 + 1;
      UNLOCK();
      lVar6 = *plVar3;
    }
    local_4d8 = (long *)param_1[4];
    if (local_4d8 != (long *)0x0) {
      LOCK();
      local_4d8[1] = local_4d8[1] + 1;
      UNLOCK();
    }
    local_4e0 = lVar6;
    iVar5 = FUN_100530ca4(&local_4f8,&local_4e0,FUN_100575de9,param_1[7]);
    if (local_4d8 != (long *)0x0) {
      LOCK();
      plVar3 = local_4d8 + 1;
      lVar6 = *plVar3;
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (lVar6 == 0) {
        (**(code **)(*local_4d8 + 0x10))(local_4d8);
        std::__shared_weak_count::__release_weak();
      }
    }
    plVar3 = (long *)CONCAT44(uStack_4ec,uStack_4f0);
    if (plVar3 != (long *)0x0) {
      LOCK();
      plVar2 = plVar3 + 1;
      lVar6 = *plVar2;
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (lVar6 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
        std::__shared_weak_count::__release_weak();
      }
    }
    if (iVar5 != -0x80) {
      if (iVar5 == 0) {
        *(undefined1 *)(param_1 + 0x1e) = 1;
        (**(code **)(*(long *)param_1[1] + 0x50))((long *)param_1[1],param_1);
        (**(code **)(*param_1 + 0x60))(param_1);
        iVar5 = 0;
      }
      else {
        uVar7 = FUN_1001cc310();
        cVar4 = _os_log_type_enabled(uVar7,0x10);
        if (cVar4 != '\0') {
          local_48 = 0x8220202;
          local_44 = 0x7a0a90;
          uStack_40 = 1;
          uStack_3c = 0x400;
          uStack_3a = (undefined2)iVar5;
          uStack_38 = (undefined2)((uint)iVar5 >> 0x10);
          __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_48,0x12);
        }
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

