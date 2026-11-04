// name: FUN_10027373a
// address: 10027373a

int FUN_10027373a(undefined4 *param_1,long *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == (long *)0x0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "returnedAlbumInfo != __null";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
    iVar2 = -0x32;
  }
  else {
    iVar2 = 0x234e;
    switch(*param_1) {
    case 2:
      iVar2 = FUN_1002738dc(*(undefined8 *)(param_1 + 2),param_1[4],param_1[5],param_1[6],
                            *(undefined1 *)(param_1 + 7),*(undefined8 *)(param_1 + 8),
                            *(undefined8 *)(param_1 + 10),*(undefined1 *)(param_1 + 0xc),param_2);
      break;
    case 3:
    case 6:
      iVar2 = FUN_100273b58(*(undefined8 *)(param_1 + 2),param_1[4],param_1 + 0x14,param_1 + 0x18,
                            *(undefined8 *)(param_1 + 8),*(undefined1 *)(param_1 + 0xc),param_2);
      break;
    case 4:
      iVar2 = FUN_100273a26(*(undefined8 *)(param_1 + 2),param_1[4],param_1[0x12],
                            *(undefined8 *)(param_1 + 8),*(undefined1 *)(param_1 + 0xc),param_2);
      break;
    default:
      goto switchD_100273782_caseD_5;
    }
    if ((iVar2 == 0) && (iVar2 = 0, *param_2 != 0)) {
      cVar1 = FUN_1001b8428(param_1 + 0xe);
      if (cVar1 == '\0') {
        FUN_1003a4c38(*param_2,param_1 + 0xe);
      }
    }
  }
switchD_100273782_caseD_5:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

