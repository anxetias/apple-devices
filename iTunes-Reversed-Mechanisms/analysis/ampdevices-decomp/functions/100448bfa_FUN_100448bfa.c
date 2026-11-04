// name: FUN_100448bfa
// address: 100448bfa

int FUN_100448bfa(long *param_1,long param_2,int param_3,uint *param_4,double *param_5)

{
  int iVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  double local_68;
  int local_5c;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  int local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_68 = -1.0;
  uVar5 = 0;
  do {
    local_5c = 0;
    if (((char)param_1[0xe] == '\0') &&
       (iVar3 = (**(code **)(*param_1 + 0x48))(param_1), iVar3 != 0)) {
      if ((iVar3 != -0x80) && (iVar3 != -0x27)) {
        uVar4 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar4,0x10);
joined_r0x000100448d1c:
        if (cVar2 != '\0') {
          local_4c = 0x400;
          local_54 = "Assertion failure";
          local_58 = 0x8220202;
          local_4a = iVar3;
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_58,0x12);
        }
      }
      goto LAB_100448d9d;
    }
    iVar3 = (**(code **)(*param_1 + 0x60))(param_1,param_2,param_3,&local_5c,&local_68);
    iVar1 = local_5c;
    if (iVar3 != 0) {
      if (iVar3 != -0x80) {
        uVar4 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar4,0x10);
        goto joined_r0x000100448d1c;
      }
      goto LAB_100448d9d;
    }
    uVar5 = uVar5 + local_5c;
    iVar3 = (**(code **)(*param_1 + 0x58))(param_1);
    param_3 = param_3 - iVar1;
    if (param_3 == 0) {
      if (param_4 != (uint *)0x0) {
        *param_4 = uVar5;
      }
      if (param_5 != (double *)0x0) {
        *param_5 = local_68;
      }
      param_1[0x1b] = (long)(local_68 + (double)uVar5 / (double)param_1[9]);
      iVar3 = 0;
LAB_100448d9d:
      if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
        return iVar3;
      }
                    /* WARNING: Subroutine does not return */
      ___stack_chk_fail();
    }
    param_2 = param_2 + (ulong)(uint)(iVar3 * iVar1);
  } while( true );
}

