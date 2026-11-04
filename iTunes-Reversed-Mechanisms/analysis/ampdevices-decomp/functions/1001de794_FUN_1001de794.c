// name: FUN_1001de794
// address: 1001de794

void FUN_1001de794(undefined8 *param_1,int *param_2,int param_3,byte param_4)

{
  int iVar1;
  char cVar2;
  undefined8 uVar3;
  ushort local_238;
  undefined1 local_236 [518];
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (((int *)*param_1 != param_2) || (*(int *)(param_1 + 1) != param_3)) {
    if (((int *)*param_1 != (int *)0x0) && (*(int *)(param_1 + 1) != 0)) {
      FUN_1001dcff5();
    }
    *param_1 = param_2;
    *(int *)(param_1 + 1) = param_3;
    if ((param_3 != 0) && ((param_2 == (int *)0x0 || (*param_2 != 0x73747263)))) {
      uVar3 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar3,0x10);
      if (cVar2 != '\0') {
        FUN_1006b98b9(uVar3);
      }
      FUN_1001782e9(0,0);
      param_2 = (int *)*param_1;
      if ((param_2 == (int *)0x0) || (*param_2 != 0x73747263)) {
        *param_1 = 0;
        *(undefined4 *)(param_1 + 1) = 0;
        goto LAB_1001de894;
      }
    }
    if ((param_2 != (int *)0x0 & param_4) != 0) {
      iVar1 = *(int *)(param_1 + 1);
      if (iVar1 != 0) {
        if ((*(byte *)(param_2 + 1) & 1) == 0) {
          FUN_1001de41f(param_2,iVar1,&local_238);
          FUN_1001dd1c1(*param_1,local_236,(uint)local_238 * 2,0,param_1 + 1);
        }
        else {
          FUN_1001dcecf(param_2);
        }
      }
    }
  }
LAB_1001de894:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

