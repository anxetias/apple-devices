// name: FUN_100290e0c
// address: 100290e0c

int FUN_100290e0c(long param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  uint uVar5;
  undefined1 local_130 [8];
  undefined1 local_128 [12];
  undefined1 local_11c [4];
  undefined1 local_118 [8];
  undefined8 local_110;
  uint local_108;
  uint local_104;
  int local_100;
  int local_fc;
  undefined4 local_f8;
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
  if (*(char *)(param_1 + 0xd21) == '\x01') {
    iVar2 = FUN_100179732(1,&local_110);
    if (iVar2 != -0x80) {
      if (iVar2 == 0) {
        iVar2 = FUN_100466eea((float)*(uint *)(param_1 + 0xd2c),
                              ((float)*(uint *)(*(long *)(param_1 + 0xcd8) + 0x30) * DAT_100717f3c)
                              / (float)*(int *)(param_1 + 0xd28),0x1e,&local_d8,&local_108,
                              &local_104);
        if (iVar2 == 0) {
          if (local_108 != 0) {
            uVar4 = 0;
            do {
              local_100 = (int)(long)(&local_d8)[uVar4];
              iVar2 = FUN_100295c9b(param_1,&local_fc,local_118);
              if (iVar2 != 0) {
                uVar3 = FUN_1001cc310();
                cVar1 = _os_log_type_enabled(uVar3,0x10);
joined_r0x00010029119e:
                if (cVar1 != '\0') {
LAB_100291123:
                  local_ea = iVar2;
                  iVar2 = local_ea;
                  local_ec = 0x400;
                  local_f4 = "Assertion failure";
                  local_f8 = 0x8220202;
                  __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_f8,
                                      0x12);
                }
                goto LAB_100290ed7;
              }
              if ((local_fc != local_100) &&
                 (iVar2 = FUN_10029558c(0,param_1,local_100,&local_100,local_130,0), iVar2 != 0)) {
                if (iVar2 != -0x80) {
                  uVar3 = FUN_1001cc310();
                  cVar1 = _os_log_type_enabled(uVar3,0x10);
                  goto joined_r0x00010029119e;
                }
                goto LAB_100290ed7;
              }
              if (local_104 != 0) {
                uVar5 = 0;
                do {
                  iVar2 = FUN_1002906aa(param_1,0,local_11c,local_128);
                  if (iVar2 != 0) {
                    if (iVar2 == -0x80) goto LAB_100290ed7;
                    if (iVar2 != -0x27) {
                      uVar3 = FUN_1001cc310();
                      cVar1 = _os_log_type_enabled(uVar3,0x10);
                      if (cVar1 == '\0') goto LAB_100290ed7;
                      goto LAB_100291123;
                    }
                    break;
                  }
                  FUN_10017983e(local_110,*(undefined8 *)(*(long *)(param_1 + 0xcd8) + 0x50),
                                *(undefined8 *)(param_1 + 0xcc0));
                  uVar5 = uVar5 + 1;
                } while (uVar5 < local_104);
              }
              uVar4 = uVar4 + 1;
            } while (uVar4 < local_108);
          }
          FUN_1001799f1(local_110,local_60);
          uVar5 = 0x10;
          if (local_5c < 0x10) {
            uVar5 = local_5c;
          }
          FUN_1001c631b(local_58,param_2,uVar5);
          iVar2 = 0;
        }
LAB_100290ed7:
        FUN_100179a7b(local_110);
      }
      else {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          local_d8 = 4.875246e-34;
          local_d4 = "Assertion failure";
          local_cc = 0x400;
          local_ca = (char *)CONCAT44(local_ca._4_4_,iVar2);
          __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_d8,0x12);
        }
      }
    }
  }
  else {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_d8 = 4.875246e-34;
      local_d4 = "Assertion failure";
      local_cc = 0x822;
      local_ca = "connectionData->playerOpen == true";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_d8,0x16);
    }
    FUN_1001782e9(0,0);
    iVar2 = -0x32;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

