// name: FUN_100241c4e
// address: 100241c4e

char FUN_100241c4e(long param_1,uint param_2,char param_3,int param_4,long param_5,int *param_6)

{
  char cVar1;
  undefined8 uVar2;
  int iVar3;
  int local_93c;
  undefined1 local_938 [4];
  undefined1 local_934;
  long local_928;
  undefined1 local_4e0 [1136];
  int local_70;
  undefined1 *local_68;
  char local_60;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_93c = 0;
  FUN_1001c62d9(local_938,0x8e0);
  if (param_5 != 0) {
    FUN_1002188e4(param_5);
  }
  if (((param_1 == 0) || (*(long *)(param_1 + 8) == 0)) ||
     (*(long *)(*(long *)(param_1 + 8) + 0x10) == 0)) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "TrackInstanceIsValid(inTrackInstance)";
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    cVar1 = -0x32;
    goto LAB_100241d0a;
  }
  if ((param_2 & 0x20) == 0) {
    local_93c = FUN_1002b0559(param_1,param_2);
    if (local_93c == 0) goto LAB_100241d33;
    cVar1 = '\0';
  }
  else {
LAB_100241d33:
    if (*(char *)(param_1 + 0x46) == '\x12' && param_3 == '\0') {
      local_934 = 0x12;
    }
    if (param_4 != 0) {
      local_68 = local_4e0;
      local_70 = param_4;
    }
    local_928 = param_1;
    local_60 = param_3;
    cVar1 = FUN_100240d22(local_938,param_5,&local_93c);
  }
  if (param_6 != (int *)0x0) {
    iVar3 = 0x2347;
    if (local_93c != 0) {
      iVar3 = local_93c;
    }
    if (cVar1 != '\0') {
      iVar3 = local_93c;
    }
    *param_6 = iVar3;
  }
LAB_100241d0a:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return cVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

