// name: FUN_1003008d3
// address: 1003008d3

long FUN_1003008d3(long param_1,ulong param_2)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  bool bVar9;
  bool bVar10;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (((param_1 == 0) || (*(long *)(param_1 + 8) == 0)) ||
     (lVar7 = *(long *)(*(long *)(param_1 + 8) + 0x10), lVar7 == 0)) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "TrackInstanceIsValid(trackInstance)";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    lVar7 = 0;
    FUN_1001782e9(0,0);
  }
  else {
    if ((*(byte *)(lVar7 + 0x1bb4) & 0x80) != 0) {
      cVar2 = FUN_1003094d5(param_1);
      if (cVar2 == '\0') {
        cVar2 = FUN_1002ac9e0(param_1);
        if ((cVar2 != '\0') || (cVar2 = FUN_1002aca8c(param_1), cVar2 != '\0')) goto LAB_1003009a5;
      }
      else {
        if (*(long *)(param_1 + 8) == 0) {
          uVar4 = 0;
        }
        else {
          uVar4 = *(undefined8 *)(*(long *)(param_1 + 8) + 0x10);
        }
        iVar1 = *(int *)(param_1 + 0x3c);
        uVar3 = FUN_1002aff0b(param_1);
        uVar5 = FUN_1002af980(param_1);
        for (lVar6 = FUN_1002b30b4(uVar4,uVar3,uVar5,0); lVar6 != 0;
            lVar6 = FUN_1002b319c(lVar6,uVar3,0)) {
          if ((*(long *)(lVar6 + 8) != *(long *)(param_1 + 8)) &&
             (cVar2 = FUN_1003094d5(lVar6), cVar2 != '\0')) {
            uVar4 = *(undefined8 *)(lVar6 + 8);
            uVar5 = FUN_1002afd8b(param_1);
            lVar7 = FUN_100597637(uVar4,uVar5);
            uVar4 = *(undefined8 *)(lVar6 + 8);
            uVar5 = FUN_1002afd8b(param_1);
            lVar8 = FUN_1005974ad(uVar4,uVar5);
            if (lVar8 != 0 || lVar7 != 0) {
              if (iVar1 == 0x53485244) {
                bVar9 = lVar8 == 0;
                bVar10 = lVar7 != 0;
              }
              else {
                bVar9 = lVar8 != 0;
                bVar10 = lVar7 == 0;
              }
              if ((bool)(bVar10 | bVar9)) goto LAB_100300ad8;
            }
            lVar7 = *(long *)(lVar6 + 8);
            if (lVar7 != 0) goto LAB_100300963;
          }
LAB_100300ad8:
          uVar3 = FUN_1002aff0b(param_1);
        }
        if ((param_2 & 1) != 0) {
LAB_1003009a5:
          if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
            lVar7 = FUN_10030959b(param_1);
            return lVar7;
          }
          goto LAB_100300b0a;
        }
      }
    }
    lVar7 = 0;
  }
LAB_100300963:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return lVar7;
  }
LAB_100300b0a:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

