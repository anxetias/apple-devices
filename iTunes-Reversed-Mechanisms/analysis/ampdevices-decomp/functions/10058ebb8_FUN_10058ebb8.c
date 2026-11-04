// name: FUN_10058ebb8
// address: 10058ebb8

undefined8 * FUN_10058ebb8(long param_1,long param_2,int param_3,int param_4,long *param_5)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar4 = 1;
  if (param_4 != 0) {
    uVar4 = 8;
  }
  uVar6 = 4;
  if (param_3 == 0) {
    uVar6 = uVar4;
  }
  cVar1 = FUN_100495380();
  if (cVar1 == '\0') {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_4a = "ITImageLibraryIsValid(imageLibrary)";
LAB_10058ed44:
      local_4c = 0x822;
      local_54 = "Assertion failure";
      local_58 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
  }
  else {
    if (param_2 != 0) {
      for (puVar5 = *(undefined8 **)(param_1 + 0x10); puVar5 != (undefined8 *)0x0;
          puVar5 = (undefined8 *)*puVar5) {
        lVar3 = FUN_1004993ef(puVar5,uVar6,0,1);
        if (lVar3 == 0 && (char)param_3 == '\x01') {
          lVar3 = FUN_1004993ef(puVar5,7,0,1);
        }
        if (((lVar3 != 0) && (iVar2 = FUN_10058ed73(lVar3), iVar2 == 0)) &&
           (cVar1 = FUN_10017f77e(lVar3 + 0x58,param_2), cVar1 != '\0')) {
          if (param_5 != (long *)0x0) {
            *param_5 = lVar3;
          }
          goto LAB_10058ecf0;
        }
      }
      puVar5 = (undefined8 *)0x0;
      goto LAB_10058ecf0;
    }
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_4a = "fileSpec != nullptr";
      goto LAB_10058ed44;
    }
  }
  puVar5 = (undefined8 *)0x0;
  FUN_1001782e9(0,0);
LAB_10058ecf0:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return puVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

