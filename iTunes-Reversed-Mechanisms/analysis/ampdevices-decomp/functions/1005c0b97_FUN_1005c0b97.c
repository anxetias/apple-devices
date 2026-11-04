// name: FUN_1005c0b97
// address: 1005c0b97

/* WARNING: Type propagation algorithm not settling */

int FUN_1005c0b97(undefined8 param_1,undefined8 param_2,int *param_3)

{
  char cVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  int *piVar6;
  int local_54;
  int local_50;
  int local_4c [2];
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_3 != (int *)0x0) {
    *param_3 = 0;
  }
  lVar3 = FUN_100170f3b(param_2);
  if (lVar3 == 0) {
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      local_3a = "rentalBagRequest != __null";
LAB_1005c0e8f:
      local_3c = 0x822;
      local_44 = "Assertion failure";
      local_4c[1] = 0x8220202;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",local_4c + 1,0x16);
    }
  }
  else {
    uVar4 = FUN_100170ef7(param_2);
    if (0 < (long)uVar4) {
      iVar2 = FUN_1000c1d60(lVar3,uVar4 & 0xffffffff,&local_54);
      if (iVar2 == -0x80) goto LAB_1005c0d94;
      if (iVar2 == 0) {
        iVar2 = FUN_1005b7cbc(param_1);
        if (iVar2 == -0x80) goto LAB_1005c0d94;
        if (iVar2 == 0) {
          piVar6 = local_4c;
          if (param_3 != (int *)0x0) {
            piVar6 = param_3;
          }
          *piVar6 = 0;
          iVar2 = FUN_1005b8a8e(param_1,&cf_com_apple_fairplay,&cf_FairPlayRentalClockBias,3);
          if (iVar2 == 0) {
            iVar2 = 0;
          }
          else {
            local_50 = 0;
            iVar2 = FUN_1005b8a8e(param_1,0,&cf_TimeIntervalSince1970,3);
            if (iVar2 != -0x80) {
              if (iVar2 == 0) {
                local_4c[0] = local_50 - local_54;
                if (param_3 != (int *)0x0) {
                  *param_3 = local_4c[0];
                }
                iVar2 = FUN_1005b8afb(param_1,0,&cf_RentalClockBias);
                if ((iVar2 != -0x80) && (iVar2 != 0)) {
                  uVar5 = FUN_1001cc310();
                  cVar1 = _os_log_type_enabled(uVar5,0x10);
                  if (cVar1 != '\0') {
                    local_3a = (char *)CONCAT44(local_3a._4_4_,iVar2);
                    goto LAB_1005c0f0e;
                  }
                }
              }
              else {
                uVar5 = FUN_1001cc310();
                cVar1 = _os_log_type_enabled(uVar5,0x10);
                if (cVar1 != '\0') {
                  local_3a = (char *)CONCAT44(local_3a._4_4_,iVar2);
LAB_1005c0f0e:
                  local_3c = 0x400;
                  local_44 = "Assertion failure";
                  local_4c[1] = 0x8220202;
                  __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",local_4c + 1,
                                      0x12);
                }
              }
            }
          }
          FUN_1005b8595(param_1);
          goto LAB_1005c0d94;
        }
        uVar5 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar5,0x10);
        if (cVar1 == '\0') goto LAB_1005c0d94;
        local_3a = (char *)CONCAT44(local_3a._4_4_,iVar2);
      }
      else {
        uVar5 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar5,0x10);
        if (cVar1 == '\0') goto LAB_1005c0d94;
        local_3a = (char *)CONCAT44(local_3a._4_4_,iVar2);
      }
      local_3c = 0x400;
      local_44 = "Assertion failure";
      local_4c[1] = 0x8220202;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",local_4c + 1,0x12);
      goto LAB_1005c0d94;
    }
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      local_3a = "rentalBagLength >= 1";
      goto LAB_1005c0e8f;
    }
  }
  FUN_1001782e9(0,0);
  iVar2 = -0x32;
LAB_1005c0d94:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

