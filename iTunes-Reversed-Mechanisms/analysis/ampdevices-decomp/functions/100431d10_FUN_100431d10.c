// name: FUN_100431d10
// address: 100431d10

undefined8 FUN_100431d10(long param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  undefined8 uVar2;
  char cVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 local_7c;
  uint local_78;
  char *local_74;
  undefined2 local_6c;
  undefined8 local_6a;
  undefined2 local_62;
  long local_60;
  undefined2 local_58;
  undefined4 local_56;
  undefined2 local_52;
  long local_50;
  undefined2 local_48;
  long local_46;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(long *)(param_1 + 0x14d08) == 0) {
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar5 = DAT_1008c75b8;
    lVar4 = 0x123456789abcdef;
    cVar3 = _os_log_type_enabled(DAT_1008c75b8,1);
    local_7c = 0;
    if (cVar3 != '\0') {
      local_78 = local_78 & 0xffff0000;
      __os_log_impl(0x100000000,uVar5,1,
                    "setup> device has no home photo library ID; assuming ownership",&local_78,2);
    }
  }
  else {
    lVar4 = FUN_1004f00ba(param_2,param_3,param_4);
    cVar3 = FUN_10043193e(param_1);
    if (cVar3 == '\0') {
      local_7c = 0;
      if (lVar4 != *(long *)(param_1 + 0x14d08)) {
        bVar1 = true;
        uVar5 = 0;
        goto LAB_100431dfb;
      }
    }
    else {
      *(long *)(param_1 + 0x14d08) = lVar4;
      local_7c = 1;
    }
  }
  FUN_100430e89(param_1 + 0x14f90,param_1 + 0x14fd0);
  uVar5 = 1;
  bVar1 = false;
LAB_100431dfb:
  if (DAT_1008c75c0 != -1) {
    _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
  }
  uVar2 = DAT_1008c75b8;
  cVar3 = _os_log_type_enabled(DAT_1008c75b8,1);
  if (cVar3 != '\0') {
    local_74 = "";
    if (bVar1) {
      local_74 = "NOT ";
    }
    local_6a = *(undefined8 *)(param_1 + 0x14d08);
    local_50 = param_1 + 0x14fd0;
    local_46 = param_1 + 0x14f90;
    local_78 = 0x8220602;
    local_6c = 0x800;
    local_62 = 0x800;
    local_58 = 0x400;
    local_56 = local_7c;
    local_52 = 0x820;
    local_48 = 0x820;
    local_60 = lVar4;
    __os_log_impl(0x100000000,uVar2,1,
                  "setup> device is %{public}son home photo library (device library id 0x%016llX, current desktop library id 0x%016llX, isUniversalHomeLibrary %d, machine name \"%s\", user name \"%s\")"
                  ,&local_78,0x3a);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

