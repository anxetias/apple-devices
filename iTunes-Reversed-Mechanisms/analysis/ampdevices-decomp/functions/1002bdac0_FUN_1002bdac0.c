// name: FUN_1002bdac0
// address: 1002bdac0

undefined8 FUN_1002bdac0(long param_1,char param_2,char param_3,char param_4,char param_5)

{
  char cVar1;
  short sVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (((param_1 == 0) || (lVar8 = *(long *)(param_1 + 8), lVar8 == 0)) ||
     (*(long *)(lVar8 + 0x10) == 0)) {
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "TrackInstanceIsValid(trackInstance)";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    uVar5 = 0;
    FUN_1001782e9(0,0);
    goto LAB_1002bdb2c;
  }
  if (*(char *)(param_1 + 0x45) != '\0') goto LAB_1002bdafe;
  uVar5 = 0;
  sVar2 = FUN_1004744bf(lVar8,0);
  if (sVar2 < 0) goto LAB_1002bdb2c;
  if (((*(uint *)(lVar8 + 0xc2) >> 0xc & 1) == 0) && ((**(byte **)(param_1 + 0x10) & 2) == 0)) {
    if (((int)*(uint *)(lVar8 + 0xc2) < 0) && ((*(ushort *)(lVar8 + 0xc6) & 1) == 0)) {
      if ((((*(ushort *)(lVar8 + 0xc6) & 2) != 0) || ((*(byte *)(param_1 + 0x4a) & 2) != 0)) ||
         ((param_3 == '\0' & (**(byte **)(param_1 + 0x10) & 8) >> 3) != 0)) goto LAB_1002bdafe;
      lVar6 = FUN_1002b5390(param_1);
      uVar5 = 1;
      if (((lVar6 != 0) ||
          ((param_4 != '\0' &&
           (uVar3 = FUN_1004744bf(lVar8,0), (uVar3 & 0x200004) != 0 && (uVar3 >> 0x10 & 1) == 0))))
         || ((param_5 != '\0' &&
             (uVar7 = FUN_1004744bf(lVar8,0), (uVar7 & 0x18000) == 0 && (uVar7 & 0xc00000) != 0))))
      goto LAB_1002bdb2c;
    }
    if (param_2 == '\0') {
      if (*(long *)(param_1 + 8) == 0) {
        lVar8 = *(long *)(param_1 + 0x10);
LAB_1002bdcad:
        if (*(int *)(lVar8 + 0x88) == 0) goto LAB_1002bdafe;
      }
      else {
        lVar8 = *(long *)(param_1 + 0x10);
        if ((*(long *)(*(long *)(param_1 + 8) + 0x10) == 0) || (*(long *)(lVar8 + 0x38) == 0))
        goto LAB_1002bdcad;
      }
      lVar8 = FUN_1002b5390(param_1);
      if (lVar8 != 0) {
        uVar4 = FUN_1002b1325(param_1);
        cVar1 = FUN_1003af97c(uVar4);
        uVar5 = 1;
        if (cVar1 != '\0') goto LAB_1002bdb2c;
      }
    }
  }
LAB_1002bdafe:
  uVar5 = 0;
LAB_1002bdb2c:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar5;
}

