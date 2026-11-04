// name: FUN_10057586e
// address: 10057586e

int FUN_10057586e(long *param_1,long *param_2)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*param_2 == 0) {
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "inParams->sourceDataHandler != __null";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
    iVar3 = 0x20bf;
  }
  else {
    FUN_100203686(param_1 + 1);
    FUN_100203686(param_1 + 3,param_2 + 2);
    FUN_100238d72(param_1 + 7,param_2[5],param_2[6]);
    *(char *)(param_1 + 0x12) = (char)param_2[7];
    *(undefined1 *)((long)param_1 + 0x91) = *(undefined1 *)((long)param_2 + 0x39);
    lVar4 = FUN_1001705fc(param_2[4]);
    param_1[0x19] = lVar4;
    iVar3 = FUN_1001e9c3e(param_1 + 9);
    if (iVar3 != -0x80) {
      if (iVar3 == 0) {
        bVar1 = *(byte *)((long)param_2 + 0x3a);
        *(byte *)((long)param_1 + 0x92) = bVar1;
        if (param_1[7] != 0) {
          lVar4 = (**(code **)(*(long *)param_1[1] + 0x70))();
          FUN_1001cecce(param_1[7],lVar4 << (*(byte *)((long)param_1 + 0x92) & 0x3f));
          bVar1 = *(byte *)((long)param_1 + 0x92);
        }
        iVar3 = 0;
        if ((bVar1 & 1) == 0) goto LAB_100575a2a;
        if (param_1[3] != 0) {
          uVar5 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar5,0x10);
          if (cVar2 != '\0') {
            local_48 = 0x8220202;
            local_44 = "Assertion failure";
            local_3c = 0x822;
            local_3a = "mDestDataHandler == __null";
            __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
          }
          FUN_1001782e9(0,0);
        }
        iVar3 = (**(code **)(*param_1 + 0x90))(param_1,param_2[8]);
        if ((iVar3 == -0x80) || (iVar3 == 0)) goto LAB_100575a2a;
        uVar5 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar5,0x10);
        if (cVar2 == '\0') goto LAB_100575a2a;
        local_3a = (char *)CONCAT44(local_3a._4_4_,iVar3);
      }
      else {
        uVar5 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar5,0x10);
        if (cVar2 == '\0') goto LAB_100575a2a;
        local_3a = (char *)CONCAT44(local_3a._4_4_,iVar3);
      }
      local_3c = 0x400;
      local_44 = "Assertion failure";
      local_48 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_48,0x12);
    }
  }
LAB_100575a2a:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

