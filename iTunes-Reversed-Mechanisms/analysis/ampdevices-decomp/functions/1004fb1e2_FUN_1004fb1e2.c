// name: FUN_1004fb1e2
// address: 1004fb1e2

int FUN_1004fb1e2(long param_1,long param_2)

{
  long lVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  short *local_cd8;
  undefined1 *local_cd0;
  undefined4 local_cc0;
  undefined1 *local_ca8;
  int local_c9c;
  undefined1 local_c98 [512];
  undefined4 local_a98;
  char *local_a94;
  undefined2 local_a8c;
  char *local_a8a;
  short local_678 [256];
  undefined1 local_478 [32];
  undefined1 local_458 [1024];
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (((param_2 == 0) || (lVar1 = *(long *)(param_2 + 8), lVar1 == 0)) ||
     (*(long *)(lVar1 + 0x10) == 0)) {
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      local_a8a = "TrackInstanceIsValid(trackInstance)";
LAB_1004fb3ef:
      local_a8c = 0x822;
      local_a94 = "Assertion failure";
      local_a98 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_a98,0x16);
    }
  }
  else {
    if (*(int *)(param_2 + 0x3c) == 0x46494c45) {
      if (*(char *)(param_1 + 0x6ad7) != '\0') {
        cVar2 = FUN_10017cbd0(param_1 + 0x6b40);
        if (cVar2 != '\0') {
          FUN_1002ae6f7(param_2);
          uVar5 = *(undefined8 *)(param_2 + 0x80);
          if ((*(long *)(param_1 + 0x16688) == 0) || (*(int *)(lVar1 + 0xc2) < 0)) {
LAB_1004fb290:
            if (*(int *)(lVar1 + 0xc2) < 0) {
LAB_1004fb2aa:
              iVar3 = FUN_10017dbe8(uVar5,param_1 + 0x6b40,local_458,0x200,&local_c9c);
              if (iVar3 == -0x80) goto LAB_1004fb32c;
              if (iVar3 == 0) {
                iVar3 = FUN_100320e05(param_2,local_c9c * 2,local_458);
                FUN_1002fef76(lVar1);
                goto LAB_1004fb57b;
              }
              uVar5 = FUN_1001cc310();
              cVar2 = _os_log_type_enabled(uVar5,0x10);
              if (cVar2 == '\0') goto LAB_1004fb32c;
              local_a8a = (char *)CONCAT44(local_a8a._4_4_,iVar3);
            }
            else {
              cVar2 = FUN_10032109f(param_2);
              if (cVar2 != '\0') goto LAB_1004fb2aa;
              cVar2 = FUN_1004e9c24(param_2,local_478);
              if (cVar2 == '\0') goto LAB_1004fb2aa;
              iVar3 = FUN_1004f0455(param_1,param_2,0,0,local_678);
              if (iVar3 == -0x80) goto LAB_1004fb32c;
              if (iVar3 == 0) {
                if (local_678[0] == 0) {
LAB_1004fb644:
                  if (*(int *)(param_2 + 0x40) == 0) {
                    uVar4 = FUN_1001e215a(local_478);
                    *(undefined4 *)(param_2 + 0x40) = uVar4;
                  }
                }
                else {
                  FUN_10017d5ba(uVar5,&local_a98);
                  FUN_1001c62d9(&local_cd8,0x38);
                  local_cd8 = local_678;
                  local_cd0 = local_478;
                  local_cc0 = 0x1f;
                  local_ca8 = local_c98;
                  iVar3 = FUN_10018166a(&local_a98,&local_cd8);
                  if (iVar3 == 0) {
                    iVar3 = FUN_1001894bc(uVar5,local_c98,uVar5);
                    if (iVar3 == 0) goto LAB_1004fb644;
                    uVar6 = FUN_1001cc310();
                    cVar2 = _os_log_type_enabled(uVar6,0x10);
                    if (cVar2 != '\0') {
                      local_58 = 0x8220202;
                      local_54 = "Assertion failure";
                      local_4c = 0x822;
                      local_4a = "status == noErr";
                      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",
                                          &local_58,0x16);
                    }
                    FUN_1001782e9(0,0);
                  }
                }
                cVar2 = FUN_10017fbfb(uVar5);
                if (cVar2 == '\0') {
                  FUN_100189139(uVar5,0x60606);
                }
                goto LAB_1004fb2aa;
              }
              uVar5 = FUN_1001cc310();
              cVar2 = _os_log_type_enabled(uVar5,0x10);
              if (cVar2 == '\0') goto LAB_1004fb32c;
              local_a8a = (char *)CONCAT44(local_a8a._4_4_,iVar3);
            }
            local_a8c = 0x400;
            local_a94 = "Assertion failure";
            local_a98 = 0x8220202;
            __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_a98,0x12);
          }
          else {
            cVar2 = FUN_10030e2f7(*(undefined8 *)(lVar1 + 0x10));
            if (cVar2 != '\0') goto LAB_1004fb290;
            iVar3 = 0;
LAB_1004fb57b:
            cVar2 = FUN_1003203ad(lVar1);
            if (cVar2 != '\0') {
              FUN_1002affcc(param_2,param_2 + 200);
            }
          }
          goto LAB_1004fb32c;
        }
      }
      uVar5 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar5,0x10);
      if (cVar2 != '\0') {
        local_a98 = 0x8220202;
        local_a94 = "Assertion failure";
        local_a8c = 0x822;
        local_a8a = "IsDeviceMounted(handlerData)";
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_a98,0x16);
      }
      FUN_1001782e9(0,0);
      iVar3 = -0x23;
      goto LAB_1004fb32c;
    }
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      local_a8a = "trackInstance->trackKind == kITFileKind";
      goto LAB_1004fb3ef;
    }
  }
  FUN_1001782e9(0,0);
  iVar3 = -0x32;
LAB_1004fb32c:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

