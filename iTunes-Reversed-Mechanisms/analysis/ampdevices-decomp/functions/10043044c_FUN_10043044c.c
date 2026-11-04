// name: FUN_10043044c
// address: 10043044c

void FUN_10043044c(long param_1,byte param_2)

{
  long lVar1;
  char cVar2;
  undefined8 uVar3;
  ulong uVar4;
  bool bVar5;
  uint local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(char *)(param_1 + 0x14cd8) == '\0') goto LAB_10043077c;
  bVar5 = false;
  if (*(char *)(param_1 + 0x35c) != '\0') {
    param_2 = 0;
  }
  if (param_2 == 0 && *(char *)(param_1 + 0x36d) != '\0') {
    bVar5 = *(char *)(param_1 + 0x6abf) == '\0';
  }
  if (*(byte *)(param_1 + 0x151d0) != param_2) {
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar3 = DAT_1008c75b8;
    cVar2 = _os_log_type_enabled(DAT_1008c75b8,2);
    if (cVar2 != '\0') {
      local_58 = local_58 & 0xffff0000;
      __os_log_impl(0x100000000,uVar3,2,"sync> aborting sync due to automatic update mode change",
                    &local_58,2);
    }
    FUN_1004e2d0e(param_1,1);
  }
  lVar1 = *(long *)(param_1 + 0x30);
  if (lVar1 == 0) {
LAB_10043068b:
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "TrackDataIsValid(trackData)";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    if (*(int *)(lVar1 + 0x80) != 0x74646174) {
      uVar3 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar3,0x10);
      if (cVar2 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure (expected to be true)";
        local_4c = 0x822;
        local_4a = "trackData->magic == \'tdat\'";
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      cVar2 = FUN_1001782e9(0,1);
      if (cVar2 == '\0') goto LAB_10043068b;
    }
    if ((*(byte *)(param_1 + 0x151d0) != param_2) || ((bool)*(char *)(param_1 + 0x151d1) != bVar5))
    {
      if ((param_2 == 0) && (bVar5 == false)) {
        uVar4 = *(ulong *)(lVar1 + 0x1bb0);
        if ((uVar4 >> 0x2a & 1) != 0) {
          *(ulong *)(lVar1 + 0x1bb0) = uVar4 & 0xfffffbffffffffff;
          FUN_1002773d4(lVar1);
          uVar4 = *(ulong *)(lVar1 + 0x1bb0);
        }
        if ((uVar4 >> 0x2f & 1) != 0) {
          *(ulong *)(lVar1 + 0x1bb0) = uVar4 & 0xffff7fffffffffff;
          FUN_1004cf6d4(lVar1);
        }
        FUN_1004308df(param_1,1);
        FUN_10058453f(lVar1,1,0);
        *(undefined1 *)(param_1 + 0x14d6c) = 0;
        *(undefined1 *)(param_1 + 0x14d49) = 0;
        *(undefined1 *)(param_1 + 0x14d68) = 0;
        *(undefined1 *)(param_1 + 0x14d78) = 0;
        *(undefined1 *)(param_1 + 0x14dec) = 0;
        *(undefined1 *)(param_1 + 0x14dee) = 0;
        FUN_10042ffc4(param_1,0,*(undefined1 *)(param_1 + 0x14cdb));
        FUN_1004300a8(param_1,*(undefined1 *)(param_1 + 0x14d68),*(undefined1 *)(param_1 + 0x14d69))
        ;
        FUN_100430196(param_1,*(undefined1 *)(param_1 + 0x14d78),*(undefined1 *)(param_1 + 0x14d79))
        ;
        FUN_100430284(param_1,*(undefined1 *)(param_1 + 0x14dec),*(undefined1 *)(param_1 + 0x14ded))
        ;
        FUN_100430368(param_1,*(undefined1 *)(param_1 + 0x14dee),*(undefined1 *)(param_1 + 0x14def))
        ;
        FUN_1004e1392(param_1,1);
      }
      else {
        FUN_10043086b(param_1);
      }
      FUN_1004e7aad(param_1,0);
    }
    *(byte *)(param_1 + 0x151d0) = param_2;
    *(bool *)(param_1 + 0x151d1) = bVar5;
    *(undefined1 *)(param_1 + 0x6afe) = 0;
    *(uint *)(lVar1 + 0x2be0) = *(uint *)(lVar1 + 0x2be0) & 0xfffffffe | (uint)(param_2 == 0);
    *(byte *)(lVar1 + 0x2d1a) = *(byte *)(lVar1 + 0x2d1a) & 0xef | (param_2 & 1) << 4;
    if (bVar5 == false) {
      if ((param_2 == 0) && (*(char *)(param_1 + 0x35c) == '\0')) {
        *(ulong *)(lVar1 + 0x1bb0) = *(ulong *)(lVar1 + 0x1bb0) | 0x10000800000;
      }
      else {
        *(ulong *)(lVar1 + 0x1bb0) =
             *(ulong *)(lVar1 + 0x1bb0) & 0xfffffeffff7fffff |
             (ulong)((*(byte *)(param_1 + 0x370) & 1) << 0x17);
      }
    }
    else {
      *(ulong *)(lVar1 + 0x1bb0) = *(ulong *)(lVar1 + 0x1bb0) & 0xfffffeffff7fffff;
    }
    bVar5 = true;
    if (*(char *)(param_1 + 0x6ac4) == '\0') {
      bVar5 = *(char *)(param_1 + 0x14cda) != '\0';
    }
    *(bool *)(param_1 + 0x6ac6) = bVar5;
  }
LAB_10043077c:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

