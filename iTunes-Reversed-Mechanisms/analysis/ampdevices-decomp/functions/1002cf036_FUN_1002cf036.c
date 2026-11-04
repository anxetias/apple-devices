// name: FUN_1002cf036
// address: 1002cf036

void FUN_1002cf036(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  char local_68 [72];
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar1 = FUN_1001c15fb();
  FUN_1001b7a5c(local_98,uVar1);
  FUN_1001c1703(local_88);
  uVar1 = FUN_1001b83ae(local_98);
  uVar2 = FUN_1001b83ae(local_88);
  _snprintf(local_68,0x40,"%s %s",uVar1,uVar2);
  FUN_1001b7b04(local_78,local_68);
  FUN_1001b80b2(&DAT_1008bbf10,local_78);
  FUN_1001b7a50(local_78);
  FUN_1001b7a50(local_88);
  FUN_1001b7a50(local_98);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

