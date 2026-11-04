// name: FUN_100135a5a
// address: 100135a5a

void FUN_100135a5a(long *param_1,long param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined1 local_c8 [16];
  future<void> local_b8 [8];
  undefined1 local_b0;
  undefined7 uStack_af;
  long *local_a8;
  undefined1 local_a0 [24];
  char local_88;
  undefined8 local_80;
  long local_78 [2];
  undefined1 local_68 [8];
  undefined8 local_60;
  long *local_58 [3];
  char local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_80 = param_3;
  std::mutex::lock();
  lVar3 = FUN_1004117e4(*param_1 + 0x68,param_2);
  lVar4 = *param_1;
  if (lVar3 != 0) {
    if (*(char *)(lVar3 + 0x48) == '\x01') {
      FUN_1001b7a5c(local_78,lVar3 + 0x20);
      FUN_1001a8c1c(local_68,lVar3 + 0x30);
      local_58[0] = (long *)CONCAT71(local_58[0]._1_7_,*(undefined1 *)(lVar3 + 0x40));
      local_60 = *(undefined8 *)(lVar3 + 0x38);
      std::mutex::unlock();
      FUN_1001aa318(&local_b0);
      FUN_100135ec1(local_b8,1,local_80,&local_b0,local_78);
      std::future<void>::~future(local_b8);
      FUN_1001aaad2(&local_b0);
      FUN_1001a8c12(local_68);
      FUN_1001b7a50(local_78);
    }
    else {
      local_78[0] = param_2;
      lVar4 = FUN_100137856(lVar4,param_2,&DAT_100712240,local_78,&local_b0);
      uVar1 = *(ulong *)(lVar4 + 0x28);
      if (uVar1 < *(ulong *)(lVar4 + 0x30)) {
        FUN_10028593a(uVar1,local_80);
        lVar3 = uVar1 + 0x30;
        *(long *)(lVar4 + 0x28) = lVar3;
      }
      else {
        lVar3 = FUN_100136562(lVar4 + 0x20,local_80);
      }
      *(long *)(lVar4 + 0x28) = lVar3;
      std::mutex::unlock();
    }
    goto LAB_100135d62;
  }
  local_b0 = 0;
  local_88 = '\0';
  FUN_1001364a8(local_78,param_2);
  FUN_10013736e(lVar4 + 0x68,local_78);
  if (local_40 == '\x01') {
    FUN_1001a8c12(local_58);
    FUN_1001b7a50(local_68);
  }
  FUN_1001b7a50(local_78);
  if (local_88 == '\x01') {
    FUN_1001a8c12(local_a0);
    FUN_1001b7a50(&local_b0);
  }
  local_78[0] = param_2;
  lVar4 = FUN_100137856(*param_1,param_2,&DAT_100712240,local_78,&local_b0);
  uVar1 = *(ulong *)(lVar4 + 0x28);
  if (uVar1 < *(ulong *)(lVar4 + 0x30)) {
    FUN_10028593a(uVar1,local_80);
    lVar3 = uVar1 + 0x30;
    *(long *)(lVar4 + 0x28) = lVar3;
  }
  else {
    lVar3 = FUN_100136562(lVar4 + 0x20,local_80);
  }
  *(long *)(lVar4 + 0x28) = lVar3;
  std::mutex::unlock();
  FUN_100137d66(&local_b0,param_2);
  uVar2 = CONCAT71(uStack_af,local_b0);
  FUN_1001b7a5c(local_c8,param_2);
  local_58[0] = (long *)0x0;
  plVar5 = operator_new(0x18);
  *plVar5 = (long)&PTR_FUN_100839968;
  FUN_1001b7a5c(plVar5 + 1,local_c8);
  local_58[0] = plVar5;
  FUN_100135776(uVar2,local_78);
  if (local_58[0] == local_78) {
    lVar4 = 0x20;
LAB_100135d15:
    (**(code **)(*local_58[0] + lVar4))();
  }
  else {
    lVar4 = 0x28;
    if (local_58[0] != (long *)0x0) goto LAB_100135d15;
  }
  FUN_1001b7a50(local_c8);
  FUN_10014105c(CONCAT71(uStack_af,local_b0));
  if (local_a8 != (long *)0x0) {
    LOCK();
    plVar5 = local_a8 + 1;
    lVar4 = *plVar5;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (lVar4 == 0) {
      (**(code **)(*local_a8 + 0x10))(local_a8);
      std::__shared_weak_count::__release_weak();
    }
  }
LAB_100135d62:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

