// name: FUN_100483032
// address: 100483032

void FUN_100483032(int *param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  int iVar3;
  undefined4 local_78 [8];
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == (int *)0x0) {
LAB_1004832cd:
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "PlaylistIsValid(playlist)";
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    if (*param_1 != 0x706c7374) {
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure (expected to be true)";
        local_4c = 0x822;
        local_4a = "playlist->magic == \'plst\'";
        __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      cVar1 = FUN_1001782e9(0,1);
      if (cVar1 == '\0') goto LAB_1004832cd;
    }
    *(byte *)((long)param_1 + 0x241) = *(byte *)((long)param_1 + 0x241) | 0x80;
    if ((*(byte *)(param_1 + 0xa6) & 5) == 1) {
      FUN_100538877(&local_58,param_1 + 0xb2);
      cVar1 = FUN_10053941c(&local_58,param_2);
      if (cVar1 != '\0') {
        FUN_1005821b3(param_1,1);
      }
    }
    FUN_1001c62d9(&local_58,0x20);
    iVar3 = 0;
    do {
      FUN_10031d3e5(iVar3,local_78);
      cVar1 = FUN_10053916d(param_2,local_78[0]);
      if (cVar1 != '\0') {
        FUN_10037eafe(param_1,iVar3,local_78);
        FUN_100538b99(&local_58,local_78);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 != 0x71);
    cVar1 = FUN_10053916d(param_2,0x1f);
    if (cVar1 != '\0') {
      FUN_1005389ba(&local_58,3);
    }
    cVar1 = FUN_10053916d(param_2,0x4e);
    if (cVar1 != '\0') {
      FUN_1005389ba(&local_58,2);
    }
    cVar1 = FUN_10053916d(param_2,0x4f);
    if (cVar1 != '\0') {
      FUN_1005389ba(&local_58,3);
    }
    cVar1 = FUN_10053916d(param_2,0x50);
    if (cVar1 != '\0') {
      FUN_1005389ba(&local_58,4);
    }
    cVar1 = FUN_10053916d(param_2,0x51);
    if (cVar1 != '\0') {
      FUN_1005389ba(&local_58,0x47);
    }
    cVar1 = FUN_10053916d(param_2,0x52);
    if (cVar1 != '\0') {
      FUN_1005389ba(&local_58,0x12);
    }
    cVar1 = FUN_10053916d(param_2,0x53);
    if (cVar1 != '\0') {
      FUN_1005389ba(&local_58,0x3e);
    }
    FUN_10037c708(*(undefined8 *)(param_1 + 0xf0),&local_58);
    uVar2 = FUN_1005396f9(&DAT_1008c789d,&DAT_1007565a0,0);
    cVar1 = FUN_10053941c(param_2,uVar2);
    if (cVar1 != '\0') {
      FUN_10037ee15(param_1,0x35);
    }
    uVar2 = FUN_1005396f9(&DAT_1008c789d,&DAT_1007565a0,0);
    uVar2 = FUN_10053974b(&DAT_1008c78be,uVar2,&DAT_1007565c4);
    cVar1 = FUN_10053941c(param_2,uVar2);
    if (cVar1 != '\0') {
      FUN_10037ee15(param_1,0x34);
    }
    cVar1 = FUN_10053916d(param_2,0x3c);
    if (cVar1 != '\0') {
      param_1[5] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
    }
    cVar1 = FUN_10053916d(param_2,0x81);
    if (cVar1 != '\0') {
      param_1[0x7d] = 0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

