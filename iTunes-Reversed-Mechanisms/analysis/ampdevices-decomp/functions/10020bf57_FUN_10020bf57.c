// name: FUN_10020bf57
// address: 10020bf57

int FUN_10020bf57(undefined8 param_1,undefined1 *param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined4 local_458;
  char *local_454;
  undefined2 local_44c;
  int local_44a;
  char local_438 [1024];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  *param_2 = 0;
  iVar2 = FUN_1001f7ba5();
  if (iVar2 == 0) {
    do {
      iVar2 = FUN_1001f802f(param_1,local_438,0x400);
      if (iVar2 != 0) {
        if (iVar2 != -0x80) {
          uVar4 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar4,0x10);
          if (cVar1 != '\0') {
            local_458 = 0x8220202;
            local_454 = "Assertion failure";
            local_44c = 0x400;
            local_44a = iVar2;
            __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_458,0x12);
          }
        }
        break;
      }
      cVar1 = FUN_1001e3580(local_438,"Payload/",1);
      if (cVar1 != '\0') {
        lVar3 = FUN_1001df897("Payload/");
        for (lVar5 = 0; cVar1 = (local_438 + lVar3)[lVar5], cVar1 != '\0'; lVar5 = lVar5 + 1) {
          if (cVar1 == '/') {
            FUN_1001dfaed(local_438 + lVar3,lVar5,param_2,0x400);
            iVar2 = 0;
            goto LAB_10020c00f;
          }
        }
      }
      iVar2 = FUN_1001f7c48(param_1);
    } while (iVar2 == 0);
  }
LAB_10020c00f:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar2;
}

