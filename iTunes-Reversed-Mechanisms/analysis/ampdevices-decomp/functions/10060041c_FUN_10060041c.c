// name: FUN_10060041c
// address: 10060041c

undefined8 FUN_10060041c(undefined8 param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*param_2 != 0) {
    lVar4 = ___dynamic_cast(*param_2,&PTR_DAT_10083e678,&PTR_DAT_100870748,0);
    if (lVar4 != 0) {
      plVar2 = (long *)param_2[1];
      uVar5 = 0xfffffffc;
      if (plVar2 != (long *)0x0) {
        LOCK();
        plVar2[1] = plVar2[1] + 1;
        UNLOCK();
        LOCK();
        plVar1 = plVar2 + 1;
        lVar4 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar4 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
          std::__shared_weak_count::__release_weak();
        }
      }
      goto LAB_1006004c8;
    }
  }
  uVar6 = 0;
  uVar7 = 0;
  uVar5 = FUN_1001cc310();
  cVar3 = _os_log_type_enabled(uVar5,0x10);
  if (cVar3 != '\0') {
    local_38 = 0x8220202;
    local_34 = "Assertion failure";
    local_2c = 0x822;
    local_2a = "fcData != nullptr";
    __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_38,0x16,uVar6,uVar7
                       );
  }
  uVar5 = 0xffffffce;
  FUN_1001782e9(0,0);
LAB_1006004c8:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

