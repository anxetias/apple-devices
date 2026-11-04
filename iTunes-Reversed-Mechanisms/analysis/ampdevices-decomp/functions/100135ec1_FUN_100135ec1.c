// name: FUN_100135ec1
// address: 100135ec1

undefined8 *
FUN_100135ec1(undefined8 *param_1,uint param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  undefined1 local_108 [16];
  undefined1 local_f8 [8];
  undefined8 local_f0;
  undefined1 local_e8;
  undefined8 local_e0;
  undefined8 *local_d8;
  undefined1 local_d0 [8];
  long local_c8 [4];
  long *local_a8;
  long local_98 [4];
  long *local_78;
  undefined1 local_68 [8];
  undefined1 local_60 [16];
  undefined1 local_50 [24];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_e0 = param_4;
  if ((param_2 & 1) == 0) {
    if ((param_2 & 2) == 0) {
      *param_1 = 0;
      goto LAB_100136164;
    }
    FUN_10028593a(local_c8,param_3);
    FUN_1001a8c36(local_d0,local_e0);
    FUN_1001b7a5c(local_108,param_5);
    FUN_1001a8c1c(local_f8,param_5 + 0x10);
    local_e8 = *(undefined1 *)(param_5 + 0x20);
    local_f0 = *(undefined8 *)(param_5 + 0x18);
    FUN_100138fee(local_98,local_c8,local_d0);
    FUN_100138a2d(param_1,local_98);
    FUN_1001a8c12(local_50);
    FUN_1001b7a50(local_60);
    FUN_1001aaad2(local_68);
    if (local_78 == local_98) {
      lVar1 = 0x20;
LAB_100136115:
      (**(code **)(*local_78 + lVar1))();
    }
    else {
      lVar1 = 0x28;
      if (local_78 != (long *)0x0) goto LAB_100136115;
    }
    FUN_1001a8c12(local_f8);
    FUN_1001b7a50(local_108);
    FUN_1001aaad2(local_d0);
    if (local_a8 == local_c8) {
      lVar1 = 0x20;
    }
    else {
joined_r0x0001001360fe:
      lVar1 = 0x28;
      if (local_a8 == (long *)0x0) goto LAB_100136164;
    }
  }
  else {
    local_d8 = param_1;
    FUN_10028593a(local_c8,param_3);
    FUN_1001a8c36(local_d0,local_e0);
    FUN_1001b7a5c(local_108,param_5);
    FUN_1001a8c1c(local_f8,param_5 + 0x10);
    local_e8 = *(undefined1 *)(param_5 + 0x20);
    local_f0 = *(undefined8 *)(param_5 + 0x18);
    FUN_100138fee(local_98,local_c8,local_d0);
    FUN_1001388b1(local_d8,local_98);
    FUN_1001a8c12(local_50);
    FUN_1001b7a50(local_60);
    FUN_1001aaad2(local_68);
    if (local_78 == local_98) {
      lVar1 = 0x20;
LAB_1001360bd:
      (**(code **)(*local_78 + lVar1))();
    }
    else {
      lVar1 = 0x28;
      if (local_78 != (long *)0x0) goto LAB_1001360bd;
    }
    FUN_1001a8c12(local_f8);
    FUN_1001b7a50(local_108);
    FUN_1001aaad2(local_d0);
    param_1 = local_d8;
    if (local_a8 != local_c8) goto joined_r0x0001001360fe;
    lVar1 = 0x20;
  }
  (**(code **)(*local_a8 + lVar1))();
LAB_100136164:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return param_1;
}

