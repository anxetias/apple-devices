// name: FUN_1005349a4
// address: 1005349a4

int FUN_1005349a4(undefined8 param_1,undefined8 param_2,char param_3,void *param_4,
                 undefined1 *param_5)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  char local_4b0 [80];
  void *local_460;
  undefined4 local_458;
  char *local_454;
  undefined2 local_44c;
  char *local_44a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_4 == (void *)0x0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_458 = 0x8220202;
      local_454 = "Assertion failure";
      local_44c = 0x822;
      local_44a = "destSpec != nullptr";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_458,0x16);
    }
    FUN_1001782e9(0,0);
    iVar2 = -0x32;
    goto LAB_100534ab7;
  }
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = 0;
  }
  local_460 = param_4;
  iVar2 = FUN_10017ecc9(param_1,param_2,&local_458,local_4b0);
  if (iVar2 == 0) {
    if (local_4b0[0] == '\0') {
      iVar2 = -0x78;
      goto LAB_100534ab7;
    }
  }
  else {
    if (param_3 == '\0') goto LAB_100534ab7;
    iVar2 = FUN_100181064(param_1,param_2,&local_458);
    if ((iVar2 == 0) && (cVar1 = FUN_100534b32(&local_458), cVar1 != '\0')) {
      FUN_100189139(&local_458,0x70707);
    }
    if (param_5 != (undefined1 *)0x0) {
      *param_5 = iVar2 == 0;
    }
    if (iVar2 != 0) goto LAB_100534ab7;
  }
  _memcpy(local_460,&local_458,0x420);
  iVar2 = 0;
LAB_100534ab7:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar2;
}

