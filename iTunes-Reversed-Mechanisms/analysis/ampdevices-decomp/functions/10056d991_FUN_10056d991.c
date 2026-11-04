// name: FUN_10056d991
// address: 10056d991

int FUN_10056d991(undefined8 param_1,long *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  uint uVar5;
  int local_154 [2];
  uint local_14c;
  undefined4 local_f8;
  char *local_f4;
  undefined2 local_ec;
  int local_ea;
  undefined4 local_d8;
  char *local_d4;
  undefined2 local_cc;
  char *local_ca;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar2 = FUN_10056a2be(param_1,local_154,0x5c);
  if (iVar2 != -0x80) {
    if (iVar2 == 0) {
      if (local_154[0] == 0x616d736c) {
        iVar2 = (**(code **)(*param_2 + 0x58))(param_2,0x616d736c,local_154,0x5c,0);
        if (iVar2 == 0) {
          if (local_14c != 0) {
            uVar5 = 0;
            do {
              iVar2 = FUN_10056a2be(param_1,&local_d8,0x98);
              if (iVar2 != 0) {
                if (iVar2 == -0x80) goto LAB_10056db15;
                uVar3 = FUN_1001cc310();
                cVar1 = _os_log_type_enabled(uVar3,0x10);
                if (cVar1 == '\0') goto LAB_10056db15;
                puVar4 = &local_f8;
                local_f8 = 0x8220202;
                local_f4 = "Assertion failure";
                local_ec = 0x400;
                local_ea = iVar2;
                goto LAB_10056dad5;
              }
              iVar2 = (**(code **)(*param_2 + 0x58))(param_2,local_d8,&local_d8,0x98,uVar5);
              if (iVar2 != 0) {
                if (iVar2 == -0x80) goto LAB_10056db15;
                uVar3 = FUN_1001cc310();
                cVar1 = _os_log_type_enabled(uVar3,0x10);
                if (cVar1 == '\0') goto LAB_10056db15;
                puVar4 = &local_f8;
                local_f8 = 0x8220202;
                local_f4 = "Assertion failure";
                local_ec = 0x400;
                local_ea = iVar2;
                goto LAB_10056dad5;
              }
              uVar5 = uVar5 + 1;
            } while (uVar5 < local_14c);
          }
          iVar2 = (**(code **)(*param_2 + 0x58))(param_2,local_154[0],0,0,0);
        }
      }
      else {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          local_d8 = 0x8220202;
          local_d4 = "Assertion failure";
          local_cc = 0x822;
          local_ca = "header.magic == kAMLRecentSearchResultsListHeaderMagic";
          __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_d8,0x16);
        }
        FUN_1001782e9(0,0);
        iVar2 = -0xd0;
      }
    }
    else {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        puVar4 = &local_d8;
        local_d8 = 0x8220202;
        local_d4 = "Assertion failure";
        local_cc = 0x400;
        local_ca = (char *)CONCAT44(local_ca._4_4_,iVar2);
LAB_10056dad5:
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",puVar4,0x12);
      }
    }
  }
LAB_10056db15:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

