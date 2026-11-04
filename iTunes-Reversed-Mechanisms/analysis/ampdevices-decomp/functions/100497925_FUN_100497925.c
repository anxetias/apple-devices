// name: FUN_100497925
// address: 100497925

void FUN_100497925(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((param_1 == 0) || (cVar3 = FUN_100495380(*(undefined8 *)(param_1 + 0x10)), cVar3 == '\0')) {
    uVar4 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar4,0x10);
    if (cVar3 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "ITImageInfoIsValid(imageInfo)";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    if (*(undefined8 **)(param_1 + 0x78) != (undefined8 *)0x0) {
      puVar7 = *(undefined8 **)(param_1 + 0x78);
      do {
        puVar1 = (undefined8 *)*puVar7;
        cVar3 = FUN_100495380(*(undefined8 *)(param_1 + 0x10));
        if (cVar3 == '\0') {
          uVar4 = FUN_1001cc310();
          cVar3 = _os_log_type_enabled(uVar4,0x10);
          if (cVar3 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x822;
            local_4a = "ITImageInfoIsValid(imageInfo)";
            __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_58,0x16);
          }
          FUN_1001782e9(0,0);
        }
        else {
          if (*(short *)(param_1 + 0x72) == 0) {
            uVar4 = FUN_1001cc310();
            cVar3 = _os_log_type_enabled(uVar4,0x10);
            if (cVar3 != '\0') {
              local_58 = 0x8220202;
              local_54 = "Assertion failure";
              local_4c = 0x822;
              local_4a = "imageInfo->numFaces != 0";
              __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_58,0x16);
            }
            FUN_1001782e9(0,0);
          }
          FUN_10017060f(puVar7[2]);
          puVar7[2] = 0;
          puVar6 = (undefined8 *)(param_1 + 0x78);
          puVar2 = (undefined8 *)0x0;
          do {
            puVar5 = puVar2;
            puVar6 = (undefined8 *)*puVar6;
            if (puVar6 == (undefined8 *)0x0) goto LAB_1004979f3;
            puVar2 = puVar6;
          } while (puVar6 != puVar7);
          if (puVar5 == (undefined8 *)0x0) {
            puVar5 = (undefined8 *)(param_1 + 0x78);
          }
          *puVar5 = *puVar7;
          *puVar7 = 0;
LAB_1004979f3:
          *(short *)(param_1 + 0x72) = *(short *)(param_1 + 0x72) + -1;
          FUN_1001c5aec(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x58),puVar7);
          *(undefined1 *)(*(long *)(param_1 + 0x10) + 4) = 1;
        }
        puVar7 = puVar1;
      } while (puVar1 != (undefined8 *)0x0);
    }
    *(undefined2 *)(param_1 + 0x72) = 0;
    *(undefined1 *)(*(long *)(param_1 + 0x10) + 4) = 1;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

