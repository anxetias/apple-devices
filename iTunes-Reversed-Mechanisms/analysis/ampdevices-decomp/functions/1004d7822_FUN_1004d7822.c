// name: FUN_1004d7822
// address: 1004d7822

void FUN_1004d7822(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  long lVar2;
  undefined ***pppuVar3;
  undefined **ppuVar4;
  undefined8 local_128;
  undefined8 local_120;
  undefined **local_118 [2];
  undefined **local_108;
  undefined8 uStack_100;
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined **local_c8;
  undefined1 *local_c0;
  undefined1 *local_b8;
  undefined ***local_a8;
  long local_98;
  undefined8 local_90;
  long *local_78;
  undefined **local_68;
  undefined8 local_60;
  undefined ***local_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1004d647e(&local_98);
  FUN_1001a7b90(&local_c8,&PTR_cf_blacklistedFields_10085ea60);
  FUN_10032f0f2(local_118);
  FUN_10032f0f2(&local_68);
  cVar1 = FUN_1001a90d0(&local_98,&local_c8,&local_68);
  pppuVar3 = local_118;
  if (cVar1 != '\0') {
    pppuVar3 = &local_68;
  }
  FUN_1001a7a9e(local_e8,pppuVar3);
  FUN_1001a7a94(&local_68);
  FUN_1001a7a94(local_118);
  FUN_1001ab240(&local_c8);
  FUN_1001a8fac(&local_98);
  local_68 = &PTR_FUN_10085ead8;
  local_60 = param_2;
  local_48 = &local_68;
  local_90 = FUN_1001a7bfa(local_e8);
  local_98 = 0;
  FUN_1001a7c48(local_e8,&local_98,&local_68);
  if (local_48 == &local_68) {
    lVar2 = 0x20;
LAB_1004d793c:
    (**(code **)((long)*local_48 + lVar2))();
  }
  else {
    lVar2 = 0x28;
    if (local_48 != (undefined ***)0x0) goto LAB_1004d793c;
  }
  FUN_1001a7b90(&local_98,&PTR_cf_location_10085e9b8);
  local_108 = (undefined **)0x0;
  uStack_100 = 0;
  FUN_10032f0f2(&local_108);
  FUN_10032f0f2(&local_68);
  cVar1 = FUN_10026326c(param_2,&local_98,&local_68);
  pppuVar3 = &local_108;
  if (cVar1 != '\0') {
    pppuVar3 = &local_68;
  }
  FUN_1001a7a9e(local_d8,pppuVar3);
  FUN_1001a7a94(&local_68);
  FUN_1001a7a94(&local_108);
  FUN_1001ab240(&local_98);
  lVar2 = FUN_1001a7bfa(local_d8);
  if (lVar2 == 0) goto LAB_1004d7b7b;
  FUN_10032f0f2(local_f8);
  local_c8 = &PTR_FUN_10085ebd8;
  local_c0 = local_e8;
  local_b8 = local_f8;
  local_a8 = &local_c8;
  local_120 = FUN_1001a7bfa(local_d8);
  local_128 = 0;
  if (local_a8 == (undefined ***)0x0) {
    local_78 = (long *)0x0;
  }
  else if (local_a8 == &local_c8) {
    local_78 = &local_98;
    (*(code *)(*local_a8)[3])(local_a8,&local_98);
  }
  else {
    local_78 = (long *)(*(code *)(*local_a8)[2])();
  }
  local_48 = (undefined ***)0x0;
  pppuVar3 = operator_new(0x40);
  *pppuVar3 = &PTR_FUN_10085eb58;
  if (local_78 == (long *)0x0) {
    ppuVar4 = (undefined **)0x0;
LAB_1004d7a8a:
    pppuVar3[6] = ppuVar4;
  }
  else {
    if (local_78 != &local_98) {
      ppuVar4 = (undefined **)(**(code **)(*local_78 + 0x10))();
      goto LAB_1004d7a8a;
    }
    pppuVar3[6] = (undefined **)(pppuVar3 + 2);
    (**(code **)(*local_78 + 0x18))();
  }
  local_48 = pppuVar3;
  FUN_1001a7c48(local_d8,&local_128,&local_68);
  if (local_48 == &local_68) {
    lVar2 = 0x20;
LAB_1004d7adb:
    (**(code **)((long)*local_48 + lVar2))();
  }
  else {
    lVar2 = 0x28;
    if (local_48 != (undefined ***)0x0) goto LAB_1004d7adb;
  }
  if (local_78 == &local_98) {
    lVar2 = 0x20;
LAB_1004d7afb:
    (**(code **)(*local_78 + lVar2))();
  }
  else {
    lVar2 = 0x28;
    if (local_78 != (long *)0x0) goto LAB_1004d7afb;
  }
  if (local_a8 == &local_c8) {
    lVar2 = 0x20;
LAB_1004d7b1e:
    (**(code **)((long)*local_a8 + lVar2))();
  }
  else {
    lVar2 = 0x28;
    if (local_a8 != (undefined ***)0x0) goto LAB_1004d7b1e;
  }
  FUN_1001a7b90(&local_68,&PTR_cf_location_10085e9b8);
  FUN_1001a7b90(&local_98,local_f8);
  FUN_1001a9eca(param_2,&local_68,&local_98);
  FUN_1001ab240(&local_98);
  FUN_1001ab240(&local_68);
  FUN_1001a7a94(local_f8);
LAB_1004d7b7b:
  FUN_1001a7a94(local_d8);
  FUN_1001a7a94(local_e8);
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

