// name: FUN_10056d4db
// address: 10056d4db

int FUN_10056d4db(undefined8 param_1,long *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  uint uVar5;
  int local_e4 [2];
  uint local_dc;
  undefined4 local_88;
  char *local_84;
  undefined2 local_7c;
  int local_7a;
  undefined4 local_68;
  char *local_64;
  undefined2 local_5c;
  char *local_5a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar2 = FUN_10056a2be(param_1,local_e4,0x5c);
  if (iVar2 != -0x80) {
    if (iVar2 == 0) {
      if (local_e4[0] == 0x616d4344) {
        iVar2 = (**(code **)(*param_2 + 0x40))(param_2,0x616d4344,local_e4,0x5c,0);
        if (iVar2 == 0) {
          if (local_dc != 0) {
            uVar5 = 0;
            do {
              iVar2 = FUN_10056a2be(param_1,&local_68,0x28);
              if (iVar2 != 0) {
                if (iVar2 == -0x80) goto LAB_10056d656;
                uVar3 = FUN_1001cc310();
                cVar1 = _os_log_type_enabled(uVar3,0x10);
                if (cVar1 == '\0') goto LAB_10056d656;
                puVar4 = &local_88;
                local_88 = 0x8220202;
                local_84 = "Assertion failure";
                local_7c = 0x400;
                local_7a = iVar2;
                goto LAB_10056d616;
              }
              iVar2 = (**(code **)(*param_2 + 0x40))(param_2,local_68,&local_68,0x28,uVar5);
              if (iVar2 != 0) {
                if (iVar2 == -0x80) goto LAB_10056d656;
                uVar3 = FUN_1001cc310();
                cVar1 = _os_log_type_enabled(uVar3,0x10);
                if (cVar1 == '\0') goto LAB_10056d656;
                puVar4 = &local_88;
                local_88 = 0x8220202;
                local_84 = "Assertion failure";
                local_7c = 0x400;
                local_7a = iVar2;
                goto LAB_10056d616;
              }
              uVar5 = uVar5 + 1;
            } while (uVar5 < local_dc);
          }
          iVar2 = (**(code **)(*param_2 + 0x40))(param_2,local_e4[0],0,0,0);
        }
      }
      else {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          local_68 = 0x8220202;
          local_64 = "Assertion failure";
          local_5c = 0x822;
          local_5a = "header.magic == kAMLCloudDeleteObjectsListHeaderMagic";
          __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_68,0x16);
        }
        FUN_1001782e9(0,0);
        iVar2 = -0xd0;
      }
    }
    else {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        puVar4 = &local_68;
        local_68 = 0x8220202;
        local_64 = "Assertion failure";
        local_5c = 0x400;
        local_5a = (char *)CONCAT44(local_5a._4_4_,iVar2);
LAB_10056d616:
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",puVar4,0x12);
      }
    }
  }
LAB_10056d656:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

