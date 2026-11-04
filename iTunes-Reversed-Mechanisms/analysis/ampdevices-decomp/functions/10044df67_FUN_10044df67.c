// name: FUN_10044df67
// address: 10044df67

void FUN_10044df67(long param_1,long param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  undefined8 uVar2;
  char cVar3;
  undefined *local_98;
  undefined8 local_90;
  code *local_88;
  undefined *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  undefined4 local_48;
  long local_44;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == 0) {
    local_58 = 0;
    local_70 = param_5;
  }
  else {
    local_50 = param_5;
    if (DAT_1008c7d20 != -1) {
      _dispatch_once(&DAT_1008c7d20,&PTR___NSConcreteGlobalBlock_100870418);
    }
    uVar2 = DAT_1008c7d18;
    cVar3 = _os_log_type_enabled(DAT_1008c7d18,0x10);
    if (cVar3 != '\0') {
      local_48 = 0x8400102;
      local_44 = param_2;
      __os_log_impl(0x100000000,uVar2,0x10,"**ERROR**: openDomainsForClient: failed! error:%@",
                    &local_48,0xc);
    }
    local_58 = FUN_10044bbe0(param_2);
    local_70 = local_50;
  }
  local_98 = PTR___NSConcreteStackBlock_10082caf0;
  local_90 = 0xc6000000;
  local_88 = FUN_10044e0b9;
  local_80 = &DAT_100859738;
  local_68 = *(undefined4 *)(param_1 + 0x20);
  uStack_64 = *(undefined4 *)(param_1 + 0x24);
  uStack_60 = *(undefined4 *)(param_1 + 0x28);
  uStack_5c = *(undefined4 *)(param_1 + 0x2c);
  if (*(long *)(param_1 + 0x28) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(param_1 + 0x28) + 0x10);
    *plVar1 = *plVar1 + 1;
    UNLOCK();
  }
  local_78 = param_3;
  local_54 = param_4;
  _dispatch_async(PTR___dispatch_main_q_10082cb60,&local_98);
  if (CONCAT44(uStack_5c,uStack_60) != 0) {
    std::__shared_weak_count::__release_weak();
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

