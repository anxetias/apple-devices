// name: FUN_1002b2d60
// address: 1002b2d60

undefined8 * FUN_1002b2d60(long param_1,long param_2,long param_3,uint param_4)

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
  long local_60;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_60 = param_2;
  if (param_1 == 0) {
LAB_1002b2e98:
    uVar5 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar5,0x10);
    if (cVar4 != '\0') {
      local_4a = "TrackDataIsValid(trackData)";
LAB_1002b2f93:
      local_4c = 0x822;
      local_54 = "Assertion failure";
      local_58 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
LAB_1002b2ef3:
    FUN_1001782e9(0,0);
  }
  else {
    if (*(int *)(param_1 + 0x80) != 0x74646174) {
      uVar5 = FUN_1001cc310();
      cVar4 = _os_log_type_enabled(uVar5,0x10);
      if (cVar4 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure (expected to be true)";
        local_4c = 0x822;
        local_4a = "trackData->magic == \'tdat\'";
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      cVar4 = FUN_1001782e9(0,1);
      if (cVar4 == '\0') goto LAB_1002b2e98;
    }
    if (0xfffffffffffffffb < param_2 - 1U) {
      uVar5 = FUN_1001cc310();
      cVar4 = _os_log_type_enabled(uVar5,0x10);
      if (cVar4 != '\0') {
        local_4a = "IsCloudIDValid(cloudID)";
        goto LAB_1002b2f93;
      }
      goto LAB_1002b2ef3;
    }
    auVar12 = FUN_1002b798e(param_1 + 0x2718,&local_60);
    plVar7 = auVar12._0_8_;
    if (plVar7 != auVar12._8_8_ && plVar7 != (long *)(param_1 + 0x2720)) {
      uVar9 = 0xffffffff;
      puVar6 = (undefined8 *)0x0;
      do {
        lVar2 = plVar7[5];
        if ((lVar2 != 0) && (*(long *)(lVar2 + 0xa8) == local_60)) {
          for (puVar10 = *(undefined8 **)(lVar2 + 0x58); puVar10 != (undefined8 *)0x0;
              puVar10 = (undefined8 *)*puVar10) {
            uVar1 = *(uint *)(puVar10 + 6);
            if ((uVar1 < uVar9 && param_4 <= uVar1) &&
               ((param_3 == 0 || (*(long *)(puVar10[4] + 8) == param_3)))) {
              puVar6 = puVar10;
              uVar9 = uVar1;
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
      goto LAB_1002b2efe;
    }
  }
  puVar6 = (undefined8 *)0x0;
LAB_1002b2efe:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return puVar6;
}

