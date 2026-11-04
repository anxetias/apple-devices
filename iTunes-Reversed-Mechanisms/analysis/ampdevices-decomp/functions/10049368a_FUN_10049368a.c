// name: FUN_10049368a
// address: 10049368a

int * FUN_10049368a(int *param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == (int *)0x0) {
LAB_100493715:
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "PlaylistIsValid( inPlaylist )";
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    param_1 = (int *)0x0;
    FUN_1001782e9(0,0);
    goto switchD_1004936fe_caseD_2;
  }
  if (*param_1 != 0x706c7374) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure (expected to be true)";
      local_2c = 0x822;
      local_2a = "playlist->magic == \'plst\'";
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    cVar1 = FUN_1001782e9(0,1);
    if (cVar1 == '\0') goto LAB_100493715;
  }
  switch((short)param_1[4]) {
  case 2:
  case 3:
  case 4:
  case 5:
  case 7:
  case 10:
  case 0x23:
  case 0x28:
  case 0x2c:
  case 0x2f:
  case 0x30:
  case 0x38:
  case 0x40:
  case 0x41:
  case 0x42:
  case 0x43:
  case 0x45:
  case 0x46:
    goto switchD_1004936fe_caseD_2;
  case 6:
  case 0xc:
  case 0x11:
  case 0x1c:
  case 0x2b:
  case 0x2d:
  case 0x31:
  case 0x33:
  case 0x3d:
  case 0x3e:
switchD_1004936fe_caseD_6:
    uVar2 = *(undefined8 *)(param_1 + 2);
LAB_100493704:
    uVar3 = 4;
    break;
  default:
    local_38 = 0;
    if (*(int *)(*(long *)(param_1 + 0x1e) + 0x18) == 0) goto switchD_1004936fe_caseD_6;
    FUN_1004919da(param_1,&local_38);
    if ((local_38 & 4) == 0) {
      if ((local_38 & 0x40) != 0) {
        uVar2 = *(undefined8 *)(param_1 + 2);
        uVar3 = 3;
        break;
      }
      if ((local_38 & 2) != 0) {
        uVar2 = *(undefined8 *)(param_1 + 2);
        uVar3 = 2;
        break;
      }
      uVar2 = *(undefined8 *)(param_1 + 2);
      if ((local_38 & 8) != 0) {
        uVar3 = 5;
        break;
      }
      goto LAB_100493704;
    }
    uVar2 = *(undefined8 *)(param_1 + 2);
    uVar3 = 10;
  }
  param_1 = (int *)FUN_10048bbac(uVar2,uVar3,0);
switchD_1004936fe_caseD_2:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

