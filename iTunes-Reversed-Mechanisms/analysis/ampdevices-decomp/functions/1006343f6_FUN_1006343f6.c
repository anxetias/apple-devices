// name: FUN_1006343f6
// address: 1006343f6

int FUN_1006343f6(undefined4 param_1,code *param_2,undefined8 param_3)

{
  code *pcVar1;
  long *plVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined1 local_7c [4];
  code *local_78;
  undefined8 local_70;
  long *local_68;
  long *local_60;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_68 = (long *)0x0;
  local_60 = (long *)0x0;
  local_78 = param_2;
  local_70 = param_3;
  uVar5 = _CFUUIDGetConstantUUIDWithBytes
                    (0,0x7d,0x66,0x67,0x8e,8,0xa2,0x11,0xd5,0xa1,0xb8,0,0x30,0x65,0x7d,5,0x2a);
  uVar6 = _CFUUIDGetConstantUUIDWithBytes
                    (0,0xc2,0x44,0xe8,0x58,0x10,0x9c,0x11,0xd4,0x91,0xd4,0,0x50,0xe4,0xc6,0x42,0x6f)
  ;
  iVar4 = _IOCreatePlugInInterfaceForService(param_1,uVar5,uVar6,&local_68,local_7c);
  plVar2 = local_68;
  if (iVar4 == -0x80) goto LAB_10063464d;
  if (iVar4 != 0) {
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x400;
      local_4a = (char *)CONCAT44(local_4a._4_4_,iVar4);
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_58,0x12);
    }
    goto LAB_10063464d;
  }
  pcVar1 = *(code **)(*local_68 + 8);
  uVar5 = _CFUUIDGetConstantUUIDWithBytes
                    (0,0x1b,0xbc,0x41,0x32,8,0xa5,0x11,0xd5,0x90,0xed,0,0x30,0x65,0x7d,5,0x2a);
  auVar7 = _CFUUIDGetUUIDBytes(uVar5);
  iVar4 = (*pcVar1)(plVar2,auVar7._0_8_,auVar7._8_8_,&local_60);
  if (iVar4 == 0) {
    iVar4 = (**(code **)(*local_60 + 0x40))();
    if (iVar4 != 0) {
      uVar5 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar5,0x10);
      if (cVar3 != '\0') {
        local_4a = "err == 0";
        goto LAB_1006346b9;
      }
      goto LAB_10063463b;
    }
    iVar4 = (*local_78)(local_60,local_70);
    (**(code **)(*local_60 + 0x48))();
    (**(code **)(*local_60 + 0x18))();
  }
  else {
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      local_4a = "hresult == ((HRESULT)0x00000000L)";
LAB_1006346b9:
      local_4c = 0x822;
      local_54 = "Assertion failure";
      local_58 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_58,0x16);
    }
LAB_10063463b:
    FUN_1001782e9(0,0);
  }
  _IODestroyPlugInInterface(local_68);
LAB_10063464d:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

