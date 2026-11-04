// name: FUN_1003f99ce
// address: 1003f99ce

void FUN_1003f99ce(long *param_1,long param_2,uint *param_3,int *param_4)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar3 = FUN_1003f9b30();
  if (lVar3 == 0) {
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      local_4a = "trackInstance != nullptr";
LAB_1003f9b04:
      local_4c = 0x822;
      local_54 = "Assertion failure";
      local_58 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
  }
  else {
    plVar4 = (long *)FUN_10048a4b3(*(undefined8 *)(lVar3 + 8));
    iVar2 = FUN_10037e1fc(*(undefined8 *)(*plVar4 + 0x3c0),plVar4,0x75,0);
    if (iVar2 != -1) {
      *(int *)(param_2 + 0x2c + (ulong)*param_3 * 4) = iVar2;
      *param_3 = *param_3 + 1;
      if ((*(byte *)(*(long *)(lVar3 + 8) + 0xc3) & 0x80) == 0) {
        cVar1 = FUN_1002b16f5(lVar3);
        if ((cVar1 == '\0') && (*(short *)(*param_1 + 0x10) != 0x20)) {
          *param_4 = *param_4 + 1;
        }
      }
      goto LAB_1003f9ac1;
    }
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      local_4a = "playlistTrackIndex != 0xFFFFFFFF";
      goto LAB_1003f9b04;
    }
  }
  FUN_1001782e9(0,0);
LAB_1003f9ac1:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

