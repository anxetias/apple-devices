// name: FUN_1002509f7
// address: 1002509f7

bool FUN_1002509f7(undefined8 param_1,undefined4 param_2)

{
  short sVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  long local_58 [4];
  long *local_38;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1001b7a44(local_98);
  FUN_1001b7a44(local_88);
  FUN_1001b7a44(local_78);
  uVar2 = FUN_100416f20(param_2,0x10cc0249);
  FUN_1001b81f2(local_98,uVar2);
  FUN_1001c334a(local_68,0x10cf0059);
  FUN_1001b80b2(local_88,local_68);
  FUN_1001b7a50(local_68);
  FUN_1001c334a(local_68,0x10cf0018);
  FUN_1001b80b2(local_78,local_68);
  FUN_1001b7a50(local_68);
  FUN_1001c334a(local_68,0x5db30004);
  local_38 = (long *)0x0;
  sVar1 = FUN_10044fcd7(local_98,local_88,local_78,local_68,param_1,local_58);
  if (local_38 == local_58) {
    lVar3 = 0x20;
  }
  else {
    lVar3 = 0x28;
    if (local_38 == (long *)0x0) goto LAB_100250af5;
  }
  (**(code **)(*local_38 + lVar3))();
LAB_100250af5:
  FUN_1001b7a50(local_68);
  FUN_1001b7a50(local_78);
  FUN_1001b7a50(local_88);
  FUN_1001b7a50(local_98);
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_20) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return sVar1 == 1;
}

