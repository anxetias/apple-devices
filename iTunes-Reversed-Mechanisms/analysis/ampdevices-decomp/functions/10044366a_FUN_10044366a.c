// name: FUN_10044366a
// address: 10044366a

long FUN_10044366a(uint param_1,undefined8 param_2)

{
  long lVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  uint *puVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar3 = FUN_100170ef7(param_2);
  if (lVar3 < 1) {
    uVar6 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar6,0x10);
    if (cVar2 != '\0') {
      local_4a = "length > 0";
LAB_1004437ac:
      local_4c = 0x822;
      local_54 = "Assertion failure";
      local_58 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
  }
  else {
    lVar1 = lVar3 + 8;
    lVar4 = FUN_100170ea9(DAT_1008c4d90,lVar1);
    if (lVar4 != 0) {
      FUN_10017103d(lVar4,lVar1);
      puVar5 = (uint *)FUN_100170f3b(lVar4);
      uVar6 = FUN_100170f3b(param_2);
      uVar7 = (uint)lVar1;
      *puVar5 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18;
      puVar5[1] = param_1 >> 0x18 | (param_1 & 0xff0000) >> 8 | (param_1 & 0xff00) << 8 |
                  param_1 << 0x18;
      FUN_1001c631b(uVar6,puVar5 + 2,lVar3);
      goto LAB_100443766;
    }
    uVar6 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar6,0x10);
    if (cVar2 != '\0') {
      local_4a = "returnedData != __null";
      goto LAB_1004437ac;
    }
  }
  lVar4 = 0;
  FUN_1001782e9(0,0);
LAB_100443766:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return lVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

