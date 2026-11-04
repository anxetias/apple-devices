// name: FUN_1005293c1
// address: 1005293c1

void FUN_1005293c1(undefined8 param_1,long param_2,long param_3,long param_4,uint param_5,
                  char param_6)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined8 local_68;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar1 = FUN_100527a20();
  if (cVar1 == '\0') {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "AppProgressBarIsValid(progressBar)";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
      return;
    }
  }
  else {
    bVar4 = true;
    if ((*(int *)(param_2 + 0x818) == 0) && (*(char *)(param_2 + 0x8e0) == '\x01')) {
      bVar4 = (*(byte *)(param_2 + 0x829) & 2) == 0;
    }
    *(undefined4 *)(param_2 + 0x818) = 0;
    if (param_3 == 0) {
      *(undefined2 *)(param_2 + 0x18) = 0;
      iVar2 = 0;
    }
    else {
      FUN_1001e1c39(param_3);
      iVar2 = *(int *)(param_2 + 0x818) + 1;
      *(int *)(param_2 + 0x818) = iVar2;
    }
    if (param_4 == 0) {
      *(undefined2 *)(param_2 + 0x418) = 0;
    }
    else {
      FUN_1001e1c39(param_4);
      iVar2 = *(int *)(param_2 + 0x818) + 1;
      *(int *)(param_2 + 0x818) = iVar2;
    }
    if (param_6 == '\0') {
      *(undefined2 *)(param_2 + 0x218) = 0;
      *(undefined2 *)(param_2 + 0x618) = 0;
      local_68 = param_1;
      if ((char)param_5 < '\0') {
        local_68 = DAT_100700af8;
      }
      *(undefined8 *)(param_2 + 0x820) = local_68;
      *(uint *)(param_2 + 0x828) = param_5 & 0xfffff7ff | *(uint *)(param_2 + 0x828) & 0x800;
    }
    if (!(bool)(bVar4 | iVar2 == 0)) {
      FUN_100528074(param_2,0);
    }
    uVar3 = FUN_1001c156e();
    if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
      FUN_1001c6987(uVar3,0x75707267,param_2,0,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

