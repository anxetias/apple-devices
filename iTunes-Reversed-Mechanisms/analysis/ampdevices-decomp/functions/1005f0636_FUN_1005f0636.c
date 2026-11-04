// name: FUN_1005f0636
// address: 1005f0636

void FUN_1005f0636(int param_1)

{
  short sVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long local_60;
  long local_58;
  short local_4a;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1005e9a2c();
  local_58 = 0;
  local_60 = 0;
  local_4a = 0x10e6;
  lVar6 = DAT_1008c7bc0;
  if (DAT_1008c7bc0 != 0 && param_1 != 0) {
    do {
      if (*(int *)(lVar6 + 0x6884) == param_1) {
        iVar4 = FUN_1005e7d5a(&DAT_1008c7b60,param_1,&local_58,&local_60,0,0);
        if (iVar4 == 0) {
          iVar4 = FUN_1005f09c2(lVar6);
          if (iVar4 != -0x80) {
            if (iVar4 == 0) {
              bVar3 = FUN_10024bc99(6);
              if (bVar3 == 0) {
                if ((local_60 != 0) && (3 < *(uint *)(lVar6 + 0x2f8))) {
LAB_1005f087f:
                  local_4a = 0x10db;
                  iVar4 = FUN_1005f0bb4(lVar6);
                  if ((bVar3 & iVar4 != 0) != 0) goto LAB_1005f071b;
                }
LAB_1005f0982:
                *(undefined8 *)(lVar6 + 0x68b8) = 0;
                FUN_1005ee196(&DAT_1008c7b60,lVar6);
                iVar4 = 0;
              }
              else {
                if (local_60 == 0) {
                  if (local_58 == 0) goto LAB_1005f0982;
                }
                else if ((3 < *(uint *)(lVar6 + 0x2f8)) && (local_58 == 0)) goto LAB_1005f087f;
                local_4a = 0x10db;
                *(undefined8 *)(lVar6 + 0x68b8) = 0x100000009;
                iVar4 = FUN_1005efbe6(6,lVar6);
                if ((iVar4 != -0x80) && (iVar4 != 0)) {
                  uVar5 = FUN_1001cc310();
                  cVar2 = _os_log_type_enabled(uVar5,0x10);
                  if (cVar2 != '\0') {
                    local_3a = (char *)CONCAT44(local_3a._4_4_,iVar4);
                    goto LAB_1005f08d2;
                  }
                }
              }
            }
            else {
              uVar5 = FUN_1001cc310();
              cVar2 = _os_log_type_enabled(uVar5,0x10);
              if (cVar2 != '\0') {
                local_3a = (char *)CONCAT44(local_3a._4_4_,iVar4);
                goto LAB_1005f08d2;
              }
            }
          }
        }
        else {
          uVar5 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar5,0x10);
          if (cVar2 != '\0') {
            local_3a = (char *)CONCAT44(local_3a._4_4_,iVar4);
LAB_1005f08d2:
            local_3c = 0x400;
            local_44 = "Assertion failure";
            local_48 = 0x8220202;
            __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_48,0x12);
          }
        }
LAB_1005f071b:
        FUN_10017060f(local_58);
        FUN_10017060f(local_60);
        sVar1 = local_4a;
        if (iVar4 != 0) {
          *(undefined4 *)(lVar6 + 0x68bc) = 3;
          FUN_1005e73f0(&local_48,lVar6);
          FUN_100216f84(2,(int)sVar1,0,iVar4,&local_48,0);
          FUN_1001b7a50(&local_48);
        }
        goto LAB_1005f06bb;
      }
      lVar6 = *(long *)(lVar6 + 0x6878);
    } while (lVar6 != 0);
  }
  uVar5 = FUN_1001cc310();
  cVar2 = _os_log_type_enabled(uVar5,0x10);
  if (cVar2 != '\0') {
    local_48 = 0x8220202;
    local_44 = "Assertion failure";
    local_3c = 0x822;
    local_3a = "device != nullptr";
    __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
  }
  FUN_1001782e9(0,0);
LAB_1005f06bb:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

