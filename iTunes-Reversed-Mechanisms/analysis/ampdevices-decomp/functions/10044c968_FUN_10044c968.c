// name: FUN_10044c968
// address: 10044c968

void FUN_10044c968(long param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  char cVar5;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined2 uStack_3c;
  ushort uStack_3a;
  undefined2 uStack_38;
  undefined2 local_36;
  undefined4 local_34;
  undefined2 local_30;
  undefined4 local_2e;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (DAT_1008c7d20 != -1) {
    _dispatch_once(&DAT_1008c7d20,&PTR___NSConcreteGlobalBlock_100870418);
  }
  uVar4 = DAT_1008c7d18;
  cVar5 = _os_log_type_enabled(DAT_1008c7d18,0);
  if (cVar5 != '\0') {
    local_34 = *(undefined4 *)(param_1 + 0x38);
    local_2e = 0x4e;
    if (*(char *)(param_1 + 0x3d) != '\0') {
      local_2e = 0x59;
    }
    local_48 = 0x8000400;
    uStack_44 = (undefined4)*(undefined8 *)(param_1 + 0x30);
    uStack_40 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x30) >> 0x20);
    uStack_3c = 0x400;
    uStack_3a = (ushort)*(byte *)(param_1 + 0x3c);
    uStack_38 = 0;
    local_36 = 0x400;
    local_30 = 0x400;
    __os_log_impl(0x100000000,uVar4,0,
                  "cec> notifying cloud edit state changed. cmdID:%llu newState:%d finalStatus:%d options:%c"
                  ,&local_48,0x1e);
  }
  if (*(ID *)(param_1 + 0x20) == 0) {
    local_48 = 0;
    uStack_44 = 0;
    uStack_40 = 0;
    uStack_3c = 0;
    uStack_3a = 0;
  }
  else {
    _objc_msgSend_stret((undefined *)&local_48,*(ID *)(param_1 + 0x20),PTR_s_getDelegate_10088d168);
    if (CONCAT44(uStack_44,local_48) != 0) {
      FUN_10032f0f2(local_58);
      if (*(long *)(param_1 + 0x28) != 0) {
        FUN_1001a78e6(local_68,*(long *)(param_1 + 0x28),1);
        FUN_1001a7b1c(local_58,local_68);
        FUN_1001a7a94(local_68);
      }
      (**(code **)(*(long *)CONCAT44(uStack_44,local_48) + 0x50))
                ((long *)CONCAT44(uStack_44,local_48),*(undefined8 *)(param_1 + 0x30),
                 *(undefined1 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x38),
                 *(undefined1 *)(param_1 + 0x3d),local_58);
      FUN_1001a7a94(local_58);
    }
  }
  plVar3 = (long *)CONCAT26(uStack_3a,CONCAT24(uStack_3c,uStack_40));
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

