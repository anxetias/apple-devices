// name: FUN_1003078e3
// address: 1003078e3

long FUN_1003078e3(long param_1,long param_2,uint param_3)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  char cVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  uint uVar8;
  long lVar9;
  bool bVar10;
  undefined1 auVar11 [16];
  long local_40;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_40 = param_2;
  if (param_2 == 0) {
    uVar5 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar5,0x10);
    if (cVar4 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "geniusID != 0";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    lVar9 = 0;
    FUN_1001782e9(0,0);
  }
  else {
    auVar11 = FUN_1002b798e(*(undefined8 *)(param_1 + 0x2738),&local_40);
    plVar6 = auVar11._0_8_;
    if (plVar6 == auVar11._8_8_ || plVar6 == (long *)(*(long *)(param_1 + 0x2738) + 8)) {
      lVar9 = 0;
    }
    else {
      uVar8 = 0xffffffff;
      lVar9 = 0;
      do {
        lVar2 = plVar6[5];
        if (((lVar2 != 0) && (*(long *)(lVar2 + 400) == local_40)) &&
           (uVar1 = *(uint *)(lVar2 + 8), param_3 <= uVar1 && uVar1 < uVar8)) {
          lVar9 = lVar2;
          uVar8 = uVar1;
        }
        plVar7 = plVar6;
        plVar3 = (long *)plVar6[1];
        if ((long *)plVar6[1] == (long *)0x0) {
          do {
            plVar6 = (long *)plVar7[2];
            bVar10 = (long *)*plVar6 != plVar7;
            plVar7 = plVar6;
          } while (bVar10);
        }
        else {
          do {
            plVar6 = plVar3;
            plVar3 = (long *)*plVar6;
          } while ((long *)*plVar6 != (long *)0x0);
        }
      } while (plVar6 != auVar11._8_8_);
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return lVar9;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

