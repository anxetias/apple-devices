// name: FUN_10044db6c
// address: 10044db6c

void FUN_10044db6c(long param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  bool bVar2;
  undefined8 uVar3;
  char cVar4;
  undefined4 uVar5;
  long *plVar6;
  long lVar7;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined2 local_50;
  undefined4 local_4e;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == 0) {
    uVar5 = 0;
  }
  else {
    if (DAT_1008c7d20 != -1) {
      _dispatch_once(&DAT_1008c7d20,&PTR___NSConcreteGlobalBlock_100870418);
    }
    uVar3 = DAT_1008c7d18;
    cVar4 = _os_log_type_enabled(DAT_1008c7d18,0x10);
    if (cVar4 != '\0') {
      local_48 = 0x8400102;
      uStack_44 = (undefined4)param_2;
      uStack_40 = (undefined4)((ulong)param_2 >> 0x20);
      __os_log_impl(0x100000000,uVar3,0x10,"**ERROR**: getDomainInfo: failed! error:%@",&local_48,
                    0xc);
    }
    uVar5 = FUN_10044bbe0(param_2);
  }
  local_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  bVar2 = true;
  if (*(long *)(param_1 + 0x28) == 0) {
LAB_10044dc7e:
    lVar7 = 0;
    plVar6 = (long *)0x0;
LAB_10044dc83:
    if (DAT_1008c7d20 != -1) {
      _dispatch_once(&DAT_1008c7d20,&PTR___NSConcreteGlobalBlock_100870418);
    }
    uVar3 = DAT_1008c7d18;
    cVar4 = _os_log_type_enabled(DAT_1008c7d18,0x10);
    if (cVar4 != '\0') {
      local_54 = 0x59;
      if (bVar2) {
        local_54 = 0x4e;
        local_4e = 0x4e;
      }
      else {
        local_4e = 0x59;
        if (*(long *)(lVar7 + 0x120) == 0) {
          local_4e = 0x4e;
        }
      }
      local_58 = 0x4000200;
      local_50 = 0x400;
      __os_log_impl(0x100000000,uVar3,0x10,
                    "**WARNING**: getDomainInfo: client gone or no callback! client:%c callback:%c",
                    &local_58,0xe);
    }
    if (plVar6 == (long *)0x0) goto LAB_10044dd30;
  }
  else {
    plVar6 = (long *)std::__shared_weak_count::lock();
    uStack_40 = SUB84(plVar6,0);
    uStack_3c = (undefined4)((ulong)plVar6 >> 0x20);
    if (plVar6 == (long *)0x0) goto LAB_10044dc7e;
    lVar7 = *(long *)(param_1 + 0x20);
    local_48 = (undefined4)lVar7;
    uStack_44 = (undefined4)((ulong)lVar7 >> 0x20);
    if (lVar7 == 0) {
      lVar7 = 0;
      goto LAB_10044dc83;
    }
    if (*(long *)(lVar7 + 0x120) == 0) {
      bVar2 = false;
      goto LAB_10044dc83;
    }
    FUN_1001a8d64(&local_58,param_3);
    plVar1 = *(long **)(lVar7 + 0x120);
    local_5c = uVar5;
    if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_10016bf14();
    }
    (**(code **)(*plVar1 + 0x30))(plVar1,&local_5c,&local_58);
    FUN_1001a8fac(&local_58);
  }
  LOCK();
  plVar1 = plVar6 + 1;
  lVar7 = *plVar1;
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (lVar7 == 0) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
    std::__shared_weak_count::__release_weak();
  }
LAB_10044dd30:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

