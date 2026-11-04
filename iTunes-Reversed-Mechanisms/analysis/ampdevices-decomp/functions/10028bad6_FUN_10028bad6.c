// name: FUN_10028bad6
// address: 10028bad6

/* WARNING: Type propagation algorithm not settling */

int FUN_10028bad6(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined1 local_78 [20];
  int local_64;
  long local_60;
  long local_58;
  undefined1 local_50 [20];
  int local_3c [5];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1001a85ae(local_78,param_2,0);
  local_58 = 0;
  local_3c[0] = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar5 = FUN_1001a8626(local_78);
  uVar3 = FUN_1001a8610(local_78);
  iVar4 = FUN_10001f910(uVar1,uVar5,uVar3,&local_60,&local_64,&local_58,local_3c);
  if (iVar4 != 0) {
    if (DAT_1008b5bb0 != -1) {
      _dispatch_once(&DAT_1008b5bb0,&PTR___NSConcreteGlobalBlock_100845020);
    }
    uVar1 = DAT_1008b5ba8;
    cVar2 = _os_log_type_enabled(DAT_1008b5ba8,0x10);
    if (cVar2 != '\0') {
      local_3c[1] = 0x4000100;
      local_3c[2] = iVar4;
      __os_log_impl(0x100000000,uVar1,0x10,"ADISynchronize failed with error %d.",local_3c + 1,8);
    }
  }
  if (local_64 != 0 && local_60 != 0) {
    FUN_1001a833e(local_50,local_60,local_64,1);
    FUN_1001a8908(local_3c + 1,local_50,0);
    FUN_1001b80b2(param_1 + 0x18,local_3c + 1);
    FUN_1001b7a50(local_3c + 1);
    FUN_1001a85d4(local_50);
    FUN_100008ab0(local_60);
    local_60 = 0;
  }
  if (local_3c[0] != 0 && local_58 != 0) {
    FUN_1001a833e(local_50,local_58,local_3c[0],1);
    FUN_1001a8908(local_3c + 1,local_50,0);
    FUN_1001b80b2(param_1 + 8,local_3c + 1);
    FUN_1001b7a50(local_3c + 1);
    FUN_1001a85d4(local_50);
    FUN_100008ab0(local_58);
  }
  FUN_1001a85d4(local_78);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

