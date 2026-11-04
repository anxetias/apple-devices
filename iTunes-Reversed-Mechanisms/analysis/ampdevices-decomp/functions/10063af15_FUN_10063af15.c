// name: FUN_10063af15
// address: 10063af15

int FUN_10063af15(undefined8 param_1,ushort *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 local_50;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  int local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_50 = param_1;
  iVar2 = FUN_10023f13d(param_3,param_4,0x4f69646c,&local_50,8,4);
  if (iVar2 == 0) {
    FUN_10023f13d(param_3,param_4,0x6974756e,0,0,4);
    if ((param_2 != (ushort *)0x0) && (*param_2 != 0)) {
      iVar3 = FUN_10023f13d(param_3,param_4,0x4f69646e,param_2 + 1,(uint)*param_2 * 2,1);
      if ((iVar3 != -0x80) && (iVar3 != 0)) {
        uVar4 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar4,0x10);
        if (cVar1 != '\0') {
          local_48 = 0x8220202;
          local_44 = "Assertion failure";
          local_3c = 0x400;
          local_3a = iVar3;
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_48,0x12);
        }
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

