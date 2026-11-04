// name: FUN_10044d994
// address: 10044d994

void FUN_10044d994(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  char cVar4;
  undefined *local_78;
  undefined8 local_70;
  code *local_68;
  undefined *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_10044db08(&local_48,param_1);
  if (DAT_1008c7d20 != -1) {
    _dispatch_once(&DAT_1008c7d20,&PTR___NSConcreteGlobalBlock_100870418);
  }
  uVar1 = DAT_1008c7d18;
  cVar4 = _os_log_type_enabled(DAT_1008c7d18,0);
  if (cVar4 != '\0') {
    local_34 = (*(code *)PTR__objc_msgSend_10082c770)
                         (*(undefined8 *)(param_1 + 400),PTR_s_mediaDomains_10088d1c0);
    local_38 = 0x4000100;
    __os_log_impl(0x100000000,uVar1,0,"amplc> get domain info:%x",&local_38,8);
  }
  uVar1 = *(undefined8 *)(param_1 + 400);
  uVar2 = *param_2;
  local_78 = PTR___NSConcreteStackBlock_10082caf0;
  local_70 = 0xc6000000;
  local_68 = FUN_10044db6c;
  local_60 = &DAT_100859708;
  lVar3 = CONCAT44(uStack_3c,uStack_40);
  local_58 = local_48;
  uStack_54 = uStack_44;
  uStack_50 = uStack_40;
  uStack_4c = uStack_3c;
  if (lVar3 != 0) {
    LOCK();
    *(long *)(lVar3 + 0x10) = *(long *)(lVar3 + 0x10) + 1;
    UNLOCK();
  }
  (*(code *)PTR__objc_msgSend_10082c770)
            (uVar1,PTR_s_getDomainInfo_withReply__10088d1c8,uVar2,&local_78);
  if (CONCAT44(uStack_4c,uStack_50) != 0) {
    std::__shared_weak_count::__release_weak();
  }
  if (lVar3 != 0) {
    std::__shared_weak_count::__release_weak();
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

