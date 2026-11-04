// name: FUN_1002b35c8
// address: 1002b35c8

long FUN_1002b35c8(long param_1,long param_2,uint param_3)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  char cVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  uint uVar8;
  long *plVar9;
  long lVar10;
  bool bVar11;
  undefined1 auVar12 [16];
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == 0) {
    uVar6 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar6,0x10);
    if (cVar4 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "xidHash != 0";
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    auVar12 = FUN_1002b7914();
    plVar7 = auVar12._0_8_;
    if (plVar7 != auVar12._8_8_ && plVar7 != (long *)(param_1 + 8)) {
      uVar8 = 0xffffffff;
      lVar10 = 0;
      do {
        lVar2 = plVar7[5];
        if (lVar2 != 0) {
          lVar5 = FUN_1002acb5a(lVar2);
          if (lVar5 != param_2) {
            uVar6 = FUN_1001cc310();
            cVar4 = _os_log_type_enabled(uVar6,0x10);
            if (cVar4 != '\0') {
              local_58 = 0x8220202;
              local_54 = "Assertion failure";
              local_4c = 0x822;
              local_4a = "GetTrackInstanceXIDHash(trackInstance) == xidHash";
              __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
            }
            FUN_1001782e9(0,0);
          }
          uVar1 = *(uint *)(lVar2 + 0x30);
          if (param_3 <= uVar1 && uVar1 < uVar8) {
            lVar10 = lVar2;
            uVar8 = uVar1;
          }
        }
        plVar3 = (long *)plVar7[1];
        plVar9 = plVar7;
        if ((long *)plVar7[1] == (long *)0x0) {
          do {
            plVar7 = (long *)plVar9[2];
            bVar11 = (long *)*plVar7 != plVar9;
            plVar9 = plVar7;
          } while (bVar11);
        }
        else {
          do {
            plVar7 = plVar3;
            plVar3 = (long *)*plVar7;
          } while ((long *)*plVar7 != (long *)0x0);
        }
      } while (plVar7 != auVar12._8_8_);
      goto LAB_1002b371b;
    }
  }
  lVar10 = 0;
LAB_1002b371b:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return lVar10;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

