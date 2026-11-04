// name: FUN_100497564
// address: 100497564

long * FUN_100497564(long param_1,undefined4 param_2,undefined2 param_3,undefined4 *param_4,
                    undefined8 param_5)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((param_1 == 0) || (cVar5 = FUN_100495380(*(undefined8 *)(param_1 + 0x10)), cVar5 == '\0')) {
    uVar8 = FUN_1001cc310();
    cVar5 = _os_log_type_enabled(uVar8,0x10);
    if (cVar5 != '\0') {
      local_4a = "ITImageInfoIsValid(imageInfo)";
LAB_1004976f5:
      local_4c = 0x822;
      local_54 = "Assertion failure";
      local_58 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: err == (%d)",&local_58,0x16);
    }
  }
  else {
    plVar6 = (long *)FUN_1001c58d5(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x58));
    if (plVar6 != (long *)0x0) {
      *(undefined4 *)(plVar6 + 1) = param_2;
      uVar2 = param_4[1];
      uVar3 = param_4[2];
      uVar4 = param_4[3];
      *(undefined4 *)(plVar6 + 3) = *param_4;
      *(undefined4 *)((long)plVar6 + 0x1c) = uVar2;
      *(undefined4 *)(plVar6 + 4) = uVar3;
      *(undefined4 *)((long)plVar6 + 0x24) = uVar4;
      *(undefined2 *)((long)plVar6 + 0xc) = param_3;
      lVar7 = FUN_1001705fc(param_5);
      plVar6[2] = lVar7;
      puVar1 = *(undefined8 **)(param_1 + 0x78);
      if (*plVar6 != 0) {
        uVar8 = FUN_1001cc310();
        cVar5 = _os_log_type_enabled(uVar8,0x10);
        if (cVar5 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x822;
          local_4a = "element->*PNEXT == nullptr";
          __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: err == (%d)",&local_58,0x16);
        }
        FUN_1001782e9(0,0);
      }
      if (puVar1 == (undefined8 *)0x0) {
        puVar9 = (undefined8 *)(param_1 + 0x78);
      }
      else {
        do {
          puVar9 = puVar1;
          puVar1 = (undefined8 *)*puVar9;
        } while ((undefined8 *)*puVar9 != (undefined8 *)0x0);
      }
      *plVar6 = 0;
      *puVar9 = plVar6;
      *(short *)(param_1 + 0x72) = *(short *)(param_1 + 0x72) + 1;
      *(undefined1 *)(*(long *)(param_1 + 0x10) + 4) = 1;
      goto LAB_1004976ab;
    }
    uVar8 = FUN_1001cc310();
    cVar5 = _os_log_type_enabled(uVar8,0x10);
    if (cVar5 != '\0') {
      local_4a = "faceInstance != nullptr";
      goto LAB_1004976f5;
    }
  }
  plVar6 = (long *)0x0;
  FUN_1001782e9(0,0);
LAB_1004976ab:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return plVar6;
}

