// name: FUN_10028b042
// address: 10028b042

int FUN_10028b042(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  long local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  int local_34;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1001a85ae(local_58,param_2,0);
  local_48 = 0;
  local_40 = 0;
  local_3c = 0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar5 = FUN_1001a8626(local_58);
  uVar3 = FUN_1001a8610(local_58);
  iVar4 = FUN_100005810(uVar1,uVar5,uVar3,&local_48,&local_40,&local_3c);
  if (local_48 != 0) {
    FUN_1001a833e(local_68,local_48,local_40,1);
    FUN_1001a8908(&local_38,local_68,0);
    FUN_1001b80b2(param_1 + 0x10,&local_38);
    FUN_1001b7a50(&local_38);
    FUN_1001a85d4(local_68);
    FUN_100008ab0(local_48);
    local_48 = 0;
  }
  if (iVar4 == 0) {
    *(undefined4 *)(param_1 + 0x20) = local_3c;
  }
  else {
    if (DAT_1008b5bb0 != -1) {
      _dispatch_once(&DAT_1008b5bb0,&PTR___NSConcreteGlobalBlock_100845020);
    }
    uVar1 = DAT_1008b5ba8;
    cVar2 = _os_log_type_enabled(DAT_1008b5ba8,0x10);
    if (cVar2 != '\0') {
      local_38 = 0x4000100;
      local_34 = iVar4;
      __os_log_impl(0x100000000,uVar1,0x10,"ADIProvisioningStart failed wth error %d.",&local_38,8);
    }
  }
  FUN_1001a85d4(local_58);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

