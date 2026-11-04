// name: FUN_100596046
// address: 100596046

int FUN_100596046(int *param_1,int *param_2,char param_3,undefined8 param_4)

{
  int iVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  undefined4 local_68;
  char *local_64;
  undefined2 local_5c;
  char *local_5a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == (int *)0x0) {
LAB_100596139:
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_68 = 0x8220202;
      local_64 = "Assertion failure";
      local_5c = 0x822;
      local_5a = "PlaylistIsValid(playlist)";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_68,0x16);
    }
    FUN_1001782e9(0,0);
    iVar3 = -0x32;
  }
  else {
    if (*param_2 != 0x706c7374) {
      uVar4 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar4,0x10);
      if (cVar2 != '\0') {
        local_68 = 0x8220202;
        local_64 = "Assertion failure (expected to be true)";
        local_5c = 0x822;
        local_5a = "playlist->magic == \'plst\'";
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_68,0x16);
      }
      cVar2 = FUN_1001782e9(0,1);
      if (cVar2 == '\0') goto LAB_100596139;
    }
    if (param_3 == '\0') {
      FUN_100490e67(param_2,&local_68);
      iVar3 = FUN_100594f1e(param_1,&local_68,0,param_4);
    }
    else {
      iVar3 = -0x32;
      if (((param_1 != (int *)0x0) && (*param_1 == 0x4f4c5354)) && (param_1[1] != 0)) {
        iVar1 = *(int *)(*(long *)(param_2 + 0x1e) + 0x18);
        if (iVar1 == 0) {
          iVar3 = 0;
        }
        else {
          iVar6 = 0;
          do {
            lVar5 = FUN_10037ddf6(*(undefined8 *)(param_2 + 0xf0),0x77,0,iVar6);
            if ((lVar5 != 0) && (iVar3 = FUN_100595808(param_1,lVar5,0,param_4), iVar3 != 0)) {
              if (iVar3 != -0x80) {
                uVar4 = FUN_1001cc310();
                cVar2 = _os_log_type_enabled(uVar4,0x10);
                if (cVar2 != '\0') {
                  local_68 = 0x8220202;
                  local_64 = "Assertion failure";
                  local_5c = 0x400;
                  local_5a = (char *)CONCAT44(local_5a._4_4_,iVar3);
                  __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_68,
                                      0x12);
                }
              }
              break;
            }
            iVar6 = iVar6 + 1;
            iVar3 = 0;
          } while (iVar1 != iVar6);
        }
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar3;
}

