// name: FUN_10022117b
// address: 10022117b

undefined8 FUN_10022117b(undefined8 param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_50 = 0;
  iVar2 = FUN_1001f7388(param_1,1,&local_58);
  if (iVar2 != -0x80) {
    if (iVar2 == 0) {
      uVar4 = 0;
      iVar2 = FUN_1001fbd49(local_58,param_2,0,&local_50);
      if (iVar2 == 0) {
        if (param_3 != 0) {
          lVar3 = FUN_100166b7f(local_50,param_3);
          if (lVar3 == 0) {
            uVar4 = FUN_1001cc310(0);
            cVar1 = _os_log_type_enabled(uVar4,0x10);
            if (cVar1 != '\0') {
              local_48 = 0x8220202;
              local_44 = "Assertion failure";
              local_3c = 0x822;
              local_3a = "firmwarePayloadDictionary != nullptr";
              __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
            }
            uVar4 = 0;
            FUN_1001782e9(0,0);
            goto LAB_100221213;
          }
        }
        uVar4 = FUN_1001705fc();
      }
      goto LAB_100221213;
    }
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x400;
      local_3a = (char *)CONCAT44(local_3a._4_4_,iVar2);
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_48,0x12);
    }
  }
  uVar4 = 0;
LAB_100221213:
  FUN_10017060f(local_50);
  FUN_1001f7652(local_58);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

