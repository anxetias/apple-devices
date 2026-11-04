// name: FUN_1001d6e3a
// address: 1001d6e3a

int FUN_1001d6e3a(undefined8 param_1,ulong param_2)

{
  long lVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  undefined1 local_1158 [20];
  int local_1144;
  undefined8 local_1140;
  undefined4 local_1138;
  undefined8 local_1130;
  undefined8 uStack_1128;
  undefined8 local_1120;
  undefined8 uStack_1118;
  ulong local_1040;
  undefined1 local_1038 [4088];
  undefined8 uStack_40;
  long local_38;
  
  uStack_40 = 0x1001d6e52;
  auVar6 = FUN_100108310();
  lVar1 = -auVar6._0_8_;
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_1140 = 0;
  local_1138 = 0;
  local_1130 = 0;
  uStack_1128 = 0;
  local_1120 = 0;
  uStack_1118 = 0;
  *(undefined8 *)((long)&local_38 + lVar1) = 0x1001d6e98;
  FUN_1001c62d9(local_1158,0x118);
  do {
    if (param_2 == 0) {
      iVar3 = 0;
LAB_1001d6f59:
      if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
        return iVar3;
      }
                    /* WARNING: Subroutine does not return */
      *(code **)((long)&local_38 + lVar1) = FUN_1001d6fac;
      ___stack_chk_fail();
    }
    uVar5 = 0x1000;
    if (param_2 < 0x1000) {
      uVar5 = param_2;
    }
    *(undefined8 *)((long)&local_38 + lVar1) = 0x1001d6edc;
    local_1040 = uVar5;
    iVar3 = FUN_1001d6b5b(param_1,&local_1040,local_1038,0,local_1158);
    if (iVar3 != 0) {
      *(undefined8 *)((long)&local_38 + lVar1) = 0x1001d6f86;
      uVar4 = FUN_1001cc310();
      *(undefined8 *)((long)&local_38 + lVar1) = 0x1001d6f96;
      cVar2 = _os_log_type_enabled(uVar4,0x10);
      if (cVar2 != '\0') {
        *(undefined8 *)((long)&local_38 + lVar1) = 0x1001d6fa5;
        FUN_1006b4c5c(iVar3,uVar4);
      }
      goto LAB_1001d6f59;
    }
    while (local_1144 == 1) {
      *(undefined8 *)((long)&local_38 + lVar1) = 0x1001d6f02;
      iVar3 = FUN_1001ceb57(auVar6._8_8_,0,0xffffffffffffffff);
      if (iVar3 != 0) {
        *(undefined8 *)((long)&local_38 + lVar1) = 0x1001d6f53;
        FUN_1001d6fac(param_1);
        iVar3 = -0x80;
        goto LAB_1001d6f59;
      }
    }
    iVar3 = -0x27;
    if ((local_1144 != 0) || (local_1040 != uVar5)) goto LAB_1001d6f59;
    param_2 = param_2 - uVar5;
  } while( true );
}

