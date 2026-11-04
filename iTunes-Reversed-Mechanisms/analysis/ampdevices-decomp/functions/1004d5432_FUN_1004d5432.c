// name: FUN_1004d5432
// address: 1004d5432

void FUN_1004d5432(long param_1,short *param_2,ushort *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  uint uVar5;
  float fVar6;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_3 == (ushort *)0x0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_4a = "playlistName != nullptr";
LAB_1004d560d:
      local_4c = 0x822;
      local_54 = "Assertion failure";
      local_58 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
  }
  else {
    *param_3 = 0;
    if (param_1 == 0) {
LAB_1004d558d:
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_4a = "TrackDataIsValid(trackData)";
        goto LAB_1004d560d;
      }
    }
    else {
      if (*(int *)(param_1 + 0x80) != 0x74646174) {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure (expected to be true)";
          local_4c = 0x822;
          local_4a = "trackData->magic == \'tdat\'";
          __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        cVar1 = FUN_1001782e9(0,1);
        if (cVar1 == '\0') goto LAB_1004d558d;
      }
      if ((param_2 != (short *)0x0) && (*param_2 != 0)) {
        uVar5 = 1;
        do {
          FUN_1001e1c39(param_2,param_3);
          iVar2 = 3;
          if (9 < uVar5) {
            fVar6 = (float)_log10f((float)uVar5);
            iVar2 = (int)fVar6 + 2;
          }
          if (0x100 < (int)((uint)*param_3 + iVar2)) {
            *param_3 = 0xff - (short)iVar2;
          }
          FUN_1001e26e1(" ^1",param_3);
          FUN_1001e5722(param_3,param_3,uVar5);
          uVar5 = uVar5 + 1;
          lVar4 = FUN_10048b91a(param_1,param_3,1);
        } while (lVar4 != 0);
        goto LAB_1004d563b;
      }
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_4a = "formatString != nullptr && formatString[0] != 0";
        goto LAB_1004d560d;
      }
    }
  }
  FUN_1001782e9(0,0);
LAB_1004d563b:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

