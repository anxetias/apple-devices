// name: FUN_1002c216c
// address: 1002c216c

bool FUN_1002c216c(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  char cVar1;
  short sVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  long local_68 [4];
  long *local_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1001b7a44(local_98);
  FUN_1001b7a44(local_a8);
  cVar1 = FUN_1001b8428(param_4);
  if (cVar1 == '\0') {
    uVar3 = FUN_100416f20(param_2,0x10cc020a);
    FUN_1001b7eb0(local_78,uVar3);
    FUN_1001bbf68(local_88,local_78,param_4,param_3);
    FUN_1001b80b2(local_98,local_88);
    FUN_1001b7a50(local_88);
    FUN_1001b7a50(local_78);
    uVar3 = 0x10cc020c;
  }
  else {
    uVar3 = FUN_100416f20(param_2,0x10cc020b);
    FUN_1001b7eb0(local_78,uVar3);
    FUN_1001bbec4(local_88,local_78,param_3);
    FUN_1001b80b2(local_98,local_88);
    FUN_1001b7a50(local_88);
    FUN_1001b7a50(local_78);
    uVar3 = 0x10cc020d;
  }
  uVar3 = FUN_100416f20(param_2,uVar3);
  FUN_1001b81f2(local_a8,uVar3);
  if (param_5 == 0) {
    FUN_1001c334a(local_88,0x5db3000f);
    FUN_1001c334a(local_78,0x5db30004);
    local_48 = (long *)0x0;
    sVar2 = FUN_10044fcd7(local_98,local_a8,local_88,local_78,param_1,local_68);
    if (local_48 == local_68) {
      lVar4 = 0x20;
    }
    else {
      lVar4 = 0x28;
      if (local_48 == (long *)0x0) goto LAB_1002c235c;
    }
    (**(code **)(*local_48 + lVar4))();
  }
  else {
    FUN_1001c334a(local_88,0x5db3000f);
    FUN_1001c334a(local_78,0x5db30004);
    FUN_1001c334a(local_b8,0x5db30014);
    sVar2 = FUN_10044ff08(local_98,local_a8,local_88,local_78,local_b8,param_5,param_1,0);
    FUN_1001b7a50(local_b8);
  }
LAB_1002c235c:
  FUN_1001b7a50(local_78);
  FUN_1001b7a50(local_88);
  FUN_1001b7a50(local_a8);
  FUN_1001b7a50(local_98);
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return sVar2 == 1;
}

