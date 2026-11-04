// name: FUN_10042f925
// address: 10042f925

/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_10042f925(undefined8 param_1,long *param_2,uint *param_3)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint local_4c [2];
  char *local_44;
  undefined2 local_3c;
  int local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 != (long *)0x0) {
    LOCK();
    param_2[1] = param_2[1] + 1;
    UNLOCK();
  }
  iVar4 = FUN_10042a48e(param_1,4,local_4c);
  if (param_2 != (long *)0x0) {
    LOCK();
    plVar1 = param_2 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*param_2 + 0x10))(param_2);
      std::__shared_weak_count::__release_weak();
    }
  }
  uVar6 = 0xffffffd9;
  if (iVar4 != -0x80) {
    if (iVar4 == 0) {
      *param_3 = local_4c[0] >> 0x18 | (local_4c[0] & 0xff0000) >> 8 | (local_4c[0] & 0xff00) << 8 |
                 local_4c[0] << 0x18;
      uVar6 = 0;
    }
    else {
      uVar5 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar5,0x10);
      if (cVar3 != '\0') {
        local_4c[1] = 0x8220202;
        local_44 = "Assertion failure";
        local_3c = 0x400;
        local_3a = iVar4;
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",local_4c + 1,0x12);
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

