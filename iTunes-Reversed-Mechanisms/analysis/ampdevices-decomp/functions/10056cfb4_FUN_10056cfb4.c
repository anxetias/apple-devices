// name: FUN_10056cfb4
// address: 10056cfb4

int FUN_10056cfb4(undefined8 param_1,long *param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  uint uVar5;
  ulong uVar6;
  undefined1 local_154 [4];
  int local_150;
  int local_14c;
  undefined4 local_148;
  ulong local_140;
  uint local_134;
  long local_130;
  int local_128;
  undefined8 local_124;
  undefined2 local_11c;
  char *local_11a;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar3 = FUN_1001c63e1(10000000);
  if (lVar3 == 0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_128 = 0x8220202;
      local_124 = "Assertion failure";
      local_11c = 0x822;
      local_11a = "objectBuffer != nullptr";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_128,0x16);
    }
    FUN_1001782e9(0,0);
    iVar2 = -0x6c;
    goto LAB_10056d435;
  }
  iVar2 = FUN_10056a2be(param_1,&local_128,0xc2);
  if (iVar2 != -0x80) {
    if (iVar2 == 0) {
      if (local_128 == 0x616d6c70) {
        iVar2 = (**(code **)(*param_2 + 0x48))(param_2,0x616d6c70,&local_128,0xc2,0);
        if (iVar2 != -0x80) {
          if (iVar2 == 0) {
            local_130 = lVar3;
            if (local_124._4_4_ != 0) {
              uVar5 = 0;
              local_140 = 10000000;
              do {
                iVar2 = FUN_10056ec13(param_1,local_154);
                lVar3 = local_130;
                if (iVar2 != 0) {
                  if (iVar2 == -0x80) goto LAB_10056d42d;
                  uVar4 = FUN_1001cc310();
                  cVar1 = _os_log_type_enabled(uVar4,0x10);
                  lVar3 = local_130;
                  if (cVar1 == '\0') goto LAB_10056d42d;
                  local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
                  goto LAB_10056d229;
                }
                uVar6 = (ulong)(uint)(local_14c - local_150);
                local_134 = uVar5;
                if ((local_140 < uVar6) &&
                   (lVar3 = FUN_1001c6479(local_130,uVar6), local_140 = uVar6, lVar3 == 0)) {
                  uVar4 = FUN_1001cc310();
                  cVar1 = _os_log_type_enabled(uVar4,0x10);
                  if (cVar1 != '\0') {
                    local_58 = 0x8220202;
                    local_54 = "Assertion failure";
                    local_4c = 0x822;
                    local_4a = "objectBuffer != nullptr";
                    __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,
                                        0x16);
                  }
                  FUN_1001782e9(0,0);
                  iVar2 = -0x6c;
                  lVar3 = 0;
                  goto LAB_10056d42d;
                }
                iVar2 = FUN_100569944(param_1,lVar3,uVar6);
                uVar5 = local_134;
                if (iVar2 != 0) {
                  if (iVar2 == -0x80) goto LAB_10056d42d;
                  uVar4 = FUN_1001cc310();
                  cVar1 = _os_log_type_enabled(uVar4,0x10);
                  if (cVar1 == '\0') goto LAB_10056d42d;
                  local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
                  goto LAB_10056d229;
                }
                local_130 = lVar3;
                iVar2 = (**(code **)(*param_2 + 0x48))(param_2,local_148,lVar3,uVar6,local_134);
                lVar3 = local_130;
                if (iVar2 != 0) goto LAB_10056d42d;
                uVar5 = uVar5 + 1;
              } while (uVar5 < local_124._4_4_);
            }
            iVar2 = (**(code **)(*param_2 + 0x48))(param_2,local_128,0,0,0);
            lVar3 = local_130;
            if ((iVar2 != -0x80) && (iVar2 != 0)) {
              uVar4 = FUN_1001cc310();
              cVar1 = _os_log_type_enabled(uVar4,0x10);
              if (cVar1 != '\0') {
                local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
                goto LAB_10056d229;
              }
            }
          }
          else {
            uVar4 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar4,0x10);
            if (cVar1 != '\0') {
              local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
LAB_10056d229:
              local_4c = 0x400;
              local_54 = "Assertion failure";
              local_58 = 0x8220202;
              __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_58,0x12);
            }
          }
        }
      }
      else {
        uVar4 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar4,0x10);
        if (cVar1 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x822;
          local_4a = "header.magic == kAMLLibraryPrefsHeaderMagic";
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        FUN_1001782e9(0,0);
        iVar2 = -0xd0;
      }
    }
    else {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
        goto LAB_10056d229;
      }
    }
  }
LAB_10056d42d:
  FUN_1001c64c1(lVar3);
LAB_10056d435:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar2;
}

