// name: FUN_100351018
// address: 100351018

ulong FUN_100351018(long param_1,long param_2,uint *param_3,undefined8 param_4,undefined8 param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  undefined8 uVar8;
  ulong uVar9;
  bool bVar10;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_3 == (uint *)0x0) {
    uVar8 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar8,0x10);
    if (cVar4 != '\0') {
      local_4a = "inSortParams != __null";
LAB_100351211:
      local_4c = 0x822;
      local_54 = "Assertion failure";
      local_58 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
LAB_10035117c:
    uVar9 = 0;
    FUN_1001782e9(0,0);
  }
  else {
    uVar5 = *param_3;
    uVar9 = 0;
    if (param_1 != param_2 && uVar5 != 11000) {
      if ((uVar5 & 0xfffffffe) == 0x2afa || (param_3[1] & 0x10) != 0) {
        uVar5 = FUN_1003513f0(param_1,param_4,param_5);
        uVar9 = (ulong)uVar5;
        if (uVar5 != 0) goto LAB_100351188;
        uVar5 = *param_3;
      }
      piVar7 = (int *)FUN_1002ddacc(uVar5);
      if (piVar7 != (int *)0x0) {
        uVar5 = param_3[1];
        bVar10 = (uVar5 & 1) == 0;
        uVar2 = uVar5 & 0xfffffff6;
        if (bVar10) {
          uVar2 = uVar5 & 0xfffffffe;
        }
        iVar1 = *piVar7;
        while (iVar1 != 0) {
          piVar7 = piVar7 + 1;
          uVar6 = FUN_100351687(param_1,param_2,param_4,param_5,iVar1,uVar2);
          uVar3 = -uVar6;
          if (bVar10) {
            uVar3 = uVar6;
          }
          uVar9 = (ulong)uVar3;
          if (uVar3 != 0) goto LAB_100351188;
          bVar10 = true;
          iVar1 = *piVar7;
        }
        if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
          uVar9 = FUN_100351687(param_1,param_2,param_4,param_5,0x1e,uVar5 & 0xfffffffe);
          return uVar9;
        }
        goto LAB_10035123b;
      }
      uVar8 = FUN_1001cc310();
      cVar4 = _os_log_type_enabled(uVar8,0x10);
      if (cVar4 != '\0') {
        local_4a = "sortHierarchy != __null";
        goto LAB_100351211;
      }
      goto LAB_10035117c;
    }
  }
LAB_100351188:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar9;
  }
LAB_10035123b:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

