// name: FUN_10018837d
// address: 10018837d

int FUN_10018837d(int param_1,int *param_2,int *param_3,undefined2 *param_4,uint param_5,
                 uint *param_6)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  uint uVar6;
  char local_6c0;
  char local_6bf;
  int *local_670;
  undefined2 *local_668;
  uint local_660;
  uint local_65c;
  undefined1 local_658 [1056];
  ushort local_238;
  undefined1 local_236 [510];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_6 != (uint *)0x0) {
    *param_6 = 0;
  }
  if ((((param_2 == (int *)0x0) || (*(long *)(param_2 + 4) == 0)) ||
      ((iVar3 = *param_2, iVar3 != 0x504f5358 && (iVar3 != 0x41464350)))) || (iVar3 != param_1)) {
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      FUN_10068df6d(uVar5);
    }
  }
  else if ((param_3 == (int *)0x0) || (*param_3 == param_1)) {
    if (param_4 == (undefined2 *)0x0) {
      uVar5 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar5,0x10);
      if (cVar2 != '\0') {
        FUN_10068def7(uVar5);
      }
    }
    else {
      if (param_5 != 0) {
        local_670 = param_3;
        local_660 = param_5;
        _memcpy(local_658,param_2,0x420);
        local_668 = param_4 + 1;
        uVar6 = 0;
        do {
          iVar3 = FUN_10017d406(local_658,0,&local_6c0,&local_238);
          if (iVar3 != 0) goto LAB_10018865b;
          if ((local_670 != (int *)0x0) &&
             (cVar2 = FUN_10017f77e(local_670,local_658), cVar2 != '\0')) {
            iVar3 = 0;
            goto LAB_10018865b;
          }
          if ((uVar6 == 0) && (local_6c0 != '\0')) {
            *param_4 = 0x2f;
            uVar6 = 1;
          }
          uVar4 = (uint)local_238 + (uint)(local_6bf == '\0');
          uVar1 = uVar4 + uVar6;
          if (local_660 < uVar1) {
            iVar3 = -0x6c;
            uVar6 = 0;
            goto LAB_10018865b;
          }
          local_65c = uVar1;
          FUN_1001c631b(param_4,param_4 + uVar4,(ulong)uVar6 * 2);
          if (local_6bf == '\0') {
            FUN_1001c631b(local_236,local_668,(uint)local_238 * 2);
            *param_4 = 0x2f;
          }
          else {
            FUN_1001c631b(local_236,param_4,(uint)local_238 * 2);
          }
          if (local_6bf != '\0') {
            iVar3 = 0;
            uVar6 = local_65c;
            goto LAB_10018865b;
          }
          iVar3 = FUN_10017d5ba(local_658);
          uVar6 = local_65c;
        } while (iVar3 == 0);
        if (iVar3 != -0x80) {
          uVar5 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar5,0x10);
          uVar6 = local_65c;
          if (cVar2 != '\0') {
            FUN_10068de15(iVar3,uVar5);
            uVar6 = local_65c;
          }
        }
LAB_10018865b:
        if (param_6 != (uint *)0x0) {
          *param_6 = uVar6;
        }
        goto LAB_100188599;
      }
      uVar5 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar5,0x10);
      if (cVar2 != '\0') {
        FUN_10068de81(uVar5);
      }
    }
  }
  else {
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      FUN_10068dd9f(uVar5);
    }
  }
  FUN_1001782e9(0,0);
  iVar3 = -0x32;
LAB_100188599:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar3;
}

