// name: FUN_100572544
// address: 100572544

long FUN_100572544(long *param_1,undefined8 *param_2)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  uint *puVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((param_2 == (undefined8 *)0x0) || ((ulong)param_2[4] < 8)) {
    lVar4 = 0;
    goto LAB_100572711;
  }
  lVar2 = (**(code **)(*param_1 + 0x70))(param_1,*param_2);
  if (lVar2 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_4a = "dataPtr != __null";
LAB_1005726e0:
      local_4c = 0x822;
      local_54 = "Assertion failure";
      local_58 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
  }
  else {
    lVar4 = param_2[1];
    uVar7 = (uint)lVar4;
    uVar8 = uVar7;
    if (8 < lVar4) {
      lVar6 = lVar4 + 1;
      do {
        if (*(char *)(lVar2 + -1 + lVar6) == 'e') {
          uVar8 = (int)lVar6 - 8;
          if (*(int *)(lVar2 + -4 + lVar6) != 0x65657266) {
            uVar8 = uVar7;
          }
          break;
        }
        lVar6 = lVar6 + -1;
      } while (9 < lVar6);
    }
    lVar6 = (long)(int)uVar8;
    if (lVar4 < lVar6) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_4a = "newSize <= inXinfAtomInfo->atomSize";
        goto LAB_1005726e0;
      }
    }
    else {
      lVar4 = FUN_100170ea9(DAT_1008c4d90,lVar6);
      if (lVar4 != 0) {
        FUN_10017103d(lVar4,lVar6);
        puVar5 = (uint *)FUN_100170f7f(lVar4);
        FUN_1001c631b(lVar2,puVar5,lVar6);
        if (lVar6 < (long)param_2[1]) {
          *puVar5 = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 << 0x18;
        }
        goto LAB_100572711;
      }
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_4a = "cfData != __null";
        goto LAB_1005726e0;
      }
    }
  }
  lVar4 = 0;
  FUN_1001782e9(0,0);
LAB_100572711:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return lVar4;
}

