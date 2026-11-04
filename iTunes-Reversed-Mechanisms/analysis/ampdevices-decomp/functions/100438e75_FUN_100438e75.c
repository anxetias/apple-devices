// name: FUN_100438e75
// address: 100438e75

void FUN_100438e75(undefined8 param_1,int *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((((param_2 != (int *)0x0) && (*param_2 == 0x4f4c5354)) && (param_2[1] != 0)) &&
     (iVar5 = (int)((ulong)(*(long *)(param_2 + 4) - *(long *)(param_2 + 2)) >> 3) * -0x49249249,
     iVar5 != 0)) {
    iVar6 = 0;
    do {
      lVar3 = FUN_1005968ea(param_2,iVar6,0);
      if (lVar3 == 0) {
        uVar4 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar4,0x10);
        if (cVar1 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x822;
          local_4a = "trackInfo != nullptr";
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        FUN_1001782e9(0,0);
      }
      else if ((*(int *)(lVar3 + 0xc) == 1) &&
              (iVar2 = FUN_10043649f(param_1,lVar3,1,param_3,param_4), iVar2 != 0)) {
        uVar4 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar4,0x10);
        if (cVar1 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x400;
          local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_58,0x12);
        }
      }
      iVar6 = iVar6 + 1;
    } while (iVar5 != iVar6);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

