// name: FUN_10028b1e6
// address: 10028b1e6

int FUN_10028b1e6(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined4 local_38;
  int local_34;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1001a85ae(local_58,param_2,0);
  FUN_1001a85ae(local_48,param_3,0);
  uVar1 = *(undefined4 *)(param_1 + 0x20);
  uVar6 = FUN_1001a8626(local_58);
  uVar3 = FUN_1001a8610(local_58);
  uVar7 = FUN_1001a8626(local_48);
  uVar4 = FUN_1001a8610(local_48);
  iVar5 = FUN_100010ac0(uVar1,uVar6,uVar3,uVar7,uVar4);
  if (iVar5 != 0) {
    if (DAT_1008b5bb0 != -1) {
      _dispatch_once(&DAT_1008b5bb0,&PTR___NSConcreteGlobalBlock_100845020);
    }
    uVar6 = DAT_1008b5ba8;
    cVar2 = _os_log_type_enabled(DAT_1008b5ba8,0x10);
    if (cVar2 != '\0') {
      local_38 = 0x4000100;
      local_34 = iVar5;
      __os_log_impl(0x100000000,uVar6,0x10,"ADIProvisioningEnd failed wth error %d.",&local_38,8);
    }
  }
  FUN_1001a85d4(local_48);
  FUN_1001a85d4(local_58);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

