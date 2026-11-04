// name: FUN_1005554de
// address: 1005554de

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_1005554de(long param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  uint uVar5;
  ulong uVar6;
  float fVar7;
  undefined1 local_110 [8];
  undefined8 local_108;
  uint local_100;
  uint local_fc [2];
  char *local_f4;
  undefined2 local_ec;
  int local_ea;
  float local_d8;
  char *local_d4;
  undefined2 local_cc;
  char *local_ca;
  undefined1 local_60 [4];
  uint local_5c;
  undefined1 local_58 [32];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_60[0] = 0;
  local_5c = 0;
  FUN_1001c62d9(param_2,0x10);
  if (*(char *)(param_1 + 0x64a8) == '\0') {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_d8 = 4.875246e-34;
      local_d4 = "Assertion failure";
      local_cc = 0x822;
      local_ca = "mPlayerOpen == true";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_d8,0x16);
    }
    FUN_1001782e9(0,0);
    iVar2 = -0x32;
  }
  else {
    iVar2 = FUN_100179732(1,&local_108);
    if (iVar2 != -0x80) {
      if (iVar2 == 0) {
        iVar2 = FUN_100466eea((float)*(ulong *)(param_1 + 0x14b8),
                              ((float)*(uint *)(param_1 + 0x868) * DAT_100717f3c) /
                              *(float *)(param_1 + 0x858),0x1e,&local_d8,&local_100,local_fc);
        if (iVar2 == 0) {
          if (local_100 != 0) {
            uVar6 = 0;
            do {
              fVar7 = (&local_d8)[uVar6] * *(float *)(param_1 + 0x1460);
              uVar3 = (ulong)fVar7;
              iVar2 = FUN_10054e38c(*(undefined8 *)(param_1 + 0x808),
                                    (long)(fVar7 - _DAT_10070844c) & (long)uVar3 >> 0x3f | uVar3,
                                    local_110);
              *(int *)(param_1 + 0x1478) = iVar2;
              if (iVar2 == -1) {
                iVar2 = -0x32;
                goto LAB_100555651;
              }
              if (local_fc[0] != 0) {
                uVar5 = 0;
                do {
                  iVar2 = FUN_1005480c6(param_1);
                  if (iVar2 != 0) {
                    if (iVar2 == -0x80) goto LAB_100555651;
                    if (iVar2 != -0x27) {
                      uVar4 = FUN_1001cc310();
                      cVar1 = _os_log_type_enabled(uVar4,0x10);
                      if (cVar1 != '\0') {
                        local_fc[1] = 0x8220202;
                        local_f4 = "Assertion failure";
                        local_ec = 0x400;
                        local_ea = iVar2;
                        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",
                                            local_fc + 1,0x12);
                      }
                      goto LAB_100555651;
                    }
                    break;
                  }
                  FUN_10017983e(local_108,*(undefined8 *)(param_1 + 0x1450),
                                *(undefined4 *)(param_1 + 0x147c));
                  uVar5 = uVar5 + 1;
                } while (uVar5 < local_fc[0]);
              }
              uVar6 = uVar6 + 1;
            } while (uVar6 < local_100);
          }
          FUN_1001799f1(local_108,local_60);
          uVar5 = 0x10;
          if (local_5c < 0x10) {
            uVar5 = local_5c;
          }
          FUN_1001c631b(local_58,param_2,uVar5);
          iVar2 = 0;
        }
LAB_100555651:
        FUN_100179a7b(local_108);
      }
      else {
        uVar4 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar4,0x10);
        if (cVar1 != '\0') {
          local_d8 = 4.875246e-34;
          local_d4 = "Assertion failure";
          local_cc = 0x400;
          local_ca = (char *)CONCAT44(local_ca._4_4_,iVar2);
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_d8,0x12);
        }
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

