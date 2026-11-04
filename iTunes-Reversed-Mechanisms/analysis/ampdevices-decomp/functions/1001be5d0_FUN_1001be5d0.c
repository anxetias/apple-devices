// name: FUN_1001be5d0
// address: 1001be5d0

int FUN_1001be5d0(long param_1,ulong param_2,ulong param_3,long param_4,long param_5,long param_6)

{
  long *plVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  ulong local_a8 [2];
  char local_98;
  ulong local_90;
  long local_88;
  long local_80;
  long local_78;
  long *local_70;
  long local_68 [4];
  long *local_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_78 = param_1;
  cVar3 = FUN_1001ee056();
  if (cVar3 == '\0') {
    uVar5 = FUN_1001cc310();
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      FUN_1006a2d3b(uVar5);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar5);
    FUN_1001782e9(0,0);
  }
  else {
    bVar2 = param_5 == 0;
    if (*(long *)(param_4 + 0x20) != 0) {
      bVar2 = param_5 != 0 || param_6 != 0;
    }
    if (!bVar2) {
      local_80 = local_78 + 0x10;
      uVar7 = param_3 & 0xffffffff | param_2 << 0x20;
      local_a8[0] = uVar7;
      local_88 = param_6;
      lVar6 = FUN_1001c04e0();
      if (lVar6 == 0) {
        local_70 = (long *)0x0;
LAB_1001be757:
        plVar1 = *(long **)(local_78 + 8);
        FUN_10028593a(local_68,param_4);
        iVar4 = (**(code **)(*plVar1 + 0x18))
                          (plVar1,param_3 << 0x20 | param_2 & 0xffffffff,local_68,param_5,local_88,
                           &local_70);
        if (local_48 == local_68) {
          lVar6 = 0x20;
LAB_1001be7a9:
          (**(code **)(*local_48 + lVar6))();
        }
        else {
          lVar6 = 0x28;
          if (local_48 != (long *)0x0) goto LAB_1001be7a9;
        }
        if (iVar4 != -0x80) {
          if (iVar4 == 0) {
            local_90 = uVar7;
            FUN_1001c05ca(local_a8,local_80,&local_90,&local_70);
            if (local_98 != '\0') {
LAB_1001be836:
              iVar4 = 0;
              goto LAB_1001be6ab;
            }
            iVar4 = -0x6c;
          }
          else {
            uVar5 = FUN_1001cc310();
            uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
            cVar3 = _os_log_type_enabled(uVar5,0x10);
            if (cVar3 != '\0') {
              FUN_1006a2e24(iVar4,uVar5);
            }
            (*(code *)PTR__objc_release_10082c7b0)(uVar5);
            if (iVar4 == 0) goto LAB_1001be836;
          }
        }
      }
      else {
        local_70 = *(long **)(lVar6 + 8);
        if (local_70 == (long *)0x0) goto LAB_1001be757;
        local_70 = (long *)0x0;
        uVar5 = FUN_1001cc310();
        uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
        cVar3 = _os_log_type_enabled(uVar5,0x10);
        if (cVar3 != '\0') {
          FUN_1006a2db1(uVar5);
        }
        (*(code *)PTR__objc_release_10082c7b0)(uVar5);
        iVar4 = -0x73f;
      }
      if (local_70 != (long *)0x0) {
        (**(code **)(*local_70 + 8))();
      }
      goto LAB_1001be6ab;
    }
    uVar5 = FUN_1001cc310();
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      FUN_1006a2e90(uVar5);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar5);
    FUN_1001782e9(0,0);
  }
  iVar4 = -0x32;
LAB_1001be6ab:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar4;
}

