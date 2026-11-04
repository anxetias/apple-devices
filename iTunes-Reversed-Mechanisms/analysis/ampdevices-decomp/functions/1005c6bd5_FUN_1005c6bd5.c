// name: FUN_1005c6bd5
// address: 1005c6bd5

ulong FUN_1005c6bd5(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                   long *param_5)

{
  char cVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  bool bVar8;
  undefined8 local_60;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_5 == (long *)0x0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "applicationInfo != __null";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    uVar7 = 0xffffffce;
  }
  else {
    uVar6 = (uint)param_2;
    *param_5 = 0;
    if ((uVar6 == 7) ||
       (uVar5 = uVar6 - ((uint)((param_2 & 0xffffffff) >> 1) & 0x55555555),
       uVar5 = (uVar5 >> 2 & 0x33333333) + (uVar5 & 0x33333333),
       ((uVar5 >> 4) + uVar5 & 0xf0f0f0f) * 0x1010101 >> 0x18 < 2)) {
      if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
        uVar7 = FUN_1005c6eae(param_1,param_2 & 0xffffffff,param_3,param_4,param_5);
        return uVar7;
      }
      goto LAB_1005c6ea9;
    }
    uVar7 = 0xffffffce;
    uVar5 = 1;
    do {
      if ((uVar5 & uVar6) != 0) {
        uVar2 = FUN_1005c6eae(param_1,uVar5,param_3,param_4,&local_60);
        if (uVar2 != 0) {
          uVar7 = (ulong)uVar2;
          if (uVar2 != 0xffffff80) {
            uVar4 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar4,0x10);
            if (cVar1 != '\0') {
              local_58 = 0x8220202;
              local_54 = "Assertion failure";
              local_4c = 0x400;
              local_4a = (char *)CONCAT44(local_4a._4_4_,uVar2);
              __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_58,0x12);
            }
          }
          FUN_10017060f(*param_5);
          *param_5 = 0;
          break;
        }
        if (*param_5 == 0) {
          lVar3 = FUN_100171413(DAT_1008c4d90,0,local_60);
          *param_5 = lVar3;
          if (lVar3 == 0) {
            uVar4 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar4,0x10);
            if (cVar1 != '\0') {
              local_58 = 0x8220202;
              local_54 = "Assertion failure";
              local_4c = 0x822;
              local_4a = "*applicationInfo != __null";
              __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
            }
            FUN_1001782e9(0,0);
          }
        }
        else {
          FUN_1001714c2(local_60,FUN_1005c713c);
        }
        FUN_10017060f(local_60);
        uVar7 = 0;
      }
      bVar8 = uVar5 < 3;
      uVar5 = uVar5 * 2;
    } while (bVar8);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar7;
  }
LAB_1005c6ea9:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

