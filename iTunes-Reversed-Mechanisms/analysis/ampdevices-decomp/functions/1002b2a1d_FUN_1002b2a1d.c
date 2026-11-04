// name: FUN_1002b2a1d
// address: 1002b2a1d

undefined8 * FUN_1002b2a1d(long param_1,long param_2,uint param_3)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  char cVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  uint uVar9;
  undefined8 *puVar10;
  bool bVar11;
  undefined1 auVar12 [16];
  long local_50;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_50 = param_2;
  if (param_1 == 0) {
LAB_1002b2b3d:
    uVar5 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar5,0x10);
    if (cVar4 != '\0') {
      local_3a = "TrackDataIsValid(trackData)";
LAB_1002b2c36:
      local_3c = 0x822;
      local_44 = "Assertion failure";
      local_48 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
LAB_1002b2b98:
    FUN_1001782e9(0,0);
  }
  else {
    if (*(int *)(param_1 + 0x80) != 0x74646174) {
      uVar5 = FUN_1001cc310();
      cVar4 = _os_log_type_enabled(uVar5,0x10);
      if (cVar4 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure (expected to be true)";
        local_3c = 0x822;
        local_3a = "trackData->magic == \'tdat\'";
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      cVar4 = FUN_1001782e9(0,1);
      if (cVar4 == '\0') goto LAB_1002b2b3d;
    }
    if (0xfffffffffffffffb < param_2 - 1U) {
      uVar5 = FUN_1001cc310();
      cVar4 = _os_log_type_enabled(uVar5,0x10);
      if (cVar4 != '\0') {
        local_3a = "IsCloudIDValid(cloudID)";
        goto LAB_1002b2c36;
      }
      goto LAB_1002b2b98;
    }
    auVar12 = FUN_1002b798e(param_1 + 0x2700,&local_50);
    plVar7 = auVar12._0_8_;
    if (plVar7 != auVar12._8_8_ && plVar7 != (long *)(param_1 + 0x2708)) {
      uVar9 = 0xffffffff;
      puVar6 = (undefined8 *)0x0;
      do {
        lVar2 = plVar7[5];
        if ((lVar2 != 0) && (*(long *)(lVar2 + 0xa0) == local_50)) {
          for (puVar10 = *(undefined8 **)(lVar2 + 0x58); puVar10 != (undefined8 *)0x0;
              puVar10 = (undefined8 *)*puVar10) {
            uVar1 = *(uint *)(puVar10 + 6);
            if (param_3 <= uVar1 && uVar1 < uVar9) {
              uVar9 = uVar1;
              puVar6 = puVar10;
            }
          }
        }
        plVar8 = plVar7;
        plVar3 = (long *)plVar7[1];
        if ((long *)plVar7[1] == (long *)0x0) {
          do {
            plVar7 = (long *)plVar8[2];
            bVar11 = (long *)*plVar7 != plVar8;
            plVar8 = plVar7;
          } while (bVar11);
        }
        else {
          do {
            plVar7 = plVar3;
            plVar3 = (long *)*plVar7;
          } while ((long *)*plVar7 != (long *)0x0);
        }
      } while (plVar7 != auVar12._8_8_);
      goto LAB_1002b2ba3;
    }
  }
  puVar6 = (undefined8 *)0x0;
LAB_1002b2ba3:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return puVar6;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

