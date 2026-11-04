// name: FUN_10025364a
// address: 10025364a

bool FUN_10025364a(undefined8 param_1,undefined4 param_2)

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
  uVar2 = FUN_100416f20(param_2,0x10cc0135);
  FUN_1001b7eb0(local_98,uVar2);
  FUN_1001c334a(local_88,0x10cf0059);
  FUN_1001c334a(local_78,0x10cf0018);
  FUN_1001c334a(local_68,0x5db30004);
  local_38 = (long *)0x0;
  sVar1 = FUN_10044fcd7(local_98,local_88,local_78,local_68,param_1,local_58);
  if (local_38 == local_58) {
    lVar3 = 0x20;
  }
  else {
    lVar3 = 0x28;
    if (local_38 == (long *)0x0) goto LAB_1002536fa;
  }
  (**(code **)(*local_38 + lVar3))();
LAB_1002536fa:
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

