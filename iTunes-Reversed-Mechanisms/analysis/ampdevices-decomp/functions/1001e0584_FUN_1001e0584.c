// name: FUN_1001e0584
// address: 1001e0584

undefined2 FUN_1001e0584(ushort *param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  ushort uVar1;
  char cVar2;
  undefined2 uVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  uint uVar9;
  undefined1 local_438 [512];
  undefined1 local_238 [512];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar6 = FUN_1001c6429((ulong)(param_2 + 1) * 2);
  if (lVar6 == 0) {
    uVar7 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar7,0x10);
    if (cVar2 != '\0') {
      FUN_1006bb0c1(uVar7);
    }
  }
  else {
    uVar1 = *param_1;
    if (uVar1 <= param_2) {
      FUN_1001c631b(param_1 + 1,lVar6,(uint)uVar1 + (uint)uVar1);
      iVar4 = FUN_1001e5932(param_3,local_238,0xff);
      if (iVar4 == 0) {
        FUN_1001e033f(param_4,local_438);
        uVar3 = FUN_1001e0077(lVar6,param_2,local_238,local_438);
        uVar9 = 0xfffffffe;
        uVar8 = 0xffffffff;
        do {
          uVar5 = (int)uVar8 + 1;
          uVar8 = (ulong)uVar5;
          uVar9 = uVar9 + 2;
        } while (*(short *)(lVar6 + uVar8 * 2) != 0);
        *param_1 = (ushort)uVar5;
        if (param_2 < (uVar5 & 0xffff)) goto LAB_1001e06ae;
        FUN_1001c631b(lVar6,param_1 + 1,uVar9 & 0x1fffe);
      }
      else {
LAB_1001e06ae:
        uVar3 = 0;
      }
      FUN_1001c64c1(lVar6);
      goto LAB_1001e06b9;
    }
    uVar7 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar7,0x10);
    if (cVar2 != '\0') {
      FUN_1006bb04b(uVar7);
    }
  }
  uVar3 = 0;
  FUN_1001782e9(0,0);
LAB_1001e06b9:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

