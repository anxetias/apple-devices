// name: FUN_1003f9677
// address: 1003f9677

int FUN_1003f9677(long param_1,uint *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 local_68 [20];
  uint local_54;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1001c62d9(param_2,0x18);
  FUN_1001c62d9(local_68,0x20);
  iVar2 = (**(code **)(param_1 + 0x100020))
                    (*(undefined8 *)(param_1 + 0x100008),0x67756964,local_68,
                     *(undefined8 *)(param_1 + 0x100028));
  if (iVar2 != -0x80) {
    if (iVar2 == 0) {
      if (local_54 < 0x15) {
        *param_2 = local_54;
        FUN_1001c631b(local_68,param_2 + 1);
        iVar2 = 0;
      }
      else {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          local_48 = 0x8220202;
          local_44 = "Assertion failure";
          local_3c = 0x822;
          local_3a = 
          "handlerParams.u.getDeviceGUID.guidLength <= sizeof(handlerParams.u.getDeviceGUID.guid)";
          __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
        }
        FUN_1001782e9(0,0);
        iVar2 = -0x32;
      }
    }
    else {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure";
        local_3c = 0x400;
        local_3a = (char *)CONCAT44(local_3a._4_4_,iVar2);
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_48,0x12);
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

